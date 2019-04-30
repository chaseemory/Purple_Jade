
module decode
  #(parameter WORD_SIZE_P               = -1
  , parameter DECODED_INSTRUCTION_WIDTH = -1  
  )
  ( input   logic [WORD_SIZE_P-1:0]               inst_i
  , output  logic [DECODED_INSTRUCTION_WIDTH-1:0] o  
  );

  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~Extension Hardware~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  logic [WORD_SIZE_P-1:0] imm_8z_lo;
  zero_extend #(.WORD_SIZE_P(WORD_SIZE_P)
              , .INPUT_SIZE(8)
  ) imm_8z
  ( .i(inst_i[7:0])
  , .o(imm_8z_lo)
  );

  logic [WORD_SIZE_P-1:0] imm_3z_lo;
  zero_extend #(.WORD_SIZE_P(WORD_SIZE_P)
              , .INPUT_SIZE(3)
  ) imm_3z
  ( .i(inst_i[8:6])
  , .o(imm_3z_lo)
  );

  logic [WORD_SIZE_P-1:0] imm_7z_lo;
  zero_extend #(.WORD_SIZE_P(WORD_SIZE_P)
              , .INPUT_SIZE(7)
  ) imm_7z
  ( .i(inst_i[8:6])
  , .o(imm_7z_lo)
  );

  logic [WORD_SIZE_P-1:0] imm_5z_lo;
  zero_extend #(.WORD_SIZE_P(WORD_SIZE_P)
              , .INPUT_SIZE(5)
  ) imm_5z
  ( .i(inst_i[10:6])
  , .o(imm_5z_lo)
  );

  logic [WORD_SIZE_P-1:0] imm_8s_lo;
  sign_extend #(.WORD_SIZE_P(WORD_SIZE_P)
              , .INPUT_SIZE(8)
  ) imm_8s
  ( .i(inst_i[7:0])
  , .o(imm_8s_lo)
  );

  logic [WORD_SIZE_P-1:0] imm_11s_lo;
  sign_extend #(.WORD_SIZE_P(WORD_SIZE_P)
              , .INPUT_SIZE(11)
  ) imm_11s
  ( .i(inst_i[10:0])
  , .o(imm_11s_lo)
  );

  logic [WORD_SIZE_P-1:0] imm_6s_lo;
  sign_extend #(.WORD_SIZE_P(WORD_SIZE_P)
              , .INPUT_SIZE(6)
  ) imm_11s
  ( .i(inst_i[5:0])
  , .o(imm_6s_lo)
  );

  logic [WORD_SIZE_P-1:0] reg_4z_lo;
  zero_extend #(.WORD_SIZE_P(WORD_SIZE_P)
              , .INPUT_SIZE(4)
  ) reg_4z
  ( .i(inst_i[6:3])
  , .o(reg_4z_lo)
  );


  bsg_mux #(.width_p(WORD_SIZE_P)
          , .els_p(8)
  )
  (.data_i({reg_4z_lo,imm_6s_lo,imm_11s_lo,imm_8s_lo,imm_5z_lo,imm_7z_lo,imm_3z_lo,imm_8z_lo})
  ,.sel_i()
  ,.data_o()
  );

endmodule // decode