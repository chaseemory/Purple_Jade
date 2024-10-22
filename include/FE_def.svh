
// `ifdef VERILATOR
`include "Purple_Jade_pkg.svh"
// `endif

`ifndef _FE_DEF_PKG_
`define _FE_DEF_PKG_


parameter NUM_EXTENDED                    = 10;
parameter NUM_DEST_SRC                    = 4;
parameter NUM_S1_SRC                      = 4;
parameter NUM_S2_IMM_SRC                  = 10;

parameter WIDTH_DEST                      = $clog2(NUM_DEST_SRC);
parameter WIDTH_S1                        = $clog2(NUM_S1_SRC);
parameter WIDTH_IMM                       = $clog2(NUM_S2_IMM_SRC);

parameter UCODE_WIDTH_P                   = 1 + WIDTH_OP + WIDTH_FU + NUM_FLAGS + WIDTH_DEST + WIDTH_S1 + WIDTH_IMM + 1;

`endif