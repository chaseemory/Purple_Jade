`include "../common/Purple_Jade_pkg.svh";
`include "rename_def.svh";

module rename_stage 
(input										clk_i
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
 , input  [COMMIT_RENAME_WIDTH-1:0]         commit_rename_i
 , input                                    mispredict_i
);

// type delcaration
`declare_decoded_instruction(NUM_ARCH_REG,WORD_SIZE_P,INSTRUCTION_OP_NUM,NUM_FU,NUM_FLAGS,BRANCH_CC_NUM);
`declare_renamed_instruction(NUM_PHYS_REG, WORD_SIZE_P, INSTRUCTION_OP_NUM, NUM_FU, NUM_FLAGS, BRANCH_CC_NUM);
`declare_commit_rename_t(NUM_PHYS_REG);


decoded_instruction_t decoded;
renamed_instruction_t renamed;
commit_rename_t commit_entry;

// io assignment
assign decoded = decoded_i;
assign renamed_o = renamed;
assign commit_entry = commit_rename_i;

endmodule
   
