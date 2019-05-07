FLD = $(shell pwd)/
vev = verilator
source = $(FLD)fe_top.sv
inc = $(FLD)FE_def.svh
vev_op = --trace -Wall --cc
exe_op = --exe
header = $(FLD)../common/Purple_Jade_pkg.svh
csource = FE_test.cpp
name = front_end
junk = obj_dir *.vcd

all: $(source) $(header) $(inc)
	$(vev) $(vev_op) $(source) $(exe_op) $(csource)
	make -j -C obj_dir -f V$(name).mk V$(name)

clean:
	rm -rf $(junk)