`include "Purple_Jade_pkg.svh"

module fu_branch
  ( input                             clk_i
  , input                             reset_i
  , input                             exe_v_i
  , input  [WIDTH_OP-1:0]             opcode_i
  , input  [WORD_SIZE_P-1:0]          pc_i
  , input  [WORD_SIZE_P-1:0]          operand1_i
  , input  [WORD_SIZE_P-1:0]          operand2_i
  , input  [$clog2(ROB_ENTRY)-1:0]    rob_dest_i
  , input  [$clog2(NUM_PHYS_REG)-1:0] reg_dest_i
  , output [ROB_WB_WIDTH-1:0]         branch_rob_o
  , output [REG_WB_WIDTH-1:0]         branch_reg_o
  , output logic [CDB_WIDTH-1:0]      cdb_o
  );

  // output casting
  rob_wb_t                out, out_n;
  reg_wb_t                reg_wb;
  logic [WORD_SIZE_P-1:0] result;
  
  // output assignments
  assign branch_rob_o       = out;
  assign branch_reg_o       = reg_wb;
  assign out_n.rob_dest     = rob_dest_i;
  assign out_n.cdb.valid    = exe_v_i;
  assign out_n.cdb.dest     = reg_dest_i;
  assign out_n.cdb.flags    = '0;
  assign out_n.cdb.result   = result;
  assign reg_wb.w_v         = exe_v_i && (opcode_i == `BL_OP);
  assign reg_wb.cdb.valid   = exe_v_i && (opcode_i == `BL_OP);
  assign reg_wb.cdb.dest    = reg_dest_i;
  assign reg_wb.cdb.flags   = '0;
  assign reg_wb.cdb.result  = result;
  
  // target address computations
  always_comb begin

    result = operand2_i;

    if (opcode_i == `BCC_OP) begin
      result = $signed(pc_i) + $signed(operand2_i);
    end // if (opcode_i == `BCC_OP)

    if (opcode_i == `BL_OP) begin
      result = $signed(pc_i) + 1;
    end // if (opcode_i == `BL_OP)
    
  end
  
  // sequential process
  always_ff @(posedge clk_i) begin

    if (reset_i) begin
      out <= '0;
      cdb_o <= '0;
    end
    else begin
      out <= out_n;
      cdb_o <= reg_wb.cdb;
    end

  end // always_ff @(posedge clk_i)

endmodule // fu_branch