module pc_next
  ( input   logic [WORD_SIZE_P-1:0] pc_i, pc_2_i, branch_target_i
  , input   logic reset_i, branch_take, stall
  , output  logic [WORD_SIZE_P-1:0] pc_next
  );

  casex({reset_i, stall, branch_take})
    2'b1XX:   pc_next = WORD_SIZE_P'd0;
    2'b01X:   pc_next = pc_i;
    2'b001:   pc_next = branch_target_i;
    default:  pc_next = pc_2_i;
  endcase

endmodule // pc_next