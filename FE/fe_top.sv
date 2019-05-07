module fe_top 
  #(parameter place_holder = -1
  )
  ( input   logic clk_i
  , input   logic reset_i
  , input   logic ready_i
  , output  logic [DECODED_INSTRUCTION_WIDTH-1:0] final_decoded_instruction
  );

  logic stall;
  logic take_branch;

  assign stall = ready_i

  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~i_rom / PC / FETCH~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

  logic [WORD_SIZE_P-1:0] instruction_fetch_r, program_counter_fetch_r, program_counter_n, program_counter_n_p2, branch_target;

  assign program_counter_n_p2 = {program_counter_r[WORD_SIZE_P-1:1]+1'b1, 1'b0}; // Incrementing is faster than adding

  pc_next next_pc
    ( .pc_i(program_counter_r)
    , .pc_2_i(program_counter_n_p2)
    , .branch_target_i(branch_target)
    , .reset_i(reset_i)
    , .branch_take(take_branch)
    , .stall(stall)
    , .pc_next(program_counter_n)
    );

  program_counter pc
    ( .clk_i
    , .pc_i(program_counter_n)
    , .o(program_counter_fetch_r)
    );

  i_rom instruction_mem
    ( .r_addr_i(program_counter_fetch_r)
    , .data_o(instruction_fetch_r)
    );

  
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~F / D PIPE~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

  logic [WORD_SIZE_P-1:0] program_counter_decode_r, instruction_decode_r;
  logic                   flush_f_d, valid_f_d;

  pipe #(.WIDTH_P($bits({program_counter_fetch_r, instruction_decode_r}))
    ) fetch_decode_pipe
    ( .clk_i
    , .data_i({program_counter_fetch_r, instruction_fetch_r})
    , .flush(flush_f_d)
    , .stall(stall)
    , .v_i(1'b1)
    , .data_o({program_counter_decode_r, instruction_decode_r})
    , .v_o(valid_f_d)
    );

  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~DECODE~~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

  logic [$clog2(NUM_DEST_SRC)-1:0]    dest_src_sel;
  logic [$clog2(NUM_S1_SRC)-1:0]      src_1_sel;
  logic [$clog2(NUM_S2_IMM_SRC)-1:0]  src_2_imm_sel;
  logic [WORD_SIZE_P-1:0]             immediates [NUM_EXTENDED-1:0] 
  logic                               is_branch_decode;

  `define declare_decoded_instruction (NUM_ARCH_REG, WORD_SIZE_P, INSTRUCTION_OP_NUM, NUM_FU, NUM_FLAGS, $clog2(BRANCH_CC_NUM));

  decoded_instruction instruction_decoded_decode;


  extension extend_the_things
    ( .instruction_i(instruction_decode_r)
    , .immediate_o(immediates)
    );


  microcode_rom #(.UCODE_WIDTH_P(UCODE_WIDTH_P)
                , .INPUT_WIDTH_P(10)
    ) decoder
    (.addr_i(instruction_decode_r)
    ,.o({instruction_decoded_decode.w_v, instruction_decoded_decode.opcode, instruction_decoded_decode.func_unit
          , instruction_decoded_decode.flags, dest_src_sel, src_1_sel, src_2_imm_sel})
    );

  bsg_mux #(.width_p($clog2(NUM_REG))
          , .els_p(NUM_DEST_SRC)
    ) dest_src_mux
    (.data_i({4'd14, 4'd13, {1'b0, instruction_decode_r[10:8]}, {1'b0, instruction_decode_r[2:0]}})
    ,.sel_i(dest_src_sel)
    ,.data_o(instruction_decoded_decode.dest_id)
    );

  bsg_mux #(.width_p($clog2(NUM_REG))
          , .els_p(NUM_DEST_SRC)
    ) src_1_mux
    (.data_i({4'd14, 4'd13, {1'b0, instruction_decode_r[2:0]}, {1'b0, instruction_decode_r[5:3]}})
    ,.sel_i(src_1_sel)
    ,.data_o(instruction_decoded_decode.source_1)
    );

  bsg_mux #(.width_p(WORD_SIZE_P)
          , .els_p(8)
    ) src_2_imm_mux
    (.data_i(immediates)
    ,.sel_i(src_2_imm_sel)
    ,.data_o(instruction_decoded_decode.source2_imm)
    );

  assign instruction_decoded_decode.bcc_op = instruction_decode_r[11:8];



  logic [WORD_SIZE_P-1:0] branch_offset_decode;
  assign is_branch_decode = (instruction_decoded_decode.func_unit == BRANCH_FU);

  bsg_mux #(.width_p(WORD_SIZE_P)
            , .els_p(4)
      ) branch_imm
      (.data_i(immediates[7:4])
      ,.sel_i(instruction_decoded_decode.opcode[1:0])
      ,.data_o(branch_offset_decode)
      );



  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~D / B/BE PIPE~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

  logic [WORD_SIZE_P-1:0] program_counter_branch_r, branch_offset_branch_r;
  logic                   flush_d_b, valid_d_b, is_branch_branch_r;

  decoded_instruction instruction_decoded_branch;

  pipe #(.WIDTH_P($bits({program_counter_decode_r, instruction_decoded_decode, is_branch_decode, branch_offset_decode}))
    ) decode_branch_pipe
    ( .clk_i
    , .data_i({program_counter_decode_r, instruction_decoded_decode, is_branch_decode, branch_offset_decode})
    , .flush(flush_d_b)
    , .stall(stall)
    , .v_i(valid_f_d)
    , .data_o({program_counter_branch_r, instruction_decoded_branch, is_branch_branch_r, branch_offset_branch_r})
    , .v_o(valid_d_b)
    );

  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~BRANCH~~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  
  logic [1:0] bht_value;
  assign branch_target = branch_offset_branch_r + program_counter_branch_r;

  // bht #(parameter NUM_BHT_ENTRIES = 64
  // ) bht_er
  // ( .addr_i(program_counter_branch_r[5:0])
  // , .v_i(is_branch_branch_r)
  // , .branch(bht_value)
  // );

  // TODO: INSERT RETURN ADDRESS STACK HERE AS WELL



  assign take_branch = branch_offset_branch_r[WORD_SIZE_P-1];

  assign flush_d_b = is_branch_branch_r ? take_branch : 1'b0;
  assign flush_f_d = is_branch_branch_r ? take_branch : 1'b0;

  assign final_decoded_instruction.branch_prediction = take_branch;

  assign final_decoded_instruction = instruction_decoded_branch;

endmodule // fe_top