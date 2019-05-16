module pipe
  #(parameter WIDTH_P = -1
  )
  ( input                 clk_i
  , input   [WIDTH_P-1:0] data_i
  , input                 flush
  , input                 stall
  , input                 v_i
  , output  [WIDTH_P-1:0] data_o
  , output                v_o
  );

  always_ff @(posedge clk_i) begin

    casez({flush, stall})
      2'b1?: begin
        v_o     <= 1'b0;
        data_o  <= data_i;
      end
      2'b01: begin
        v_o     <= v_o;
        data_o  <= data_o;
      end
      default: begin
        v_o     <= v_i;
        data_o  <= data_i;
      end
    endcase 

  end // always_ff @(posedge clk_i)

endmodule // pipe