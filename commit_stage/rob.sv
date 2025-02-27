`include "Purple_Jade_pkg.svh"
`include "rename_def.svh"

module rob
  ( input                                clk_i
  , input                                reset_i
  
  // CDB-rob interface
  , input  [ROB_WB_WIDTH-1:0]            cdb_i [NUM_FU-1:0]
  // rename-rob interface
  , input                                rename_rob_valid_i
  , input  [RENAME_ROB_ENTRY_WIDTH-1:0]  rename_rob_entry_i
  , output                               rob_rename_ready_o
  , output [$clog2(ROB_ENTRY)-1:0]       rob_rename_entry_num_o
  // rob-physical register interface
  , output                               rob_phys_valid_o
  , output [$clog2(NUM_PHYS_REG)-1:0]    rob_phys_reg_cl_o
  , output [$clog2(NUM_PHYS_REG)-1:0]    rob_phys_reg_set_o
  // rob-store buffer interface: pop signal to store buffer
  , output                               rob_sb_valid_o
  , output                               rob_mispredict_o
  , output [WORD_SIZE_P-1:0]             rob_fe_redirected_pc_o /*verilator public*/
  // rename-commit interface
  , output                               rob_rename_valid_o  /*verilator public*/
  , output [COMMIT_RENAME_WIDTH-1:0]     rob_rename_entry_o  /*verilator public*/
  // commit-flag interface
  , output                               rob_flag_valid_o
  , output [NUM_FLAGS*2-1:0]             rob_flag_o
  , input  [NUM_FLAGS-1:0]               flag_rob_i
  // exe-commit flag read
  `ifdef DEBUG
  , output                               rob_debug_valid_o	/*verilator public*/							
  , output [DEBUG_WIDTH-1:0]             rob_debug_o/*verilator public*/
  , output [WORD_SIZE_P-1:0]             rob_debug_pc_o/*verilator public*/
  , output                               rob_debug_w_v_o  /*verilator public*/             
  , output [$clog2(NUM_ARCH_REG)-1:0]    rob_debug_reg_addr_o/*verilator public*/
  , output [WORD_SIZE_P-1:0]             rob_debug_reg_val_o/*verilator public*/
  `endif
  );

  // input output casting
  rob_wb_t cdb [NUM_FU-1:0] /*verilator public*/;
  assign cdb = cdb_i;
  
  // rob
  `ifdef DEBUG
  rob_t                           rob_q [ROB_ENTRY-1:0] /*verilator public*/;
  rob_t                           rob_n [ROB_ENTRY-1:0];
  `else
  rob_t [ROB_ENTRY-1:0]           rob_q, rob_n;
  `endif
  logic  [$clog2(ROB_ENTRY)-1:0]  rob_alloc_pt, rob_alloc_pt_n;
  logic  [$clog2(ROB_ENTRY)-1:0]  rob_commit_pt, rob_commit_pt_n;
  logic  [$clog2(ROB_ENTRY):0]    rob_num, rob_num_n /*verilator public*/;
  
  // instruction being committed
  rob_t                           committing_instr/*verilator public*/;
  
  // ready valid signals
  assign rob_rename_ready_o = (rob_num != 0) & ~rob_mispredict_o;
  
  // committing a store instruction
  assign committing_instr       = rob_q[rob_commit_pt];
  assign rob_sb_valid_o         = committing_instr.wb & committing_instr.is_store & ~rob_mispredict_o & committing_instr.valid;
  assign rob_rename_entry_num_o = rob_alloc_pt;
  
  // committing a reg write instruction
  // clear freed register
  // not a store, wb and write enabled
  // committing_instr.freed is going to be freed, value contained is no longer valid
  assign rob_phys_valid_o   = committing_instr.wb & committing_instr.w_v & ~committing_instr.is_store & ~rob_mispredict_o & committing_instr.valid;
  assign rob_phys_reg_cl_o  = committing_instr.freed_reg;
  assign rob_phys_reg_set_o = committing_instr.addr[0+:$clog2(NUM_PHYS_REG)];

  // misprediction detection variables
  logic [WORD_SIZE_P-1:0]   predicted_pc;
  logic [WORD_SIZE_P-1:0]	  condition_pc;
  logic                     condition_taken;
  logic                     N, Z, V, C;  // current flags

  // save prediction meta data
  assign C = flag_rob_i[c];
  assign N = flag_rob_i[n];
  assign Z = flag_rob_i[z];
  assign V = flag_rob_i[v];
  
  // condition_pc is targeted address for conditional branch
  assign condition_pc = (condition_taken) ? (committing_instr.resolved_pc) : (committing_instr.pc + 1);
  assign predicted_pc = (committing_instr.is_cond_branch) ? condition_pc : committing_instr.resolved_pc;

  // previous speculative branch and current pc does not match
  assign rob_mispredict_o = (committing_instr.predicted_pc != predicted_pc) && committing_instr.valid && committing_instr.is_spec && committing_instr.wb;  // mismatch of pcs
  assign rob_fe_redirected_pc_o = predicted_pc;
  
  // to renaming
  assign rob_rename_valid_o = committing_instr.wb &  ~rob_mispredict_o & committing_instr.valid;
  commit_rename_t rename_entry;
  assign rename_entry.w_v = committing_instr.w_v;

  // used to update non speculative renaming table
  assign rename_entry.alloc_reg = committing_instr.alloc_reg;
  assign rename_entry.freed_reg = committing_instr.freed_reg;
  assign rob_rename_entry_o     = rename_entry;
  
  // to flagging
  // valid, not a mispredict, at least one mask is high
  assign rob_flag_valid_o = committing_instr.wb & ~rob_mispredict_o & (|committing_instr.flag_mask);
  assign rob_flag_o       = {committing_instr.flag_mask, committing_instr.flags};
  
  `ifdef DEBUG
  debug_t debug;
  assign rob_debug_valid_o    = committing_instr.wb & committing_instr.valid;
  assign debug.pc             = committing_instr.pc;
  assign debug.is_store       = committing_instr.is_store;
  assign debug.w_v            = committing_instr.w_v;
  assign debug.addr           = committing_instr.addr;
  assign debug.result         = committing_instr.result;
  assign rob_debug_o          = debug;
  assign rob_debug_pc_o       = committing_instr.pc;
  assign rob_debug_w_v_o      = committing_instr.w_v;
  assign rob_debug_reg_addr_o = committing_instr.alloc_reg;
  assign rob_debug_reg_val_o  = committing_instr.result;
  `endif
  
  always_comb begin : conditional_taken   
    unique case(committing_instr.bcc_op)
      `EQ 	   : condition_taken = Z;
      `NE 	   : condition_taken = ~Z;
      `CS 	   : condition_taken = C;
      `CC 	   : condition_taken = ~C;
      `MI 	   : condition_taken = N;
      `PL 	   : condition_taken = ~N;
      `VS 	   : condition_taken = V;
      `VC 	   : condition_taken = ~V;
      `HI 	   : condition_taken = C & ~Z;
      `LS 	   : condition_taken = ~C | Z;
      `GE 	   : condition_taken = N == V;
      `LT 	   : condition_taken = (~N) == V;
      `GT 	   : condition_taken = ~Z && (N == V);
      `LE 	   : condition_taken = Z || ((~N) == V);
      `AL 	   : condition_taken = 1'b1;
       default : condition_taken = 1'b0;
    endcase
  end
  
  always_comb begin
    // default assignments
    rob_n = rob_q;
    rob_alloc_pt_n = rob_alloc_pt;
    rob_commit_pt_n = rob_commit_pt;
    rob_num_n = rob_num;

    // not a mispredict
    if (~rob_mispredict_o) begin
      // issue logics
      if (rob_rename_ready_o & rename_rob_valid_i) begin
        rob_n[rob_alloc_pt] = rename_rob_entry_i;
        rob_n[rob_alloc_pt].valid = 1'b1;  // valid set
        rob_alloc_pt_n++;
        rob_num_n--;
      end

      // common data bus write logics
      for (int unsigned i = 0; i < ROB_ENTRY; i++) begin

        for (int unsigned j = 0; j < NUM_FU; j++) begin
          // not written back, rob entry match
`ifdef VERILATOR
          if (!rob_q[i].wb && cdb[j].cdb.valid 
              && cdb[j].rob_dest == $clog2(ROB_ENTRY)'(i)) begin
`else 
            if (!rob_q[i].wb && cdb[j].cdb.valid 
                && cdb[j].rob_dest == i) begin
`endif 
                
              rob_n[i].wb     = 1'b1;  // written back
              rob_n[i].flags  = cdb[j].cdb.flags;
`ifdef DEBUG
              if (rob_q[i].w_v) begin
                rob_n[i].addr   = {9'b0, cdb[j].cdb.dest};
                rob_n[i].result = cdb[j].cdb.result;
              end
`endif
              // if rob entry is a speculative branch
              // bx write target address
              // bcond write taken address
              if (rob_q[i].is_spec) begin
                rob_n[i].resolved_pc = cdb[j].cdb.result;
              end
            end
          end
        end
  
      // committing logics
      if (committing_instr.wb) begin
        rob_n[rob_commit_pt].wb     = 1'b0;
        rob_n[rob_commit_pt].valid  = 1'b0;  // valid clear
        rob_commit_pt_n++;
        rob_num_n++;
      end    
    end
    else begin
      // misprediction flush everything in rob
      rob_n           = '{default: 0};
      rob_alloc_pt_n  = 0;
      rob_commit_pt_n = 0;
      rob_num_n       = ($clog2(ROB_ENTRY)+1)'(ROB_ENTRY);
    end
  end
  
  always_ff @(posedge clk_i) begin : sequential_process 

    if(reset_i) begin
      rob_q            <= '{default: 0};
      rob_alloc_pt     <= '0;
      rob_commit_pt    <= '0;
      rob_num          <= ($clog2(ROB_ENTRY)+1)'(ROB_ENTRY);
    end // if(reset_i)
    else begin
      rob_q            <= rob_n;
      rob_alloc_pt     <= rob_alloc_pt_n;
      rob_commit_pt    <= rob_commit_pt_n;
      rob_num          <= rob_num_n;
    end

  end // sequential_process

endmodule