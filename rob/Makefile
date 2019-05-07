FLD = $(shell pwd)/
vev = verilator
source = $(FLD)rob.sv
inc = $(FLD)rob_def.svh
vev_op = --trace -Wall --cc
exe_op = --exe
header = $(FLD)../common/Purple_Jade_pkg.svh
csource = rob_test.cpp
name = rob
junk = obj_dir *.vcd

all: $(source) $(header) $(inc)
	$(vev) $(vev_op) $(source) $(exe_op) $(csource)
	make -j -C obj_dir -f V$(name).mk V$(name)

clean:
	rm -rf $(junk)