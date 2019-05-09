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

parameter WIDTH_OP                        = $clog2(INSTRUCTION_OP_NUM);

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

parameter ROB_ENTRY = 64;
parameter SB_ENTRY = 16;

typedef struct packed                               
{       
  logic [WORD_SIZE_P-1:0]                 pc;                                      
  logic                                   wb; /* CDB write back ?  */
`ifdef DEBUG // for debug purpose
  logic [WORD_SIZE_P-1:0]                 result;  // keep it for debug purpose
  logic [WORD_SIZE_P-1:0]                 addr;    // keep it for debug purpose
`endif
  logic                                   is_spec;
  logic [WORD_SIZE_P-1:0]                 resolved_pc;
  logic [NUM_FLAGS-1:0]                   flag_mask;
  logic [NUM_FLAGS-1:0]                   flags;
  logic                                   is_store;
  logic                                   w_v;
  logic [$clog2(NUM_PHYS_REG)-1:0]        freed_reg;
  logic [$clog2(NUM_ARCH_REG)-1:0]        alloc_reg; 
} rob_t;

parameter ROB_WIDTH = $bits(rob_t);

typedef struct packed {
  logic                                   wb;
  logic [WORD_SIZE_P-1:0]                 address;
  logic [WORD_SIZE_P-1:0]                 result;  
} store_buffer_t;

parameter STORE_BUFFER_WIDTH = $bits(store_buffer_t);

// ROB issue interfaces
typedef rob_t issue_rob_t;  // with issue_rob.valid 0
parameter ISSUE_ENTRY_WIDTH = ROB_WIDTH;

// CDB type
typedef struct packed {
  logic                                   valid;
  logic [$clog2(ROB_ENTRY)-1:0]           rob_dest;
  logic                                   w_v;  // whether to write back
  logic [WORD_SIZE_P-1:0]                 dest; // reg or mem
  logic                                   is_spec;
  logic [NUM_FLAGS-1:0]                   flags;
  logic [WORD_SIZE_P-1:0]                 result;
} CDB_t;

// CDB to SB type
typedef struct packed {
  logic                                   valid;
  logic [$clog2(SB_ENTRY)-1:0]            sb_dest;
  logic [WORD_SIZE_P-1:0]                 address;  // store buffer expects an address
} CDB_sb_t;

parameter CDB_SB_WIDTH = $bits(CDB_sb_t);

parameter CDB_WIDTH = $bits(CDB_t);

`ifdef DEBUG
typedef struct packed {
  logic [WORD_SIZE_P-1:0]                 pc;                                      
  logic                                   is_store;
  logic                                   w_v;
  logic [WORD_SIZE_P-1:0]                 addr;
  logic [WORD_SIZE_P-1:0]                 result;
} debug_t;

parameter DEBUG_WIDTH = $bits(debug_t);

`endif

`endif