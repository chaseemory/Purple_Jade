module ex_module #(
    parameter EX_PARAM
  , parameter EX_PARAM_2
  )
  ( input   logic                   a_i
  , output  logic [EX_PARAM-1:0]    b_o
  , output  logic [EX_PARAM_2-1:0]  c_o 
  ); // Names tabbed to first tab_stop past longest vector definition

  // Declare all signals at top of module
  // preferably in the order they are primarily used within
  // grouped together by how they are used
  logic [EX_PARAM-1:0]  ex_signal_1, ex_signal_2, 
  logic                 ex_signal_3;

  demo_module #(
     .ex1_p(EX_PARAM)
    ,.ex2_p(EX_PARAM_2)
    ) ex_module_name
    (.in    (ex_signal_1)
    ,.ex_o  (ex_signal_2)
    ,.ex2_o (ex_signal_3)
    );

  // Two vertical spaces between major blocks
  always_comb begin : ex_always_block //always name blocks
    //always tab things within scope, leave one line empty
    //declare iteration variables within for statement if possible for scope
    for(int unsigned i = 0; i < EX_PARAM; i++) begin : ex_for_loop // always name these too

      if(!EX_PARAM) begin : ex_if_statement // always name these too
                          // if multiple similar blocks align names
        ex_signal_1[i] = ex_signal_2[i];

      end // ex_if_statement

    end // ex_for_loop

  end // ex_always_block

endmodule // ex_module