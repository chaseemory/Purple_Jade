module program_counter
  ( input   logic                   clk_i
  , input   logic [WORD_SIZE_P-1:0] pc_i
  , output  logic [WORD_SIZE_P-1:0] o
  );

  always_ff @(posedge clk_i) o = pc_i;

endmodule // program_counter