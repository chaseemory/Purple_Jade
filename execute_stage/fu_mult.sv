`include "Purple_Jade_pkg.svh"

module fu_mult
(input                                      clk_i
 , input                                    reset_i
 , input                                    exe_v_i
 , input  [WORD_SIZE_P-1:0]                 operand1_i
 , input  [WORD_SIZE_P-1:0]                 operand2_i
 , input  [$clog2(ROB_ENTRY)-1:0]           rob_dest_i
 , input  [$clog2(NUM_PHYS_REG)-1:0]        reg_dest_i
 , output [ROB_WB_WIDTH-1:0]                mult_rob_o
 , output [REG_WB_WIDTH-1:0]                mult_reg_o
 , input                                    mispredict_i
);

// output casting
rob_wb_t                              out, out_n;
reg_wb_t                              reg_wb;

// pipeline registers
logic [1:0][$clog2(ROB_ENTRY)-1:0]    rob_dest_r, rob_dest_n;
logic [1:0]                           exe_v_r, exe_v_n;
logic [1:0][$clog2(NUM_PHYS_REG)-1:0] reg_dest_r, reg_dest_n;
logic [1:0][WORD_SIZE_P-1:0]          result_r, result_n;

// output assignments
assign mult_rob_o = out;
assign mult_reg_o = reg_wb;
assign out_n.rob_dest = rob_dest_r[1];
assign out_n.cdb.valid = exe_v_r[1];
assign out_n.cdb.dest = reg_dest_r[1];
assign out_n.cdb.flags = '0;
assign out_n.cdb.result = result_r[1];
assign reg_wb.cdb = out_n.cdb;
assign reg_wb.w_v = exe_v_r[1]; 

// register shifting
assign exe_v_n = (mispredict_i) ? '0 : {exe_v_r[1], exe_v_i};
assign rob_dest_n = {rob_dest_r[1], rob_dest_i};
assign reg_dest_n = {reg_dest_r[1], reg_dest_i};
assign result_n = {result_r[1], operand1_i * operand2_i};

// sequential process
always_ff @(posedge clk_i)
  begin
    if (reset_i)
      begin
        rob_dest_r <= '0;
        exe_v_r <= '0;
        reg_dest_r <= '0;
        result_r <= '0;
      end
    else
      begin
        rob_dest_r <= rob_dest_n;
        exe_v_r <= exe_v_n;
        reg_dest_r <= reg_dest_n;
        result_r <= result_n;    
      end
  end

endmodule // fu_mult