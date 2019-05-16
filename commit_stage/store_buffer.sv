`include "Purple_Jade_pkg.svh";
`include "rob_def.svh"

module store_buffer
(input                                      clk_i
 , input                                    reset_i
 // commit-store buffer interfaces
 , input                                    rob_sb_valid_i
 , input                                    rob_mispredict_i

 // issue-store buffer interfaces
 , input                                    issue_sb_v_i
 , input  [STORE_BUFFER_WIDTH-1:0]          issue_sb_i
 , output [$clog2(SB_ENTRY)-1:0]            sb_issue_entry_num_o	
 , output                                   sb_issue_ready_o

 // execute-write back interfaces
 , input                                    exe_sb_v_i
 , input  [CDB_SB_WIDTH-1:0]                exe_sb_i
 // load bypass interfaces
 , input  [WORD_SIZE_P-1:0]                 exe_ld_bypass_addr_i
 , output                                   sb_ld_pass_valid_o							
 , output [WORD_SIZE_P-1:0]                 sb_ld_pass_value_o
 // sb to memory interfaces
 , output                                   sb_mem_v_o
 , output [WORD_SIZE_P-1:0]                 sb_mem_addr_o
 , output [WORD_SIZE_P-1:0]                 sb_mem_data_o
);

// store buffer
store_buffer_t [SB_ENTRY-1:0]     sb_n, sb;
logic  [$clog2(SB_ENTRY)-1:0]     sb_alloc_pt, sb_alloc_pt_n;
logic  [$clog2(SB_ENTRY)-1:0]     sb_commit_pt, sb_commit_pt_n;
logic  [$clog2(SB_ENTRY):0]       sb_num, sb_num_n;

// issue interfaces assignments
assign sb_issue_entry_num_o = sb_alloc_pt;
assign sb_issue_ready_o = (sb_num != 0) && !rob_mispredict_i;

// CDB type casting
CDB_sb_t cdb;
assign cdb = exe_sb_i;

// sb to mem value assignments
assign sb_mem_v_o = rob_sb_valid_i & sb_q[sb_commit_pt].wb;
assign sb_mem_addr_o = sb_q[sb_commit_pt].address;
assign sb_mem_data_o = sb_q[sb_commit_pt].result;

// sb to execute bypass
logic address_match;
logic [WORD_SIZE_P-1:0] data_match;
assign sb_ld_pass_valid_o = address_match & ~rob_mispredict_i;
assign sb_ld_pass_value_o = data_match;

always_comb
  begin
  	// default assignments
  	sb_n = sb_q;
  	sb_alloc_pt_n = sb_alloc_pt;
  	sb_commit_pt_n = sb_commit_pt;
  	sb_num_n = sb_num;

  	// issue logic
  	// most of time wb is zero and result is written
  	if (issue_sb_v_i)
  	  begin
  	  	sb_n[sb_alloc_pt] = issue_sb_i;
  	  	sb_alloc_pt_n++;
  	  	sb_num_n--;
  	  end

  	// common data bus write back
  	// a store writing back its address
  	if (exe_sb_v_i)
  	  begin
  		sb_n[cdb.sb_dest].wb = 1'b1;
 		sb_n[cdb.sb_dest].address = cdb.address;
  	  end

  	// commit logic assignments
  	// address written back & valid pop from rob
  	if (sb_mem_v_o)
  	  begin
  	  	sb_n[sb_commit_pt].wb = 1'b0;
  	  	sb_commit_pt++;
  	  	sb_num_n++;
  	  end

  	// misprediction flush everything
  	if (rob_mispredict_i)
  	  begin
		sb_n = '{default: 0};
		sb_alloc_pt_n = '0;
		sb_commit_pt_n = '0;
		sb_num_n = ($clog2(SB_ENTRY)+1)'(SB_ENTRY);
	  end
  end

// load bypass logics
always_comb
  begin
  	address_match = 1'b0;
  	data_match = '0;

  	// for loop acts as an priority encoder
  	for (int unsigned i = 0; i < SB_ENTRY; i++)
  	  begin
  	  	if (sb[i].wb && sb[i].address == exe_ld_bypass_addr_i)
  	  	  begin
  	  	  	address_match = 1'b1;
  	  	  	data_match = sb[i].result;
  	  	  end	
  	  end
  end

// sequential processes
always_ff @(posedge clk_i)
  begin 
	if(reset_i)
	  begin
		sb 				 <= '{default: 0};
		sb_alloc_pt 	 <= '0;
		sb_commit_pt 	 <= '0;
		sb_num 		 	 <= ($clog2(SB_ENTRY)+1)'(SB_ENTRY);
	  end 
	else 
	  begin
		sb 				 <= sb_n;
		sb_alloc_pt 	 <= sb_alloc_pt_n;
		sb_commit_pt 	 <= sb_commit_pt_n;
		sb_num 		 	 <= sb_num_n;
	  end
  end
endmodule