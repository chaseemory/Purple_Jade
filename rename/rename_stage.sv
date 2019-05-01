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

// speculative renaming lookup tables and freelist
logic [NUM_ARCH_REG-1:0][$clog2(NUM_PHYS_REG)-1:0] lut_spec_n, lut_spec_q;
logic [NUM_PHYS_REG-1:0][$clog2(NUM_PHYS_REG)-1:0] fl_spec_n, fl_spec_q;

// non-speculative renaming lookup tables and freelist
logic [NUM_ARCH_REG-1:0][$clog2(NUM_PHYS_REG)-1:0] lut_n, lut_q;
logic [NUM_PHYS_REG-1:0][$clog2(NUM_PHYS_REG)-1:0] fl_n, fl_q;


// sequential processes
always_ff @(posedge clk_i)
  begin
	if (reset_i)
	  begin
		lut_spec_q 	<= '{default:0};
		lut_q 		<= '{default:0};
	  end 
	else
	  begin
		lut_spec_q  <= lut_spec_n;
		lut_q 		<= lut_n;
	  end	
  end
// freelist initializations
generate
	genvar i;
	for (i=0; i<NUM_PHYS_REG; i++)
	  begin
		always_ff @(posedge clk_i)
		  begin
			if (reset_i)
			  begin
			  	fl_spec_q[i] <= $clog2(NUM_PHYS_REG)'(i); 
			  	fl_q[i]      <= $clog2(NUM_PHYS_REG)'(i);
			  end
			else
			  begin
			  	fl_spec_q[i] <= fl_spec_n[i]; 
			  	fl_q[i]      <= fl_n[i];
			  end
		  end
	  end
endgenerate
endmodule
   
