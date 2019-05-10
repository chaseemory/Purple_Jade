`include "../common/Purple_Jade_pkg.svh";

module arch_state
(input                                      clk_i
 , input                                    reset_i
 // execute register write back
 , input                                    exe_w_v_i
 , input [$clog2(NUM_PHYS_REG)-1:0]         exe_addr_i
 , input [WORD_SIZE_P-1:0]                  exe_data_i
 // rob register clear
 , input                                    rob_phys_valid_i
 , input [$clog2(NUM_PHYS_REG)-1:0]         rob_phys_reg_cl_i
 // rob flag write interfaces
 , input                                    rob_flag_valid_i
 , input [NUM_FLAGS*2-1:0]                  rob_flag_i 
 // rob  flag read
 , output [NUM_FLAGS-1:0]                   flag_rob_o
 // issue read ports
 , input  [$clog2(NUM_PHYS_REG)-1:0]        issue_read_rs1_i
 , output                                   rs1_valid_o
 , output [WORD_SIZE_P-1:0]                 rs1_data_o
 , input  [$clog2(NUM_PHYS_REG)-1:0]        issue_read_rs2_i
 , output                                   rs2_valid_o
 , output [WORD_SIZE_P-1:0]                 rs2_data_o
);

// registers
logic [NUM_PHYS_REG-1:0][WORD_SIZE_P-1:0]  reg_n reg_q;
logic [NUM_PHYS_REG-1:0]				           valid, valid_n;
logic [NUM_FLAGS-1:0]					             flag, flag_n;		  

//flag variables
logic [NUM_FLAGS-1:0]					             flags, flag_mask;
assign flags = rob_flag_i[NUM_FLAGS-1:0];
assign flag_mask = rob_flag_i[NUM_FLAGS*2-1:NUM_FLAGS];
assign flag_n = (rob_flag_valid_i) ? (flag_mask & flag) | (~flag_mask & flags): flag;
assign flag_rob_o = flag;

// register read assignments
// asynchronous reads for now
assign rs1_valid_o = valid[issue_read_rs1_i];
assign rs1_data_o  = reg_q[issue_read_rs1_i];
assign rs2_valid_o = valid[issue_read_rs2_i];
assign rs2_data_o  = reg_q[issue_read_rs2_i];

always_comb
  begin
  	reg_n = reg_q;
  	valid_n = valid;
  	flag_n = flag;

  	// during execution write data
  	// and valid bit
  	if (exe_w_v_i)
  	  begin
  		reg_n[exe_addr_i] = exe_data_i;
  		valid_n[exe_addr_i] = 1'b1;  // set valid
  	  end

  	// commit stage free a register
  	if (rob_phys_valid_i)
  		valid_n[rob_phys_reg_cl_i] = 1'b0;  // set clear
  end

// sequential process
always_ff @(posedge clk_i) 
  begin
	if(reset_i)
	  begin
		reg_q <= '{default:0};
		valid <= 128'h0000_0000_0000_0000_0000_0000_0000_ffff;
		flag  <= '0;
	  end
	else 
	  begin
		reg_q <= reg_n;
		valid <= valid_n;
		flag  <= flag_n;
	  end
  end

endmodule