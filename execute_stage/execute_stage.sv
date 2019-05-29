`include "Purple_Jade_pkg.svh"

module execute_stage #(
    parameter ISSUE_INSTRUTION_WIDTH = $bits(issued_instruction_t)
)
(input                                      clk_i
 , input                                    reset_i
 , input  [NUM_FU-1:0]                      issue_exe_v_i
 , input  [ISSUE_INSTRUTION_WIDTH-1:0]      issue_exe_i
`ifdef DEBUG
 , output [CDB_WIDTH-1:0]                   cdb_o [NUM_FU-1:0]
 , output [ROB_WB_WIDTH-1:0]                exe_rob_o [NUM_FU-1:0]
 , output [REG_WB_WIDTH-1:0]                exe_reg_o [NUM_FU-1:0]
`else 
 , output [NUM_FU-1:0][CDB_WIDTH-1:0]       cdb_o
 , output [NUM_FU-1:0][ROB_WB_WIDTH-1:0]    exe_rob_o
 , output [NUM_FU-1:0][REG_WB_WIDTH-1:0]    exe_reg_o
`endif
 // exe <-> store buffer
 , output logic                             lsu_sb_v_o
 , output [CDB_SB_WIDTH-1:0]                lsu_sb_o
 , output [WORD_SIZE_P-1:0]                 exe_ld_bypass_addr_o
 , output [$clog2(SB_ENTRY)-1:0]            exe_ld_bypass_sb_num_o
 , input                                    sb_ld_bypass_valid_i							
 , input  [WORD_SIZE_P-1:0]                 sb_ld_bypass_value_i
 // exe <-> mem interfaces
 , output [WORD_SIZE_P-1:0]                 lsu_addr_o
 , input  [WORD_SIZE_P-1:0]                 mem_data_i
 // misprediction
 , input                                    mispredict_i
);

// input output casting
/* verilator lint_off UNUSED */
issued_instruction_t issued;
assign issued = issue_exe_i;

/* verilator lint_on UNUSED */

// operand2
logic [WORD_SIZE_P-1:0] operand2;
assign operand2 = (issued.imm) ? issued.source2_imm : issued.source2_imm_data;

// UNUSED assignment
assign cdb_o[`DIV_FU] = '0;
assign exe_rob_o[`DIV_FU] = '0;
assign exe_reg_o[`DIV_FU] = '0;
assign cdb_o[`NOOP_FU] = '0;
assign exe_rob_o[`NOOP_FU] = '0;
assign exe_reg_o[`NOOP_FU] = '0;

// common data bus assignments
assign cdb_o[`ALU_FU] = exe_rob_o[`ALU_FU][ROB_WB_WIDTH-1-:CDB_WIDTH];
assign cdb_o[`LOGICAL_FU] = exe_rob_o[`LOGICAL_FU][ROB_WB_WIDTH-1-:CDB_WIDTH];
assign cdb_o[`MUL_FU] = exe_rob_o[`MUL_FU][ROB_WB_WIDTH-1-:CDB_WIDTH];

fu_alu alu_fu
( .exe_v_i   (issue_exe_v_i[`ALU_FU])
 ,.opcode_i  (issued.opcode)
 ,.operand1_i(issued.source_1_data)
 ,.operand2_i(operand2)
 ,.rob_dest_i(issued.rob_dest)
 ,.reg_dest_i(issued.dest_id)
 ,.alu_rob_o (exe_rob_o[`ALU_FU])
 ,.alu_reg_o (exe_reg_o[`ALU_FU])
 ,.*
);

fu_logic logic_fu
( .exe_v_i    (issue_exe_v_i[`LOGICAL_FU])
 ,.opcode_i   (issued.opcode)
 ,.operand1_i (issued.source_1_data)
 ,.operand2_i (operand2)
 ,.rob_dest_i (issued.rob_dest)
 ,.reg_dest_i (issued.dest_id)
 ,.logic_rob_o(exe_rob_o[`LOGICAL_FU])
 ,.logic_reg_o(exe_reg_o[`LOGICAL_FU])
 ,.*
);

fu_branch branch_fu
( .exe_v_i     (issue_exe_v_i[`BRANCH_FU])
 ,.opcode_i    (issued.opcode)
 ,.pc_i        (issued.pc)
 ,.operand1_i  (issued.source_1_data)
 ,.operand2_i  (operand2)
 ,.rob_dest_i  (issued.rob_dest)
 ,.reg_dest_i  (issued.dest_id)
 ,.branch_rob_o(exe_rob_o[`BRANCH_FU])
 ,.branch_reg_o(exe_reg_o[`BRANCH_FU])
 ,.cdb_o       (cdb_o[`BRANCH_FU])
 ,.*
);

fu_mult mult_fu
( .exe_v_i    (issue_exe_v_i[`MUL_FU])
 ,.operand1_i (issued.source_1_data)
 ,.operand2_i (operand2)
 ,.rob_dest_i (issued.rob_dest)
 ,.reg_dest_i (issued.dest_id)
 ,.mult_rob_o (exe_rob_o[`MUL_FU])
 ,.mult_reg_o (exe_reg_o[`MUL_FU])
 ,.*
);

fu_lsu lsu_fu
( .exe_v_i    (issue_exe_v_i[`MEM_FU])
 ,.opcode_i   (issued.opcode)
 ,.operand1_i (issued.source_1_data)
 ,.operand2_i (issued.source2_imm_data)
 ,.imm_i      (issued.source2_imm)
 ,.rob_dest_i (issued.rob_dest)
 ,.reg_dest_i (issued.dest_id)
 ,.lsu_rob_o  (exe_rob_o[`MEM_FU])
 ,.lsu_reg_o  (exe_reg_o[`MEM_FU])
 ,.cdb_o      (cdb_o[`MEM_FU])
 ,.sb_dest_i  (issued.sb_dest)
 ,.*
);
endmodule // execute_stage