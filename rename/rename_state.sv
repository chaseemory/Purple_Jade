`include "../common/Purple_Jade_pkg.svh";

module rename_state 
(input                                      clk_i
 , input                                    reset_i

 // decoder-rename interface
 , input  [DECODED_INSTRUCTION_WIDTH-1:0]   decoded_i
 , input                                    decoded_v_i
 , output                                   rename_decode_ready_o

 // rename-issue interface
 , output [RENAMED_INSTRUCTION_WIDTH-1:0]   renamed_o  
 , output                                   renamed_v_i
 , input                                    issue_rename_ready_i

 // commit-rename interface
 , input                                    commit_v_i
 , input                                    commit_rename_i
 , input                                    mispredict_i
);

   

endmodule
   
