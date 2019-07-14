FLD = $(shell pwd)/../../
filelist = filelist.verilator
name = execute_stage
vev = verilator
# include folder
inc_dir = +incdir+$(FLD)../common/ +incdir+$(FLD)../rename_stage +incdir+$(FLD) +incdir+$(FLD)../issue
csource = $(name)_test.cpp
junk = obj_dir *.vcd
DEBUG=0

# options adding
vev_op = --trace -Wall --cc
vev_op += $(inc_dir)
vev_op += -f $(filelist)
vev_op += --top-module $(name)
exe_op = --exe

# debug flags
ifeq ($(DEBUG),1)
	vev_op += -DDEBUG
endif

all:
	$(vev) $(vev_op) $(exe_op) $(csource)
	make -j -C obj_dir -f V$(name).mk V$(name)

clean:
	rm -rf $(junk)