// struct defitions

parameter I_CACHE_DEPTH_P                 = 65536;
parameter WORD_SIZE_P                     = 16;

parameter NUM_DEST_REG                    = 8;
parameter NUM_SRC1_REG                    = 8;

parameter DECODED_INSTRUCTION_WIDTH       = $clog(NUM_DEST_REG) + $clog(NUM_SRC1_REG) + WORD_SIZE_P;

parameter UCODE_WIDTH_P                   = 16;


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

typedef enum integer {move = 0, alu = 1, logic = 2, mem = 3, branch = 4} units;

//STRUCT MACROS ??

`define declare_decoded_instruction (num_dest, num_s1, word_width,)      \
typedef struct packed                                                    \
{                                                                        \
  logic [$clog2(num_dest)-1:0]           dest;                           \
  logic [$clog2(num_s1)-1:0]             s1;                             \
  logic [word_width-1:0]                 s2_imm;                         \
  logic                                  imm;                            \
  logic                                  n_flag, z_flag, c_flag, v_flag; \
  logic                                  reg_w_v;                        \
  logic [$clog2(BRANCH_CC_NUM-1:0]       branch_cc;                      \  
  units                                  func_unit;                      \
  logic [$clog2(INSTRUCTION_OP_NUM)-1:0] op;                             \
} decoded_instruction;