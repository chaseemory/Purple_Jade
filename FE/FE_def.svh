`include "Purple_Jade_pkg.svh"

`ifndef _PURPLE_JADE_PKG_
`define _PURPLE_JADE_PKG_


parameter NUM_EXTENDED                    = 8;
parameter NUM_DEST_SRC                    = 4;
parameter NUM_S1_SRC                      = 4;
parameter NUM_S2_IMM_SRC                  = 8;



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
