`ifdef VERILATOR
`include "Purple_Jade_pkg.svh"
`include "FE_def.svh"
`endif


module extension
    /* verilator lint_off UNUSED */
  ( input   logic [WORD_SIZE_P-1:0]                   instruction_i
    /* verilator lint_on UNUSED */
  , output  logic [NUM_EXTENDED-1:0][WORD_SIZE_P-1:0] immediate_o   
  );

  logic [WORD_SIZE_P-1:0] imm_8z_lo;
  zero_extend #(.INPUT_SIZE(8)
  ) imm_8z
  ( .i(instruction_i[7:0])
  , .o(imm_8z_lo)
  );

  assign immediate_o[0] = imm_8z_lo;


  logic [WORD_SIZE_P-1:0] imm_3z_lo;
  zero_extend #(.INPUT_SIZE(3)
  ) imm_3z
  ( .i(instruction_i[8:6])
  , .o(imm_3z_lo)
  );

  assign immediate_o[1] = imm_3z_lo;

  logic [WORD_SIZE_P-1:0] imm_7z_lo;
  zero_extend #(.INPUT_SIZE(7)
  ) imm_7z
  ( .i(instruction_i[6:0])
  , .o(imm_7z_lo)
  );

  assign immediate_o[2] = imm_7z_lo;

  logic [WORD_SIZE_P-1:0] imm_5z_lo;
  zero_extend #(.INPUT_SIZE(5)
  ) imm_5z
  ( .i(instruction_i[10:6])
  , .o(imm_5z_lo)
  );

  assign immediate_o[3] = imm_5z_lo;

  logic [WORD_SIZE_P-1:0] imm_8s_lo;
  sign_extend #(.INPUT_SIZE(8)
  ) imm_8s
  ( .i(instruction_i[7:0])
  , .o(imm_8s_lo)
  );

  assign immediate_o[4] = imm_8s_lo;

  logic [WORD_SIZE_P-1:0] imm_11s_lo;
  sign_extend #(.INPUT_SIZE(11)
  ) imm_11s
  ( .i(instruction_i[10:0])
  , .o(imm_11s_lo)
  );

  assign immediate_o[5] = imm_11s_lo;

  logic [WORD_SIZE_P-1:0] imm_6s_lo;
  sign_extend #(.INPUT_SIZE(6)
  ) imm_6s
  ( .i(instruction_i[5:0])
  , .o(imm_6s_lo)
  );

  assign immediate_o[6] = imm_6s_lo;

  logic [WORD_SIZE_P-1:0] reg_4z_lo;
  zero_extend #(.INPUT_SIZE(4)
  ) reg_4z
  ( .i(instruction_i[6:3])
  , .o(reg_4z_lo)
  );

  assign immediate_o[7] = reg_4z_lo;

  logic [WORD_SIZE_P-1:0] reg_3z_lo;
  zero_extend #(.INPUT_SIZE(3)
  ) reg_3z
  ( .i(instruction_i[5:3])
  , .o(reg_3z_lo)
  );

  assign immediate_o[8] = reg_3z_lo;

  /*  Weird output to put the immediate for store as well as the second source register
      inside the field. This is because STORES require 3 sources and we only have space for 2
      but in this way we can sneak the immediate along with the source2 register value and
      it can be sign extended and dealt with inside the LSU
  */
  assign immediate_o[9] = {instruction_i[(WORD_SIZE_P-1)-:5],{WORD_SIZE_P-5-$clog2(NUM_ARCH_REG){1'b0}}, instruction_i[0+:$clog2(NUM_ARCH_REG)]};

endmodule // extension