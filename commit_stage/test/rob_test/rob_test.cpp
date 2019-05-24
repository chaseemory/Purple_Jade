#include "Vrob.h"
#include "verilated.h"

#include <iostream>

#define ROB_ENTRY 64

using namespace std;

static vluint64_t main_time = 0;

typedef struct                               
{       
  uint pc;      //  16:12                                
  uint64_t wb;      //  11
  uint result;  //  11:0 | 5:27
  uint addr;    // 16:11
  uint64_t is_spec; // 10
  uint64_t is_cond_branch;// 9
  uint bcc_op;     // 4:5
  uint resolved_pc;// 5:0 || 11:21
  uint flag_mask; // 4:17
  uint flags;     // 4:13
  uint64_t is_store;  // 12
  uint64_t w_v;		  // 11
  uint freed_reg; // 7:4
  uint alloc_reg; // 4:0
} rob_t;

typedef struct {
  uint64_t valid;     // 33
  uint64_t dest;      // 7:26
  uint64_t flags;     // 4:22
  uint64_t result;    // 16:6
  uint64_t rob_dest;  // 6:0
} CDB_t;

void set_issue(Vrob* top, rob_t* rob) {
	vluint32_t res0 = 0;
	vluint32_t res1 = 0;
	vluint32_t res2 = 0;

	res0 = (rob->alloc_reg & 0xf)
		 | ((rob->freed_reg & 0x7f) << 4)
		 | ((rob->w_v & 0x1) << 11)
		 | ((rob->is_store & 0x1) << 12)
		 | ((rob->flags & 0xf) << 13)
		 | ((rob->flag_mask & 0xf) << 17)
		 | ((rob->resolved_pc & 0x7ff) << 21);

	res1 = (rob->resolved_pc & 0xf800) >> 11
		 | ((rob->bcc_op & 0xf) << 5)
		 | ((rob->is_cond_branch & 0x1) << 9)
		 | ((rob->is_spec & 0x1) << 10)
		 | ((rob->addr & 0xffff) << 11)
		 | ((rob->result & 0x1f) << 27);

	res2 = (rob->result & 0xffe0) >> 5
		 | ((rob->wb & 0x1) << 11)
		 | ((rob->pc & 0xffff) << 12);

	top->rename_rob_entry_i[0] = res0;
	top->rename_rob_entry_i[1] = res1;
	top->rename_rob_entry_i[2] = res2;	
}

void set_cdb(Vrob* top, uint entry, CDB_t* cdb) {
	vluint64_t res = 0;
	res = (cdb->rob_dest & 0x3f) 
		| ((cdb->result & 0xffff) << 6)
		| ((cdb->flags & 0xf) << 22)
		| ((cdb->dest & 0x7f) << 26)
		| ((cdb->valid & 0x1) << 33);
	top->cdb_i[entry] = res;
}

void set_flag(Vrob* top, uint flag) {
	top->flag_rob_i = flag & 0xf;
}

void assert_rob(Vrob* top, rob_t* rob, uint64_t entry) {
	vluint32_t res[3];
	res[0] = (rob->alloc_reg & 0xf)
		 | ((rob->freed_reg & 0x7f) << 4)
		 | ((rob->w_v & 0x1) << 11)
		 | ((rob->is_store & 0x1) << 12)
		 | ((rob->flags & 0xf) << 13)
		 | ((rob->flag_mask & 0xf) << 17)
		 | ((rob->resolved_pc & 0x7ff) << 21);

	res[1] = (rob->resolved_pc & 0xf800) >> 11
		 | ((rob->bcc_op & 0xf) << 5)
		 | ((rob->is_cond_branch & 0x1) << 9)
		 | ((rob->is_spec & 0x1) << 10)
		 | ((rob->addr & 0xffff) << 11)
		 | ((rob->result & 0x1f) << 27);

	res[2] = (rob->result & 0xffe0) >> 5
		 | ((rob->wb & 0x1) << 11)
		 | ((rob->pc & 0xffff) << 12);

	assert(top->rob__DOT__rob_q[entry][0] == res[0]);
	assert(top->rob__DOT__rob_q[entry][1] == res[1]);
	assert(top->rob__DOT__rob_q[entry][2] == res[2]);
}

static void tick(Vrob* top) {
    top->clk_i = ((top->clk_i == 0) ? 1 : 0);
    top->eval();
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vrob* top = new Vrob;
    top->clk_i = 1;
    top->eval();
    tick(top);
    top->reset_i = 1;
    tick(top);
    tick(top);
    // test reset
    assert(top->rob__DOT__rob_num == ROB_ENTRY);
    assert(top->rob__DOT__rob_alloc_pt == 0);
    assert(top->rob__DOT__rob_commit_pt == 0);
    assert(top->rob_rename_ready_o == 1);
    assert(top->rob_phys_valid_o == 0);
    assert(top->rob_sb_valid_o == 0);
    assert(top->rob_mispredict_o == 0);
    assert(top->rob_rename_valid_o == 0);
    assert(top->rob_flag_valid_o == 0);
    tick(top);
    // keep allocing to test fifos
    top->reset_i = 0;
    top->rename_rob_valid_i = 1;
    rob_t rob_i;
    rob_i.pc = 0;
    rob_i.wb = 0;
    rob_i.result = 0;
    rob_i.addr = 0;
    rob_i.is_spec = 1;
    rob_i.is_cond_branch = 0;
    rob_i.bcc_op = 0;
    rob_i.resolved_pc = 0;
    rob_i.flag_mask = 0;
    rob_i.flags = 0;
    rob_i.is_store = 0;
    rob_i.w_v = 1;
    rob_i.freed_reg = 0;
    rob_i.alloc_reg = 0;
    set_issue(top, &rob_i);
    tick(top);
    tick(top);
    assert(top->rob__DOT__rob_num == ROB_ENTRY-1);
    assert(top->rob_mispredict_o == 0);
    assert(top->rob_rename_ready_o == 1);
    assert(top->rob__DOT__rob_alloc_pt == 1);
    assert(top->rob__DOT__rob_commit_pt == 0);
    assert(top->rob_sb_valid_o == 0);
    assert(top->rob_rename_valid_o == 0);
    assert(top->rob_flag_valid_o == 0);
    assert(top->rob_phys_valid_o == 0);
    rob_i.is_spec = 0;

    for (vluint64_t i=1; i<63; i++) {
      rob_i.pc = i;
      set_issue(top, &rob_i);
      tick(top);
      tick(top);
      assert(top->rob__DOT__rob_num == ROB_ENTRY-i-1);
      assert(top->rob_mispredict_o == 0);
      assert(top->rob_rename_ready_o == 1);
      assert(top->rob__DOT__rob_alloc_pt == i+1);
      assert(top->rob__DOT__rob_commit_pt == 0);
      assert(top->rob_sb_valid_o == 0);
      assert(top->rob_rename_valid_o == 0);
      assert(top->rob_flag_valid_o == 0);
      assert(top->rob_phys_valid_o == 0);
    }
    tick(top);
    tick(top);
    assert(top->rob__DOT__rob_num == 0);
    assert(top->rob_rename_ready_o == 0);
    assert(top->rob__DOT__rob_alloc_pt == 0);
    assert(top->rob_sb_valid_o == 0);
    assert(top->rob_rename_valid_o == 0);
    assert(top->rob_flag_valid_o == 0);
    assert(top->rob_phys_valid_o == 0);
    // first one should be a mispredict
    CDB_t cdb;
    cdb.valid = 1;
    cdb.rob_dest = 0;
    cdb.dest = 8;
    cdb.result = 4;
    set_cdb(top, 1, &cdb);
    tick(top);
    tick(top);
    assert(top->rob_flag_valid_o == 0);
    assert(top->rob_rename_valid_o == 1);
    assert(top->rob_phys_valid_o == 1);
    assert(top->rob_sb_valid_o == 0);
    cdb.rob_dest = 1;
    cdb.valid = 0;
    set_cdb(top, 1, &cdb);
    tick(top);
    tick(top);
    cdb.valid = 0;
    set_cdb(top, 1, &cdb);
    assert(top->rob__DOT__rob_commit_pt == 1);
    assert(top->rob_mispredict_o == 1);
    assert(top->rob_rename_ready_o == 0);
    assert(top->rob__DOT__rob_num == 1);
    assert(top->rob_fe_redirected_pc_o == 4);
    tick(top);
    tick(top);
    assert(top->rob__DOT__rob_num == ROB_ENTRY);
    assert(top->rob__DOT__rob_alloc_pt == 0);
    assert(top->rob__DOT__rob_commit_pt == 0);
    assert(top->rob_rename_ready_o == 1);
    assert(top->rob_phys_valid_o == 0);
    assert(top->rob_sb_valid_o == 0);
    assert(top->rob_mispredict_o == 0);
    assert(top->rob_rename_valid_o == 0);
    assert(top->rob_flag_valid_o == 0);
    // first one and second one set flags
    // third one loads
    // misprediction on conditional branches
    rob_i.pc = 4;
    rob_i.wb = 1;
    rob_i.result = 0;
    rob_i.addr = 0;
    rob_i.is_spec = 0;
    rob_i.is_cond_branch = 0;
    rob_i.bcc_op = 0;
    rob_i.resolved_pc = 0;
    rob_i.flag_mask = 0x3;
    rob_i.flags = 0x3;
    rob_i.is_store = 0;
    rob_i.w_v = 1;
    rob_i.freed_reg = 0;
    rob_i.alloc_reg = 0;
    set_issue(top, &rob_i);
    tick(top);
    tick(top);
    assert(top->rob__DOT__rob_num == ROB_ENTRY-1);
    assert(top->rob_mispredict_o == 0);
    assert(top->rob_rename_ready_o == 1);
    assert(top->rob__DOT__rob_alloc_pt == 1);
    assert(top->rob__DOT__rob_commit_pt == 0);
    assert(top->rob_sb_valid_o == 0);
    assert(top->rob_rename_valid_o == 1);
    assert(top->rob_flag_valid_o == 1);
    assert(top->rob_phys_valid_o == 1);
    // check flags
    rob_i.pc = 2;
    rob_i.wb = 1;
    rob_i.result = 0;
    rob_i.addr = 0;
    rob_i.is_spec = 0;
    rob_i.is_cond_branch = 0;
    rob_i.bcc_op = 0;
    rob_i.resolved_pc = 0;
    rob_i.flag_mask = 0x3;
    rob_i.flags = 0x0;
    rob_i.is_store = 0;
    rob_i.w_v = 1;
    rob_i.freed_reg = 0;
    rob_i.alloc_reg = 0;
    set_issue(top, &rob_i);
    tick(top);
    tick(top);
    assert(top->rob__DOT__rob_num == ROB_ENTRY-1);
    assert(top->rob_mispredict_o == 0);
    assert(top->rob_rename_ready_o == 1);
    assert(top->rob__DOT__rob_alloc_pt == 2);
    assert(top->rob__DOT__rob_commit_pt == 1);
    assert(top->rob_sb_valid_o == 0);
    assert(top->rob_rename_valid_o == 1);
    assert(top->rob_flag_valid_o == 1);
    assert(top->rob_phys_valid_o == 1);
    // a store
    rob_i.pc = 3;
    rob_i.wb = 1;
    rob_i.result = 0;
    rob_i.addr = 0;
    rob_i.is_spec = 0;
    rob_i.is_cond_branch = 0;
    rob_i.bcc_op = 0;
    rob_i.resolved_pc = 0;
    rob_i.flag_mask = 0x0;
    rob_i.flags = 0;
    rob_i.is_store = 1;
    rob_i.w_v = 0;
    rob_i.freed_reg = 0;
    rob_i.alloc_reg = 0;
    set_issue(top, &rob_i);
    tick(top);
    tick(top);
    assert(top->rob__DOT__rob_num == ROB_ENTRY-1);
    assert(top->rob_mispredict_o == 0);
    assert(top->rob_rename_ready_o == 1);
    assert(top->rob__DOT__rob_alloc_pt == 3);
    assert(top->rob__DOT__rob_commit_pt == 2);
    assert(top->rob_sb_valid_o == 1);
    assert(top->rob_rename_valid_o == 1);
    assert(top->rob_flag_valid_o == 0);
    assert(top->rob_phys_valid_o == 0);
    // an beq
    rob_i.pc = 4;
    rob_i.wb = 1;
    rob_i.result = 0;
    rob_i.addr = 0;
    rob_i.is_spec = 1;
    rob_i.is_cond_branch = 1;
    rob_i.bcc_op = 0;
    rob_i.resolved_pc = 6;
    rob_i.flag_mask = 0x0;
    rob_i.flags = 0;
    rob_i.is_store = 0;
    rob_i.w_v = 0;
    rob_i.freed_reg = 0;
    rob_i.alloc_reg = 0;
    set_issue(top, &rob_i);
    tick(top);
    tick(top);
    assert(top->rob__DOT__rob_num == ROB_ENTRY-1);
    assert(top->rob_mispredict_o == 0);
    assert(top->rob_rename_ready_o == 1);
    assert(top->rob__DOT__rob_alloc_pt == 4);
    assert(top->rob__DOT__rob_commit_pt == 3);
    assert(top->rob_sb_valid_o == 0);
    assert(top->rob_rename_valid_o == 1);
    assert(top->rob_flag_valid_o == 0);
    assert(top->rob_phys_valid_o == 0);
    top->rename_rob_valid_i = 0;
    set_issue(top, &rob_i);
    tick(top);
    tick(top);
    assert(top->rob_mispredict_o == 0);
    assert(top->rob_fe_redirected_pc_o == 5);
    delete top; 
    return 0;
}