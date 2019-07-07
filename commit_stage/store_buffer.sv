`include "Purple_Jade_pkg.svh"

module store_buffer
  ( input                                      clk_i
  , input                                      reset_i
  // commit-store buffer interfaces  
  , input                                      rob_sb_valid_i
  , input                                      rob_mispredict_i
  // issue-store buffer interfaces  
  , input                                      issue_sb_v_i
  , output [$clog2(SB_ENTRY)-1:0]              sb_issue_entry_num_o	
  , output                                     sb_issue_ready_o
  // execute-write back interfaces  
  , input                                      exe_sb_v_i  /*verilator public*/
  , input  [CDB_SB_WIDTH-1:0]                  exe_sb_i    /*verilator public*/
  // load bypass interfaces  
  , input  [WORD_SIZE_P-1:0]                   exe_ld_bypass_addr_i
  , input  [$clog2(SB_ENTRY)-1:0]              exe_ld_bypass_sb_num_i
  , output                                     sb_ld_bypass_valid_o							
  , output [WORD_SIZE_P-1:0]                   sb_ld_bypass_value_o
  // sb to memory interfaces  
  , output                                     sb_mem_v_o     /*verilator public*/
  , output [WORD_SIZE_P-1:0]                   sb_mem_addr_o  /*verilator public*/
  , output [WORD_SIZE_P-1:0]                   sb_mem_data_o  /*verilator public*/
  // sb to rename to clear pending store bits
  , output                                     sb_rename_clear_st_v_o    /*verilator public*/
  , output [$clog2(SB_ENTRY)-1:0]              sb_rename_clear_st_num_o  /*verilator public*/
  // sb to issue store check  
  , output [SB_ENTRY-1:0]                      sb_wb_vector_o
  , output [$clog2(SB_ENTRY)-1:0]              sb_commit_pt_o
  );

  // store buffer
  store_buffer_t [SB_ENTRY-1:0]     sb_n, sb_q;
  logic  [$clog2(SB_ENTRY)-1:0]     sb_alloc_pt, sb_alloc_pt_n;
  logic  [$clog2(SB_ENTRY)-1:0]     sb_commit_pt, sb_commit_pt_n;
  logic  [$clog2(SB_ENTRY):0]       sb_num, sb_num_n;
  
  // issue interfaces assignments
  assign sb_issue_entry_num_o = sb_alloc_pt;
  assign sb_issue_ready_o     = (sb_num != 0) && !rob_mispredict_i;
  
  // CDB type casting
  CDB_sb_t cdb;
  assign cdb = exe_sb_i;
  
  // sb to mem value assignments
  assign sb_mem_v_o    = rob_sb_valid_i & sb_q[sb_commit_pt].wb;
  assign sb_mem_addr_o = sb_q[sb_commit_pt].address;
  assign sb_mem_data_o = sb_q[sb_commit_pt].result;
  
  // sb to execute bypass
  logic address_match;
  logic [WORD_SIZE_P-1:0] data_match;
  assign sb_ld_bypass_valid_o = address_match & ~rob_mispredict_i;
  assign sb_ld_bypass_value_o = data_match;
  
  // bypass variables
  logic [SB_ENTRY-1:0]             match_vector;
  logic [SB_ENTRY-1:0]             trimed_match_vector;
  logic [$clog2(SB_ENTRY)-1:0]     trimed_sb_num, matched_trimed_sb_num, matched_sb_num;
  
  // bypass logic assignments
  assign trimed_sb_num  = $unsigned(exe_ld_bypass_sb_num_i) - $unsigned(sb_commit_pt);
  assign matched_sb_num = $unsigned(matched_trimed_sb_num) + $unsigned(sb_commit_pt);
  assign data_match     = sb_q[matched_sb_num].result;
  
  // shifting logics
  /* verilator lint_off UNUSED */
  logic [SB_ENTRY*2-1:0]    shift_temp;
  assign shift_temp = {match_vector, match_vector} >> sb_commit_pt;
  assign trimed_match_vector = shift_temp[0+:SB_ENTRY];
  /* verilator lint_on UNUSED */
  
  generate
    genvar j;
    for (j = 0; j < SB_ENTRY; j++)
      assign sb_wb_vector_o[j] = sb_q[j].wb;
  endgenerate

  assign sb_commit_pt_o = sb_commit_pt;
  
  // sb to renaming to clear valid store bits
  assign sb_rename_clear_st_v_o = sb_mem_v_o;
  assign sb_rename_clear_st_num_o = sb_commit_pt;
  
  always_comb begin
    // default assignments
    sb_n = sb_q;
    sb_alloc_pt_n = sb_alloc_pt;
    sb_commit_pt_n = sb_commit_pt;
    sb_num_n = sb_num;
  
    // issue logic
    // most of time wb is zero and result is written
    if (issue_sb_v_i) begin
        sb_n[sb_alloc_pt].wb = 1'b0;
        sb_alloc_pt_n++;
        sb_num_n--;
    end
  
      // common data bus write back
      // a store writing back its address and result
      if (exe_sb_v_i) begin
        sb_n[cdb.sb_dest].wb = 1'b1;
        sb_n[cdb.sb_dest].address = cdb.address;
        sb_n[cdb.sb_dest].result = cdb.result;
      end
  
      // commit logic assignments
      // address written back & valid pop from rob
      if (sb_mem_v_o) begin
        sb_n[sb_commit_pt].wb = 1'b0;
        sb_commit_pt_n++;
        sb_num_n++;
      end
  
      // misprediction flush everything
      if (rob_mispredict_i) begin    
        sb_n = '{default: 0};
        sb_alloc_pt_n = '0;
        sb_commit_pt_n = '0;
`ifdef VERILATOR
        sb_num_n = ($clog2(SB_ENTRY)+1)'(SB_ENTRY);
`else 
        sb_num_n = 5'd16;
`endif
      end
    end
  
  // load bypass match vector
  always_comb begin
    match_vector = '0;
  
    for (int unsigned i = 0; i < SB_ENTRY; i++)
      // computing match vector
      if (sb_q[i].wb == 1'b1 && (sb_q[i].address == exe_ld_bypass_addr_i))
          match_vector[i] = 1'b1;
  end
  
  // matched logics
  always_comb begin
    address_match = '0;
    matched_trimed_sb_num = '0;
  
    for (int unsigned i = 0; i < SB_ENTRY; i++) begin
      // finding match
`ifdef VERILATOR
      if (trimed_match_vector[i] == 1'b1 && ($clog2(SB_ENTRY))'(i) <= trimed_sb_num) begin
        address_match = 1'b1;
        matched_trimed_sb_num  = ($clog2(SB_ENTRY))'(i);
      end
`else
      if (trimed_match_vector[i] == 1'b1 && i <= trimed_sb_num) begin
        address_match = 1'b1;
        matched_trimed_sb_num  = i;
      end
`endif
    end
  end
  
  // sequential processes
  always_ff @(posedge clk_i) begin     
    if(reset_i) begin
      sb_q             <= '{default: 0};
      sb_alloc_pt      <= '0;
      sb_commit_pt     <= '0;

`ifdef VERILATOR
      sb_num           <= ($clog2(SB_ENTRY)+1)'(SB_ENTRY);
`else 
      sb_num           <= 5'd16;
`endif

    end else begin
      sb_q             <= sb_n;
      sb_alloc_pt      <= sb_alloc_pt_n;
      sb_commit_pt     <= sb_commit_pt_n;
      sb_num           <= sb_num_n;
    end
  end
endmodule