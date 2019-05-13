#include "Vfe_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 

#include <iostream>

static vluint64_t main_time = 0;

#define NUM_PHY_REG 128
#define NUM_ARCH_REG 16

static void tick(Vfe_top* DUT, VerilatedVcdC* tfp, vluint64_t &time) {
    DUT->clk_i = ((DUT->clk_i == 0) ? 1 : 0);
    DUT->eval();
    main_time++;
    tfp->dump(time);
}

// #define ASSERT_FETCH(pc_next) \
//     assert(DUT->fe_top__DOT__program_counter_n == pc_next)

// #define ASSERT_DECODE(pipe_vo, dst_src, src1_src, src2_src, is_branch, fu, opcode) \
//     assert(DUT->fe_top__DOT__valid_f_d == pipe_vo); \
//     assert(DUT->fe_top__DOT__dest_src_sel == dst_src); \
//     assert(DUT->fe_top__DOT__src_1_sel == src1_src); \
//     assert(DUT->fe_top__DOT__src_2_imm_sel == src2_src); \
//     assert(DUT->fe_top__DOT__is_branch_decode == is_branch); \
//     assert(DUT->fe_top__DOT__instruction_decoded_decode__DOT__func_unit == fu); \
//     assert(DUT->fe_top__DOT__instruction_decoded_decode__DOT__opcode == opcode)

// #define ASSERT_BRANCH(pipe_vo, take_branch, spec_branch, fu, opcode) \
//     assert(DUT->fe_top__DOT__valid_d_b == pipe_vo); \
//     assert(DUT->fe_top__DOT__take_branch == take_branch); \
//     assert(DUT->fe_top__DOT__spec_branch == spec_branch); \
//     assert(DUT->fe_top__DOT__instruction_decoded_branch__DOT__func_unit == fu); \
//     assert(DUT->fe_top__DOT__instruction_decoded_branch__DOT__opcode == opcode)



int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vfe_top* DUT = new Vfe_top;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    DUT->trace(tfp, 99);
    tfp->open("Vfe_top.vcd");

/*****************************************************************************/
    DUT->clk_i = 0;
    DUT->reset_i = 1;
    DUT->ready_i = 0;

    for(int i = 0; i < 10; i++) {
        tick(DUT, tfp, main_time);
    }

    // ASSERT_FETCH(0);
    // ASSERT_DECODE(0,0,0,0,0,0,0);
    // ASSERT_BRANCH(0,0,0,0,0);

    
    DUT->reset_i = 0;
    DUT->ready_i = 1;

    for(int i = 0; i < 400; i++) {
        tick(DUT, tfp, main_time);
    }
    
/*****************************************************************************/
    tfp->close();
    delete DUT;
    delete tfp;
    exit(0);
}
