`include "Purple_Jade_pkg.svh"

module pc_next
  ( input   logic [WORD_SIZE_P-1:0] pc_i, pc_2_i, branch_target_i
  , input   logic reset_i, branch_take, stall
  , output  logic [WORD_SIZE_P-1:0] pc_next
  );

  always_comb begin
    casez({reset_i, stall, branch_take})
      3'b1??:   pc_next = '0;
      3'b01?:   pc_next = pc_i;
      3'b001:   pc_next = branch_target_i;
      default:  pc_next = pc_2_i;
    endcase
  end // always_comb

endmodule // pc_next