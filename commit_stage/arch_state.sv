`ifdef VERILATOR
`include "Purple_Jade_pkg.svh"
`endif

module arch_state
(input                                                  clk_i
 , input                                                reset_i
 // execute register write back
 , input [NUM_FU-1:0]                                   exe_w_v_i
 , input [NUM_FU-1:0][$clog2(NUM_PHYS_REG)-1:0]         exe_addr_i
 , input [NUM_FU-1:0][WORD_SIZE_P-1:0]                  exe_data_i
 // rob register clear
 , input                                                rob_phys_valid_i
 , input [$clog2(NUM_PHYS_REG)-1:0]                     rob_phys_reg_cl_i
 , input [$clog2(NUM_PHYS_REG)-1:0]                     rob_phys_reg_set_i
 , input                                                rob_phys_mispredict_i
 // rob flag write interfaces
 , input                                                rob_flag_valid_i /*verilator public*/
 , input [NUM_FLAGS*2-1:0]                              rob_flag_i 
 // rob  flag read
 , output [NUM_FLAGS-1:0]                               flag_rob_o
 // issue read ports
 , input  [$clog2(NUM_PHYS_REG)-1:0]                    issue_read_rs1_i
 , output logic                                         rs1_valid_o
 , output logic [WORD_SIZE_P-1:0]                       rs1_data_o
 , input  [$clog2(NUM_PHYS_REG)-1:0]                    issue_read_rs2_i
 , output logic                                         rs2_valid_o
 , output logic [WORD_SIZE_P-1:0]                       rs2_data_o
);

// registers
logic [NUM_PHYS_REG-1:0][WORD_SIZE_P-1:0] reg_n, reg_q   /*verilator public*/;
logic [NUM_PHYS_REG-1:0]                  valid          /*verilator public*/;
logic [NUM_PHYS_REG-1:0]                  valid_n        /*verilator public*/;
logic [NUM_PHYS_REG-1:0]                  valid_arch, valid_arch_n;
logic [NUM_FLAGS-1:0]                     flag, flag_n   /*verilator public*/;		                                       

//flag variables
logic [NUM_FLAGS-1:0]                     flags /*verilator public*/, flag_mask;
assign flags = rob_flag_i[NUM_FLAGS-1:0];
assign flag_mask = rob_flag_i[NUM_FLAGS*2-1:NUM_FLAGS];
assign flag_n = (rob_flag_valid_i) ? (flag_mask & flags) | (~flag_mask & flag): flag;
assign flag_rob_o = flag;

// register read logic
always_comb
  begin
    rs1_valid_o = valid[issue_read_rs1_i];
    rs1_data_o = reg_q[issue_read_rs1_i];
    rs2_valid_o = valid[issue_read_rs2_i];
    rs2_data_o = reg_q[issue_read_rs2_i];

    // regfile forwarding units
    for (int unsigned i = 0; i < NUM_FU; i++)
      begin
        if (exe_w_v_i[i] && exe_addr_i[i] == issue_read_rs1_i)
          begin
            rs1_valid_o = 1'b1;
            rs1_data_o = exe_data_i[i];
          end  

        if (exe_w_v_i[i] && exe_addr_i[i] == issue_read_rs2_i)
          begin
            rs2_valid_o = 1'b1;
            rs2_data_o = exe_data_i[i];
          end
      end
  end

// register write logic
always_comb
  begin
    reg_n = reg_q;
    valid_n = valid;
    flag_n = flag;
    valid_arch_n = valid_arch;

    // during execution write data
    // and valid bit
    for (int unsigned i = 0; i < NUM_FU; i++)
      begin
        if (exe_w_v_i[i])
          begin
            reg_n[exe_addr_i[i]] = exe_data_i[i];
            valid_n[exe_addr_i[i]] = 1'b1;  // set valid
          end
      end
  	// commit stage free a register
    if (rob_phys_valid_i)
      begin
        // replicating non-speculative valids
        valid_n[rob_phys_reg_cl_i] = 1'b0;  // set clear
        valid_arch_n[rob_phys_reg_cl_i] = 1'b0;
        valid_arch_n[rob_phys_reg_set_i] = 1'b1;
      end

    // roll back on misprediction
    if (rob_phys_mispredict_i)
        valid_n = valid_arch;
  end

// sequential process
always_ff @(posedge clk_i) 
  begin
    if(reset_i)
      begin
        reg_q      <= '{default:0};
        valid      <= 128'h0000_0000_0000_0000_0000_0000_0000_ffff;
        valid_arch <= 128'h0000_0000_0000_0000_0000_0000_0000_ffff;
        flag       <= '0;
      end
    else 
      begin
        reg_q      <= reg_n;
        valid      <= valid_n;
        valid_arch <= valid_arch_n;
        flag       <= flag_n;
      end
  end
endmodule