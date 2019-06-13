// A ROM for instructions
// Async Reads
`include "Purple_Jade_pkg.svh"

module i_rom
  #(localparam  ADDR_WIDTH_LP = $clog2(I_ROM_DEPTH_P)
  )
  ( input   logic [ADDR_WIDTH_LP-1:0] r_addr_i
  , output  logic [WORD_SIZE_P-1:0]   data_o
  );

  logic [WORD_SIZE_P-1:0] mem [I_ROM_DEPTH_P-1:0];

  initial begin
    // $readmemb(`TEST_BIN, mem);
    $readmemb("/homes/yongqw2/ee526/Purple_Jade/Purple_Jade_Tests/test/bin/test_load_store.bin", mem);
  end // initial

  assign data_o = mem[r_addr_i];

endmodule // i_rom
