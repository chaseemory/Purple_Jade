module sign_extend #(
    parameter INPUT_SIZE   = -1
  )
  ( input   logic [INPUT_SIZE-1:0]  i
  , output  logic [WORD_SIZE_P-1:0] o
  );

  assign o = {{(WORD_SIZE_P-INPUT_SIZE){i[INPUT_SIZE-1]}},i};

endmodule // sign_extend