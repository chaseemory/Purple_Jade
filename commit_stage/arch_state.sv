`include "Purple_Jade_pkg.svh"

module arch_state
  ( input                                                  clk_i
  , input                                                  reset_i
  , input   CDB_t                                          cdb_i [NUM_FU-1:0]
  // rob register clear
  , input                                                  rob_phys_valid_i
  , input [$clog2(NUM_PHYS_REG)-1:0]                       rob_phys_reg_cl_i
  , input [$clog2(NUM_PHYS_REG)-1:0]                       rob_phys_reg_set_i
  , input                                                  rob_phys_mispredict_i
  // rob flag write interfaces
  , input                                                  rob_flag_valid_i /*verilator public*/
  , input [NUM_FLAGS*2-1:0]                                rob_flag_i 
  // rob  flag read
  , output [NUM_FLAGS-1:0]                                 flag_rob_o
  // issue read ports
  , input  [$clog2(NUM_PHYS_REG)-1:0]                      issue_read_rs1_i
  , output logic                                           rs1_valid_o
  , output logic [WORD_SIZE_P-1:0]                         rs1_data_o
  , input  [$clog2(NUM_PHYS_REG)-1:0]                      issue_read_rs2_i
  , output logic                                           rs2_valid_o
  , output logic [WORD_SIZE_P-1:0]                         rs2_data_o
  );

  // registers
  logic [NUM_PHYS_REG-1:0][WORD_SIZE_P-1:0] reg_n, reg_q   /*verilator public*/;
  logic [NUM_PHYS_REG-1:0]                  valid          /*verilator public*/;
  logic [NUM_PHYS_REG-1:0]                  valid_n        /*verilator public*/;
  logic [NUM_PHYS_REG-1:0]                  valid_arch, valid_arch_n;
  logic [NUM_FLAGS-1:0]                     flag           /*verilator public*/;
  logic [NUM_FLAGS-1:0]                     flag_n         /*verilator public*/;		                                       
  
  //flag variables
  logic [NUM_FLAGS-1:0]                     flags /*verilator public*/, flag_mask;
  logic [NUM_FLAGS-1:0]                     new_flag /*verilator public*/;

  assign flags = rob_flag_i[NUM_FLAGS-1:0];
  assign flag_mask = rob_flag_i[NUM_FLAGS*2-1:NUM_FLAGS];
  assign new_flag = (flag_mask & flags) | (~flag_mask & flag);
  assign flag_n = (rob_flag_valid_i) ? new_flag : flag;
  assign flag_rob_o = flag;
  
  always_comb begin : register_read_logic
    rs1_valid_o = valid[issue_read_rs1_i];
    rs1_data_o = reg_q[issue_read_rs1_i];
    rs2_valid_o = valid[issue_read_rs2_i];
    rs2_data_o = reg_q[issue_read_rs2_i];
  
    for (int unsigned i = 0; i < NUM_FU; i++) begin : forwarding_logic
      if (cdb_i[i].valid && cdb_i[i].dest == issue_read_rs1_i) begin
        rs1_valid_o = 1'b1;
        rs1_data_o = cdb_i[i].result;
      end  

      if (cdb_i[i].valid && cdb_i[i].dest == issue_read_rs2_i) begin
        rs2_valid_o = 1'b1;
        rs2_data_o = cdb_i[i].result;
      end
    end
  end
  
  always_comb begin : register_write
    reg_n = reg_q;
    valid_n = valid;
    valid_arch_n = valid_arch;

    for (int unsigned i = 0; i < NUM_FU; i++) begin
      if (cdb_i[i].valid) begin : write_on_valid
        reg_n[cdb_i[i].dest] = cdb_i[i].result;
        valid_n[cdb_i[i].dest] = 1'b1;  // set valid
      end
    end

  	// commit stage free a register
    if (rob_phys_valid_i) begin
      // replicating non-speculative valids
      valid_n[rob_phys_reg_cl_i] = 1'b0;  // set clear
      valid_arch_n[rob_phys_reg_cl_i] = 1'b0;
      valid_arch_n[rob_phys_reg_set_i] = 1'b1;
    end

    // roll back on misprediction
    if (rob_phys_mispredict_i) begin
      valid_n = valid_arch;
    end
  end
  
  always_ff @(posedge clk_i) begin : sequential_process
    if(reset_i) begin
      reg_q      <= '{default:0};
      valid      <= 128'hffff;
      valid_arch <= 128'hffff;
      flag       <= '0;
    end else begin
      reg_q      <= reg_n;
      valid      <= valid_n;
      valid_arch <= valid_arch_n;
      flag       <= flag_n;
    end
  end
endmodule  