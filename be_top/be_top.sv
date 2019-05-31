`ifdef VERILATOR
`include "Purple_Jade_pkg.svh"
`include "rename_def.svh"
`endif

module be_top
(input                                        clk_i
 , input                                      reset_i
 // fe/fifo <-> be/rename interface
 , input  [DECODED_INSTRUCTION_WIDTH-1:0]     decoded_i /*verilator public*/
 , input                                      decoded_v_i /*verilator public*/
 , output                                     rename_decode_ready_o
 // be/rob <-> fe/pc_next interface
 , output                                     be_fe_mispredict_o
 , output [WORD_SIZE_P-1:0]                   be_fe_redirected_pc_o
);

// renamed <-> issue
logic                                               rename_issue_v;
logic [RENAMED_INSTRUCTION_WIDTH-1:0]               rename_issue_entry /*verilator public*/;
logic                                               issue_renamed_ready;

// rename <-> commit/freeing registers
logic                                               commit_free_reg_v;
logic [COMMIT_RENAME_WIDTH-1:0]                     commit_rename_free_reg;

// rename <-> commit/rob&sb write
logic                                               rob_sb_rename_ready;
logic [$clog2(ROB_ENTRY)-1:0]                       rob_rename_num;
logic [$clog2(SB_ENTRY)-1:0]                        sb_rename_num;
logic [RENAME_ROB_ENTRY_WIDTH-1:0]                  rename_rob_entry /*verilator public*/;
logic                                               rename_rob_v;
logic                                               rename_sb_v;
logic                                               rob_ready, sb_ready;
assign rob_sb_rename_ready = rob_ready & sb_ready;

// rename <-> commit/sb
logic                                               sb_st_clear_valid;
logic [$clog2(SB_ENTRY)-1:0]                        sb_st_clear_entry;

// issued <-> execute
logic  [NUM_FU-1:0]                                 issue_exe_v;
issued_instruction_t                                issue_exe_entry /*verilator public*/;

// issued <-> store check
logic [ISSUE_ENTRY-1:0][$clog2(SB_ENTRY)-1:0]       issue_sb_num_vector /*verilator public*/;
logic [ISSUE_ENTRY-1:0]                             st_clear_vector     /*verilator public*/;

// issue <-> execute common data bus
CDB_t                                               cdb [NUM_FU-1:0];

// execute <-> commit/write physical reg
`ifdef DEBUG
reg_wb_t                                            reg_wb [NUM_FU-1:0];
`else 
reg_wb_t [NUM_FU-1:0]                               reg_wb;
`endif
logic    [NUM_FU-1:0]                               exe_reg_w_v;
logic    [NUM_FU-1:0][$clog2(NUM_PHYS_REG)-1:0]     exe_reg_addr;
logic    [NUM_FU-1:0][WORD_SIZE_P-1:0]              exe_reg_data;

generate
    genvar i;
    for (i = 0; i < NUM_FU; i++)
      begin
      	assign exe_reg_w_v[i]  = reg_wb[i].w_v;
      	assign exe_reg_addr[i] = reg_wb[i].cdb.dest;
      	assign exe_reg_data[i] = reg_wb[i].cdb.result;
      end
endgenerate

// execute <-> commit/read physical reg
logic [$clog2(NUM_PHYS_REG)-1:0]                    issue_rs1;
logic                                               rs1_valid;
logic [WORD_SIZE_P-1:0]                             rs1_data;
logic [$clog2(NUM_PHYS_REG)-1:0]                    issue_rs2;
logic                                               rs2_valid;
logic [WORD_SIZE_P-1:0]						        rs2_data;

// execute <-> commit/rob
`ifdef DEBUG
rob_wb_t                                            exe_rob_wb [NUM_FU-1:0];
`else
rob_wb_t [NUM_FU-1:0]                               exe_rob_wb;
`endif
// execute <-> commit/sb
logic                                               lsu_sb_v;
logic [CDB_SB_WIDTH-1:0]                            lsu_sb_entry;
logic [WORD_SIZE_P-1:0]                             lsu_mem_addr;
logic [WORD_SIZE_P-1:0]                             mem_lsu_data;
logic [WORD_SIZE_P-1:0]                             exe_ld_bypass_addr;
logic [$clog2(SB_ENTRY)-1:0]                        exe_ld_bypass_sb_num;
logic                                               sb_ld_bypass_valid;							
logic [WORD_SIZE_P-1:0]                             sb_ld_bypass_value;

// commit <-> store check
logic [SB_ENTRY-1:0]                                sb_wb_vector;
logic [$clog2(SB_ENTRY)-1:0]                        sb_commit_pt;

/* verilator lint_off UNOPTFLAT */

rename_stage rename
(  .renamed_o            (rename_issue_entry)
 , .renamed_v_o          (rename_issue_v)
 , .issue_rename_ready_i (issue_renamed_ready)
 // rob free registers
 , .commit_v_i           (commit_free_reg_v)
 , .commit_rename_i      (commit_rename_free_reg)
 , .mispredict_i         (be_fe_mispredict_o)
 // rename writing rob/sb
 , .rob_ready_i          (rob_sb_rename_ready)
 , .rob_num_i            (rob_rename_num)
 , .sb_num_i             (sb_rename_num)
 , .rename_rob_o         (rename_rob_entry)
 , .rename_rob_v_o       (rename_rob_v)
 , .rename_sb_v_o        (rename_sb_v)
 // prev store
 , .sb_st_clear_valid_i  (sb_st_clear_valid)
 , .sb_st_clear_entry_i  (sb_st_clear_entry)
 , .*
);

issue_table issue
(  .new_instr_addr_1     (issue_rs1)
 , .new_instr_addr_2     (issue_rs2)
 , .new_instr_data_1_v   (rs1_valid)
 , .new_instr_data_2_v   (rs2_valid)
 , .new_instr_data_1     (rs1_data)
 , .new_instr_data_2     (rs2_data)
 , .instruction_i        (rename_issue_entry)
 , .valid_i              (rename_issue_v)
 , .ready_o              (issue_renamed_ready)
 // output to execute
 , .instruction_o        (issue_exe_entry)
 , .valid_o              (issue_exe_v)
 // prev store
 , .issue_sb_num_vector_o(issue_sb_num_vector)
 , .st_clear_vector_i    (st_clear_vector)
 // common data bus
 , .cdb                  (cdb)
 , .*
);

execute_stage execute
(  .issue_exe_v_i         (issue_exe_v)
 , .issue_exe_i           (issue_exe_entry)
 , .cdb_o                 (cdb)
 , .exe_rob_o             (exe_rob_wb)
 , .exe_reg_o             (reg_wb)
 , .lsu_sb_v_o            (lsu_sb_v)
 , .lsu_sb_o              (lsu_sb_entry)
 , .exe_ld_bypass_addr_o  (exe_ld_bypass_addr)
 , .exe_ld_bypass_sb_num_o(exe_ld_bypass_sb_num)
 , .sb_ld_bypass_valid_i  (sb_ld_bypass_valid)
 , .sb_ld_bypass_value_i  (sb_ld_bypass_value)
 , .lsu_addr_o            (lsu_mem_addr)
 , .mem_data_i            (mem_lsu_data)
 , .mispredict_i          (be_fe_mispredict_o)
 , .*
);

prev_st_check store_check
(  .issue_sb_num_vector_i(issue_sb_num_vector)
 , .sb_wb_vector_i       (sb_wb_vector)
 , .sb_commit_pt_i       (sb_commit_pt)
 , .st_clear_vector_o    (st_clear_vector)
);

commit_stage commit
(  .exe_w_v_i               (exe_reg_w_v)
 , .exe_addr_i              (exe_reg_addr)
 , .exe_data_i              (exe_reg_data)
 // to issue
 , .issue_read_rs1_i        (issue_rs1)
 , .rs1_valid_o             (rs1_valid)
 , .rs1_data_o              (rs1_data)
 , .issue_read_rs2_i        (issue_rs2)
 , .rs2_valid_o             (rs2_valid)
 , .rs2_data_o              (rs2_data)
 // rename write to sb
 , .issue_sb_v_i            (rename_sb_v)
 , .sb_issue_entry_num_o    (sb_rename_num)
 , .sb_issue_ready_o        (sb_ready)
 // sb write back
 , .exe_sb_v_i              (lsu_sb_v)
 , .exe_sb_i                (lsu_sb_entry)
 // rob write back
 , .cdb_i                   (exe_rob_wb)
 // execute memory
 , .exe_mem_addr_i          (lsu_mem_addr)
 , .exe_mem_data_o          (mem_lsu_data)
 // rename write to rob
 , .rename_rob_valid_i      (rename_rob_v)
 , .rename_rob_entry_i      (rename_rob_entry)
 , .rob_rename_ready_o      (rob_ready)
 , .rob_rename_entry_num_o  (rob_rename_num)
 // load bypassing
 , .exe_ld_bypass_addr_i    (exe_ld_bypass_addr)
 , .exe_ld_bypass_sb_num_i  (exe_ld_bypass_sb_num)
 , .sb_ld_bypass_valid_o    (sb_ld_bypass_valid)
 , .sb_ld_bypass_value_o    (sb_ld_bypass_value)
 // rob free register
 , .rob_rename_valid_o      (commit_free_reg_v)
 , .rob_rename_entry_o      (commit_rename_free_reg)
 // sb clearing wfs
 , .sb_rename_clear_st_v_o  (sb_st_clear_valid)
 , .sb_rename_clear_st_num_o(sb_st_clear_entry)
 // misprediction
 , .rob_mispredict_o        (be_fe_mispredict_o)
 , .rob_fe_redirected_pc_o  (be_fe_redirected_pc_o)
 // to prev store check
 , .sb_wb_vector_o          (sb_wb_vector)
 , .sb_commit_pt_o          (sb_commit_pt)
 , .rob_debug_valid_o       ()
 , .rob_debug_o             ()
 , .*
);
/* verilator lint_on UNOPTFLAT */
endmodule // be_top