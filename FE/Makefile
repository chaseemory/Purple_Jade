FLD = $(shell pwd)/
vev = verilator
source = $(FLD)fe_top.sv
inc = $(FLD)FE_def.svh
vev_op = --trace -Wall --cc
exe_op = --exe
header = $(FLD)../common/Purple_Jade_pkg.svh
csource = FE_test.cpp
name = fe_top
junk = obj_dir *.vcd

all: $(source) $(header) $(inc)
	$(vev) $(vev_op) --trace-structs $(source) "$(header)" -y "../common/" -y "$(FLD)" -y  "../basejump_stl/bsg_misc" $(exe_op) $(csource)
	make -j -C obj_dir -f V$(name).mk V$(name)

run:
	./obj_dir/./Vfe_top

clean:
	rm -rf $(junk)