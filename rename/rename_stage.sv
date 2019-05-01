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
 , output                                   renamed_v_o
 , input                                    issue_rename_ready_i

 // commit-rename interface
 , input                                    commit_v_i
 , input  [COMMIT_RENAME_WIDTH-1:0]         commit_rename_i
 , input                                    mispredict_i
);

// type delcaration
`declare_decoded_instruction(NUM_ARCH_REG,WORD_SIZE_P,INSTRUCTION_OP_NUM,NUM_FU,NUM_FLAGS,BRANCH_CC_NUM);
`declare_renamed_instruction(NUM_PHYS_REG,WORD_SIZE_P,INSTRUCTION_OP_NUM,NUM_FU,NUM_FLAGS,BRANCH_CC_NUM,NUM_ARCH_REG);
`declare_commit_rename_t(NUM_ARCH_REG,NUM_PHYS_REG);

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

// pointers for freelists
logic [$clog2(NUM_PHYS_REG)-1:0]				   fl_read_pt, fl_write_pt, fl_spec_read_pt, fl_spec_write_pt;
logic [$clog2(NUM_PHYS_REG)-1:0]				   fl_read_pt_n, fl_write_pt_n, fl_spec_read_pt_n, fl_spec_write_pt_n;
logic [$clog2(NUM_PHYS_REG)-1:0]				   fl_spec_num;
logic [$clog2(NUM_PHYS_REG)-1:0]				   fl_spec_num_n;

localparam REG_PAD_WIDTH = $clog2(NUM_PHYS_REG) - $clog2(NUM_ARCH_REG);
localparam PHYREG_TO_WORD_PAD_WIDTH = WORD_SIZE_P - $clog2(NUM_PHYS_REG);

// roll back to non speculative
logic 											   roll_back;
assign roll_back = mispredict_i & commit_v_i;

// valid ready signals
assign rename_decode_ready_o = (fl_spec_num != 0) && (!roll_back);
assign renamed_v_o = rename_decode_ready_o & issue_rename_ready_i & decoded_v_i;

assign renamed.pc = decoded.pc;
assign renamed.opcode = decoded.opcode;
assign renamed.func_unit = decoded.func_unit;
assign renamed.flags = decoded.flags;
assign renamed.bcc_op = decoded.bcc_op;
assign renamed.w_v = decoded.w_v;
assign renamed.imm = decoded.imm;
assign renamed.alloc_reg = decoded.dest_id;
assign renamed.freed_reg = lut_spec_q[decoded.dest_id];


// renaming
always_comb
  begin
  	// default assignments
  	lut_spec_n         = lut_spec_q;
	fl_spec_read_pt_n  = fl_spec_read_pt;
	fl_spec_write_pt_n = fl_spec_write_pt;
	fl_spec_num_n      = fl_spec_num;
	fl_spec_n          = fl_spec_q;

	// this field can be both a imm value and sr2 source
 	renamed.source2_imm = decoded.source2_imm;
 	renamed.source_1 =  {{REG_PAD_WIDTH{1'b0}}, decoded.source_1};
 	renamed.dest_id  =  {{REG_PAD_WIDTH{1'b0}}, decoded.dest_id};

  	// renaming logics
  	if (renamed_v_o)
  	  begin
  	  	// translating sources
  	  	renamed.source_1 = lut_spec_q[decoded.source_1];
  	  	if (!decoded.imm)
  	  		renamed.source2_imm = {{PHYREG_TO_WORD_PAD_WIDTH{1'b0}}, lut_spec_q[decoded.source2_imm[$clog2(NUM_ARCH_REG)-1:0]]};

  	  	if (decoded.w_v)
  	  	  begin
  	  	  	// allocate a free register & update speculative lut
  	  		renamed.dest_id = fl_spec_q[fl_spec_read_pt];
  	  		// TODO: change this 
  	  		lut_spec_n[decoded.dest_id] = fl_spec_q[fl_spec_read_pt];
  	  		fl_spec_read_pt_n++;
  	  		fl_spec_num_n--;
  	  	  end
  	  end

  	// freeing registers
  	if (commit_v_i & ~mispredict_i)
  	  begin
  	  	if (commit_entry.w_v)
  	  	  begin
  	  	  	fl_spec_n[fl_spec_write_pt] = commit_entry.freed_reg;
  	  	  	fl_spec_write_pt_n++;
  	  	  end
  	  end

  	// on a valid miss predict
  	if (roll_back)
  	  begin
  	  	// when misprediction is resolved # of speculative free registers should be the same as reset
  		lut_spec_n         = lut_q;
		fl_spec_read_pt_n  = fl_read_pt;
		fl_spec_write_pt_n = fl_write_pt;
		fl_spec_num_n      = $clog2(NUM_PHYS_REG)'(NUM_PHYS_REG-NUM_ARCH_REG);
		fl_spec_n          = fl_q;  	  	
  	  end
  end

// updating non speculative lut and fl
always_comb
  begin
  	lut_n         = lut_q;
	fl_read_pt_n  = fl_read_pt;
	fl_write_pt_n = fl_write_pt;
	fl_n          = fl_q;

	// update non speculative
	if (commit_v_i & ~mispredict_i)
	  begin
  	  	fl_n[fl_write_pt] = commit_entry.freed_reg;
  	  	lut_n[commit_entry.alloc_reg] = fl_q[fl_spec_read_pt];
  	  	fl_write_pt_n++;
   	  	fl_read_pt_n++;
	  end
  end

// sequential processes
always_ff @(posedge clk_i)
  begin
	if (reset_i)
	  begin
		lut_spec_q 	<= '{default:0};
		lut_q 		<= '{default:0};
		fl_read_pt  <= '0;
		fl_write_pt  <= '0;
		fl_spec_read_pt  <= '0;
		fl_spec_write_pt  <= $clog2(NUM_PHYS_REG)'(NUM_PHYS_REG-1);
		fl_spec_num <= $clog2(NUM_PHYS_REG)'(NUM_PHYS_REG-NUM_ARCH_REG);
	  end 
	else
	  begin
		lut_spec_q  <= lut_spec_n;
		lut_q 		<= lut_n;
		fl_read_pt  <= fl_read_pt_n;
		fl_write_pt  <= fl_write_pt_n;
		fl_spec_read_pt  <= fl_spec_read_pt_n;
		fl_spec_write_pt  <= fl_spec_write_pt_n;
		fl_spec_num <= fl_spec_num_n;
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
			  	fl_spec_q[i] <= $clog2(NUM_PHYS_REG)'(i+1); 
			  	fl_q[i]      <= $clog2(NUM_PHYS_REG)'(i+1);
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