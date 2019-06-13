FLD = $(shell pwd)/../../
IP_DIR = $(FLD)../basejump_stl/
name = commit_stage
top_level = $(FLD)$(name).sv
vev = verilator
vev_op = --trace -Wall --cc -f filelist.verilator
exe_op = --exe
inc_dir = +incdir+$(FLD)../common/ +incdir+$(FLD)../rename_stage +incdir+$(FLD)
DEBUG = 0
csource = $(name)_test.cpp
RM = rm -rf
junk = obj_dir *.vcd

# debug flags
ifeq ($(DEBUG),1)
	vev_op += -DDEBUG
endif

all: $(top_level) $(header)
	$(vev) $(vev_op) $(inc_dir) $(top_level) $(exe_op) $(csource)
#	make -j -C obj_dir -f V$(name).mk V$(name)

clean:
	rm -rf $(junk)