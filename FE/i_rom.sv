// Not really an I$, actually just a ROM for instructions >.>
// Async Reads

module i_rom
  #(parameter   I_CACHE_DEPTH_P = -1
  , parameter   WORD_SIZE_P     = -1
  , localparam  ADDR_WIDTH_LP   = $CLOG(I_CACHE_DEPTH_P)
  )
  ( input   logic [ADDR_WIDTH_LP-1:0] r_addr_i
  , output  logic [WORD_SIZE_P-1:0]   data_o
  );


  logic [WORD_SIZE_P-1:0] mem [I_CACHE_DEPTH_P-1:0];

  assign data_o = mem[r_addr_i];

endmodule // i_rom