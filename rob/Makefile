FLD = $(shell pwd)/
name = rob
vev = verilator
source = $(FLD)$(name).sv
inc = $(FLD)$(name)_def.svh
vev_op = --trace -Wall --cc
exe_op = --exe
header = $(FLD)../common/Purple_Jade_pkg.svh
csource = $(name)_test.cpp
junk = obj_dir *.vcd
DEBUG=0

# debug flags
ifeq ($(DEBUG),1)
	vev_op += -DDEBUG
endif

all: $(source) $(header) $(inc)
	$(vev) $(vev_op) $(source) $(exe_op) $(csource)
	make -j -C obj_dir -f V$(name).mk V$(name)

clean:
	rm -rf $(junk)