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
 , input                                    rob_rename_valid_o
 , input  [COMMIT_RENAME_WIDTH-1:0]         rob_rename_entry_o
);

// rob
rob_t  [ROB_ENTRY-1:0] 					rob_q, rob_n;
logic  [$clog2(ROB_ENTRY)-1:0]			rob_alloc_pt, rob_alloc_pt_n;
logic  [$clog2(ROB_ENTRY)-1:0]			rob_commit_pt, rob_commit_pt_n;
logic  [$clog2(ROB_ENTRY):0]   			rob_num, rob_num_n;

// instruction being committed
rob_t 									committing_instr;

// ready valid signals
assign rob_issue_ready_o = rob_num != 0;
assign rob_issue_entry_num_o = rob_alloc_pt;

// committing a store instruction
assign committing_instr  = rob_q[rob_commit_pt];
assign rob_sb_valid_o = committing_instr.wb & committing_instr.is_store;

// committing a reg write instruction
// clear freed register
// not a store, wb and write enabled
// committing_instr.freed is going to be freed, value contained is no longer valid
assign rob_phys_valid_o = committing_instr.wb & committing_instr.w_v & ~committing_instr.is_store;
assign rob_phys_reg_cl_o = committing_instr.freed_reg;

always_comb
  begin
  	// default assignments
  	rob_n = rob_q;
  	rob_alloc_pt_n = rob_alloc_pt;
  	rob_commit_pt_n = rob_commit_pt;
  	rob_num_n = rob_num;

  	// issue logics
  	if (rob_issue_ready_o && issue_rob_valid_i)
  	  begin
  		rob_n[rob_alloc_pt] = issue_rob_entry_i;
  		rob_alloc_pt_n++;
  	  end

  	// common data bus write logics
  	for (int unsigned i = 0; i < ROB_ENTRY; i++)
  	  begin
  	  	for (int unsigned j = 0; j < NUM_FU; j++)
  	  	  begin
  	  	  	// not written back, rob entry match
  	  	  	if (~rob_q[i].wb && cdb_i[j].valid 
  	  	  		&& cdb_i[j].rob_dest == ($clog2(ROB_ENTRY))'(j))
  	  	  	  begin
  	  	  	  	//rob[].wb = 1'b1;  // written back
  	  	  	  	//rob[]
  	  	  	  end
  	  	  end
  	  end

  	// committing logics
  	if (committing_instr.wb)
  	  begin
  	  	rob_commit_pt_n++;
  	  end
  end

// sequential processes
always_ff @(posedge clk_i)
  begin 
	if(~reset_i)
	  begin
		rob_q 			<= '{default: 0};
		rob_alloc_pt 	<= '0;
		rob_commit_pt 	<= '0;
		rob_num 		<= ($clog2(ROB_ENTRY)+1)'(ROB_ENTRY);
	  end 
	else 
	  begin
		rob_q 			<= rob_n;
		rob_alloc_pt 	<= rob_alloc_pt_n;
		rob_commit_pt 	<= rob_commit_pt_n;
		rob_num 		<= rob_num_n;
	  end
  end
endmodule