`include "../common/Purple_Jade_pkg.svh";
`include "rob_def.svh"
`include "../rename/rename_def.svh";


module rob
(input										clk_i
 , input                                    reset_i

 // CDB-rob interface
 , input [NUM_FU-1:0][CDB_WIDTH-1:0]		cdb_i
 // issue-rob interface
 , input									issue_rob_valid_i
 , input  [ISSUE_ENTRY_WIDTH-1:0]			issue_rob_entry_i
 , output [$clog2(ROB_ENTRY)-1:0]			rob_issue_entry_num_o
 , output 									rob_issue_ready_o
 // rob-physical register interface
 , output									rob_phys_valid_o
 , output [$clog2(NUM_PHYS_REG)-1:0]		rob_phys_reg_cl_o
 // rob-store buffer interface: pop signal to store buffer
 , output									rob_sb_valid_o
 , output									rob_mispredict_o
 // rename-commit interface
 , output                                   rob_rename_valid_o
 , output [COMMIT_RENAME_WIDTH-1:0]         rob_rename_entry_o
 // commit-flag interface
 , output									rob_flag_valid_o
 , output [NUM_FLAGS*2-1:0]					rob_flag_o
`ifdef DEBUG
 , output									rob_debug_valid_o								
 , output [DEBUG_WIDTH-1:0]					rob_debug_o
`endif
);

// input output passing
CDB_t [NUM_FU-1:0] cdb;
assign cdb = cdb_i;

// rob
rob_t  [ROB_ENTRY-1:0] 					rob_q, rob_n;
logic  [$clog2(ROB_ENTRY)-1:0]			rob_alloc_pt, rob_alloc_pt_n;
logic  [$clog2(ROB_ENTRY)-1:0]			rob_commit_pt, rob_commit_pt_n;
logic  [$clog2(ROB_ENTRY):0]   			rob_num, rob_num_n;

// instruction being committed
rob_t 									committing_instr;

// ready valid signals
assign rob_issue_ready_o = rob_num != 0 & ~rob_mispredict_o;
assign rob_issue_entry_num_o = rob_alloc_pt;

// committing a store instruction
assign committing_instr  = rob_q[rob_commit_pt];
assign rob_sb_valid_o = committing_instr.wb & committing_instr.is_store & ~rob_mispredict_o;

// committing a reg write instruction
// clear freed register
// not a store, wb and write enabled
// committing_instr.freed is going to be freed, value contained is no longer valid
assign rob_phys_valid_o = committing_instr.wb & committing_instr.w_v & ~committing_instr.is_store & ~rob_mispredict_o;
assign rob_phys_reg_cl_o = committing_instr.freed_reg;

// misprediction detection variables
logic 					prev_spec_branch_n, prev_spec_branch;
logic [WORD_SIZE_P-1:0] predicted_pc_n, predicted_pc;

// save prediction meta data
assign prev_spec_branch_n = committing_instr.is_spec;
assign predicted_pc_n = committing_instr.resolved_pc;
// previous speculative branch and current pc does not match
assign rob_mispredict_o = committing_instr.wb && (committing_instr.pc != predicted_pc)
							&& prev_spec_branch;

// to renaming
assign rob_rename_valid_o = committing_instr.wb &  ~rob_mispredict_o;
commit_rename_t rename_entry;
assign rename_entry.w_v = committing_instr.w_v;
assign rename_entry.alloc_reg = committing_instr.alloc_reg;
assign rename_entry.freed_reg = committing_instr.freed_reg;
assign rob_rename_entry_o = rename_entry;

// to flagging
// valid, not a mispredict, at least one mask is high
assign rob_flag_valid_o = committing_instr.wb & ~rob_mispredict_o & (|committing_instr.flag_mask);
assign rob_flag_o = {committing_instr.flag_mask, committing_instr.flags};

`ifdef DEBUG
debug_t debug;
assign rob_debug_valid_o = committing_instr.wb & ~rob_mispredict_o;
assign debug.pc = committing_instr.pc;
assign debug.is_store = committing_instr.is_store;
assign debug.w_v = committing_instr.w_v;
assign debug.addr = committing_instr.addr;
assign debug.result = committing_instr.result;
assign rob_debug_o = debug;
`endif

always_comb
  begin
  	// default assignments
  	rob_n = rob_q;
  	rob_alloc_pt_n = rob_alloc_pt;
  	rob_commit_pt_n = rob_commit_pt;
  	rob_num_n = rob_num;

  	if (~rob_mispredict_o)  // not a mispredict
  	  begin
	  	// issue logics
	  	if (rob_issue_ready_o && issue_rob_valid_i)
	  	  begin
	  		rob_n[rob_alloc_pt] = issue_rob_entry_i;
	  		rob_alloc_pt_n++;
	  		rob_num_n--;
	  	  end

	  	// common data bus write logics
	  	for (int unsigned i = 0; i < ROB_ENTRY; i++)
	  	  begin
	  	  	for (int unsigned j = 0; j < NUM_FU; j++)
	  	  	  begin
	  	  	  	// not written back, rob entry match
	  	  	  	if (!rob_q[i].wb && cdb[j].valid 
	  	  	  		&& cdb[j].rob_dest == $clog2(ROB_ENTRY)'(i))
	  	  	  	  begin
	  	  	  	  	rob_n[i].wb = 1'b1;  // written back
`ifdef DEBUG
	  	  	  	  	if (rob_q[i].w_v)  // for debug purpose
	  	  	  	  	  begin
	  	  	  	  		rob_n[i].addr = cdb[j].dest;
	  	  	  	  		rob_n[i].result = cdb[j].result;
	  	  	  	  	  end
`endif
	  	  	  	  	// if rob entry is a speculative branch
	  	  	  	  	// write speculative 
	  	  	  	  	if (rob_q[i].is_spec)
	  	  	  	  	  begin
	  	  	  	  	  	rob_n[i].resolved_pc = cdb[j].result;
	  	  	  	  	  end
	  	  	  	  end
	  	  	  end
	  	  end

	  	// committing logics
	  	if (committing_instr.wb)
	  	  begin
	  	  	rob_commit_pt_n++;
	  	  	rob_num_n++;
	  	  end
	  end
	else
	  begin
	  	// misprediction flush everything in rob
	  	rob_n = '{default: 0};
	  	rob_alloc_pt_n = 0;
	  	rob_commit_pt_n = 0;
	  end
  end

// sequential processes
always_ff @(posedge clk_i)
  begin 
	if(reset_i)
	  begin
		rob_q 			 <= '{default: 0};
		rob_alloc_pt 	 <= '0;
		rob_commit_pt 	 <= '0;
		rob_num 		 <= ($clog2(ROB_ENTRY)+1)'(ROB_ENTRY);
		prev_spec_branch <= '0;
		predicted_pc     <= '0;
	  end 
	else 
	  begin
		rob_q 			 <= rob_n;
		rob_alloc_pt 	 <= rob_alloc_pt_n;
		rob_commit_pt 	 <= rob_commit_pt_n;
		rob_num 		 <= rob_num_n;
		prev_spec_branch <= prev_spec_branch_n;
		predicted_pc     <= predicted_pc_n;
	  end
  end
endmodule