`ifdef VERILATOR
`include "Purple_Jade_pkg.svh"
`endif

module pj_top
  (input                                        clk_i
  ,input                                      reset_i
  );

  // fifo sizes
  localparam fifo_size = 32;

  // fe <-> fifo
  logic                                 fe_fifo_valid;
  logic                                 fifo_fe_ready;
  logic [DECODED_INSTRUCTION_WIDTH-1:0] fe_fifo_data;

  // be <-> fe
  logic                                 be_fe_mispredict;
  logic [WORD_SIZE_P-1:0]               be_fe_redirected_pc;

  // fifo <-> be
  logic                                 fifo_be_valid;
  logic                                 be_fifo_ready;
  logic [DECODED_INSTRUCTION_WIDTH-1:0] fifo_be_data;

  /* verilator lint_off UNOPTFLAT */

  fe_top front_end
    (  .ready_i                  (fifo_fe_ready)
     , .mis_predict              (be_fe_mispredict)
     , .branch_mis_target        (be_fe_redirected_pc)
     , .final_decoded_instruction(fe_fifo_data)
     , .valid_o                  (fe_fifo_valid)
     , .*
    );

  bsg_fifo_1r1w_small 
  #(  .width_p(DECODED_INSTRUCTION_WIDTH)
    , .els_p(fifo_size)
  ) fe_be_fifo
  (  .ready_o(fifo_fe_ready)
   , .data_i (fe_fifo_data)
   , .v_i    (fe_fifo_valid)
   , .v_o    (fifo_be_valid)  
   , .data_o (fifo_be_data)
   , .yumi_i (be_fifo_ready)
   , .reset_i(reset_i | be_fe_mispredict)
   , .*
  );

  be_top back_end
  (  .decoded_i            (fifo_be_data)
   , .decoded_v_i          (fifo_be_valid)
   , .rename_decode_ready_o(be_fifo_ready)
   , .be_fe_mispredict_o   (be_fe_mispredict)
   , .be_fe_redirected_pc_o(be_fe_redirected_pc)
   , .*
  );

endmodule