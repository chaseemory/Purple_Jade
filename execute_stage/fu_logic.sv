`include "Purple_Jade_pkg.svh"

module fu_logic
(input                                      clk_i
 , input                                    reset_i
 , input                                    exe_v_i
 , input  [WIDTH_OP-1:0]                    opcode_i
 , input  [WORD_SIZE_P-1:0]                 operand1_i
 , input  [WORD_SIZE_P-1:0]                 operand2_i
 , input  [$clog2(ROB_ENTRY)-1:0]           rob_dest_i
 , input  [$clog2(NUM_PHYS_REG)-1:0]        reg_dest_i
 , output [ROB_WB_WIDTH-1:0]                logic_rob_o
 , output [REG_WB_WIDTH-1:0]                logic_reg_o
);

// output casting
rob_wb_t                out, out_n;
reg_wb_t                reg_wb;
logic [WORD_SIZE_P-1:0] result;
logic [WORD_SIZE_P-1:0] and_res, xor_res, or_res, neg_res;
logic [WORD_SIZE_P-1:0] lsls_res, lsrs_res, asrs_res, rors_res;
logic [NUM_FLAGS-1:0]   flags;

// output assignments
assign logic_rob_o = out;
assign logic_reg_o = reg_wb;
assign out_n.rob_dest = rob_dest_i;
assign out_n.cdb.valid = exe_v_i;
assign out_n.cdb.dest = reg_dest_i;
assign out_n.cdb.flags = flags;
assign out_n.cdb.result = result;
assign reg_wb.cdb = out_n.cdb;
assign reg_wb.w_v = exe_v_i; 

// flag computation
flag flag_comp(.result_i(result), .flags_o(flags));

// logic computations
assign and_res = operand1_i & operand2_i;
assign xor_res = operand1_i ^ operand2_i;
assign or_res  = operand1_i | operand2_i;
assign neg_res = ~operand1_i;

// shift computations
assign lsls_res = operand1_i << operand2_i;
assign lsrs_res = operand1_i >> operand2_i;
assign asrs_res = operand1_i >>> operand2_i;

// rotation
/* verilator lint_off UNUSED */
logic [WORD_SIZE_P*2-1:0]    rotate_temp;
assign rotate_temp = {operand1_i, operand1_i} >> operand2_i;
assign rors_res = rotate_temp[0+:WORD_SIZE_P];
/* verilator lint_on UNUSED */

// result assignment
always_comb
    unique case(opcode_i)
        `AND_OP  : result = and_res;
        `XOR_OP  : result = xor_res;
        `OR_OP   : result = or_res;
        `NEG_OP  : result = neg_res;
        `LSLS_OP : result = lsls_res;
        `LSRS_OP : result = lsrs_res;
        `ASRS_OP : result = asrs_res;
        `RORS_OP : result = rors_res;
        default  :
          begin 
            result = '0;
            $display("logic fu opcode error");
          end
    endcase

// sequential process
always_ff @(posedge clk_i)
    if (reset_i)
        out <= '0;
    else
        out <= out_n;
endmodule // fu_logic