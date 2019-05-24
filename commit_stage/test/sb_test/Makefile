FLD = $(shell pwd)/../../
name = store_buffer
vev = verilator
top_level = $(FLD)$(name).sv
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

all: $(top_level) $(header)
	$(vev) $(vev_op) $(inc_dir) --top-module store_buffer $(top_level) $(exe_op) $(csource)
	make -j -C obj_dir -f Vstore_buffer.mk Vstore_buffer

clean:
	rm -rf $(junk)