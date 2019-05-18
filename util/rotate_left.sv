module rotate_left #(width_p=-1)
   (input [width_p-1:0] data_i
    , input [$clog2(width_p)-1:0] rot_i
    , output [width_p-1:0] o
    );
   
   wire [width_p*2-1:0] temp;
   assign temp = ({data_i, data_i} << rot_i);
   assign o = temp[width_p+:width_p];
   
endmodule