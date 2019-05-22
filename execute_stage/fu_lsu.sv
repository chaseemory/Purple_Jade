/*
 * fu_lsu.sv
 *
 * Two stage pipelined lsu.
 * Stage 1 : Address computatioin
 * Stage 2 : Bypassing logic
 */

`include "Purple_Jade_pkg.svh"

module fu_lsu
(input                                      clk_i
 , input                                    reset_i
 , input                                    exe_v_i
 , input  [WIDTH_OP-1:0]                    opcode_i
 , input  [WORD_SIZE_P-1:0]                 operand1_i
 , input  [WORD_SIZE_P-1:0]                 operand2_i  // content to be stored
 , input  [WORD_SIZE_P-1:0]                 imm_i 
 , input  [$clog2(ROB_ENTRY)-1:0]           rob_dest_i
 , input  [$clog2(NUM_PHYS_REG)-1:0]        reg_dest_i
 , input  [$clog2(SB_ENTRY)-1:0]            sb_dest_i  // loads use it for bypass
 , output [ROB_WB_WIDTH-1:0]                lsu_rob_o
 , output [REG_WB_WIDTH-1:0]                lsu_reg_o
 , output logic                             lsu_sb_v_o
 , output logic [CDB_SB_WIDTH-1:0]          lsu_sb_o
 , output logic [CDB_WIDTH-1:0]             cdb_o
 // bypass logic: exe <-> mem order buffer
 , output [WORD_SIZE_P-1:0]                 exe_ld_bypass_addr_o
 , output [$clog2(SB_ENTRY)-1:0]            exe_ld_bypass_sb_num_o
 , input                                    sb_ld_bypass_valid_i							
 , input  [WORD_SIZE_P-1:0]                 sb_ld_bypass_value_i
 // exe <-> mem interfaces
 , output [WORD_SIZE_P-1:0]                 lsu_addr_o
 , input  [WORD_SIZE_P-1:0]                 mem_data_i
 // mis-prediction
 , input                                    mispredict_i
);

// local parameter
parameter NUM_STAGE = 2;

// pipeline registers
logic [WORD_SIZE_P-1:0]               mem_addr_li;
logic [WORD_SIZE_P-1:0]               mem_addr_r, mem_data_r;
logic [NUM_STAGE-1:0]                 valid_pipe, valid_pipe_n;
logic [WIDTH_OP-1:0]                  opcode_r;
logic [$clog2(ROB_ENTRY)-1:0]         rob_dest_r;
logic [$clog2(NUM_PHYS_REG)-1:0]      reg_dest_r;
logic [$clog2(SB_ENTRY)-1:0]          sb_dest_r;

// output registers 
rob_wb_t                out, out_n;
reg_wb_t                reg_wb;
CDB_sb_t                sb_wb;
logic                   sb_v_r, sb_v;
logic [WORD_SIZE_P-1:0] result;

// output assignments
assign lsu_rob_o = out;
assign lsu_reg_o = reg_wb;
assign out_n.rob_dest = rob_dest_r;
assign out_n.cdb.valid = valid_pipe[NUM_STAGE-1];
assign out_n.cdb.dest = reg_dest_r;
assign out_n.cdb.flags = '0;
assign out_n.cdb.result = result;
assign reg_wb.w_v = valid_pipe[0] && (opcode_r == `LDR_OP);
assign reg_wb.cdb.valid = valid_pipe[0] && (opcode_r == `LDR_OP);
assign reg_wb.cdb.dest = reg_dest_r;
assign reg_wb.cdb.flags = '0;
assign reg_wb.cdb.result = result;

// address computation logic
assign mem_addr_li = $unsigned(operand1_i) + $unsigned(imm_i);

// to memory and store buffer assignments
assign exe_ld_bypass_sb_num_o = sb_dest_r;
assign exe_ld_bypass_addr_o = mem_addr_r;
assign lsu_addr_o = mem_addr_r;
assign sb_wb.sb_dest = sb_dest_r;
assign sb_wb.address = mem_addr_r;
assign sb_wb.result = result;

// valid bits assignments
assign valid_pipe_n = (mispredict_i) ? '0 : {valid_pipe[0], exe_v_i};
assign sb_v = (mispredict_i) ? '0 : (exe_v_i && (opcode_i == `STR_OP));

// result computations
always_comb
  begin
  	// default assignment
  	result = mem_data_r;
    
    if (opcode_r == `LDR_OP)
      begin
      	result = mem_data_i;

      	// if bypassing is valid
      	if (sb_ld_bypass_valid_i)
      		result = sb_ld_bypass_value_i;
      end
  end

// sequential process
always_ff @(posedge clk_i)
    if (reset_i)
      begin
        valid_pipe <= '0;
        mem_addr_r <= '0;
        mem_data_r <= '0;
        opcode_r <= 0;
        rob_dest_r <= 0;
        reg_dest_r <= 0;
        sb_dest_r <= 0;
        out <= '0;
        lsu_sb_o <= '0;
        cdb_o <= '0;
        sb_v_r <= '0;
        lsu_sb_v_o <= '0;
      end
    else
      begin
        valid_pipe <= valid_pipe_n;
        mem_addr_r <= mem_addr_li;
        mem_data_r <= operand2_i;
        opcode_r <= opcode_i;
        rob_dest_r <= rob_dest_i;
        reg_dest_r <= reg_dest_i;
        sb_dest_r <= sb_dest_i;
        out <= out_n;
        lsu_sb_o <= sb_wb;
        cdb_o <= reg_wb.cdb;
        sb_v_r <= sb_v;
        lsu_sb_v_o <= sb_v_r;
      end
endmodule // fu_lsu