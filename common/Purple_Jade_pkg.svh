`ifndef _PURPLE_JADE_PKG_
`define _PURPLE_JADE_PKG_
// Parameters

parameter I_ROM_DEPTH_P                   = 65536;
parameter WORD_SIZE_P                     = 16;
parameter NUM_FLAGS                       = 4;

parameter NUM_ARCH_REG                    = 16;
parameter NUM_ARCH_DEST_REG               = 8;
parameter NUM_ARCH_SRC1_REG               = 8;

parameter BRANCH_CC_NUM                   = 15;

parameter NUM_FU                          = 7;
parameter WIDTH_FU                        = $clog2(NUM_FU);
/*   FUNCTIONAL UNITS
move = 0
alu = 1
logical = 2
mem = 3
branch = 4
mul =5
div = 6
*/
`define MOVE_FU     WIDTH_FU'd0
`define ALU_FU      WIDTH_FU'd1
`define LOGICAL_FU  WIDTH_FU'd2
`define MEM_FU      WIDTH_FU'd3
`define BRANCH_FU   WIDTH_FU'd4
`define MUL_FU      WIDTH_FU'd5
`define DEV_FU      WIDTH_FU'd6


parameter NUM_DEST_SRC                    = 4;
parameter NUM_S1_SRC                      = 4;
parameter NUM_S2_IMM_SRC                  = 8;

parameter INSTRUCTION_OP_NUM              = 8;

parameter WIDTH_OP                        = $clog2(INSTRUCTION_OP_NUM);
parameter WIDTH_DEST                      = $clog2(NUM_ARCH_DEST_REG);
parameter WIDTH_S1                        = $clog2(NUM_S1_SRC);
parameter WIDTH_IMM                       = $clog2(NUM_S2_IMM_SRC);

// Used to describe what logical op, branch type, load/store
/*
  alu op
  000 - ADD
  001 - SUB

  logical op
  000 - AND
  001 - XOR
  010 - OR
  011 - NEG
  100 - LSLS
  101 - LSRS
  110 - ASRS
  111 - RORS

  Branch typ
  000 - CC
  001 - B
  010 - BL
  011 - BX

  Mem type
  000 - store
  001 - load
*/
`define ADD_OP  WIDTH_OP'd0
`define SUB_OP  WIDTH_OP'd1

`define AND_OP  WIDTH_OP'd0
`define XOR_OP  WIDTH_OP'd1
`define OR_OP   WIDTH_OP'd2
`define NEG_OP  WIDTH_OP'd3
`define LSLS_OP WIDTH_OP'd4
`define LSRS_OP WIDTH_OP'd5
`define ASRS_OP WIDTH_OP'd6
`define RORS_OP WIDTH_OP'd7

`define BCC_OP  WIDTH_OP'd0
`define B_OP    WIDTH_OP'd1
`define BL_OP   WIDTH_OP'd2
`define BX_OP   WIDTH_OP'd3

`define STR_OP  WIDTH_OP'd0
`define LDR_OP  WIDTH_OP'd1

parameter DECODED_INSTRUCTION_WIDTH       = 2 * $clog2(NUM_ARCH_REG) + 2*WORD_SIZE_P + 
                                            $clog2(INSTRUCTION_OP_NUM) + $clog2(NUM_FU) + NUM_FLAGS + $clog2(BRANCH_CC_NUM) + 2;
                                  
parameter UCODE_WIDTH_P                   = 1 + WIDTH_OP + WIDTH_FU + NUM_FLAGS + WIDTH_DEST + WIDTH_S1 + WIDTH_IMM;

`define declare_decoded_instruction(num_reg, word_size_p, num_ops, num_fu, num_flags, branch_cc_num)  \
typedef struct packed                                                                   \
{                                                                                       \
  logic [$clog2(num_reg)-1:0]             dest_id;                                      \
  logic [$clog2(num_reg)-1:0]             source_1;                                     \
  logic [word_size_p-1:0]                 source2_imm;                                  \
  logic [word_size_p-1:0]                 pc;                                           \
  logic [$clog2(num_ops)-1:0]             opcode;                                       \
  logic [$clog2(num_fu)-1:0]              func_unit;                                    \
  logic [num_flags-1:0]                   flags;                                        \
  logic [$clog2(branch_cc_num)-1:0]       bcc_op;                                       \
  logic                                   w_v;                                          \
  logic                                   imm;                                          \
  } decoded_instruction_t;

parameter NUM_PHYS_REG                    = 128;
parameter RENAMED_INSTRUCTION_WIDTH       = 3 * $clog2(NUM_PHYS_REG) + 2*WORD_SIZE_P + $clog2(INSTRUCTION_OP_NUM) + $clog2(NUM_FU) + NUM_FLAGS + $clog2(BRANCH_CC_NUM) + 2 + $clog2(NUM_ARCH_REG);

`define declare_renamed_instruction(num_reg, word_size_p, num_ops, num_fu, num_flags, branch_cc_num, num_arch_reg)  \
typedef struct packed                                                                   \
{                                                                                       \
  logic [$clog2(num_reg)-1:0]             dest_id;                                      \
  logic [$clog2(num_reg)-1:0]             source_1;                                     \
  logic [word_size_p-1:0]                 source2_imm;                                  \
  logic [word_size_p-1:0]                 pc;                                           \
  logic [$clog2(num_ops)-1:0]             opcode;                                       \
  logic [$clog2(num_fu)-1:0]              func_unit;                                    \
  logic [num_flags-1:0]                   flags;                                        \
  logic [$clog2(branch_cc_num)-1:0]       bcc_op;                                       \
  logic                                   w_v;                                          \
  logic                                   imm;                                          \
  logic [$clog2(num_reg)-1:0]             freed_reg;   /* those two fileds */           \
  logic [$clog2(num_arch_reg)-1:0]        alloc_reg;   /* are used for commit */        \
  } renamed_instruction_t;

`define ROB_ENTRY 64

parameter ROB_WIDTH = 1 + WORD_SIZE_P + 2 * NUM_FLAGS + 1 + 1 + WORD_SIZE_P;

typedef struct packed                               
{                                                   
  logic                                   valid;
  logic [WORD_SIZE_P-1:0]                 result;
  logic [NUM_FLAGS-1:0]                   flag_mask;
  logic [NUM_FLAGS-1:0]                   flags;
  logic                                   is_store;
  logic                                   w_v;
  logic [WORD_SIZE_P-1:0]                 dest;
} rob_t;

parameter ROB_MEM_WIDTH = 1 + WORD_SIZE_P * 2;

typedef struct packed {
  logic                                   valid;
  logic [WORD_SIZE_P-1:0]                 address;
  logic [WORD_SIZE_P-1:0]                 result;  
} rob_mem_t;
`endif