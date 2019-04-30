module microcode_rom #(
    parameter UCODE_WIDTH_P  = -1
  , parameter INPUT WIDTH_P = -1
  )
  ( input   logic [INPUT WIDTH_P-1:0] addr_i
  , output  logic [UCODE_WIDTH_P-1:0] o
  );

  always_comb begin
    casex (addr_i)               //   WE      OP   FU    FLAGS  Dest  S1  Imm/S2
      INPUT WIDTH_P'b00100XXXXX: o = {1'b1,3'bXXX,3'd0,4'b0110,2'd1,2'd0,3'd0} // MOVS
      INPUT WIDTH_P'b010001100X: o = {1'b1,3'bXXX,3'd0,4'b0000,2'd0,2'd0,3'd7} // MOV
      INPUT WIDTH_P'b0001110XXX: o = {1'b1,3'b000,3'd1,4'b1111,2'd0,2'd0,3'd1} // ADDS IMM
      INPUT WIDTH_P'b0001100XXX: o = {1'b1,3'b000,3'd1,4'b1111,2'd0,2'd0,3'd1} // ADDS
      INPUT WIDTH_P'b101100000X: o = {1'b1,3'b000,3'd1,4'b0000,2'd2,2'd2,3'd2} // ADD SP
      INPUT WIDTH_P'b0001101XXX: o = {1'b1,3'b001,3'd1,4'b1111,2'd0,2'd0,3'd1} // SUBS
      INPUT WIDTH_P'b0001101XXX: o = {1'b1,3'b001,3'd1,4'b1111,2'd0,2'd0,3'd1} // SUBS IMM
      INPUT WIDTH_P'b0001101XXX: o = {1'b1,3'b001,3'd1,4'b0000,2'd2,2'd2,3'd2} // SUBS SP
      INPUT WIDTH_P'b0001101XXX: o = {1'b0,3'b001,3'd1,4'b1111,2'dX,2'd1,3'd7} // CMP
      INPUT WIDTH_P'b0100000000: o = {1'b1,3'b000,3'd2,4'b0110,2'd0,2'd0,3'dX} // ANDS
      INPUT WIDTH_P'b0100000001: o = {1'b1,3'b001,3'd2,4'b0110,2'd0,2'd0,3'dX} // EORS
      INPUT WIDTH_P'b0100001100: o = {1'b1,3'b010,3'd2,4'b0110,2'd0,2'd0,3'dX} // ORRS
      INPUT WIDTH_P'b0100001111: o = {1'b1,3'b011,3'd2,4'b0110,2'd0,2'd0,3'dX} // MVNS
      INPUT WIDTH_P'b0100000010: o = {1'b1,3'b100,3'd2,4'b1110,2'd0,2'd0,3'dX} // LSLS
      INPUT WIDTH_P'b0100000011: o = {1'b1,3'b101,3'd2,4'b1110,2'd0,2'd0,3'dX} // LSRS
      INPUT WIDTH_P'b0100000100: o = {1'b1,3'b110,3'd2,4'b1110,2'd0,2'd0,3'dX} // ASRS
      INPUT WIDTH_P'b0100000111: o = {1'b1,3'b111,3'd2,4'b1110,2'd0,2'd0,3'dX} // RORS
      INPUT WIDTH_P'b01100XXXXX: o = {1'b0,3'b000,3'd3,4'b0000,2'd0,2'd0,3'd3} // STR
      INPUT WIDTH_P'b01101XXXXX: o = {1'b1,3'b000,3'd3,4'b0000,2'd0,2'd0,3'd3} // LDR
      INPUT WIDTH_P'b1101XXXXXX: o = {1'b0,3'b000,3'd4,4'b0000,2'd0,2'dX,3'd4} // B <CC>
      INPUT WIDTH_P'b11100XXXXX: o = {1'b0,3'b001,3'd4,4'b0000,2'd0,2'dX,3'd5} // B 
      INPUT WIDTH_P'b11100XXXXX: o = {1'b1,3'b010,3'd4,4'b0000,2'd3,2'dX,3'd6} // BL
      INPUT WIDTH_P'b11100XXXXX: o = {1'b1,3'b011,3'd4,4'b0000,2'd3,2'dX,3'd7} // BX
      default:                   o = {1'b0,3'b000,3'd0,4'b0000,2'd0,2'd0,3'd0} // NOOP?
    endcase

  end // always_comb

endmodule // microcode_rom