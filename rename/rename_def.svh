`ifndef _RENAME_DEF_SVH_
`define _RENAME_DEF_SVH_

`include "../common/Purple_Jade_pkg.svh";

parameter COMMIT_RENAME_WIDTH = $clog2(NUM_ARCH_REG) + $clog2(NUM_PHYS_REG) + 1;

typedef struct packed
{
	logic 								w_v;
	logic [$clog2(NUM_ARCH_REG)-1:0]	alloc_reg;
	logic [$clog2(NUM_PHYS_REG)-1:0]	freed_reg;
}  commit_rename_t;

`endif