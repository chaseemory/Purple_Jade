`include "Purple_Jade_pkg.svh"
`include "FE_def.svh"

module fe_top 
  #(parameter place_holder = -1
  )
  ( input   logic clk_i
  , input   logic reset_i
  , input   logic ready_i
  , input 	logic mis_predict
  , input 	logic [WORD_SIZE_P-1:0] branch_mis_target
  , output  logic [DECODED_INSTRUCTION_WIDTH-1:0] final_decoded_instruction
  , output  logic valid_o
  );
  

  logic stall;
  logic take_branch_local, take_branch;

  assign stall = ~ready_i;

  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~i_rom / PC / FETCH~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

  logic [WORD_SIZE_P-1:0] instruction_fetch_r, program_counter_fetch_r, program_counter_n, program_counter_n_p2, branch_target;

  // assign program_counter_n_p2 = {program_counter_fetch_r[WORD_SIZE_P-1:1]+1'b1, 1'b0}; // Incrementing is faster than adding
  assign program_counter_n_p2 = program_counter_fetch_r[WORD_SIZE_P-1:0]+1'b1; // Incrementing is faster than adding


  pc_next next_pc
    ( .pc_i(program_counter_fetch_r)
    , .pc_2_i(program_counter_n_p2)
    , .branch_target_i(branch_target)
    , .reset_i(reset_i)
    , .branch_take(take_branch_local)
    , .stall(stall)
    , .pc_next(program_counter_n)
    );

  program_counter pc
    ( .clk_i
    , .pc_i(program_counter_n)
    , .o(program_counter_fetch_r)
    );

  i_rom instruction_mem
    ( .r_addr_i(program_counter_fetch_r[15:0])
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
    , .flush(flush_f_d | reset_i)
    , .stall(stall)
    , .v_i(1'b1)
    , .data_o({program_counter_decode_r, instruction_decode_r})
    , .v_o(valid_f_d)
    );

  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~DECODE~~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

  logic [$clog2(NUM_DEST_SRC)-1:0]          dest_src_sel;
  logic [$clog2(NUM_S1_SRC)-1:0]            src_1_sel;
  logic [$clog2(NUM_S2_IMM_SRC)-1:0]        src_2_imm_sel;
  logic [NUM_EXTENDED-1:0][WORD_SIZE_P-1:0] immediates;
  logic                                     is_branch_decode;


  decoded_instruction_t instruction_decoded_decode;


  extension extend_the_things
    ( .instruction_i(instruction_decode_r)
    , .immediate_o(immediates)
    );


  microcode_rom #(.INPUT_WIDTH_P(10)
    ) decoder
    (.addr_i(instruction_decode_r[15:6])
    ,.o({instruction_decoded_decode.w_v, instruction_decoded_decode.opcode, instruction_decoded_decode.func_unit
          , instruction_decoded_decode.flags, dest_src_sel, src_1_sel, src_2_imm_sel, instruction_decoded_decode.imm})
    );

  bsg_mux #(.width_p($clog2(NUM_ARCH_REG))
          , .els_p(NUM_DEST_SRC)
    ) dest_src_mux
    (.data_i({4'd14, 4'd13, {1'b0, instruction_decode_r[10:8]}, {1'b0, instruction_decode_r[2:0]}})
    ,.sel_i(dest_src_sel)
    ,.data_o(instruction_decoded_decode.dest_id)
    );

  bsg_mux #(.width_p($clog2(NUM_ARCH_REG))
          , .els_p(NUM_DEST_SRC)
    ) src_1_mux
    (.data_i({4'd12, 4'd13, {1'b0, instruction_decode_r[2:0]}, {1'b0, instruction_decode_r[5:3]}})
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

  assign instruction_decoded_decode.bcc_op              = instruction_decode_r[11:8];
  assign instruction_decoded_decode.pc                  = program_counter_decode_r;
  assign instruction_decoded_decode.branch_speculation  = 1'b0;

  logic [WORD_SIZE_P-1:0] branch_offset_decode;
  assign is_branch_decode = (instruction_decoded_decode.func_unit == `BRANCH_FU);

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

  logic [WORD_SIZE_P-1:0] branch_offset_branch_r;
  logic                   flush_d_b, valid_d_b, is_branch_branch_r;

  // Verilatorssss doesnt like me using part of the struct to determine another part of it :/
  /* verilator lint_off UNOPTFLAT */                
  decoded_instruction_t instruction_decoded_branch;
  /* verilator lint_on UNOPTFLAT */

  pipe #(.WIDTH_P($bits({instruction_decoded_decode, is_branch_decode, branch_offset_decode}))
    ) decode_branch_pipe
    ( .clk_i
    , .data_i({instruction_decoded_decode, is_branch_decode, branch_offset_decode})
    , .flush(flush_d_b | reset_i)
    , .stall(stall)
    , .v_i(valid_f_d)
    , .data_o({instruction_decoded_branch, is_branch_branch_r, branch_offset_branch_r})
    , .v_o(valid_d_b)
    );

  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~BRANCH~~~~~~~~~~~~~~~~~~~~~~~~~~
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  

  assign branch_target = (mis_predict) ? branch_mis_target : (branch_offset_branch_r + instruction_decoded_branch.pc);

  logic speculative_branch;

  static_branch_control branch_control
    ( .sign_bit_i(branch_offset_branch_r[WORD_SIZE_P-1])
    , .is_branch_i(is_branch_branch_r)
    , .branch_op_code_i(instruction_decoded_branch.opcode[1:0])
    , .take_branch_o(take_branch_local)
    , .speculative_o(speculative_branch)
    );

  // TODO: INSERT RETURN ADDRESS STACK HERE AS WELL

  assign take_branch = take_branch_local | mis_predict;

  assign flush_d_b = take_branch;
  assign flush_f_d = take_branch;

  always_comb instruction_decoded_branch.branch_speculation = take_branch_local;

  assign valid_o = ((~speculative_branch & is_branch_branch_r) | (instruction_decoded_branch.func_unit == `NOOP_FU) | mis_predict) ? 1'b0 : valid_d_b;

  assign final_decoded_instruction = instruction_decoded_branch;

endmodule // fe_top