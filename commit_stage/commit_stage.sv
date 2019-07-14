`include "Purple_Jade_pkg.svh"
`include "rename_def.svh"

module commit_stage
  ( input                                                  clk_i
  , input                                                  reset_i
  // execute register write back
  , input  [NUM_FU-1:0]                                    exe_w_v_i
  , input  [NUM_FU-1:0][$clog2(NUM_PHYS_REG)-1:0]          exe_addr_i
  , input  [NUM_FU-1:0][WORD_SIZE_P-1:0]                   exe_data_i
   // issue read ports
  , input	[$clog2(NUM_PHYS_REG)-1:0]                     issue_read_rs1_i
  , output logic                                           rs1_valid_o
  , output logic [WORD_SIZE_P-1:0]                         rs1_data_o
  , input  [$clog2(NUM_PHYS_REG)-1:0]                      issue_read_rs2_i
  , output logic                                           rs2_valid_o
  , output logic [WORD_SIZE_P-1:0]				   	       rs2_data_o
  // rename store buffer setup
  , input                                                  issue_sb_v_i /*verilator public*/
  , output [$clog2(SB_ENTRY)-1:0]                          sb_issue_entry_num_o	
  , output                                                 sb_issue_ready_o
  // execute-write back interfaces
  , input                                                  exe_sb_v_i
  , input  [CDB_SB_WIDTH-1:0]                              exe_sb_i
  // CDB-rob interface
  , input  [ROB_WB_WIDTH-1:0]                              cdb_i [NUM_FU-1:0]
  // CDB Intergace for RF
  , input   CDB_t                                          cdb [NUM_FU-1:0]
  // execute-memory interface
  , input  [WORD_SIZE_P-1:0]                               exe_mem_addr_i
  , output [WORD_SIZE_P-1:0]                               exe_mem_data_o
  // rename-rob interface
  , input                                                  rename_rob_valid_i
  , input  [RENAME_ROB_ENTRY_WIDTH-1:0]                    rename_rob_entry_i
  , output                                                 rob_rename_ready_o
  , output [$clog2(ROB_ENTRY)-1:0]                         rob_rename_entry_num_o
  // load bypass interfaces
  , input  [WORD_SIZE_P-1:0]                               exe_ld_bypass_addr_i
  , input  [$clog2(SB_ENTRY)-1:0]                          exe_ld_bypass_sb_num_i
  , output                                                 sb_ld_bypass_valid_o							
  , output [WORD_SIZE_P-1:0]                               sb_ld_bypass_value_o
  // rename-commit interface
  , output                                                 rob_rename_valid_o
  , output [COMMIT_RENAME_WIDTH-1:0]                       rob_rename_entry_o
  , output                                                 sb_rename_clear_st_v_o
  , output [$clog2(SB_ENTRY)-1:0]                          sb_rename_clear_st_num_o
  // rob-fe misprediction interface
  , output                                                 rob_mispredict_o
  , output [WORD_SIZE_P-1:0]                               rob_fe_redirected_pc_o
 `ifdef DEBUG
  , output                                                 rob_debug_valid_o	/*verilator public*/							
  , output [DEBUG_WIDTH-1:0]                               rob_debug_o/*verilator public*/
  , output [WORD_SIZE_P-1:0]                               rob_debug_pc_o/*verilator public*/
  , output                                                 rob_debug_w_v_o  /*verilator public*/             
  , output [$clog2(NUM_ARCH_REG)-1:0]                      rob_debug_reg_addr_o/*verilator public*/
  , output [WORD_SIZE_P-1:0]                               rob_debug_reg_val_o/*verilator public*/
 `endif
  , output [SB_ENTRY-1:0]                                  sb_wb_vector_o
  , output [$clog2(SB_ENTRY)-1:0]                          sb_commit_pt_o
 
  // interface for data_memory
  , output                                                 data_mem_w_v_i
  , output [WORD_SIZE_P-1:0]                               data_mem_w_addr_i
  , output [WORD_SIZE_P-1:0]                               data_mem_w_data_i
  , output                                                 data_mem_r_v_i
  , output [WORD_SIZE_P-1:0]                               data_mem_r_addr_i
  , input  [WORD_SIZE_P-1:0]                               data_mem_r_data_o
 );

  // rob <-> arch_state
  logic                                   rob_phys_valid;
  logic [$clog2(NUM_PHYS_REG)-1:0]        rob_phys_reg_cl;
  logic [$clog2(NUM_PHYS_REG)-1:0]        rob_phys_reg_set;
  logic                                   rob_flag_valid;
  logic [NUM_FLAGS*2-1:0]                 rob_flag;
  logic [NUM_FLAGS-1:0]                   flag_rob;
  
  // rob <-> store_buffer
  logic                                   rob_sb_valid /*verilator public*/;
  
  // store buffer <-> memory
  logic                                   sb_mem_v;
  logic [WORD_SIZE_P-1:0]                 sb_mem_addr;
  logic [WORD_SIZE_P-1:0]                 sb_mem_data;
  
  rob reorder_buffer
    ( .rob_phys_valid_o     (rob_phys_valid)
    ,.rob_phys_reg_cl_o     (rob_phys_reg_cl)
    ,.rob_sb_valid_o        (rob_sb_valid)
    ,.rob_flag_valid_o      (rob_flag_valid)
    ,.rob_flag_o            (rob_flag)
    ,.flag_rob_i            (flag_rob)
    ,.rob_phys_reg_set_o    (rob_phys_reg_set)
    ,.rob_debug_valid_o								
    ,.rob_debug_o
    ,.rob_debug_pc_o
    ,.rob_debug_w_v_o               
    ,.rob_debug_reg_addr_o
    ,.rob_debug_reg_val_o
    ,.*
    ); /*verilator public_module*/
  
  arch_state states
    ( .rob_phys_valid_i	    (rob_phys_valid)
    , .rob_phys_reg_cl_i	  (rob_phys_reg_cl)
    , .rob_flag_valid_i 	  (rob_flag_valid)
    , .rob_flag_i       	  (rob_flag)
    , .flag_rob_o           (flag_rob)
    , .rob_phys_reg_set_i   (rob_phys_reg_set)
    , .rob_phys_mispredict_i(rob_mispredict_o)
    , .cdb_i                (cdb)
    , .*
    );
  
  store_buffer sb
    ( .rob_sb_valid_i        (rob_sb_valid)
    , .rob_mispredict_i      (rob_mispredict_o)
    , .sb_mem_v_o            (sb_mem_v)
    , .sb_mem_addr_o         (sb_mem_addr)
    , .sb_mem_data_o         (sb_mem_data)
    , .*
    ); /*verilator public_module*/
  
  assign data_mem_w_v_i     = sb_mem_v;
  assign data_mem_w_addr_i  = sb_mem_addr;
  assign data_mem_w_data_i  = sb_mem_data;
  assign data_mem_r_addr_i  = exe_mem_addr_i;
  assign data_mem_r_v_i     = 1'b1;
  assign exe_mem_data_o     = data_mem_r_data_o;

endmodule // commit_stage