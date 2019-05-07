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

parameter INSTRUCTION_OP_NUM              = 8;

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

parameter UCODE_WIDTH_P                   = 1 + WIDTH_OP + WIDTH_FU + NUM_FLAGS + WIDTH_DEST + WIDTH_S1 + WIDTH_IMM;

typedef struct packed
{
  logic [$clog2(NUM_ARCH_REG)-1:0]        dest_id;
  logic [$clog2(NUM_ARCH_REG)-1:0]        source_1;
  logic [WORD_SIZE_P-1:0]                 source2_imm;
  logic [WORD_SIZE_P-1:0]                 pc;
  logic [$clog2(INSTRUCTION_OP_NUM)-1:0]  opcode;
  logic [$clog2(NUM_FU)-1:0]              func_unit;
  logic [NUM_FLAGS-1:0]                   flags;
  logic [$clog2(BRANCH_CC_NUM)-1:0]       bcc_op;
  logic                                   branch_speculation;
  logic                                   w_v;
  logic                                   imm;
  } decoded_instruction_t;

parameter DECODED_INSTRUCTION_WIDTH       = $bits(decoded_instruction_t);

parameter NUM_PHYS_REG                    = 128;

typedef struct packed
{
  logic [$clog2(NUM_PHYS_REG)-1:0]        dest_id;
  logic [$clog2(NUM_PHYS_REG)-1:0]        source_1;
  logic [WORD_SIZE_P-1:0]                 source2_imm;
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
  } renamed_instruction_t;

parameter RENAMED_INSTRUCTION_WIDTH       = $bits(renamed_instruction_t);

`endif