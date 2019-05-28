# basic defines
vev = verilator
fld = $(shell pwd)/
filelist = $(fld)filelist.verilator
top_level = pj_top

# folders
pj_test_bin_dir = $(fld)../Purple_Jade_Tests/test/bin/

# include lookup folders
inc_dir += +incdir+$(fld)../common/
inc_dir += +incdir+$(fld)../rename_stage/
inc_dir += +incdir+$(fld)../FE/
inc_dir += +incdir+$(fld)../commit_stage/
inc_dir += +incdir+$(fld)../basejump_stl/bsg_misc/


# verilator options
vev_op += $(inc_dir)
vev_op += --trace -Wall --cc
vev_op += -f $(filelist)
vev_op += --top-module $(top_level)
# execution options
exe_op = --exe

# debug macro
DEBUG=0
ifeq ($(DEBUG),1)
	vev_op += -DDEBUG
endif

# test bin macro
TEST = test0.bin
unquoted = $(pj_test_bin_dir)$(TEST)
TEST_BIN = $(addprefix \",$(addsuffix \",$(unquoted)))
vev_op += -DTEST_BIN=$(TEST_BIN)

all:
	$(vev) $(vev_op) $(exe_op) $(top_level)_test.cpp