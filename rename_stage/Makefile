FLD = $(shell pwd)/
IP_DIR = $(FLD)../basejump_stl/
vev = verilator
source = $(FLD)rename_stage.sv
inc = $(FLD)rename_def.svh
vev_op = --trace -Wall --cc
inc_dir = +incdir+$(FLD)../common/
exe_op = --exe
csource = rename_test.cpp
name = rename_stage
junk = obj_dir *.vcd

all: $(source) $(inc)
	$(vev) $(vev_op) $(inc_dir) $(source) $(exe_op) $(csource)
	make -j -C obj_dir -f V$(name).mk V$(name)

clean:
	rm -rf $(junk)