module static_branch_control
  ( input       sign_bit_i
  , input       is_branch_i
  , input [1:0] branch_op_code_i
  , output      take_branch_o
  , output      speculative_o
  );

  always_comb begin
    casex({is_branch_i, sign_bit_i, branch_op_code_i})
      4'b1100: begin : BCC_back
        take_branch_o = 1'b1;
        speculative_o = 1'b1;
      end // BCC_back
      4'b1000: begin : BCC_forward
        take_branch_o = 1'b0;
        speculative_o = 1'b1;
      end // BCC_forward
      4'b1X01: begin : Branch
        take_branch_o = 1'b1;
        speculative_o = 1'b0;
      end // Branch
      4'b1X10 : begin : Branch_link    
        take_branch_o = 1'b1;
        speculative_o = 1'b0;
      end // Branch_link
      4'b1X11 : begin : Branch_exchange   // TODO: NEED RAS to do this right
        take_branch_o = 1'b0;             // OR ELSE WE HAVE NO ADDRESS TO JUMP TO
        speculative_o = 1'b1;             // THIS IS JUST THE REG ADDRESS SIGN EXTENDED??? LOL
      end // Branch_exchange  
      default : begin : not_a_branch
        take_branch_o = 1'b0;
        speculative_o = 1'b0;
      end // not_a_branch
    endcase


endmodule // static_branch_control

  // Branch types
  // 000 - CC
  // 001 - B
  // 010 - BL
  // 011 - BX