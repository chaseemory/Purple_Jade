#include "Vfront_end.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 

#include <iostream>

static vluint64_t main_time = 0;

#define NUM_PHY_REG 128
#define NUM_ARCH_REG 16

static void tick(NAME* top) {
    top->clk_i = ((top->clk_i == 0) ? 1 : 0);
    top->eval();
}

static vluint64_t set_decode(vluint64_t w_v, vluint64_t dest, vluint64_t rs1, vluint64_t rs2, vluint64_t imm, vluint64_t imm_val) {
    vluint64_t res = 0;
    dest = (dest & 0xf) << 52; 
    rs1 = (rs1 & 0xf) << 48;
    rs2 = (rs2 & 0xf) << 32;
    imm_val = (imm_val & 0xffff) << 32;
    w_v = (w_v & 0xf) << 1;
    res = dest | rs1 | ((imm == 1) ? imm_val : rs2) | imm | w_v;
    return res;
}

static vluint64_t set_commit_entry(vluint64_t w_v, vluint64_t arch, vluint64_t freed_phy) {
    w_v = (w_v & 0x1) << 11;
    freed_phy = freed_phy & 0x7f;
    arch = (arch & 0xf) << 7;
    return w_v | freed_phy | arch;
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    NAME* DUT = new NAME;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    DUT->trace(tfp, 99);
    tfp->open("rename.vcd");
/*****************************************************************************/
    top->clk_i = 1;
    top->eval();
    tick(top);
    top->reset_i = 1;
    top->decoded_v_i = 0;
    top->commit_v_i = 0;
    top->issue_rename_ready_i = 0;
    top->mispredict_i = 0;
    tick(top);
    tick(top);
    // test reset
    assert(true);
    assert(top->rename_decode_ready_o == 0);
    assert(top->renamed_v_o == 0);
    assert(top->rename_stage__DOT__fl_spec_num == 112);
    assert(top->rename_stage__DOT__fl_read_pt == 0);
    assert(top->rename_stage__DOT__fl_spec_read_pt == 0);
    assert(top->rename_stage__DOT__fl_write_pt == 112);
    assert(top->rename_stage__DOT__fl_spec_write_pt == 112);
    top->reset_i = 0;
    // testing renaming
    top->issue_rename_ready_i = 1;
    top->decoded_v_i = 1;
    top->decoded_i = set_decode(1,0,0,2,0,0);
    tick(top);
    tick(top);
    vluint64_t rs1, rs2;
    ASSERT_RENAME(1,0,0,16,0,2);

    // test rename full
    for (int i = 0; i < 112; i++) {
        top->decoded_i = set_decode(1,0,0,2,0,0);
        tick(top);
        tick(top);
        if (i != 111) {
            ASSERT_RENAME(1,0,(16+i),(17+i),(16+i),2);
        } else {
            assert(top->rename_decode_ready_o == 0);
            assert(top->renamed_v_o == 0);
        }
    }

    // test freeing registers
    top->commit_v_i = 1;
    top->commit_rename_i = set_commit_entry(0,4,4);
    tick(top);
    tick(top);
    // still not ready
    assert(top->rename_decode_ready_o == 0);
    assert(top->renamed_v_o == 0);
    top->commit_v_i = 1;
    top->commit_rename_i = set_commit_entry(1,4,4);
    tick(top);
    tick(top);
    assert(top->rename_decode_ready_o == 0);
    assert(top->renamed_v_o == 0);

    // ready now
    top->commit_v_i = 0;
    top->decoded_i = set_decode(1,12,12,2,1,0xffff);
    tick(top);
    assert(top->rename_decode_ready_o == 1);
    tick(top);
    ASSERT_RENAME(1,12,12,4,12,0xffff);
    tick(top);
    tick(top);
    assert(top->rename_decode_ready_o == 0);
    assert(top->renamed_v_o == 0);
    // test roll back
    top->commit_v_i = 1;
    top->mispredict_i = 1;
    top->commit_rename_i = set_commit_entry(1,5,5);
    tick(top);
    tick(top);
    top->decoded_v_i = 0;
    top->commit_v_i = 0;
    top->mispredict_i = 0;
    assert(top->rename_decode_ready_o == 0);
    assert(top->renamed_v_o == 0);
    tick(top);
    tick(top);
    assert(top->rename_stage__DOT__fl_spec_num == 112);
    assert(top->rename_decode_ready_o == 1);
    assert(top->renamed_v_o == 0);
    top->decoded_v_i = 1;
    top->decoded_i = set_decode(1,12,4,5,0,0);
    tick(top);
    tick(top);
    ASSERT_RENAME(1,12,12,18,16,17);
/*****************************************************************************/
    tfp->close();
    delete top;
    delete tfp;
    exit(0);
}