module static_branch_control
  ( input         sign_bit_i
  , input         is_branch_i
  , input [1:0]   branch_op_code_i
  , output logic  take_branch_o
  , output logic  speculative_o
  , output logic  br_link
  , output logic  br_ex
  );

  always_comb begin

    casez({is_branch_i, sign_bit_i, branch_op_code_i})

      4'b1100: begin : BCC_back
        take_branch_o = 1'b1;
        speculative_o = 1'b1;
        br_link       = 1'b0;
        br_ex         = 1'b0;
      end // BCC_back

      4'b1000: begin : BCC_forward
        take_branch_o = 1'b0;
        speculative_o = 1'b1;
        br_link       = 1'b0;
        br_ex         = 1'b0;
      end // BCC_forward

      4'b1?01: begin : Branch
        take_branch_o = 1'b1;
        speculative_o = 1'b0;
        br_link       = 1'b0;
        br_ex         = 1'b0;
      end // Branch

      4'b1?10 : begin : Branch_link    
        take_branch_o = 1'b1;
        speculative_o = 1'b1;
        br_link       = 1'b1;
        br_ex         = 1'b0;
      end // Branch_link

      4'b1?11 : begin : Branch_exchange   
        take_branch_o = 1'b1;
        speculative_o = 1'b1;
        br_link       = 1'b0;
        br_ex         = 1'b1;
      end // Branch_exchange  

      default : begin : not_a_branch
        take_branch_o = 1'b0;
        speculative_o = 1'b0;
        br_link       = 1'b0;
        br_ex         = 1'b0;
      end // not_a_branch
      
    endcase

  end // always_comb

endmodule // static_branch_control

  // Branch types
  // 000 - CC
  // 001 - B
  // 010 - BL
  // 011 - BX