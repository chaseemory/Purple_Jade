`ifndef _PURPLE_JADE_PKG_
`define _PURPLE_JADE_PKG_
// struct defitions

parameter I_ROM_DEPTH_P                   = 65536;
parameter WORD_SIZE_P                     = 16;
parameter NUM_FLAGS                       = 4;

parameter NUM_ARCH_REG                    = 16;
parameter NUM_ARCH_DEST_REG               = 8;
parameter NUM_ARCH_SRC1_REG               = 8;

parameter NUM_DEST_SRC                    = 4;
parameter NUM_S1_SRC                      = 4;
parameter NUM_S2_IMM_SRC                  = 8;

parameter DECODED_INSTRUCTION_WIDTH       = $clog(NUM_DEST_REG) + $clog(NUM_SRC1_REG) + WORD_SIZE_P + $clog2(INSTRUCTION_OP_NUM) + $clog2(NUM_FU) + NUM_FLAGS + 2;

parameter UCODE_WIDTH_P                   = 18;



parameter BRANCH_CC_NUM                   = 15;

parameter INSTRUCTION_OP_NUM              = 8;
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

parameter NUM_FU                          = 6;
typedef enum integer {move = 0, alu = 1, logic = 2, mem = 3, branch = 4} units;


parameter NUM_PHYS_REG                    = 128;
parameter RENAMED_INSTRUCTION_WIDTH       = $clog(NUM_PHYS_REG) + $clog(NUM_PHYS_REG) + WORD_SIZE_P + $clog2(INSTRUCTION_OP_NUM) + $clog2(NUM_FU) + NUM_FLAGS + 2;





//STRUCT MACROS ??

`define declare_decoded_instruction (num_reg, word_size_p, num_ops, num_fu, num_flags)  \
typedef struct packed                                                                   \
{                                                                                       \
  logic [$clog2(num_reg)-1:0]             dest_id, source_1;                            \
  logic [word_size_p-1:0]                 source2_imm;                                  \
  logic [$clog2(num_ops)-1:0]             opcode;                                       \
  logic [$clog2(num_fu)-1:0]              func_unit;                                    \
  logic [num_flags-1:0]                   flags;                                        \
  logic                                   w_v;                                          \
  logic                                   imm;                                          \
  } decoded_instruction;


`define declare_renamed_instruction (num_reg, word_size_p, num_ops, num_fu, num_flags)  \
typedef struct packed                                                                   \
{                                                                                       \
  logic [$clog2(num_reg)-1:0]             dest_id, source_1;                            \
  logic [word_size_p-1:0]                 source2_imm;                                  \
  logic [$clog2(num_ops)-1:0]             opcode;                                       \
  logic [$clog2(num_fu)-1:0]              func_unit;                                    \
  logic [num_flags-1:0]                   flags;                                        \
  logic                                   w_v;                                          \
  logic                                   imm;                                          \
  } renamed_instruction;
`endif
