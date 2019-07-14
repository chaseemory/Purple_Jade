`include "Purple_Jade_pkg.svh"

module pj_top
  ( input                                      clk_i
  , input                                      reset_i
`ifdef DEBUG
  , output                                     rob_debug_valid_o /*verilator public*/             
  , output [DEBUG_WIDTH-1:0]                   rob_debug_o       /*verilator public*/
  , output [WORD_SIZE_P-1:0]                   rob_debug_pc_o/*verilator public*/
  , output                                     rob_debug_w_v_o   /*verilator public*/            
  , output [$clog2(NUM_ARCH_REG)-1:0]          rob_debug_reg_addr_o/*verilator public*/
  , output [WORD_SIZE_P-1:0]                   rob_debug_reg_val_o/*verilator public*/
  , output                                     mem_w_v_o/*verilator public*/
  , output [WORD_SIZE_P-1:0]                   mem_addr_o/*verilator public*/
  , output [WORD_SIZE_P-1:0]                   mem_data_o/*verilator public*/
`endif
  );

  logic                   data_mem_w_v_i;
  logic [WORD_SIZE_P-1:0] data_mem_w_addr_i;
  logic [WORD_SIZE_P-1:0] data_mem_w_data_i;
  logic                   data_mem_r_v_i;
  logic [WORD_SIZE_P-1:0] data_mem_r_addr_i;
  logic [WORD_SIZE_P-1:0] data_mem_r_data_o;

  logic [WORD_SIZE_P-1:0] i_rom_r_addr_i;
  logic [WORD_SIZE_P-1:0] i_rom_data_o; 

  assign mem_w_v_o = data_mem_w_v_i;
  assign mem_data_o = data_mem_w_data_i;
  assign mem_addr_o = data_mem_w_addr_i;

  pj_top_no_mem core
    (.clk_i
    ,.reset_i
    // interface for data_memory
    ,.data_mem_w_v_i
    ,.data_mem_w_addr_i
    ,.data_mem_w_data_i
    ,.data_mem_r_v_i
    ,.data_mem_r_addr_i
    ,.data_mem_r_data_o
    // interface for i_rom
    ,.i_rom_r_addr_i
    ,.i_rom_data_o
    ,.rob_debug_valid_o               
    ,.rob_debug_o
    ,.rob_debug_pc_o
    ,.rob_debug_w_v_o               
    ,.rob_debug_reg_addr_o
    ,.rob_debug_reg_val_o
    ,.*
    );

  
  bsg_mem_1r1w_sync #( 
     .width_p               (WORD_SIZE_P)
    ,.els_p                 (2**WORD_SIZE_P) 
    ,.read_write_same_addr_p(1)
    ) data_mem
    (.w_v_i          (data_mem_w_v_i)
    ,.w_addr_i       (data_mem_w_addr_i)
    ,.w_data_i       (data_mem_w_data_i)
    ,.r_v_i          (data_mem_r_v_i)
    ,.r_addr_i       (data_mem_r_addr_i)
    ,.r_data_o       (data_mem_r_data_o)
    ,.*
  );

  i_rom instruction_mem
    (.r_addr_i(i_rom_r_addr_i)
    ,.data_o(i_rom_data_o)
    );

endmodule