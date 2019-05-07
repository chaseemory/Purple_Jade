
module decode
  #(  
  )
  ( input   logic [WORD_SIZE_P-1:0]               inst_i
  , output  logic [DECODED_INSTRUCTION_WIDTH-1:0] o  
  );

  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~Extension Hardware~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


  `define declare_decoded_instruction (NUM_REG, WORD_SIZE_P, INSTRUCTION_OP_NUM, NUM_FU, NUM_FLAGS, $clog2(BRANCH_CC_NUM));

  decoded_instruction next;

  logic [$clog2(NUM_DEST_SRC)-1:0]        dest_src_sel;
  logic [$clog2(NUM_S1_SRC)-1:0]          src_1_sel;
  logic [$clog2(NUM_S2_IMM_SRC)-1:0]      src_2_imm_sel;




  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~Decode Hardware~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

  microcode_rom #(.UCODE_WIDTH_P(UCODE_WIDTH_P)
                , .INPUT_WIDTH_P(10)
  ) decoder
  (.addr_i(inst_i)
  ,.o({next.w_v, next.opcode, next.func_unit, next.flags, dest_src_sel, src_1_sel, src_2_imm_sel})
  );

  bsg_mux #(.width_p($clog2(NUM_REG))
          , .els_p(NUM_DEST_SRC)
  ) dest_src_mux
  (.data_i({4'd14, 4'd13, {1'b0, inst_i[10:8]}, {1'b0, inst_i[2:0]}})
  ,.sel_i(dest_src_sel)
  ,.data_o(next.dest_id)
  );

  bsg_mux #(.width_p($clog2(NUM_REG))
          , .els_p(NUM_DEST_SRC)
  ) src_1_mux
  (.data_i({4'd14, 4'd13, {1'b0, inst_i[2:0]}, {1'b0, inst_i[5:3]}})
  ,.sel_i(src_1_sel)
  ,.data_o(next.source_1)
  );

  bsg_mux #(.width_p(WORD_SIZE_P)
          , .els_p(8)
  ) src_2_imm_mux
  (.data_i({reg_4z_lo,imm_6s_lo,imm_11s_lo,imm_8s_lo,imm_5z_lo,imm_7z_lo,imm_3z_lo,imm_8z_lo})
  ,.sel_i(src_2_imm_sel)
  ,.data_o(next.source2_imm)
  );

  next.bcc_op = inst_i[11:8];

  assign o = next;

endmodule // decode


  // logic [$clog2(NUM_REG)-1:0]             dest_id_n, source_1_n;
  // logic [WORD_SIZE_P-1:0]                 source2_imm_n;
  // logic [$clog2(INSTRUCTION_OP_NUM)-1:0]  opcode_n;
  // logic [$clog2(NUM_FU)-1:0]              func_unit_n;
  // logic [$clog2(NUM_FLAGS)-1:0]           flags_n;