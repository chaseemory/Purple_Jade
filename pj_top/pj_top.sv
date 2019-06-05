`ifdef VERILATOR
`include "Purple_Jade_pkg.svh"
`endif

module pj_top
  (input                  clk_i
  ,input                  reset_i
  );

  logic                   data_mem_w_v_i;
  logic [WORD_SIZE_P-1:0] data_mem_w_addr_i;
  logic [WORD_SIZE_P-1:0] data_mem_w_data_i;
  logic                   data_mem_r_v_i;
  logic [WORD_SIZE_P-1:0] data_mem_r_addr_i;
  logic [WORD_SIZE_P-1:0] data_mem_r_data_o;

  logic [WORD_SIZE_P-1:0] i_rom_r_addr_i;
  logic [WORD_SIZE_P-1:0] i_rom_data_o;

  pj_top_no_mem core
    ( .clk_i
    , .reset_i
    // interface for data_memory
    , .data_mem_w_v_i
    , .data_mem_w_addr_i
    , .data_mem_w_data_i
    , .data_mem_r_v_i
    , .data_mem_r_addr_i
    , .data_mem_r_data_o
    // interface for i_rom
    , .i_rom_r_addr_i
    , .i_rom_data_o
    );

  
  bsg_mem_1r1w_sync #( 
      .width_p               (WORD_SIZE_P)
    , .els_p                 (2**WORD_SIZE_P) 
    , .read_write_same_addr_p(1)
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
    ( .r_addr_i(i_rom_r_addr_i)
    , .data_o(i_rom_data_o)
    );

endmodule