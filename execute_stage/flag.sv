`include "Purple_Jade_pkg.svh"

module flag
(input    [WORD_SIZE_P-1:0] result_i
 , output [NUM_FLAGS-1:0]   flags_o
);

assign flags_o[c] = result_i[WORD_SIZE_P-1];
assign flags_o[n] = $signed(result_i) < $signed((WORD_SIZE_P)'(0));
assign flags_o[z] = result_i == (WORD_SIZE_P)'(0);
assign flags_o[v] = result_i[WORD_SIZE_P-1] ^ result_i[WORD_SIZE_P-2];
endmodule // flag