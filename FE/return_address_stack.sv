module return_address_stack 
  #( parameter ELS_P
   , parameter WIDTH_P
  )
  ( input   logic               push_i
  , input   logic               pop_i
  , input   logic               reset_i
  , input   logic [WIDTH_P-1:0] address_i
  , output  logic [WIDTH_P-1:0] address_o
  , output  logic               valid_o
  );

  logic [ELS_P-1:0][WIDTH_P-1:0]  stack;

  logic [$clog2(ELS_P)-1:0]       curr_ptr;
  logic [$clog2(ELS_P)-1:0]       next_ptr;
  logic [$clog2(ELS_P)-1:0]       curr_ptr_n;
  logic [$clog2(ELS_P)-1:0]       next_ptr_n;

  always_comb


  always_ff @(posedge clk) begin : next_state

    if(reset_i) begin : reset_logic
      curr_ptr <= {$clog2(ELS_P){1'b1}};
      next_ptr <= {$clog2(ELS_P){1'b1}};
      for(int unsigned i = 0; i < ELS_P; i++) begin : reset_stack
        stack[i] <= '0;
      end // reset_stack
    end // reset_logic

    else begin
       curr_ptr <= curr_ptr_n;
       next_ptr <= next_ptr_n;
       if(pop_i & valid_o) stack[curr_ptr] <= '0;
    end

  end // next_state

  assign valid_o = (curr_ptr == {$clog2(ELS_P){1'b1}}) & (curr_ptr_n == {$clog2(ELS_P){1'b1}});

endmodule