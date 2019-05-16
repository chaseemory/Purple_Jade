`include "Purple_Jade_pkg.svh";
`include "rename_def.svh";

module rename_stage 
(input										clk_i
 , input									reset_i

 // decoder-rename interface
 , input  [DECODED_INSTRUCTION_WIDTH-1:0]	decoded_i
 , input									decoded_v_i
 , output									rename_decode_ready_o

 // rename-issue interface
 , output [RENAMED_INSTRUCTION_WIDTH-1:0]	renamed_o  
 , output									renamed_v_o
 , input									issue_rename_ready_i

 // commit-rename interface
 , input									commit_v_i
 , input  [COMMIT_RENAME_WIDTH-1:0]			commit_rename_i
 , input									mispredict_i

 // rename-commit/rob interfaces
 , input									rob_ready_i
 , output [RENAME_ROB_ENTRY_WIDTH-1:0]		rename_rob_o
 , output  									rename_rob_v_o
);

decoded_instruction_t decoded;
renamed_instruction_t renamed, renamed_r, renamed_n;
commit_rename_t commit_entry;
rename_rob_t rename_rob;

// io assignment
assign decoded = decoded_i;
assign renamed_o = renamed_r;
assign commit_entry = commit_rename_i;
assign rename_rob_o = rename_rob;
assign renamed_n = (issue_rename_ready_i) ? renamed : renamed_r;

// speculative renaming lookup tables and freelist
logic [NUM_ARCH_REG-1:0][$clog2(NUM_PHYS_REG)-1:0] lut_spec_n, lut_spec_q;
logic [NUM_PHYS_REG-1:0][$clog2(NUM_PHYS_REG)-1:0] fl_spec_n, fl_spec_q;

// non-speculative renaming lookup tables and freelist
logic [NUM_ARCH_REG-1:0][$clog2(NUM_PHYS_REG)-1:0] lut_n, lut_q;
logic [NUM_PHYS_REG-1:0][$clog2(NUM_PHYS_REG)-1:0] fl_n, fl_q;

// pointers for freelists
logic [$clog2(NUM_PHYS_REG)-1:0]				   fl_read_pt, fl_write_pt, fl_spec_read_pt, fl_spec_write_pt;
logic [$clog2(NUM_PHYS_REG)-1:0]				   fl_read_pt_n, fl_write_pt_n, fl_spec_read_pt_n, fl_spec_write_pt_n;
logic [$clog2(NUM_PHYS_REG):0]					   fl_spec_num;
logic [$clog2(NUM_PHYS_REG):0]					   fl_spec_num_n;

localparam REG_PAD_WIDTH = $clog2(NUM_PHYS_REG) - $clog2(NUM_ARCH_REG);
localparam PHYREG_TO_WORD_PAD_WIDTH = WORD_SIZE_P - $clog2(NUM_PHYS_REG);

// roll back to non speculative
logic 											   roll_back;
assign roll_back = mispredict_i & commit_v_i;

// valid ready signals
logic  renamed_v, renamed_v_r;
assign rename_decode_ready_o = (fl_spec_num != 0) && (!roll_back) && issue_rename_ready_i && rob_ready_i;
assign renamed_v = (issue_rename_ready_i) ? (rename_rob_v_o) : renamed_v_r;
assign renamed_v_o = renamed_v_r;
assign rename_rob_v_o = rename_decode_ready_o & issue_rename_ready_i & decoded_v_i;

assign renamed.pc = decoded.pc;
assign renamed.opcode = decoded.opcode;
assign renamed.func_unit = decoded.func_unit;
assign renamed.flags = decoded.flags;
assign renamed.bcc_op = decoded.bcc_op;
assign renamed.w_v = decoded.w_v;
assign renamed.imm = decoded.imm;
assign renamed.alloc_reg = decoded.dest_id;
assign renamed.freed_reg = lut_spec_q[decoded.dest_id];
assign renamed.branch_speculation = decoded.branch_speculation;

// rename rob assignments
assign rename_rob.pc = decoded.pc;
assign rename_rob.wb = 1'b0;
`ifdef DEBUG
assign rename_rob.result = '0;
assign rename_rob.addr = '0;
`endif
assign rename_rob.is_spec = (decoded.opcode == `BX_OP || decoded.opcode == `BCC_OP);
assign rename_rob.is_cond_branch = (decoded.opcode == `BCC_OP);
assign rename_rob.bcc_op = decoded.bcc_op;
assign rename_rob.resolved_pc = '0;
assign rename_rob.flag_mask = decoded.flags;
assign rename_rob.flags = '0;
assign rename_rob.is_store = (decoded.opcode == `STR_OP);
assign rename_rob.w_v = decoded.w_v;
assign rename_rob.freed_reg = decoded.dest_id;
assign rename_rob.alloc_reg = lut_spec_q[decoded.dest_id];

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
  	if (commit_v_i & commit_entry.w_v)
  	  begin
  	  	fl_spec_n[fl_spec_write_pt] = commit_entry.freed_reg;
  	  	fl_spec_write_pt_n++;
  	  	fl_spec_num_n++;  
  	  end

  	// on a valid miss predict
  	if (roll_back)
  	  begin
  	  	// when misprediction is resolved # of speculative free registers should be the same as reset
  		lut_spec_n         = lut_q;
		fl_spec_read_pt_n  = fl_read_pt;
		fl_spec_write_pt_n = fl_write_pt;
		fl_spec_num_n      = ($clog2(NUM_PHYS_REG)+1)'(NUM_PHYS_REG-NUM_ARCH_REG);
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
	if (commit_v_i & commit_entry.w_v & ~roll_back)
	  begin
  	  	fl_n[fl_write_pt] = commit_entry.freed_reg;
  	  	lut_n[commit_entry.alloc_reg] = fl_q[fl_read_pt];
  	  	fl_write_pt_n++;
   	  	fl_read_pt_n++;
	  end
  end

// sequential processes
always_ff @(posedge clk_i)
  begin
	if (reset_i)
	  begin
		fl_read_pt  <= '0;
		fl_write_pt  <= $clog2(NUM_PHYS_REG)'(NUM_PHYS_REG-NUM_ARCH_REG);
		fl_spec_read_pt  <= '0;
		fl_spec_write_pt  <= $clog2(NUM_PHYS_REG)'(NUM_PHYS_REG-NUM_ARCH_REG);
		fl_spec_num <= ($clog2(NUM_PHYS_REG)+1)'(NUM_PHYS_REG-NUM_ARCH_REG);
		renamed_r <= '0;
		renamed_v_r <= '0;
	  end 
	else
	  begin
		fl_read_pt  <= fl_read_pt_n;
		fl_write_pt  <= fl_write_pt_n;
		fl_spec_read_pt  <= fl_spec_read_pt_n;
		fl_spec_write_pt  <= fl_spec_write_pt_n;
		fl_spec_num <= fl_spec_num_n;
		renamed_r <= renamed_n;
		renamed_v_r <= renamed_v;
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
			  	fl_spec_q[i] <= (i+NUM_ARCH_REG); 
			  	fl_q[i]      <= (i+NUM_ARCH_REG);
			  end
			else
			  begin
			  	fl_spec_q[i] <= fl_spec_n[i]; 
			  	fl_q[i]      <= fl_n[i];
			  end
		  end
	  end
endgenerate

// lookup table initilization
generate
	genvar j;
	for (j=0; j<NUM_ARCH_REG; j++)
	  begin
		always_ff @(posedge clk_i)
		  begin
			if (reset_i)
			  begin
			  	lut_spec_q[j] <= (j); 
			  	lut_q[j]      <= (j);
			  end
			else
			  begin
			  	lut_spec_q[j] <= lut_spec_n[j]; 
			  	lut_q[j]      <= lut_n[j];
			  end
		  end
	  end
endgenerate
endmodule