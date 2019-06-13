module priority_encoder
  #( els_p    = -1
    ,width_p  = $clog2(els_p)
  )
  (input  logic [els_p-1:0]           i
  ,output logic [$clog2(els_p)-1:0]   addr_o
  ,output logic                       v_o
  );

  always_comb begin
    v_o     = 1'b0;
    addr_o  = '0;

    for(int unsigned j = 0; j < els_p; j++) begin
      if(i[j]) begin 
        v_o     = 1'b1;
        addr_o  = j;
        break;
      end
    end
  end // always_comb

endmodule // priority_encoder