module microcode_rom #(
    parameter UCODE_WIDTH_P  = -1
  , parameter INPUT_WIDTH_P = -1
  )
  ( input   logic [INPUT_WIDTH_P-1:0] addr_i
  , output  logic [UCODE_WIDTH_P-1:0] o
  );

  always_comb begin
    casex (addr_i)               //     WE     OP      FU               FLAGS        Dest_SRC       S1_SRC   Imm/S2_SRC
      INPUT_WIDTH_P'b00100XXXXX: o = {1'b1,'X       ,`MOVE_FU   ,NUM_FLAGS'b0110,WIDTH_DEST'd1,WIDTH_S1'd0,WIDTH_IMM'd0} // MOVS
      INPUT_WIDTH_P'b010001100X: o = {1'b1,'X       ,`MOVE_FU   ,NUM_FLAGS'b0000,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'd7} // MOV

      INPUT_WIDTH_P'b0001110XXX: o = {1'b1,`ADD_OP  ,`ALU_FU    ,NUM_FLAGS'b1111,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'd1} // ADDS IMM
      INPUT_WIDTH_P'b0001100XXX: o = {1'b1,`ADD_OP  ,`ALU_FU    ,NUM_FLAGS'b1111,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'd1} // ADDS
      INPUT_WIDTH_P'b101100000X: o = {1'b1,`ADD_OP  ,`ALU_FU    ,NUM_FLAGS'b0000,WIDTH_DEST'd2,WIDTH_S1'd2,WIDTH_IMM'd2} // ADD SP
      INPUT_WIDTH_P'b0001101XXX: o = {1'b1,`SUB_OP  ,`ALU_FU    ,NUM_FLAGS'b1111,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'd1} // SUBS
      INPUT_WIDTH_P'b0001101XXX: o = {1'b1,`SUB_OP  ,`ALU_FU    ,NUM_FLAGS'b1111,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'd1} // SUBS IMM
      INPUT_WIDTH_P'b0001101XXX: o = {1'b1,`SUB_OP  ,`ALU_FU    ,NUM_FLAGS'b0000,WIDTH_DEST'd2,WIDTH_S1'd2,WIDTH_IMM'd2} // SUBS SP

      INPUT_WIDTH_P'b0001101XXX: o = {1'b0,`SUB_OP  ,`ALU_FU    ,NUM_FLAGS'b1111,WIDTH_DEST'dX,WIDTH_S1'd1,WIDTH_IMM'd7} // CMP

      INPUT_WIDTH_P'b0100000101: o = {1'b1,'X       ,`MUL_FU    ,NUM_FLAGS'b0000,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'dX} // MUL
      INPUT_WIDTH_P'b0100000110: o = {1'b1,'X       ,`DIV_FU    ,NUM_FLAGS'b0000,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'dX} // DIV


      INPUT_WIDTH_P'b0100000000: o = {1'b1,`AND_OP  ,`LOGICAL_FU,NUM_FLAGS'b0110,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'dX} // ANDS
      INPUT_WIDTH_P'b0100000001: o = {1'b1,`XOR_OP  ,`LOGICAL_FU,NUM_FLAGS'b0110,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'dX} // EORS
      INPUT_WIDTH_P'b0100001100: o = {1'b1,`OR_OP   ,`LOGICAL_FU,NUM_FLAGS'b0110,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'dX} // ORRS
      INPUT_WIDTH_P'b0100001111: o = {1'b1,`NEG_OP  ,`LOGICAL_FU,NUM_FLAGS'b0110,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'dX} // MVNS
      INPUT_WIDTH_P'b0100000010: o = {1'b1,`LSLS_OP ,`LOGICAL_FU,NUM_FLAGS'b1110,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'dX} // LSLS
      INPUT_WIDTH_P'b0100000011: o = {1'b1,`LSRS_OP ,`LOGICAL_FU,NUM_FLAGS'b1110,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'dX} // LSRS
      INPUT_WIDTH_P'b0100000100: o = {1'b1,`ASRS_OP ,`LOGICAL_FU,NUM_FLAGS'b1110,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'dX} // ASRS
      INPUT_WIDTH_P'b0100000111: o = {1'b1,`RORS_OP ,`LOGICAL_FU,NUM_FLAGS'b1110,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'dX} // RORS

      INPUT_WIDTH_P'b01100XXXXX: o = {1'b0,`STR_OP  ,`LOGICAL_FU,NUM_FLAGS'b0000,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'd3} // STR
      INPUT_WIDTH_P'b01101XXXXX: o = {1'b1,`LDR_OP  ,`LOGICAL_FU,NUM_FLAGS'b0000,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'd3} // LDR

      INPUT_WIDTH_P'b1101XXXXXX: o = {1'b0,`BCC_OP  ,`BRANCH_FU ,NUM_FLAGS'b0000,WIDTH_DEST'd0,WIDTH_S1'dX,WIDTH_IMM'd4} // B <CC>
      INPUT_WIDTH_P'b11100XXXXX: o = {1'b0,`B_OP    ,`BRANCH_FU ,NUM_FLAGS'b0000,WIDTH_DEST'd0,WIDTH_S1'dX,WIDTH_IMM'd5} // B 
      INPUT_WIDTH_P'b11100XXXXX: o = {1'b1,`BL_OP   ,`BRANCH_FU ,NUM_FLAGS'b0000,WIDTH_DEST'd3,WIDTH_S1'dX,WIDTH_IMM'd6} // BL
      INPUT_WIDTH_P'b11100XXXXX: o = {1'b0,`BX_OP   ,`BRANCH_FU ,NUM_FLAGS'b0000,WIDTH_DEST'd3,WIDTH_S1'dX,WIDTH_IMM'd7} // BX

      default:                   o = {1'b0,WIDTH_OP'd0,WIDTH_FU'd0,NUM_FLAGS'b0000,WIDTH_DEST'd0,WIDTH_S1'd0,WIDTH_IMM'd0} // NOOP?
    endcase

  end // always_comb

endmodule // microcode_rom