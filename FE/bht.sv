module bht 
  #(parameter NUM_BHT_ENTRIES = -1
  , localparam BHT_ADDR_WIDTH = $clog2(NUM_BHT_ENTRIES)
  )
  ( input [BHT_ADDR_WIDTH-1:0]  addr_i
  , input                       v_i
  , output logic [1:0]          branch
  );

  logic [1:0] mem [NUM_BHT_ENTRIES-1:0];

  assign branch = 2'b10;

endmodule // bht