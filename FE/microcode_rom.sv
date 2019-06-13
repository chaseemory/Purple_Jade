`include "Purple_Jade_pkg.svh"
`include "FE_def.svh"

module microcode_rom #(
    parameter INPUT_WIDTH_P = -1
  )
  ( input   logic [INPUT_WIDTH_P-1:0] addr_i
  , output  logic [UCODE_WIDTH_P-1:0] o
  );

  always_comb begin
    casez (addr_i)    //    WE     OP         FU           FLAGS  Dest_SRC   S1_SRC  Imm/S2_SRC  Immediate
      10'b00100?????: o = {1'b1,`ADD_OP    ,`ALU_FU      ,4'b0110  ,2'd1     ,2'd3   ,4'd0       ,1'b1}; // MOVS
      10'b010001100?: o = {1'b1,`ADD_OP    ,`ALU_FU      ,4'b0000  ,2'd0     ,2'd3   ,4'd7       ,1'b0}; // MOV

      10'b0001110???: o = {1'b1,`ADD_OP    ,`ALU_FU      ,4'b1111  ,2'd0     ,2'd0   ,4'd1       ,1'b1}; // ADDS IMM
      10'b0001100???: o = {1'b1,`ADD_OP    ,`ALU_FU      ,4'b1111  ,2'd0     ,2'd0   ,4'd1       ,1'b0}; // ADDS
      10'b101100000?: o = {1'b1,`ADD_OP    ,`ALU_FU      ,4'b0000  ,2'd2     ,2'd2   ,4'd2       ,1'b1}; // ADD SP
      10'b0001101???: o = {1'b1,`SUB_OP    ,`ALU_FU      ,4'b1111  ,2'd0     ,2'd0   ,4'd1       ,1'b0}; // SUBS
      10'b0001111???: o = {1'b1,`SUB_OP    ,`ALU_FU      ,4'b1111  ,2'd0     ,2'd0   ,4'd1       ,1'b1}; // SUBS IMM
      10'b101100001?: o = {1'b1,`SUB_OP    ,`ALU_FU      ,4'b0000  ,2'd2     ,2'd2   ,4'd2       ,1'b1}; // SUBS SP

      10'b0100001010: o = {1'b0,`SUB_OP    ,`ALU_FU      ,4'b1111  ,2'd0     ,2'd1   ,4'd8       ,1'b0}; // CMP

      10'b0100000101: o = {1'b1,3'b000     ,`MUL_FU      ,4'b0000  ,2'd0     ,2'd1   ,4'd8       ,1'b0}; // MUL
      10'b0100000110: o = {1'b1,3'b000     ,`DIV_FU      ,4'b0000  ,2'd0     ,2'd1   ,4'd8       ,1'b0}; // DIV


      10'b0100000000: o = {1'b1,`AND_OP    ,`LOGICAL_FU  ,4'b0110  ,2'd0     ,2'd1   ,4'd8       ,1'b0}; // ANDS
      10'b0100000001: o = {1'b1,`XOR_OP    ,`LOGICAL_FU  ,4'b0110  ,2'd0     ,2'd1   ,4'd8       ,1'b0}; // EORS
      10'b0100001100: o = {1'b1,`OR_OP     ,`LOGICAL_FU  ,4'b0110  ,2'd0     ,2'd1   ,4'd8       ,1'b0}; // ORRS
      10'b0100001111: o = {1'b1,`NEG_OP    ,`LOGICAL_FU  ,4'b0110  ,2'd0     ,2'd1   ,4'd8       ,1'b0}; // MVNS
      10'b0100000010: o = {1'b1,`LSLS_OP   ,`LOGICAL_FU  ,4'b1110  ,2'd0     ,2'd1   ,4'd8       ,1'b0}; // LSLS
      10'b0100000011: o = {1'b1,`LSRS_OP   ,`LOGICAL_FU  ,4'b1110  ,2'd0     ,2'd1   ,4'd8       ,1'b0}; // LSRS
      10'b0100000100: o = {1'b1,`ASRS_OP   ,`LOGICAL_FU  ,4'b1110  ,2'd0     ,2'd1   ,4'd8       ,1'b0}; // ASRS
      10'b0100000111: o = {1'b1,`RORS_OP   ,`LOGICAL_FU  ,4'b1110  ,2'd0     ,2'd1   ,4'd8       ,1'b0}; // RORS

      10'b01100?????: o = {1'b0,`STR_OP    ,`MEM_FU      ,4'b0000  ,2'd0     ,2'd0   ,4'd9       ,1'b0}; // STR
      10'b01101?????: o = {1'b1,`LDR_OP    ,`MEM_FU      ,4'b0000  ,2'd0     ,2'd0   ,4'd3       ,1'b1}; // LDR

      10'b1101??????: o = {1'b0,`BCC_OP    ,`BRANCH_FU   ,4'b0000  ,2'd0     ,2'bxx  ,4'd4       ,1'b1}; // B <CC>
      10'b11100?????: o = {1'b0,`B_OP      ,`BRANCH_FU   ,4'b0000  ,2'd0     ,2'bxx  ,4'd5       ,1'b1}; // B 
      10'b0100010100: o = {1'b1,`BL_OP     ,`BRANCH_FU   ,4'b0000  ,2'd3     ,2'bxx  ,4'd6       ,1'b1}; // BL
      10'b010001110?: o = {1'b0,`BX_OP     ,`BRANCH_FU   ,4'b0000  ,2'd0     ,2'bxx  ,4'd7       ,1'b0}; // Bx

      default:        o = {1'b0,3'd0       ,`NOOP_FU     ,4'b0000  ,2'd0     ,2'd0   ,4'd0       ,1'b0}; // NOOP / INVALID instruction
    endcase

  end // always_comb

endmodule // microcode_rom

