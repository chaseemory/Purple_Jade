# basic defines
vev = verilator
fld = $(shell pwd)/
sim = $(fld)../Purple_Jade_Tests/spoke/spoke
filelist = $(fld)filelist.verilator
top_level = pj_top

# folders
pj_test_bin_dir = $(fld)../Purple_Jade_Tests/test/bin/

# include lookup folders
inc_dir += +incdir+$(fld)../include/
inc_dir += +incdir+$(fld)../basejump_stl/bsg_misc/

# verilator options
vev_op += --trace --trace-structs -Wall --cc
vev_op += $(inc_dir)
vev_op += -f $(filelist)
vev_op += -Wno-fatal
vev_op += --top-module $(top_level)
vev_op += -DVERILATOR

# execution options
exe_op = --exe

# debug macro
DEBUG=1
ifeq ($(DEBUG),1)
	vev_op += -DDEBUG
endif

# test bin macro
TEST = test2.bin
unquoted = $(pj_test_bin_dir)$(TEST)
TEST_BIN = $(addprefix \",$(addsuffix \",$(unquoted)))
vev_op += -DTEST_BIN=$(TEST_BIN)

# simulation options
sim_op = -t 2> trace.tr > /dev/null

# junk
junk = obj_dir *.vcd *.tr

all: build

build:
	$(vev) $(vev_op) $(exe_op) $(top_level)_test.cpp
	make -j -C obj_dir -f V$(top_level).mk V$(top_level)

simple:
	$(vev) $(vev_op) $(exe_op) $(top_level)_test_simple.cpp
	make -j -C obj_dir -f V$(top_level).mk V$(top_level)

run_simple:
	./obj_dir/Vpj_top

sim_trace:
	$(sim) $(unquoted) $(sim_op)

jade_run: sim_trace
	obj_dir/V$(top_level) trace.tr

# very poetic in Chinese: 玉步
jade_step: sim_trace
	obj_dir/V$(top_level) trace.tr -d

sim_step:
	$(sim) $(unquoted) -d

clean:
	rm -rf $(junk)