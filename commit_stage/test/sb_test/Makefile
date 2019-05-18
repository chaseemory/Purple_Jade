FLD = $(shell pwd)/../../
name = store_buffer
vev = verilator
source = $(FLD)$(name).sv
inc_dir = +incdir+$(FLD)../common/ +incdir+$(FLD)../rename_stage +incdir+$(FLD)
vev_op = --trace -Wall --cc -f filelist.verilator
exe_op = --exe
header = $(FLD)../common/Purple_Jade_pkg.svh
csource = $(name)_test.cpp
junk = obj_dir *.vcd
DEBUG=0

# debug flags
ifeq ($(DEBUG),1)
	vev_op += -DDEBUG
endif

all: $(source) $(header)
	$(vev) $(vev_op) $(inc_dir) $(source) $(exe_op) $(csource)
	make -j -C obj_dir -f Vrotate_left.mk Vrotate_left

clean:
	rm -rf $(junk)