`include "Purple_Jade_pkg.svh"

`ifndef _ISSUE_RESERVATION_PKG_
`define _ISSUE_RESERVATION_PKG_

typedef struct packed
{
  logic [$clog2(NUM_PHYS_REG)-1:0]        dest_id;
  logic                                   source_1_v;
  logic [$clog2(NUM_PHYS_REG)-1:0]        source_1_id;
  logic [WORD_SIZE_P-1:0]                 source_1_data;
  logic                                   source_2_v;
  logic [WORD_SIZE_P-1:0]                 source2_imm;
  logic [WORD_SIZE_P-1:0]                 source2_imm_data;
  logic [WORD_SIZE_P-1:0]                 pc;
  logic [$clog2(INSTRUCTION_OP_NUM)-1:0]  opcode;
  logic [$clog2(NUM_FU)-1:0]              func_unit;
  logic [NUM_FLAGS-1:0]                   flags;
  logic [$clog2(BRANCH_CC_NUM)-1:0]       bcc_op;
  logic                                   branch_speculation;
  logic                                   w_v;
  logic                                   imm;
  logic [$clog2(NUM_PHYS_REG)-1:0]        freed_reg;   /* those two fileds */
  logic [$clog2(NUM_ARCH_REG)-1:0]        alloc_reg;   /* are used for commit */
  } issued_instruction_t;




  `endif