/*
 * prev_st_check.sv
 *
 * Given a vector of store buffer entry number (issue_sb_num_vector_i), this module will
 * ouput st_clear_vector_o. Each bit in st_clear_vector_o will indicate whether stores
 * prior to a store buffer entry number are all written back.
 *
 * CAUTIONS : Once a bit in st_clear_vector_o is high, be sure to latch it.
 * Value after the bit becomes high might be garbage.
 */

`include "Purple_Jade_pkg.svh";

module prev_st_check (
 // from scheduler
   input  [ISSUE_ENTRY-1:0][$clog2(SB_ENTRY)-1:0]       issue_sb_num_vector_i
 , input  [SB_ENTRY-1:0]                                sb_wb_vector_i
 , input  [$clog2(SB_ENTRY)-1:0]                        sb_commit_pt_i
 , output [ISSUE_ENTRY-1:0]                             st_clear_vector_o
);

logic [SB_ENTRY-1:0]                                trimed_wb_vector;
`ifdef DEBUG
logic [$clog2(SB_ENTRY)-1:0]                        trimed_issue_sb_num_vector [ISSUE_ENTRY-1:0];
`else 
logic [ISSUE_ENTRY-1:0][$clog2(SB_ENTRY)-1:0]       trimed_issue_sb_num_vector;
`endif
logic [ISSUE_ENTRY-1:0][SB_ENTRY-1:0]               wb_mask_vector;

// shifting logics
/* verilator lint_off UNUSED */
logic [SB_ENTRY*2-1:0]                              shift_temp;
assign shift_temp = {sb_wb_vector_i, sb_wb_vector_i} >> sb_commit_pt_i;
assign trimed_wb_vector = shift_temp[0+:SB_ENTRY];
/* verilator lint_on UNUSED */

generate
    genvar i;
    for (i = 0; i < ISSUE_ENTRY; i++)
      begin
        assign trimed_issue_sb_num_vector[i] = $unsigned(issue_sb_num_vector_i[i]) - $unsigned(sb_commit_pt_i);
        assign wb_mask_vector[i] = ((SB_ENTRY)'(-1) << (trimed_issue_sb_num_vector[i] + 1)) | trimed_wb_vector;
        assign st_clear_vector_o[i] = &wb_mask_vector[i];
      end
endgenerate
endmodule // prev_st_check