`ifdef VERILATOR
`include "Purple_Jade_pkg.svh"
`endif

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
logic [NUM_FLAGS-1:0]   flag_logic, flag_shift, flags;
logic [WORD_SIZE_P-1:0] flag_shift_r, flag_shift_l;

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
logic carry_out;
flag flag_comp(.result_i(result), .flags_o(flag_logic));
assign flag_shift = {carry_out, flag_logic[2:0]};

// logic computations
assign and_res = operand1_i & operand2_i;
assign xor_res = operand1_i ^ operand2_i;
assign or_res  = operand1_i | operand2_i;
assign neg_res = ~operand1_i;

// shift computations
assign lsls_res = operand1_i << operand2_i;
assign lsrs_res = operand1_i >> operand2_i;
assign asrs_res = $signed(operand1_i) >>> operand2_i;
assign flag_shift_l = operand1_i << (operand2_i - 1);
assign flag_shift_r = operand1_i >> (operand2_i - 1);

// rotation
/* verilator lint_off UNUSED */
logic [WORD_SIZE_P*2-1:0]    rotate_temp;
assign rotate_temp = {operand1_i, operand1_i} >> operand2_i;
assign rors_res = rotate_temp[0+:WORD_SIZE_P];
/* verilator lint_on UNUSED */

// result assignment
always_comb
    unique case(opcode_i)
        `AND_OP  :
          begin
            result = and_res;
            flags = flag_logic;
            carry_out = '0;
          end
        `XOR_OP  :
          begin
            result = xor_res;
            flags = flag_logic;
            carry_out = '0;
         end
        `OR_OP   :
          begin
            result = or_res;
            flags = flag_logic;
            carry_out = '0;
          end
        `NEG_OP  : 
          begin
            result = neg_res;
            flags = flag_logic;
            carry_out = '0;
          end
        `LSLS_OP :
          begin
            result = lsls_res;
            flags = flag_shift;
            carry_out = flag_shift_l[WORD_SIZE_P-1];
          end
        `LSRS_OP :
          begin
            result = lsrs_res;
            flags = flag_shift;
            carry_out = flag_shift_r[0];
          end
        `ASRS_OP :
          begin
            result = asrs_res;
            flags = flag_shift;
            carry_out = flag_shift_r[0];
          end
        `RORS_OP :
          begin
            result = rors_res;
            flags = flag_shift;
            carry_out = rors_res[WORD_SIZE_P-1];
          end
        default  :
          begin 
            result = '0;
            flags = flag_shift;
            carry_out = '0;
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