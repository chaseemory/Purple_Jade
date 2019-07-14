`include "Purple_Jade_pkg.svh"

module fu_alu
 ( input                              clk_i
 , input                              reset_i
 , input                              exe_v_i
 , input									            w_v_i
 , input  [WIDTH_OP-1:0]              opcode_i
 , input  [WORD_SIZE_P-1:0]           operand1_i
 , input  [WORD_SIZE_P-1:0]           operand2_i
 , input  [$clog2(ROB_ENTRY)-1:0]     rob_dest_i
 , input  [$clog2(NUM_PHYS_REG)-1:0]  reg_dest_i
 , output [ROB_WB_WIDTH-1:0]          alu_rob_o
 , output [REG_WB_WIDTH-1:0]          alu_reg_o
 , output logic [CDB_WIDTH-1:0]       cdb_o
 );  

  // output casting
  rob_wb_t                out, out_n;
  reg_wb_t                reg_wb;
  CDB_t                   cdb_r, cdb_n;
  logic [WORD_SIZE_P-1:0] add_sum, sub_sum, result;
  logic [NUM_FLAGS-1:0]   flags;
  
  // output assignments
  assign alu_rob_o        = out;
  assign alu_reg_o        = reg_wb;
  assign cdb_o            = cdb_r;
  assign out_n.rob_dest   = rob_dest_i;
  assign out_n.cdb.valid  = exe_v_i;
  assign out_n.cdb.dest   = reg_dest_i;
  assign out_n.cdb.flags  = flags;
  assign out_n.cdb.result = result;
  assign reg_wb.cdb       = out_n.cdb;
  assign reg_wb.w_v       = exe_v_i & w_v_i; 
  assign cdb_n.dest       = reg_dest_i;
  assign cdb_n.flags      = flags;
  assign cdb_n.result     = result;
  assign cdb_n.valid      = exe_v_i & w_v_i;
  
  // result / flag computations
  assign result   = (opcode_i == `ADD_OP) ? add_sum : sub_sum;
  assign add_sum  = $unsigned(operand1_i) + $unsigned(operand2_i);
  assign sub_sum  = $unsigned(operand1_i) - $unsigned(operand2_i);

  flag flag_comp(.result_i(result), .flags_o(flags));
  
  // sequential process
  always_ff @(posedge clk_i) begin

    if (reset_i) begin
      out <= '0;
      cdb_r <= '0;
    end
    else begin
      out <= out_n;
      cdb_r <= cdb_n;
    end
    
  end // always_ff @(posedge clk_i)

endmodule // fu_alu