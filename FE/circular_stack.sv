/*  Return address stack for using with branch and link instructions
    and branch exchange instructions
*/
module circular_stack 
  #( parameter ELS_P = -1
   , parameter WIDTH_P = -1
  )
  ( input   logic               clk_i
  , input   logic               push_i
  , input   logic               pop_i
  , input   logic               reset_i
  , input   logic [WIDTH_P-1:0] address_i
  , output  logic [WIDTH_P-1:0] address_o
  );

  logic [ELS_P-1:0][WIDTH_P-1:0]  stack;

  logic [$clog2(ELS_P)-1:0]       curr_ptr;
  logic [$clog2(ELS_P)-1:0]       next_ptr;
  logic [$clog2(ELS_P)-1:0]       curr_ptr_n;
  logic [$clog2(ELS_P)-1:0]       next_ptr_n;


  always_comb begin : next_state_logic
    case({push_i, pop_i})
      2'b01: begin : pop_i_proc
        curr_ptr_n  = curr_ptr - 1'b1;
        next_ptr_n  = next_ptr - 1'b1;
      end // pop_i
      2'b10: begin : push_i_proc
        curr_ptr_n  = curr_ptr + 1'b1;
        next_ptr_n  = next_ptr + 1'b1;
      end // push_i
      default: begin : no_change
        curr_ptr_n  = curr_ptr;
        next_ptr_n  = next_ptr;
      end // no_change
    endcase
  end // next_state_logic
  

  always_ff @(posedge clk_i) begin : next_state

    if(reset_i) begin : reset_logic
      curr_ptr  <= ELS_P - 1;
      next_ptr  <= '0;
      for(int unsigned i = 0; i < ELS_P; i++) begin : reset_stack
        stack[i] <= '0;
      end // reset_stack
    end // reset_logic

    else begin : normal_next_state
       curr_ptr <= curr_ptr_n;
       next_ptr <= next_ptr_n;
       if(push_i) stack[next_ptr] <= address_i;
    end

  end // next_state

  assign address_o = stack[curr_ptr];

endmodule // return_address_stack