`include "Purple_Jade_pkg.svh"

module pj_top_no_mem
  ( input                              clk_i
  , input                              reset_i

  // interface for data_memory
  , output                             data_mem_w_v_i
  , output [WORD_SIZE_P-1:0]           data_mem_w_addr_i
  , output [WORD_SIZE_P-1:0]           data_mem_w_data_i
  , output                             data_mem_r_v_i
  , output [WORD_SIZE_P-1:0]           data_mem_r_addr_i
  , input  [WORD_SIZE_P-1:0]           data_mem_r_data_o
  // interface for i_rom
  , output  logic [WORD_SIZE_P-1:0]    i_rom_r_addr_i
  , input   logic [WORD_SIZE_P-1:0]    i_rom_data_o
  //`ifdef DEBUG
  , output                             rob_debug_valid_o	/*verilator public*/							
  , output [DEBUG_WIDTH-1:0]           rob_debug_o/*verilator public*/
  , output [WORD_SIZE_P-1:0]           rob_debug_pc_o/*verilator public*/
  , output                             rob_debug_w_v_o   /*verilator public*/            
  , output [$clog2(NUM_ARCH_REG)-1:0]  rob_debug_reg_addr_o/*verilator public*/
  , output [WORD_SIZE_P-1:0]           rob_debug_reg_val_o/*verilator public*/
  //`endif
  );

  // fifo sizes
  localparam fifo_size = 32;

  // fe <-> fifo
  logic                                 fe_fifo_valid /*verilator public*/;
  logic                                 fifo_fe_ready ;
  logic [DECODED_INSTRUCTION_WIDTH-1:0] fe_fifo_data  /*verilator public*/;

  // be <-> fe
  logic                                 be_fe_mispredict     /*verilator public*/;
  logic [WORD_SIZE_P-1:0]               be_fe_redirected_pc  /*verilator public*/;

  // fifo <-> be
  logic                                 fifo_be_valid /*verilator public*/;
  logic                                 be_fifo_ready;
  logic [DECODED_INSTRUCTION_WIDTH-1:0] fifo_be_data /*verilator public*/;

  fe_top front_end
    (.ready_i                  (fifo_fe_ready)
    ,.mis_predict              (be_fe_mispredict)
    ,.branch_mis_target        (be_fe_redirected_pc)
    ,.final_decoded_instruction(fe_fifo_data)
    ,.valid_o                  (fe_fifo_valid)
    // interface for i_rom
    ,.i_rom_r_addr_i
    ,.i_rom_data_o
    ,.*
    ); /*verilator public_module*/

  bsg_fifo_1r1w_small #(
     .width_p(DECODED_INSTRUCTION_WIDTH)
    ,.els_p(fifo_size)
    ) fe_be_fifo
    (.ready_o(fifo_fe_ready)
    ,.data_i (fe_fifo_data)
    ,.v_i    (fe_fifo_valid)
    ,.v_o    (fifo_be_valid)  
    ,.data_o (fifo_be_data)
    ,.yumi_i (be_fifo_ready)
    ,.reset_i(reset_i | be_fe_mispredict)
    ,.*
    );

  be_top back_end
    (.decoded_i            (fifo_be_data)
    ,.decoded_v_i          (fifo_be_valid & ~ reset_i)
    ,.rename_decode_ready_o(be_fifo_ready)
    ,.be_fe_mispredict_o   (be_fe_mispredict)
    ,.be_fe_redirected_pc_o(be_fe_redirected_pc)
    // interface for data_memory
    ,.data_mem_w_v_i
    ,.data_mem_w_addr_i
    ,.data_mem_w_data_i
    ,.data_mem_r_v_i
    ,.data_mem_r_addr_i
    ,.data_mem_r_data_o
    ,.rob_debug_valid_o								
    ,.rob_debug_o
    ,.rob_debug_pc_o
    ,.rob_debug_w_v_o               
    ,.rob_debug_reg_addr_o
    ,.rob_debug_reg_val_o
    ,.*
    );

endmodule