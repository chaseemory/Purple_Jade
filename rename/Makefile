vev = verilator
source = rename_stage.sv
inc = rename_def.svh
vev_op = -lint-only -Wall
header = ../common/Purple_Jade_pkg.svh

all: $(source) $(header) $(inc)
	$(vev) $(vev_op) $(source) $(header) $(inc)
