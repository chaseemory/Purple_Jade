// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrob.h for the primary calling header

#include "Vrob.h"              // For This
#include "Vrob__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vrob) {
    Vrob__Syms* __restrict vlSymsp = __VlSymsp = new Vrob__Syms(this, name());
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vrob::__Vconfigure(Vrob__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vrob::~Vrob() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vrob::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrob::eval\n"); );
    Vrob__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void Vrob::_eval_initial_loop(Vrob__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vrob::_sequent__TOP__1(Vrob__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrob::_sequent__TOP__1\n"); );
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rob/rob.sv:201
    if (vlTOPp->reset_i) {
	vlTOPp->rob__DOT__rob_q[0U] = 0U;
	vlTOPp->rob__DOT__rob_q[1U] = 0U;
	vlTOPp->rob__DOT__rob_q[2U] = 0U;
	vlTOPp->rob__DOT__rob_q[3U] = 0U;
	vlTOPp->rob__DOT__rob_q[4U] = 0U;
	vlTOPp->rob__DOT__rob_q[5U] = 0U;
	vlTOPp->rob__DOT__rob_q[6U] = 0U;
	vlTOPp->rob__DOT__rob_q[7U] = 0U;
	vlTOPp->rob__DOT__rob_q[8U] = 0U;
	vlTOPp->rob__DOT__rob_q[9U] = 0U;
	vlTOPp->rob__DOT__rob_q[0xaU] = 0U;
	vlTOPp->rob__DOT__rob_q[0xbU] = 0U;
	vlTOPp->rob__DOT__rob_q[0xcU] = 0U;
	vlTOPp->rob__DOT__rob_q[0xdU] = 0U;
	vlTOPp->rob__DOT__rob_q[0xeU] = 0U;
	vlTOPp->rob__DOT__rob_q[0xfU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x10U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x11U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x12U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x13U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x14U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x15U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x16U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x17U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x18U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x19U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x1aU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x1bU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x1cU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x1dU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x1eU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x1fU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x20U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x21U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x22U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x23U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x24U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x25U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x26U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x27U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x28U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x29U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x2aU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x2bU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x2cU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x2dU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x2eU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x2fU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x30U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x31U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x32U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x33U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x34U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x35U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x36U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x37U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x38U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x39U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x3aU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x3bU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x3cU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x3dU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x3eU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x3fU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x40U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x41U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x42U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x43U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x44U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x45U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x46U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x47U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x48U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x49U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x4aU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x4bU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x4cU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x4dU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x4eU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x4fU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x50U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x51U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x52U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x53U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x54U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x55U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x56U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x57U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x58U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x59U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x5aU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x5bU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x5cU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x5dU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x5eU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x5fU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x60U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x61U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x62U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x63U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x64U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x65U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x66U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x67U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x68U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x69U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x6aU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x6bU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x6cU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x6dU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x6eU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x6fU] = 0U;
	vlTOPp->rob__DOT__rob_q[0x70U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x71U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x72U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x73U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x74U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x75U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x76U] = 0U;
	vlTOPp->rob__DOT__rob_q[0x77U] = 0U;
	vlTOPp->rob__DOT__rob_alloc_pt = 0U;
	vlTOPp->rob__DOT__rob_commit_pt = 0U;
	vlTOPp->rob__DOT__rob_num = 0x40U;
	vlTOPp->rob__DOT__prev_spec_branch = 0U;
	vlTOPp->rob__DOT__predicted_pc = 0U;
    } else {
	vlTOPp->rob__DOT__rob_q[0U] = vlTOPp->rob__DOT__rob_n[0U];
	vlTOPp->rob__DOT__rob_q[1U] = vlTOPp->rob__DOT__rob_n[1U];
	vlTOPp->rob__DOT__rob_q[2U] = vlTOPp->rob__DOT__rob_n[2U];
	vlTOPp->rob__DOT__rob_q[3U] = vlTOPp->rob__DOT__rob_n[3U];
	vlTOPp->rob__DOT__rob_q[4U] = vlTOPp->rob__DOT__rob_n[4U];
	vlTOPp->rob__DOT__rob_q[5U] = vlTOPp->rob__DOT__rob_n[5U];
	vlTOPp->rob__DOT__rob_q[6U] = vlTOPp->rob__DOT__rob_n[6U];
	vlTOPp->rob__DOT__rob_q[7U] = vlTOPp->rob__DOT__rob_n[7U];
	vlTOPp->rob__DOT__rob_q[8U] = vlTOPp->rob__DOT__rob_n[8U];
	vlTOPp->rob__DOT__rob_q[9U] = vlTOPp->rob__DOT__rob_n[9U];
	vlTOPp->rob__DOT__rob_q[0xaU] = vlTOPp->rob__DOT__rob_n[0xaU];
	vlTOPp->rob__DOT__rob_q[0xbU] = vlTOPp->rob__DOT__rob_n[0xbU];
	vlTOPp->rob__DOT__rob_q[0xcU] = vlTOPp->rob__DOT__rob_n[0xcU];
	vlTOPp->rob__DOT__rob_q[0xdU] = vlTOPp->rob__DOT__rob_n[0xdU];
	vlTOPp->rob__DOT__rob_q[0xeU] = vlTOPp->rob__DOT__rob_n[0xeU];
	vlTOPp->rob__DOT__rob_q[0xfU] = vlTOPp->rob__DOT__rob_n[0xfU];
	vlTOPp->rob__DOT__rob_q[0x10U] = vlTOPp->rob__DOT__rob_n[0x10U];
	vlTOPp->rob__DOT__rob_q[0x11U] = vlTOPp->rob__DOT__rob_n[0x11U];
	vlTOPp->rob__DOT__rob_q[0x12U] = vlTOPp->rob__DOT__rob_n[0x12U];
	vlTOPp->rob__DOT__rob_q[0x13U] = vlTOPp->rob__DOT__rob_n[0x13U];
	vlTOPp->rob__DOT__rob_q[0x14U] = vlTOPp->rob__DOT__rob_n[0x14U];
	vlTOPp->rob__DOT__rob_q[0x15U] = vlTOPp->rob__DOT__rob_n[0x15U];
	vlTOPp->rob__DOT__rob_q[0x16U] = vlTOPp->rob__DOT__rob_n[0x16U];
	vlTOPp->rob__DOT__rob_q[0x17U] = vlTOPp->rob__DOT__rob_n[0x17U];
	vlTOPp->rob__DOT__rob_q[0x18U] = vlTOPp->rob__DOT__rob_n[0x18U];
	vlTOPp->rob__DOT__rob_q[0x19U] = vlTOPp->rob__DOT__rob_n[0x19U];
	vlTOPp->rob__DOT__rob_q[0x1aU] = vlTOPp->rob__DOT__rob_n[0x1aU];
	vlTOPp->rob__DOT__rob_q[0x1bU] = vlTOPp->rob__DOT__rob_n[0x1bU];
	vlTOPp->rob__DOT__rob_q[0x1cU] = vlTOPp->rob__DOT__rob_n[0x1cU];
	vlTOPp->rob__DOT__rob_q[0x1dU] = vlTOPp->rob__DOT__rob_n[0x1dU];
	vlTOPp->rob__DOT__rob_q[0x1eU] = vlTOPp->rob__DOT__rob_n[0x1eU];
	vlTOPp->rob__DOT__rob_q[0x1fU] = vlTOPp->rob__DOT__rob_n[0x1fU];
	vlTOPp->rob__DOT__rob_q[0x20U] = vlTOPp->rob__DOT__rob_n[0x20U];
	vlTOPp->rob__DOT__rob_q[0x21U] = vlTOPp->rob__DOT__rob_n[0x21U];
	vlTOPp->rob__DOT__rob_q[0x22U] = vlTOPp->rob__DOT__rob_n[0x22U];
	vlTOPp->rob__DOT__rob_q[0x23U] = vlTOPp->rob__DOT__rob_n[0x23U];
	vlTOPp->rob__DOT__rob_q[0x24U] = vlTOPp->rob__DOT__rob_n[0x24U];
	vlTOPp->rob__DOT__rob_q[0x25U] = vlTOPp->rob__DOT__rob_n[0x25U];
	vlTOPp->rob__DOT__rob_q[0x26U] = vlTOPp->rob__DOT__rob_n[0x26U];
	vlTOPp->rob__DOT__rob_q[0x27U] = vlTOPp->rob__DOT__rob_n[0x27U];
	vlTOPp->rob__DOT__rob_q[0x28U] = vlTOPp->rob__DOT__rob_n[0x28U];
	vlTOPp->rob__DOT__rob_q[0x29U] = vlTOPp->rob__DOT__rob_n[0x29U];
	vlTOPp->rob__DOT__rob_q[0x2aU] = vlTOPp->rob__DOT__rob_n[0x2aU];
	vlTOPp->rob__DOT__rob_q[0x2bU] = vlTOPp->rob__DOT__rob_n[0x2bU];
	vlTOPp->rob__DOT__rob_q[0x2cU] = vlTOPp->rob__DOT__rob_n[0x2cU];
	vlTOPp->rob__DOT__rob_q[0x2dU] = vlTOPp->rob__DOT__rob_n[0x2dU];
	vlTOPp->rob__DOT__rob_q[0x2eU] = vlTOPp->rob__DOT__rob_n[0x2eU];
	vlTOPp->rob__DOT__rob_q[0x2fU] = vlTOPp->rob__DOT__rob_n[0x2fU];
	vlTOPp->rob__DOT__rob_q[0x30U] = vlTOPp->rob__DOT__rob_n[0x30U];
	vlTOPp->rob__DOT__rob_q[0x31U] = vlTOPp->rob__DOT__rob_n[0x31U];
	vlTOPp->rob__DOT__rob_q[0x32U] = vlTOPp->rob__DOT__rob_n[0x32U];
	vlTOPp->rob__DOT__rob_q[0x33U] = vlTOPp->rob__DOT__rob_n[0x33U];
	vlTOPp->rob__DOT__rob_q[0x34U] = vlTOPp->rob__DOT__rob_n[0x34U];
	vlTOPp->rob__DOT__rob_q[0x35U] = vlTOPp->rob__DOT__rob_n[0x35U];
	vlTOPp->rob__DOT__rob_q[0x36U] = vlTOPp->rob__DOT__rob_n[0x36U];
	vlTOPp->rob__DOT__rob_q[0x37U] = vlTOPp->rob__DOT__rob_n[0x37U];
	vlTOPp->rob__DOT__rob_q[0x38U] = vlTOPp->rob__DOT__rob_n[0x38U];
	vlTOPp->rob__DOT__rob_q[0x39U] = vlTOPp->rob__DOT__rob_n[0x39U];
	vlTOPp->rob__DOT__rob_q[0x3aU] = vlTOPp->rob__DOT__rob_n[0x3aU];
	vlTOPp->rob__DOT__rob_q[0x3bU] = vlTOPp->rob__DOT__rob_n[0x3bU];
	vlTOPp->rob__DOT__rob_q[0x3cU] = vlTOPp->rob__DOT__rob_n[0x3cU];
	vlTOPp->rob__DOT__rob_q[0x3dU] = vlTOPp->rob__DOT__rob_n[0x3dU];
	vlTOPp->rob__DOT__rob_q[0x3eU] = vlTOPp->rob__DOT__rob_n[0x3eU];
	vlTOPp->rob__DOT__rob_q[0x3fU] = vlTOPp->rob__DOT__rob_n[0x3fU];
	vlTOPp->rob__DOT__rob_q[0x40U] = vlTOPp->rob__DOT__rob_n[0x40U];
	vlTOPp->rob__DOT__rob_q[0x41U] = vlTOPp->rob__DOT__rob_n[0x41U];
	vlTOPp->rob__DOT__rob_q[0x42U] = vlTOPp->rob__DOT__rob_n[0x42U];
	vlTOPp->rob__DOT__rob_q[0x43U] = vlTOPp->rob__DOT__rob_n[0x43U];
	vlTOPp->rob__DOT__rob_q[0x44U] = vlTOPp->rob__DOT__rob_n[0x44U];
	vlTOPp->rob__DOT__rob_q[0x45U] = vlTOPp->rob__DOT__rob_n[0x45U];
	vlTOPp->rob__DOT__rob_q[0x46U] = vlTOPp->rob__DOT__rob_n[0x46U];
	vlTOPp->rob__DOT__rob_q[0x47U] = vlTOPp->rob__DOT__rob_n[0x47U];
	vlTOPp->rob__DOT__rob_q[0x48U] = vlTOPp->rob__DOT__rob_n[0x48U];
	vlTOPp->rob__DOT__rob_q[0x49U] = vlTOPp->rob__DOT__rob_n[0x49U];
	vlTOPp->rob__DOT__rob_q[0x4aU] = vlTOPp->rob__DOT__rob_n[0x4aU];
	vlTOPp->rob__DOT__rob_q[0x4bU] = vlTOPp->rob__DOT__rob_n[0x4bU];
	vlTOPp->rob__DOT__rob_q[0x4cU] = vlTOPp->rob__DOT__rob_n[0x4cU];
	vlTOPp->rob__DOT__rob_q[0x4dU] = vlTOPp->rob__DOT__rob_n[0x4dU];
	vlTOPp->rob__DOT__rob_q[0x4eU] = vlTOPp->rob__DOT__rob_n[0x4eU];
	vlTOPp->rob__DOT__rob_q[0x4fU] = vlTOPp->rob__DOT__rob_n[0x4fU];
	vlTOPp->rob__DOT__rob_q[0x50U] = vlTOPp->rob__DOT__rob_n[0x50U];
	vlTOPp->rob__DOT__rob_q[0x51U] = vlTOPp->rob__DOT__rob_n[0x51U];
	vlTOPp->rob__DOT__rob_q[0x52U] = vlTOPp->rob__DOT__rob_n[0x52U];
	vlTOPp->rob__DOT__rob_q[0x53U] = vlTOPp->rob__DOT__rob_n[0x53U];
	vlTOPp->rob__DOT__rob_q[0x54U] = vlTOPp->rob__DOT__rob_n[0x54U];
	vlTOPp->rob__DOT__rob_q[0x55U] = vlTOPp->rob__DOT__rob_n[0x55U];
	vlTOPp->rob__DOT__rob_q[0x56U] = vlTOPp->rob__DOT__rob_n[0x56U];
	vlTOPp->rob__DOT__rob_q[0x57U] = vlTOPp->rob__DOT__rob_n[0x57U];
	vlTOPp->rob__DOT__rob_q[0x58U] = vlTOPp->rob__DOT__rob_n[0x58U];
	vlTOPp->rob__DOT__rob_q[0x59U] = vlTOPp->rob__DOT__rob_n[0x59U];
	vlTOPp->rob__DOT__rob_q[0x5aU] = vlTOPp->rob__DOT__rob_n[0x5aU];
	vlTOPp->rob__DOT__rob_q[0x5bU] = vlTOPp->rob__DOT__rob_n[0x5bU];
	vlTOPp->rob__DOT__rob_q[0x5cU] = vlTOPp->rob__DOT__rob_n[0x5cU];
	vlTOPp->rob__DOT__rob_q[0x5dU] = vlTOPp->rob__DOT__rob_n[0x5dU];
	vlTOPp->rob__DOT__rob_q[0x5eU] = vlTOPp->rob__DOT__rob_n[0x5eU];
	vlTOPp->rob__DOT__rob_q[0x5fU] = vlTOPp->rob__DOT__rob_n[0x5fU];
	vlTOPp->rob__DOT__rob_q[0x60U] = vlTOPp->rob__DOT__rob_n[0x60U];
	vlTOPp->rob__DOT__rob_q[0x61U] = vlTOPp->rob__DOT__rob_n[0x61U];
	vlTOPp->rob__DOT__rob_q[0x62U] = vlTOPp->rob__DOT__rob_n[0x62U];
	vlTOPp->rob__DOT__rob_q[0x63U] = vlTOPp->rob__DOT__rob_n[0x63U];
	vlTOPp->rob__DOT__rob_q[0x64U] = vlTOPp->rob__DOT__rob_n[0x64U];
	vlTOPp->rob__DOT__rob_q[0x65U] = vlTOPp->rob__DOT__rob_n[0x65U];
	vlTOPp->rob__DOT__rob_q[0x66U] = vlTOPp->rob__DOT__rob_n[0x66U];
	vlTOPp->rob__DOT__rob_q[0x67U] = vlTOPp->rob__DOT__rob_n[0x67U];
	vlTOPp->rob__DOT__rob_q[0x68U] = vlTOPp->rob__DOT__rob_n[0x68U];
	vlTOPp->rob__DOT__rob_q[0x69U] = vlTOPp->rob__DOT__rob_n[0x69U];
	vlTOPp->rob__DOT__rob_q[0x6aU] = vlTOPp->rob__DOT__rob_n[0x6aU];
	vlTOPp->rob__DOT__rob_q[0x6bU] = vlTOPp->rob__DOT__rob_n[0x6bU];
	vlTOPp->rob__DOT__rob_q[0x6cU] = vlTOPp->rob__DOT__rob_n[0x6cU];
	vlTOPp->rob__DOT__rob_q[0x6dU] = vlTOPp->rob__DOT__rob_n[0x6dU];
	vlTOPp->rob__DOT__rob_q[0x6eU] = vlTOPp->rob__DOT__rob_n[0x6eU];
	vlTOPp->rob__DOT__rob_q[0x6fU] = vlTOPp->rob__DOT__rob_n[0x6fU];
	vlTOPp->rob__DOT__rob_q[0x70U] = vlTOPp->rob__DOT__rob_n[0x70U];
	vlTOPp->rob__DOT__rob_q[0x71U] = vlTOPp->rob__DOT__rob_n[0x71U];
	vlTOPp->rob__DOT__rob_q[0x72U] = vlTOPp->rob__DOT__rob_n[0x72U];
	vlTOPp->rob__DOT__rob_q[0x73U] = vlTOPp->rob__DOT__rob_n[0x73U];
	vlTOPp->rob__DOT__rob_q[0x74U] = vlTOPp->rob__DOT__rob_n[0x74U];
	vlTOPp->rob__DOT__rob_q[0x75U] = vlTOPp->rob__DOT__rob_n[0x75U];
	vlTOPp->rob__DOT__rob_q[0x76U] = vlTOPp->rob__DOT__rob_n[0x76U];
	vlTOPp->rob__DOT__rob_q[0x77U] = vlTOPp->rob__DOT__rob_n[0x77U];
	vlTOPp->rob__DOT__rob_alloc_pt = vlTOPp->rob__DOT__rob_alloc_pt_n;
	vlTOPp->rob__DOT__rob_commit_pt = vlTOPp->rob__DOT__rob_commit_pt_n;
	vlTOPp->rob__DOT__rob_num = vlTOPp->rob__DOT__rob_num_n;
	vlTOPp->rob__DOT__prev_spec_branch = (1U & (IData)(
							   (vlTOPp->rob__DOT__committing_instr 
							    >> 0x2aU)));
	vlTOPp->rob__DOT__predicted_pc = (0xffffU & 
					  ((1U & (IData)(
							 (vlTOPp->rob__DOT__committing_instr 
							  >> 0x29U)))
					    ? ((IData)(vlTOPp->rob__DOT__condition_taken)
					        ? (0xffffU 
						   & (IData)(
							     (vlTOPp->rob__DOT__committing_instr 
							      >> 0x15U)))
					        : ((IData)(4U) 
						   + 
						   (0xffffU 
						    & (IData)(
							      (vlTOPp->rob__DOT__committing_instr 
							       >> 0x2cU)))))
					    : (IData)(
						      (vlTOPp->rob__DOT__committing_instr 
						       >> 0x15U))));
    }
    vlTOPp->rob_issue_entry_num_o = vlTOPp->rob__DOT__rob_alloc_pt;
    vlTOPp->rob_fe_redirected_pc_o = vlTOPp->rob__DOT__predicted_pc;
    vlTOPp->rob__DOT__committing_instr = (VL_ULL(0xfffffffffffffff) 
					  & ((0xeffU 
					      >= (0xfffU 
						  & ((IData)(0x3cU) 
						     * (IData)(vlTOPp->rob__DOT__rob_commit_pt))))
					      ? (((0U 
						   == 
						   (0x1fU 
						    & ((IData)(0x3cU) 
						       * (IData)(vlTOPp->rob__DOT__rob_commit_pt))))
						   ? VL_ULL(0)
						   : 
						  ((QData)((IData)(
								   vlTOPp->rob__DOT__rob_q[
								   ((IData)(2U) 
								    + 
								    (0x7fU 
								     & (((IData)(0x3cU) 
									 * (IData)(vlTOPp->rob__DOT__rob_commit_pt)) 
									>> 5U)))])) 
						   << 
						   ((IData)(0x40U) 
						    - 
						    (0x1fU 
						     & ((IData)(0x3cU) 
							* (IData)(vlTOPp->rob__DOT__rob_commit_pt)))))) 
						 | (((QData)((IData)(
								     vlTOPp->rob__DOT__rob_q[
								     ((IData)(1U) 
								      + 
								      (0x7fU 
								       & (((IData)(0x3cU) 
									   * (IData)(vlTOPp->rob__DOT__rob_commit_pt)) 
									  >> 5U)))])) 
						     << 
						     ((0U 
						       == 
						       (0x1fU 
							& ((IData)(0x3cU) 
							   * (IData)(vlTOPp->rob__DOT__rob_commit_pt))))
						       ? 0x20U
						       : 
						      ((IData)(0x20U) 
						       - 
						       (0x1fU 
							& ((IData)(0x3cU) 
							   * (IData)(vlTOPp->rob__DOT__rob_commit_pt)))))) 
						    | ((QData)((IData)(
								       vlTOPp->rob__DOT__rob_q[
								       (0x7fU 
									& (((IData)(0x3cU) 
									    * (IData)(vlTOPp->rob__DOT__rob_commit_pt)) 
									   >> 5U))])) 
						       >> 
						       (0x1fU 
							& ((IData)(0x3cU) 
							   * (IData)(vlTOPp->rob__DOT__rob_commit_pt))))))
					      : VL_ULL(0)));
    vlTOPp->rob_phys_reg_cl_o = (0x7fU & (IData)((vlTOPp->rob__DOT__committing_instr 
						  >> 4U)));
    vlTOPp->rob_flag_o = (0xffU & (IData)((vlTOPp->rob__DOT__committing_instr 
					   >> 0xdU)));
    vlTOPp->rob__DOT__rename_entry = ((0x800U & ((IData)(
							 (vlTOPp->rob__DOT__committing_instr 
							  >> 0xbU)) 
						 << 0xbU)) 
				      | ((0x780U & 
					  ((IData)(vlTOPp->rob__DOT__committing_instr) 
					   << 7U)) 
					 | (0x7fU & (IData)(
							    (vlTOPp->rob__DOT__committing_instr 
							     >> 4U)))));
    vlTOPp->rob_mispredict_o = (((IData)((vlTOPp->rob__DOT__committing_instr 
					  >> 0x2bU)) 
				 & ((0xffffU & (IData)(
						       (vlTOPp->rob__DOT__committing_instr 
							>> 0x2cU))) 
				    != (IData)(vlTOPp->rob__DOT__predicted_pc))) 
				& (IData)(vlTOPp->rob__DOT__prev_spec_branch));
    vlTOPp->rob_rename_entry_o = vlTOPp->rob__DOT__rename_entry;
    vlTOPp->rob_sb_valid_o = (1U & (((IData)((vlTOPp->rob__DOT__committing_instr 
					      >> 0x2bU)) 
				     & (IData)((vlTOPp->rob__DOT__committing_instr 
						>> 0xcU))) 
				    & (~ (IData)(vlTOPp->rob_mispredict_o))));
    vlTOPp->rob_phys_valid_o = (1U & ((((IData)((vlTOPp->rob__DOT__committing_instr 
						 >> 0x2bU)) 
					& (IData)((vlTOPp->rob__DOT__committing_instr 
						   >> 0xbU))) 
				       & (~ (IData)(
						    (vlTOPp->rob__DOT__committing_instr 
						     >> 0xcU)))) 
				      & (~ (IData)(vlTOPp->rob_mispredict_o))));
    vlTOPp->rob_rename_valid_o = (1U & ((IData)((vlTOPp->rob__DOT__committing_instr 
						 >> 0x2bU)) 
					& (~ (IData)(vlTOPp->rob_mispredict_o))));
    vlTOPp->rob_flag_valid_o = (((IData)((vlTOPp->rob__DOT__committing_instr 
					  >> 0x2bU)) 
				 & (~ (IData)(vlTOPp->rob_mispredict_o))) 
				& (0U != (0xfU & (IData)(
							 (vlTOPp->rob__DOT__committing_instr 
							  >> 0x11U)))));
    vlTOPp->rob_issue_ready_o = ((0U != (IData)(vlTOPp->rob__DOT__rob_num)) 
				 & (~ (IData)(vlTOPp->rob_mispredict_o)));
}

void Vrob::_settle__TOP__2(Vrob__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrob::_settle__TOP__2\n"); );
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rob_issue_entry_num_o = vlTOPp->rob__DOT__rob_alloc_pt;
    vlTOPp->rob_fe_redirected_pc_o = vlTOPp->rob__DOT__predicted_pc;
    vlTOPp->rob__DOT__committing_instr = (VL_ULL(0xfffffffffffffff) 
					  & ((0xeffU 
					      >= (0xfffU 
						  & ((IData)(0x3cU) 
						     * (IData)(vlTOPp->rob__DOT__rob_commit_pt))))
					      ? (((0U 
						   == 
						   (0x1fU 
						    & ((IData)(0x3cU) 
						       * (IData)(vlTOPp->rob__DOT__rob_commit_pt))))
						   ? VL_ULL(0)
						   : 
						  ((QData)((IData)(
								   vlTOPp->rob__DOT__rob_q[
								   ((IData)(2U) 
								    + 
								    (0x7fU 
								     & (((IData)(0x3cU) 
									 * (IData)(vlTOPp->rob__DOT__rob_commit_pt)) 
									>> 5U)))])) 
						   << 
						   ((IData)(0x40U) 
						    - 
						    (0x1fU 
						     & ((IData)(0x3cU) 
							* (IData)(vlTOPp->rob__DOT__rob_commit_pt)))))) 
						 | (((QData)((IData)(
								     vlTOPp->rob__DOT__rob_q[
								     ((IData)(1U) 
								      + 
								      (0x7fU 
								       & (((IData)(0x3cU) 
									   * (IData)(vlTOPp->rob__DOT__rob_commit_pt)) 
									  >> 5U)))])) 
						     << 
						     ((0U 
						       == 
						       (0x1fU 
							& ((IData)(0x3cU) 
							   * (IData)(vlTOPp->rob__DOT__rob_commit_pt))))
						       ? 0x20U
						       : 
						      ((IData)(0x20U) 
						       - 
						       (0x1fU 
							& ((IData)(0x3cU) 
							   * (IData)(vlTOPp->rob__DOT__rob_commit_pt)))))) 
						    | ((QData)((IData)(
								       vlTOPp->rob__DOT__rob_q[
								       (0x7fU 
									& (((IData)(0x3cU) 
									    * (IData)(vlTOPp->rob__DOT__rob_commit_pt)) 
									   >> 5U))])) 
						       >> 
						       (0x1fU 
							& ((IData)(0x3cU) 
							   * (IData)(vlTOPp->rob__DOT__rob_commit_pt))))))
					      : VL_ULL(0)));
    vlTOPp->rob_phys_reg_cl_o = (0x7fU & (IData)((vlTOPp->rob__DOT__committing_instr 
						  >> 4U)));
    vlTOPp->rob_flag_o = (0xffU & (IData)((vlTOPp->rob__DOT__committing_instr 
					   >> 0xdU)));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rob/rob.sv:113
    vlTOPp->rob__DOT__condition_taken = (1U & ((1U 
						& (IData)(
							  (vlTOPp->rob__DOT__committing_instr 
							   >> 0x28U)))
					        ? (
						   (1U 
						    & (IData)(
							      (vlTOPp->rob__DOT__committing_instr 
							       >> 0x27U)))
						    ? 
						   ((1U 
						     & (IData)(
							       (vlTOPp->rob__DOT__committing_instr 
								>> 0x26U)))
						     ? 
						    (~ (IData)(
							       (vlTOPp->rob__DOT__committing_instr 
								>> 0x25U)))
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->rob__DOT__committing_instr 
								 >> 0x25U)))
						      ? 
						     (((IData)(vlTOPp->flag_rob_i) 
						       >> 1U) 
						      | ((1U 
							  & (~ 
							     ((IData)(vlTOPp->flag_rob_i) 
							      >> 2U))) 
							 == 
							 (1U 
							  & (IData)(vlTOPp->flag_rob_i))))
						      : 
						     ((~ 
						       ((IData)(vlTOPp->flag_rob_i) 
							>> 1U)) 
						      & ((1U 
							  & ((IData)(vlTOPp->flag_rob_i) 
							     >> 2U)) 
							 == 
							 (1U 
							  & (IData)(vlTOPp->flag_rob_i))))))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->rob__DOT__committing_instr 
								>> 0x26U)))
						     ? 
						    ((1U 
						      & (IData)(
								(vlTOPp->rob__DOT__committing_instr 
								 >> 0x25U)))
						      ? 
						     ((1U 
						       & (~ 
							  ((IData)(vlTOPp->flag_rob_i) 
							   >> 2U))) 
						      == 
						      (1U 
						       & (IData)(vlTOPp->flag_rob_i)))
						      : 
						     ((1U 
						       & ((IData)(vlTOPp->flag_rob_i) 
							  >> 2U)) 
						      == 
						      (1U 
						       & (IData)(vlTOPp->flag_rob_i))))
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->rob__DOT__committing_instr 
								 >> 0x25U)))
						      ? 
						     ((~ 
						       ((IData)(vlTOPp->flag_rob_i) 
							>> 3U)) 
						      | ((IData)(vlTOPp->flag_rob_i) 
							 >> 1U))
						      : 
						     (((IData)(vlTOPp->flag_rob_i) 
						       >> 3U) 
						      & (~ 
							 ((IData)(vlTOPp->flag_rob_i) 
							  >> 1U))))))
					        : (
						   (1U 
						    & (IData)(
							      (vlTOPp->rob__DOT__committing_instr 
							       >> 0x27U)))
						    ? 
						   ((1U 
						     & (IData)(
							       (vlTOPp->rob__DOT__committing_instr 
								>> 0x26U)))
						     ? 
						    ((1U 
						      & (IData)(
								(vlTOPp->rob__DOT__committing_instr 
								 >> 0x25U)))
						      ? 
						     (~ (IData)(vlTOPp->flag_rob_i))
						      : (IData)(vlTOPp->flag_rob_i))
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->rob__DOT__committing_instr 
								 >> 0x25U)))
						      ? 
						     (~ 
						      ((IData)(vlTOPp->flag_rob_i) 
						       >> 2U))
						      : 
						     ((IData)(vlTOPp->flag_rob_i) 
						      >> 2U)))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->rob__DOT__committing_instr 
								>> 0x26U)))
						     ? 
						    ((1U 
						      & (IData)(
								(vlTOPp->rob__DOT__committing_instr 
								 >> 0x25U)))
						      ? 
						     (~ 
						      ((IData)(vlTOPp->flag_rob_i) 
						       >> 3U))
						      : 
						     ((IData)(vlTOPp->flag_rob_i) 
						      >> 3U))
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->rob__DOT__committing_instr 
								 >> 0x25U)))
						      ? 
						     (~ 
						      ((IData)(vlTOPp->flag_rob_i) 
						       >> 1U))
						      : 
						     ((IData)(vlTOPp->flag_rob_i) 
						      >> 1U))))));
    vlTOPp->rob__DOT__rename_entry = ((0x800U & ((IData)(
							 (vlTOPp->rob__DOT__committing_instr 
							  >> 0xbU)) 
						 << 0xbU)) 
				      | ((0x780U & 
					  ((IData)(vlTOPp->rob__DOT__committing_instr) 
					   << 7U)) 
					 | (0x7fU & (IData)(
							    (vlTOPp->rob__DOT__committing_instr 
							     >> 4U)))));
    vlTOPp->rob_mispredict_o = (((IData)((vlTOPp->rob__DOT__committing_instr 
					  >> 0x2bU)) 
				 & ((0xffffU & (IData)(
						       (vlTOPp->rob__DOT__committing_instr 
							>> 0x2cU))) 
				    != (IData)(vlTOPp->rob__DOT__predicted_pc))) 
				& (IData)(vlTOPp->rob__DOT__prev_spec_branch));
    vlTOPp->rob_rename_entry_o = vlTOPp->rob__DOT__rename_entry;
    vlTOPp->rob_sb_valid_o = (1U & (((IData)((vlTOPp->rob__DOT__committing_instr 
					      >> 0x2bU)) 
				     & (IData)((vlTOPp->rob__DOT__committing_instr 
						>> 0xcU))) 
				    & (~ (IData)(vlTOPp->rob_mispredict_o))));
    vlTOPp->rob_phys_valid_o = (1U & ((((IData)((vlTOPp->rob__DOT__committing_instr 
						 >> 0x2bU)) 
					& (IData)((vlTOPp->rob__DOT__committing_instr 
						   >> 0xbU))) 
				       & (~ (IData)(
						    (vlTOPp->rob__DOT__committing_instr 
						     >> 0xcU)))) 
				      & (~ (IData)(vlTOPp->rob_mispredict_o))));
    vlTOPp->rob_rename_valid_o = (1U & ((IData)((vlTOPp->rob__DOT__committing_instr 
						 >> 0x2bU)) 
					& (~ (IData)(vlTOPp->rob_mispredict_o))));
    vlTOPp->rob_flag_valid_o = (((IData)((vlTOPp->rob__DOT__committing_instr 
					  >> 0x2bU)) 
				 & (~ (IData)(vlTOPp->rob_mispredict_o))) 
				& (0U != (0xfU & (IData)(
							 (vlTOPp->rob__DOT__committing_instr 
							  >> 0x11U)))));
    vlTOPp->rob_issue_ready_o = ((0U != (IData)(vlTOPp->rob__DOT__rob_num)) 
				 & (~ (IData)(vlTOPp->rob_mispredict_o)));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rob/rob.sv:135
    vlTOPp->rob__DOT__rob_n[0U] = vlTOPp->rob__DOT__rob_q[0U];
    vlTOPp->rob__DOT__rob_n[1U] = vlTOPp->rob__DOT__rob_q[1U];
    vlTOPp->rob__DOT__rob_n[2U] = vlTOPp->rob__DOT__rob_q[2U];
    vlTOPp->rob__DOT__rob_n[3U] = vlTOPp->rob__DOT__rob_q[3U];
    vlTOPp->rob__DOT__rob_n[4U] = vlTOPp->rob__DOT__rob_q[4U];
    vlTOPp->rob__DOT__rob_n[5U] = vlTOPp->rob__DOT__rob_q[5U];
    vlTOPp->rob__DOT__rob_n[6U] = vlTOPp->rob__DOT__rob_q[6U];
    vlTOPp->rob__DOT__rob_n[7U] = vlTOPp->rob__DOT__rob_q[7U];
    vlTOPp->rob__DOT__rob_n[8U] = vlTOPp->rob__DOT__rob_q[8U];
    vlTOPp->rob__DOT__rob_n[9U] = vlTOPp->rob__DOT__rob_q[9U];
    vlTOPp->rob__DOT__rob_n[0xaU] = vlTOPp->rob__DOT__rob_q[0xaU];
    vlTOPp->rob__DOT__rob_n[0xbU] = vlTOPp->rob__DOT__rob_q[0xbU];
    vlTOPp->rob__DOT__rob_n[0xcU] = vlTOPp->rob__DOT__rob_q[0xcU];
    vlTOPp->rob__DOT__rob_n[0xdU] = vlTOPp->rob__DOT__rob_q[0xdU];
    vlTOPp->rob__DOT__rob_n[0xeU] = vlTOPp->rob__DOT__rob_q[0xeU];
    vlTOPp->rob__DOT__rob_n[0xfU] = vlTOPp->rob__DOT__rob_q[0xfU];
    vlTOPp->rob__DOT__rob_n[0x10U] = vlTOPp->rob__DOT__rob_q[0x10U];
    vlTOPp->rob__DOT__rob_n[0x11U] = vlTOPp->rob__DOT__rob_q[0x11U];
    vlTOPp->rob__DOT__rob_n[0x12U] = vlTOPp->rob__DOT__rob_q[0x12U];
    vlTOPp->rob__DOT__rob_n[0x13U] = vlTOPp->rob__DOT__rob_q[0x13U];
    vlTOPp->rob__DOT__rob_n[0x14U] = vlTOPp->rob__DOT__rob_q[0x14U];
    vlTOPp->rob__DOT__rob_n[0x15U] = vlTOPp->rob__DOT__rob_q[0x15U];
    vlTOPp->rob__DOT__rob_n[0x16U] = vlTOPp->rob__DOT__rob_q[0x16U];
    vlTOPp->rob__DOT__rob_n[0x17U] = vlTOPp->rob__DOT__rob_q[0x17U];
    vlTOPp->rob__DOT__rob_n[0x18U] = vlTOPp->rob__DOT__rob_q[0x18U];
    vlTOPp->rob__DOT__rob_n[0x19U] = vlTOPp->rob__DOT__rob_q[0x19U];
    vlTOPp->rob__DOT__rob_n[0x1aU] = vlTOPp->rob__DOT__rob_q[0x1aU];
    vlTOPp->rob__DOT__rob_n[0x1bU] = vlTOPp->rob__DOT__rob_q[0x1bU];
    vlTOPp->rob__DOT__rob_n[0x1cU] = vlTOPp->rob__DOT__rob_q[0x1cU];
    vlTOPp->rob__DOT__rob_n[0x1dU] = vlTOPp->rob__DOT__rob_q[0x1dU];
    vlTOPp->rob__DOT__rob_n[0x1eU] = vlTOPp->rob__DOT__rob_q[0x1eU];
    vlTOPp->rob__DOT__rob_n[0x1fU] = vlTOPp->rob__DOT__rob_q[0x1fU];
    vlTOPp->rob__DOT__rob_n[0x20U] = vlTOPp->rob__DOT__rob_q[0x20U];
    vlTOPp->rob__DOT__rob_n[0x21U] = vlTOPp->rob__DOT__rob_q[0x21U];
    vlTOPp->rob__DOT__rob_n[0x22U] = vlTOPp->rob__DOT__rob_q[0x22U];
    vlTOPp->rob__DOT__rob_n[0x23U] = vlTOPp->rob__DOT__rob_q[0x23U];
    vlTOPp->rob__DOT__rob_n[0x24U] = vlTOPp->rob__DOT__rob_q[0x24U];
    vlTOPp->rob__DOT__rob_n[0x25U] = vlTOPp->rob__DOT__rob_q[0x25U];
    vlTOPp->rob__DOT__rob_n[0x26U] = vlTOPp->rob__DOT__rob_q[0x26U];
    vlTOPp->rob__DOT__rob_n[0x27U] = vlTOPp->rob__DOT__rob_q[0x27U];
    vlTOPp->rob__DOT__rob_n[0x28U] = vlTOPp->rob__DOT__rob_q[0x28U];
    vlTOPp->rob__DOT__rob_n[0x29U] = vlTOPp->rob__DOT__rob_q[0x29U];
    vlTOPp->rob__DOT__rob_n[0x2aU] = vlTOPp->rob__DOT__rob_q[0x2aU];
    vlTOPp->rob__DOT__rob_n[0x2bU] = vlTOPp->rob__DOT__rob_q[0x2bU];
    vlTOPp->rob__DOT__rob_n[0x2cU] = vlTOPp->rob__DOT__rob_q[0x2cU];
    vlTOPp->rob__DOT__rob_n[0x2dU] = vlTOPp->rob__DOT__rob_q[0x2dU];
    vlTOPp->rob__DOT__rob_n[0x2eU] = vlTOPp->rob__DOT__rob_q[0x2eU];
    vlTOPp->rob__DOT__rob_n[0x2fU] = vlTOPp->rob__DOT__rob_q[0x2fU];
    vlTOPp->rob__DOT__rob_n[0x30U] = vlTOPp->rob__DOT__rob_q[0x30U];
    vlTOPp->rob__DOT__rob_n[0x31U] = vlTOPp->rob__DOT__rob_q[0x31U];
    vlTOPp->rob__DOT__rob_n[0x32U] = vlTOPp->rob__DOT__rob_q[0x32U];
    vlTOPp->rob__DOT__rob_n[0x33U] = vlTOPp->rob__DOT__rob_q[0x33U];
    vlTOPp->rob__DOT__rob_n[0x34U] = vlTOPp->rob__DOT__rob_q[0x34U];
    vlTOPp->rob__DOT__rob_n[0x35U] = vlTOPp->rob__DOT__rob_q[0x35U];
    vlTOPp->rob__DOT__rob_n[0x36U] = vlTOPp->rob__DOT__rob_q[0x36U];
    vlTOPp->rob__DOT__rob_n[0x37U] = vlTOPp->rob__DOT__rob_q[0x37U];
    vlTOPp->rob__DOT__rob_n[0x38U] = vlTOPp->rob__DOT__rob_q[0x38U];
    vlTOPp->rob__DOT__rob_n[0x39U] = vlTOPp->rob__DOT__rob_q[0x39U];
    vlTOPp->rob__DOT__rob_n[0x3aU] = vlTOPp->rob__DOT__rob_q[0x3aU];
    vlTOPp->rob__DOT__rob_n[0x3bU] = vlTOPp->rob__DOT__rob_q[0x3bU];
    vlTOPp->rob__DOT__rob_n[0x3cU] = vlTOPp->rob__DOT__rob_q[0x3cU];
    vlTOPp->rob__DOT__rob_n[0x3dU] = vlTOPp->rob__DOT__rob_q[0x3dU];
    vlTOPp->rob__DOT__rob_n[0x3eU] = vlTOPp->rob__DOT__rob_q[0x3eU];
    vlTOPp->rob__DOT__rob_n[0x3fU] = vlTOPp->rob__DOT__rob_q[0x3fU];
    vlTOPp->rob__DOT__rob_n[0x40U] = vlTOPp->rob__DOT__rob_q[0x40U];
    vlTOPp->rob__DOT__rob_n[0x41U] = vlTOPp->rob__DOT__rob_q[0x41U];
    vlTOPp->rob__DOT__rob_n[0x42U] = vlTOPp->rob__DOT__rob_q[0x42U];
    vlTOPp->rob__DOT__rob_n[0x43U] = vlTOPp->rob__DOT__rob_q[0x43U];
    vlTOPp->rob__DOT__rob_n[0x44U] = vlTOPp->rob__DOT__rob_q[0x44U];
    vlTOPp->rob__DOT__rob_n[0x45U] = vlTOPp->rob__DOT__rob_q[0x45U];
    vlTOPp->rob__DOT__rob_n[0x46U] = vlTOPp->rob__DOT__rob_q[0x46U];
    vlTOPp->rob__DOT__rob_n[0x47U] = vlTOPp->rob__DOT__rob_q[0x47U];
    vlTOPp->rob__DOT__rob_n[0x48U] = vlTOPp->rob__DOT__rob_q[0x48U];
    vlTOPp->rob__DOT__rob_n[0x49U] = vlTOPp->rob__DOT__rob_q[0x49U];
    vlTOPp->rob__DOT__rob_n[0x4aU] = vlTOPp->rob__DOT__rob_q[0x4aU];
    vlTOPp->rob__DOT__rob_n[0x4bU] = vlTOPp->rob__DOT__rob_q[0x4bU];
    vlTOPp->rob__DOT__rob_n[0x4cU] = vlTOPp->rob__DOT__rob_q[0x4cU];
    vlTOPp->rob__DOT__rob_n[0x4dU] = vlTOPp->rob__DOT__rob_q[0x4dU];
    vlTOPp->rob__DOT__rob_n[0x4eU] = vlTOPp->rob__DOT__rob_q[0x4eU];
    vlTOPp->rob__DOT__rob_n[0x4fU] = vlTOPp->rob__DOT__rob_q[0x4fU];
    vlTOPp->rob__DOT__rob_n[0x50U] = vlTOPp->rob__DOT__rob_q[0x50U];
    vlTOPp->rob__DOT__rob_n[0x51U] = vlTOPp->rob__DOT__rob_q[0x51U];
    vlTOPp->rob__DOT__rob_n[0x52U] = vlTOPp->rob__DOT__rob_q[0x52U];
    vlTOPp->rob__DOT__rob_n[0x53U] = vlTOPp->rob__DOT__rob_q[0x53U];
    vlTOPp->rob__DOT__rob_n[0x54U] = vlTOPp->rob__DOT__rob_q[0x54U];
    vlTOPp->rob__DOT__rob_n[0x55U] = vlTOPp->rob__DOT__rob_q[0x55U];
    vlTOPp->rob__DOT__rob_n[0x56U] = vlTOPp->rob__DOT__rob_q[0x56U];
    vlTOPp->rob__DOT__rob_n[0x57U] = vlTOPp->rob__DOT__rob_q[0x57U];
    vlTOPp->rob__DOT__rob_n[0x58U] = vlTOPp->rob__DOT__rob_q[0x58U];
    vlTOPp->rob__DOT__rob_n[0x59U] = vlTOPp->rob__DOT__rob_q[0x59U];
    vlTOPp->rob__DOT__rob_n[0x5aU] = vlTOPp->rob__DOT__rob_q[0x5aU];
    vlTOPp->rob__DOT__rob_n[0x5bU] = vlTOPp->rob__DOT__rob_q[0x5bU];
    vlTOPp->rob__DOT__rob_n[0x5cU] = vlTOPp->rob__DOT__rob_q[0x5cU];
    vlTOPp->rob__DOT__rob_n[0x5dU] = vlTOPp->rob__DOT__rob_q[0x5dU];
    vlTOPp->rob__DOT__rob_n[0x5eU] = vlTOPp->rob__DOT__rob_q[0x5eU];
    vlTOPp->rob__DOT__rob_n[0x5fU] = vlTOPp->rob__DOT__rob_q[0x5fU];
    vlTOPp->rob__DOT__rob_n[0x60U] = vlTOPp->rob__DOT__rob_q[0x60U];
    vlTOPp->rob__DOT__rob_n[0x61U] = vlTOPp->rob__DOT__rob_q[0x61U];
    vlTOPp->rob__DOT__rob_n[0x62U] = vlTOPp->rob__DOT__rob_q[0x62U];
    vlTOPp->rob__DOT__rob_n[0x63U] = vlTOPp->rob__DOT__rob_q[0x63U];
    vlTOPp->rob__DOT__rob_n[0x64U] = vlTOPp->rob__DOT__rob_q[0x64U];
    vlTOPp->rob__DOT__rob_n[0x65U] = vlTOPp->rob__DOT__rob_q[0x65U];
    vlTOPp->rob__DOT__rob_n[0x66U] = vlTOPp->rob__DOT__rob_q[0x66U];
    vlTOPp->rob__DOT__rob_n[0x67U] = vlTOPp->rob__DOT__rob_q[0x67U];
    vlTOPp->rob__DOT__rob_n[0x68U] = vlTOPp->rob__DOT__rob_q[0x68U];
    vlTOPp->rob__DOT__rob_n[0x69U] = vlTOPp->rob__DOT__rob_q[0x69U];
    vlTOPp->rob__DOT__rob_n[0x6aU] = vlTOPp->rob__DOT__rob_q[0x6aU];
    vlTOPp->rob__DOT__rob_n[0x6bU] = vlTOPp->rob__DOT__rob_q[0x6bU];
    vlTOPp->rob__DOT__rob_n[0x6cU] = vlTOPp->rob__DOT__rob_q[0x6cU];
    vlTOPp->rob__DOT__rob_n[0x6dU] = vlTOPp->rob__DOT__rob_q[0x6dU];
    vlTOPp->rob__DOT__rob_n[0x6eU] = vlTOPp->rob__DOT__rob_q[0x6eU];
    vlTOPp->rob__DOT__rob_n[0x6fU] = vlTOPp->rob__DOT__rob_q[0x6fU];
    vlTOPp->rob__DOT__rob_n[0x70U] = vlTOPp->rob__DOT__rob_q[0x70U];
    vlTOPp->rob__DOT__rob_n[0x71U] = vlTOPp->rob__DOT__rob_q[0x71U];
    vlTOPp->rob__DOT__rob_n[0x72U] = vlTOPp->rob__DOT__rob_q[0x72U];
    vlTOPp->rob__DOT__rob_n[0x73U] = vlTOPp->rob__DOT__rob_q[0x73U];
    vlTOPp->rob__DOT__rob_n[0x74U] = vlTOPp->rob__DOT__rob_q[0x74U];
    vlTOPp->rob__DOT__rob_n[0x75U] = vlTOPp->rob__DOT__rob_q[0x75U];
    vlTOPp->rob__DOT__rob_n[0x76U] = vlTOPp->rob__DOT__rob_q[0x76U];
    vlTOPp->rob__DOT__rob_n[0x77U] = vlTOPp->rob__DOT__rob_q[0x77U];
    vlTOPp->rob__DOT__rob_alloc_pt_n = vlTOPp->rob__DOT__rob_alloc_pt;
    vlTOPp->rob__DOT__rob_commit_pt_n = vlTOPp->rob__DOT__rob_commit_pt;
    vlTOPp->rob__DOT__rob_num_n = vlTOPp->rob__DOT__rob_num;
    if (vlTOPp->rob_mispredict_o) {
	vlTOPp->rob__DOT__rob_n[0U] = 0U;
	vlTOPp->rob__DOT__rob_n[1U] = 0U;
	vlTOPp->rob__DOT__rob_n[2U] = 0U;
	vlTOPp->rob__DOT__rob_n[3U] = 0U;
	vlTOPp->rob__DOT__rob_n[4U] = 0U;
	vlTOPp->rob__DOT__rob_n[5U] = 0U;
	vlTOPp->rob__DOT__rob_n[6U] = 0U;
	vlTOPp->rob__DOT__rob_n[7U] = 0U;
	vlTOPp->rob__DOT__rob_n[8U] = 0U;
	vlTOPp->rob__DOT__rob_n[9U] = 0U;
	vlTOPp->rob__DOT__rob_n[0xaU] = 0U;
	vlTOPp->rob__DOT__rob_n[0xbU] = 0U;
	vlTOPp->rob__DOT__rob_n[0xcU] = 0U;
	vlTOPp->rob__DOT__rob_n[0xdU] = 0U;
	vlTOPp->rob__DOT__rob_n[0xeU] = 0U;
	vlTOPp->rob__DOT__rob_n[0xfU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x10U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x11U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x12U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x13U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x14U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x15U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x16U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x17U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x18U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x19U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x1aU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x1bU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x1cU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x1dU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x1eU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x1fU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x20U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x21U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x22U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x23U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x24U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x25U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x26U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x27U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x28U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x29U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x2aU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x2bU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x2cU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x2dU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x2eU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x2fU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x30U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x31U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x32U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x33U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x34U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x35U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x36U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x37U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x38U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x39U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x3aU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x3bU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x3cU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x3dU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x3eU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x3fU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x40U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x41U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x42U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x43U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x44U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x45U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x46U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x47U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x48U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x49U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x4aU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x4bU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x4cU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x4dU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x4eU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x4fU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x50U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x51U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x52U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x53U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x54U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x55U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x56U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x57U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x58U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x59U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x5aU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x5bU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x5cU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x5dU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x5eU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x5fU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x60U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x61U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x62U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x63U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x64U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x65U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x66U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x67U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x68U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x69U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x6aU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x6bU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x6cU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x6dU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x6eU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x6fU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x70U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x71U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x72U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x73U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x74U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x75U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x76U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x77U] = 0U;
	vlTOPp->rob__DOT__rob_alloc_pt_n = 0U;
	vlTOPp->rob__DOT__rob_commit_pt_n = 0U;
	vlTOPp->rob__DOT__rob_num_n = 0x40U;
    } else {
	if (((IData)(vlTOPp->rob_issue_ready_o) & (IData)(vlTOPp->issue_rob_valid_i))) {
	    vlTOPp->rob__DOT____Vlvbound1 = vlTOPp->issue_rob_entry_i;
	    vlTOPp->rob__DOT__rob_alloc_pt_n = (0x3fU 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->rob__DOT__rob_alloc_pt_n)));
	    vlTOPp->rob__DOT__rob_num_n = (0x7fU & 
					   ((IData)(vlTOPp->rob__DOT__rob_num_n) 
					    - (IData)(1U)));
	    if ((0xeffU >= (0xfffU & ((IData)(0x3cU) 
				      * (IData)(vlTOPp->rob__DOT__rob_alloc_pt))))) {
		VL_ASSIGNSEL_WIIQ(60,(0xfffU & ((IData)(0x3cU) 
						* (IData)(vlTOPp->rob__DOT__rob_alloc_pt))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound1);
	    }
	}
	vlTOPp->rob__DOT__unnamedblk1__DOT__i = 0U;
	while ((0x40U > vlTOPp->rob__DOT__unnamedblk1__DOT__i)) {
	    if ((((~ ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3cU) 
					       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						  & (((IData)(0x2bU) 
						      + 
						      ((IData)(0x3cU) 
						       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						     >> 5U))] 
			 >> (0x1fU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) 
		  & (vlTOPp->cdb_i[1U] >> 0xcU)) & 
		 ((0x3fU & ((vlTOPp->cdb_i[2U] << 0x1aU) 
			    | (vlTOPp->cdb_i[1U] >> 6U))) 
		  == (0x3fU & vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->rob__DOT____Vlvbound2 = 1U;
		if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->rob__DOT__rob_n[(0x7fU 
					     & (((IData)(0x2bU) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						>> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->rob__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->rob__DOT____Vlvbound2) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->rob__DOT____Vlvbound3 = (0xfU 
						 & ((vlTOPp->cdb_i[1U] 
						     << 0x10U) 
						    | (vlTOPp->cdb_i[0U] 
						       >> 0x10U)));
		if ((0xeffU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound3);
		}
		if (((0xeffU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3cU) 
					      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						 & (((IData)(0x2aU) 
						     + 
						     ((IData)(0x3cU) 
						      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						    >> 5U))] 
			>> (0x1fU & ((IData)(0x2aU) 
				     + ((IData)(0x3cU) 
					* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->rob__DOT____Vlvbound4 = 
			(0xffffU & vlTOPp->cdb_i[0U]);
		    if ((0xeffU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3cU) 
						 * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound4);
		    }
		}
	    }
	    if ((((~ ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3cU) 
					       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						  & (((IData)(0x2bU) 
						      + 
						      ((IData)(0x3cU) 
						       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						     >> 5U))] 
			 >> (0x1fU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) 
		  & (vlTOPp->cdb_i[2U] >> 0x19U)) & 
		 ((0x3fU & ((vlTOPp->cdb_i[3U] << 0xdU) 
			    | (vlTOPp->cdb_i[2U] >> 0x13U))) 
		  == (0x3fU & vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->rob__DOT____Vlvbound2 = 1U;
		if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->rob__DOT__rob_n[(0x7fU 
					     & (((IData)(0x2bU) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						>> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->rob__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->rob__DOT____Vlvbound2) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->rob__DOT____Vlvbound3 = (0xfU 
						 & ((vlTOPp->cdb_i[2U] 
						     << 3U) 
						    | (vlTOPp->cdb_i[1U] 
						       >> 0x1dU)));
		if ((0xeffU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound3);
		}
		if (((0xeffU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3cU) 
					      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						 & (((IData)(0x2aU) 
						     + 
						     ((IData)(0x3cU) 
						      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						    >> 5U))] 
			>> (0x1fU & ((IData)(0x2aU) 
				     + ((IData)(0x3cU) 
					* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->rob__DOT____Vlvbound4 = 
			(0xffffU & ((vlTOPp->cdb_i[2U] 
				     << 0x13U) | (vlTOPp->cdb_i[1U] 
						  >> 0xdU)));
		    if ((0xeffU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3cU) 
						 * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound4);
		    }
		}
	    }
	    if ((((~ ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3cU) 
					       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						  & (((IData)(0x2bU) 
						      + 
						      ((IData)(0x3cU) 
						       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						     >> 5U))] 
			 >> (0x1fU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) 
		  & (vlTOPp->cdb_i[4U] >> 6U)) & ((0x3fU 
						   & vlTOPp->cdb_i[4U]) 
						  == 
						  (0x3fU 
						   & vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->rob__DOT____Vlvbound2 = 1U;
		if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->rob__DOT__rob_n[(0x7fU 
					     & (((IData)(0x2bU) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						>> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->rob__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->rob__DOT____Vlvbound2) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->rob__DOT____Vlvbound3 = (0xfU 
						 & ((vlTOPp->cdb_i[4U] 
						     << 0x16U) 
						    | (vlTOPp->cdb_i[3U] 
						       >> 0xaU)));
		if ((0xeffU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound3);
		}
		if (((0xeffU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3cU) 
					      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						 & (((IData)(0x2aU) 
						     + 
						     ((IData)(0x3cU) 
						      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						    >> 5U))] 
			>> (0x1fU & ((IData)(0x2aU) 
				     + ((IData)(0x3cU) 
					* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->rob__DOT____Vlvbound4 = 
			(0xffffU & ((vlTOPp->cdb_i[3U] 
				     << 6U) | (vlTOPp->cdb_i[2U] 
					       >> 0x1aU)));
		    if ((0xeffU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3cU) 
						 * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound4);
		    }
		}
	    }
	    if ((((~ ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3cU) 
					       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						  & (((IData)(0x2bU) 
						      + 
						      ((IData)(0x3cU) 
						       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						     >> 5U))] 
			 >> (0x1fU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) 
		  & (vlTOPp->cdb_i[5U] >> 0x13U)) & 
		 ((0x3fU & ((vlTOPp->cdb_i[6U] << 0x13U) 
			    | (vlTOPp->cdb_i[5U] >> 0xdU))) 
		  == (0x3fU & vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->rob__DOT____Vlvbound2 = 1U;
		if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->rob__DOT__rob_n[(0x7fU 
					     & (((IData)(0x2bU) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						>> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->rob__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->rob__DOT____Vlvbound2) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->rob__DOT____Vlvbound3 = (0xfU 
						 & ((vlTOPp->cdb_i[5U] 
						     << 9U) 
						    | (vlTOPp->cdb_i[4U] 
						       >> 0x17U)));
		if ((0xeffU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound3);
		}
		if (((0xeffU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3cU) 
					      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						 & (((IData)(0x2aU) 
						     + 
						     ((IData)(0x3cU) 
						      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						    >> 5U))] 
			>> (0x1fU & ((IData)(0x2aU) 
				     + ((IData)(0x3cU) 
					* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->rob__DOT____Vlvbound4 = 
			(0xffffU & ((vlTOPp->cdb_i[5U] 
				     << 0x19U) | (vlTOPp->cdb_i[4U] 
						  >> 7U)));
		    if ((0xeffU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3cU) 
						 * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound4);
		    }
		}
	    }
	    if ((((~ ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3cU) 
					       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						  & (((IData)(0x2bU) 
						      + 
						      ((IData)(0x3cU) 
						       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						     >> 5U))] 
			 >> (0x1fU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) 
		  & vlTOPp->cdb_i[7U]) & ((0x3fU & 
					   ((vlTOPp->cdb_i[7U] 
					     << 6U) 
					    | (vlTOPp->cdb_i[6U] 
					       >> 0x1aU))) 
					  == (0x3fU 
					      & vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->rob__DOT____Vlvbound2 = 1U;
		if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->rob__DOT__rob_n[(0x7fU 
					     & (((IData)(0x2bU) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						>> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->rob__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->rob__DOT____Vlvbound2) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->rob__DOT____Vlvbound3 = (0xfU 
						 & ((vlTOPp->cdb_i[7U] 
						     << 0x1cU) 
						    | (vlTOPp->cdb_i[6U] 
						       >> 4U)));
		if ((0xeffU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound3);
		}
		if (((0xeffU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3cU) 
					      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						 & (((IData)(0x2aU) 
						     + 
						     ((IData)(0x3cU) 
						      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						    >> 5U))] 
			>> (0x1fU & ((IData)(0x2aU) 
				     + ((IData)(0x3cU) 
					* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->rob__DOT____Vlvbound4 = 
			(0xffffU & ((vlTOPp->cdb_i[6U] 
				     << 0xcU) | (vlTOPp->cdb_i[5U] 
						 >> 0x14U)));
		    if ((0xeffU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3cU) 
						 * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound4);
		    }
		}
	    }
	    if ((((~ ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3cU) 
					       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						  & (((IData)(0x2bU) 
						      + 
						      ((IData)(0x3cU) 
						       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						     >> 5U))] 
			 >> (0x1fU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) 
		  & (vlTOPp->cdb_i[8U] >> 0xdU)) & 
		 ((0x3fU & ((vlTOPp->cdb_i[9U] << 0x19U) 
			    | (vlTOPp->cdb_i[8U] >> 7U))) 
		  == (0x3fU & vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->rob__DOT____Vlvbound2 = 1U;
		if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->rob__DOT__rob_n[(0x7fU 
					     & (((IData)(0x2bU) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						>> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->rob__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->rob__DOT____Vlvbound2) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->rob__DOT____Vlvbound3 = (0xfU 
						 & ((vlTOPp->cdb_i[8U] 
						     << 0xfU) 
						    | (vlTOPp->cdb_i[7U] 
						       >> 0x11U)));
		if ((0xeffU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound3);
		}
		if (((0xeffU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3cU) 
					      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						 & (((IData)(0x2aU) 
						     + 
						     ((IData)(0x3cU) 
						      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						    >> 5U))] 
			>> (0x1fU & ((IData)(0x2aU) 
				     + ((IData)(0x3cU) 
					* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->rob__DOT____Vlvbound4 = 
			(0xffffU & ((vlTOPp->cdb_i[8U] 
				     << 0x1fU) | (vlTOPp->cdb_i[7U] 
						  >> 1U)));
		    if ((0xeffU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3cU) 
						 * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound4);
		    }
		}
	    }
	    if ((((~ ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3cU) 
					       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						  & (((IData)(0x2bU) 
						      + 
						      ((IData)(0x3cU) 
						       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						     >> 5U))] 
			 >> (0x1fU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) 
		  & (vlTOPp->cdb_i[9U] >> 0x1aU)) & 
		 ((0x3fU & (vlTOPp->cdb_i[9U] >> 0x14U)) 
		  == (0x3fU & vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->rob__DOT____Vlvbound2 = 1U;
		if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->rob__DOT__rob_n[(0x7fU 
					     & (((IData)(0x2bU) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						>> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->rob__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->rob__DOT____Vlvbound2) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->rob__DOT____Vlvbound3 = (0xfU 
						 & ((vlTOPp->cdb_i[9U] 
						     << 2U) 
						    | (vlTOPp->cdb_i[8U] 
						       >> 0x1eU)));
		if ((0xeffU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound3);
		}
		if (((0xeffU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3cU) 
					      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						 & (((IData)(0x2aU) 
						     + 
						     ((IData)(0x3cU) 
						      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						    >> 5U))] 
			>> (0x1fU & ((IData)(0x2aU) 
				     + ((IData)(0x3cU) 
					* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->rob__DOT____Vlvbound4 = 
			(0xffffU & ((vlTOPp->cdb_i[9U] 
				     << 0x12U) | (vlTOPp->cdb_i[8U] 
						  >> 0xeU)));
		    if ((0xeffU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3cU) 
						 * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound4);
		    }
		}
	    }
	    vlTOPp->rob__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
	    vlTOPp->rob__DOT__unnamedblk1__DOT__i = 
		((IData)(1U) + vlTOPp->rob__DOT__unnamedblk1__DOT__i);
	}
	if ((1U & (IData)((vlTOPp->rob__DOT__committing_instr 
			   >> 0x2bU)))) {
	    vlTOPp->rob__DOT____Vlvbound5 = 0U;
	    vlTOPp->rob__DOT__rob_commit_pt_n = (0x3fU 
						 & ((IData)(1U) 
						    + (IData)(vlTOPp->rob__DOT__rob_commit_pt_n)));
	    vlTOPp->rob__DOT__rob_num_n = (0x7fU & 
					   ((IData)(1U) 
					    + (IData)(vlTOPp->rob__DOT__rob_num_n)));
	    if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * (IData)(vlTOPp->rob__DOT__rob_commit_pt)))))) {
		vlTOPp->rob__DOT__rob_n[(0x7fU & (((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * (IData)(vlTOPp->rob__DOT__rob_commit_pt))) 
						  >> 5U))] 
		    = (((~ ((IData)(1U) << (0x1fU & 
					    ((IData)(0x2bU) 
					     + ((IData)(0x3cU) 
						* (IData)(vlTOPp->rob__DOT__rob_commit_pt)))))) 
			& vlTOPp->rob__DOT__rob_n[(0x7fU 
						   & (((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* (IData)(vlTOPp->rob__DOT__rob_commit_pt))) 
						      >> 5U))]) 
		       | ((IData)(vlTOPp->rob__DOT____Vlvbound5) 
			  << (0x1fU & ((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * (IData)(vlTOPp->rob__DOT__rob_commit_pt))))));
	    }
	}
    }
}

VL_INLINE_OPT void Vrob::_combo__TOP__3(Vrob__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrob::_combo__TOP__3\n"); );
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rob/rob.sv:113
    vlTOPp->rob__DOT__condition_taken = (1U & ((1U 
						& (IData)(
							  (vlTOPp->rob__DOT__committing_instr 
							   >> 0x28U)))
					        ? (
						   (1U 
						    & (IData)(
							      (vlTOPp->rob__DOT__committing_instr 
							       >> 0x27U)))
						    ? 
						   ((1U 
						     & (IData)(
							       (vlTOPp->rob__DOT__committing_instr 
								>> 0x26U)))
						     ? 
						    (~ (IData)(
							       (vlTOPp->rob__DOT__committing_instr 
								>> 0x25U)))
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->rob__DOT__committing_instr 
								 >> 0x25U)))
						      ? 
						     (((IData)(vlTOPp->flag_rob_i) 
						       >> 1U) 
						      | ((1U 
							  & (~ 
							     ((IData)(vlTOPp->flag_rob_i) 
							      >> 2U))) 
							 == 
							 (1U 
							  & (IData)(vlTOPp->flag_rob_i))))
						      : 
						     ((~ 
						       ((IData)(vlTOPp->flag_rob_i) 
							>> 1U)) 
						      & ((1U 
							  & ((IData)(vlTOPp->flag_rob_i) 
							     >> 2U)) 
							 == 
							 (1U 
							  & (IData)(vlTOPp->flag_rob_i))))))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->rob__DOT__committing_instr 
								>> 0x26U)))
						     ? 
						    ((1U 
						      & (IData)(
								(vlTOPp->rob__DOT__committing_instr 
								 >> 0x25U)))
						      ? 
						     ((1U 
						       & (~ 
							  ((IData)(vlTOPp->flag_rob_i) 
							   >> 2U))) 
						      == 
						      (1U 
						       & (IData)(vlTOPp->flag_rob_i)))
						      : 
						     ((1U 
						       & ((IData)(vlTOPp->flag_rob_i) 
							  >> 2U)) 
						      == 
						      (1U 
						       & (IData)(vlTOPp->flag_rob_i))))
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->rob__DOT__committing_instr 
								 >> 0x25U)))
						      ? 
						     ((~ 
						       ((IData)(vlTOPp->flag_rob_i) 
							>> 3U)) 
						      | ((IData)(vlTOPp->flag_rob_i) 
							 >> 1U))
						      : 
						     (((IData)(vlTOPp->flag_rob_i) 
						       >> 3U) 
						      & (~ 
							 ((IData)(vlTOPp->flag_rob_i) 
							  >> 1U))))))
					        : (
						   (1U 
						    & (IData)(
							      (vlTOPp->rob__DOT__committing_instr 
							       >> 0x27U)))
						    ? 
						   ((1U 
						     & (IData)(
							       (vlTOPp->rob__DOT__committing_instr 
								>> 0x26U)))
						     ? 
						    ((1U 
						      & (IData)(
								(vlTOPp->rob__DOT__committing_instr 
								 >> 0x25U)))
						      ? 
						     (~ (IData)(vlTOPp->flag_rob_i))
						      : (IData)(vlTOPp->flag_rob_i))
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->rob__DOT__committing_instr 
								 >> 0x25U)))
						      ? 
						     (~ 
						      ((IData)(vlTOPp->flag_rob_i) 
						       >> 2U))
						      : 
						     ((IData)(vlTOPp->flag_rob_i) 
						      >> 2U)))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->rob__DOT__committing_instr 
								>> 0x26U)))
						     ? 
						    ((1U 
						      & (IData)(
								(vlTOPp->rob__DOT__committing_instr 
								 >> 0x25U)))
						      ? 
						     (~ 
						      ((IData)(vlTOPp->flag_rob_i) 
						       >> 3U))
						      : 
						     ((IData)(vlTOPp->flag_rob_i) 
						      >> 3U))
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->rob__DOT__committing_instr 
								 >> 0x25U)))
						      ? 
						     (~ 
						      ((IData)(vlTOPp->flag_rob_i) 
						       >> 1U))
						      : 
						     ((IData)(vlTOPp->flag_rob_i) 
						      >> 1U))))));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rob/rob.sv:135
    vlTOPp->rob__DOT__rob_n[0U] = vlTOPp->rob__DOT__rob_q[0U];
    vlTOPp->rob__DOT__rob_n[1U] = vlTOPp->rob__DOT__rob_q[1U];
    vlTOPp->rob__DOT__rob_n[2U] = vlTOPp->rob__DOT__rob_q[2U];
    vlTOPp->rob__DOT__rob_n[3U] = vlTOPp->rob__DOT__rob_q[3U];
    vlTOPp->rob__DOT__rob_n[4U] = vlTOPp->rob__DOT__rob_q[4U];
    vlTOPp->rob__DOT__rob_n[5U] = vlTOPp->rob__DOT__rob_q[5U];
    vlTOPp->rob__DOT__rob_n[6U] = vlTOPp->rob__DOT__rob_q[6U];
    vlTOPp->rob__DOT__rob_n[7U] = vlTOPp->rob__DOT__rob_q[7U];
    vlTOPp->rob__DOT__rob_n[8U] = vlTOPp->rob__DOT__rob_q[8U];
    vlTOPp->rob__DOT__rob_n[9U] = vlTOPp->rob__DOT__rob_q[9U];
    vlTOPp->rob__DOT__rob_n[0xaU] = vlTOPp->rob__DOT__rob_q[0xaU];
    vlTOPp->rob__DOT__rob_n[0xbU] = vlTOPp->rob__DOT__rob_q[0xbU];
    vlTOPp->rob__DOT__rob_n[0xcU] = vlTOPp->rob__DOT__rob_q[0xcU];
    vlTOPp->rob__DOT__rob_n[0xdU] = vlTOPp->rob__DOT__rob_q[0xdU];
    vlTOPp->rob__DOT__rob_n[0xeU] = vlTOPp->rob__DOT__rob_q[0xeU];
    vlTOPp->rob__DOT__rob_n[0xfU] = vlTOPp->rob__DOT__rob_q[0xfU];
    vlTOPp->rob__DOT__rob_n[0x10U] = vlTOPp->rob__DOT__rob_q[0x10U];
    vlTOPp->rob__DOT__rob_n[0x11U] = vlTOPp->rob__DOT__rob_q[0x11U];
    vlTOPp->rob__DOT__rob_n[0x12U] = vlTOPp->rob__DOT__rob_q[0x12U];
    vlTOPp->rob__DOT__rob_n[0x13U] = vlTOPp->rob__DOT__rob_q[0x13U];
    vlTOPp->rob__DOT__rob_n[0x14U] = vlTOPp->rob__DOT__rob_q[0x14U];
    vlTOPp->rob__DOT__rob_n[0x15U] = vlTOPp->rob__DOT__rob_q[0x15U];
    vlTOPp->rob__DOT__rob_n[0x16U] = vlTOPp->rob__DOT__rob_q[0x16U];
    vlTOPp->rob__DOT__rob_n[0x17U] = vlTOPp->rob__DOT__rob_q[0x17U];
    vlTOPp->rob__DOT__rob_n[0x18U] = vlTOPp->rob__DOT__rob_q[0x18U];
    vlTOPp->rob__DOT__rob_n[0x19U] = vlTOPp->rob__DOT__rob_q[0x19U];
    vlTOPp->rob__DOT__rob_n[0x1aU] = vlTOPp->rob__DOT__rob_q[0x1aU];
    vlTOPp->rob__DOT__rob_n[0x1bU] = vlTOPp->rob__DOT__rob_q[0x1bU];
    vlTOPp->rob__DOT__rob_n[0x1cU] = vlTOPp->rob__DOT__rob_q[0x1cU];
    vlTOPp->rob__DOT__rob_n[0x1dU] = vlTOPp->rob__DOT__rob_q[0x1dU];
    vlTOPp->rob__DOT__rob_n[0x1eU] = vlTOPp->rob__DOT__rob_q[0x1eU];
    vlTOPp->rob__DOT__rob_n[0x1fU] = vlTOPp->rob__DOT__rob_q[0x1fU];
    vlTOPp->rob__DOT__rob_n[0x20U] = vlTOPp->rob__DOT__rob_q[0x20U];
    vlTOPp->rob__DOT__rob_n[0x21U] = vlTOPp->rob__DOT__rob_q[0x21U];
    vlTOPp->rob__DOT__rob_n[0x22U] = vlTOPp->rob__DOT__rob_q[0x22U];
    vlTOPp->rob__DOT__rob_n[0x23U] = vlTOPp->rob__DOT__rob_q[0x23U];
    vlTOPp->rob__DOT__rob_n[0x24U] = vlTOPp->rob__DOT__rob_q[0x24U];
    vlTOPp->rob__DOT__rob_n[0x25U] = vlTOPp->rob__DOT__rob_q[0x25U];
    vlTOPp->rob__DOT__rob_n[0x26U] = vlTOPp->rob__DOT__rob_q[0x26U];
    vlTOPp->rob__DOT__rob_n[0x27U] = vlTOPp->rob__DOT__rob_q[0x27U];
    vlTOPp->rob__DOT__rob_n[0x28U] = vlTOPp->rob__DOT__rob_q[0x28U];
    vlTOPp->rob__DOT__rob_n[0x29U] = vlTOPp->rob__DOT__rob_q[0x29U];
    vlTOPp->rob__DOT__rob_n[0x2aU] = vlTOPp->rob__DOT__rob_q[0x2aU];
    vlTOPp->rob__DOT__rob_n[0x2bU] = vlTOPp->rob__DOT__rob_q[0x2bU];
    vlTOPp->rob__DOT__rob_n[0x2cU] = vlTOPp->rob__DOT__rob_q[0x2cU];
    vlTOPp->rob__DOT__rob_n[0x2dU] = vlTOPp->rob__DOT__rob_q[0x2dU];
    vlTOPp->rob__DOT__rob_n[0x2eU] = vlTOPp->rob__DOT__rob_q[0x2eU];
    vlTOPp->rob__DOT__rob_n[0x2fU] = vlTOPp->rob__DOT__rob_q[0x2fU];
    vlTOPp->rob__DOT__rob_n[0x30U] = vlTOPp->rob__DOT__rob_q[0x30U];
    vlTOPp->rob__DOT__rob_n[0x31U] = vlTOPp->rob__DOT__rob_q[0x31U];
    vlTOPp->rob__DOT__rob_n[0x32U] = vlTOPp->rob__DOT__rob_q[0x32U];
    vlTOPp->rob__DOT__rob_n[0x33U] = vlTOPp->rob__DOT__rob_q[0x33U];
    vlTOPp->rob__DOT__rob_n[0x34U] = vlTOPp->rob__DOT__rob_q[0x34U];
    vlTOPp->rob__DOT__rob_n[0x35U] = vlTOPp->rob__DOT__rob_q[0x35U];
    vlTOPp->rob__DOT__rob_n[0x36U] = vlTOPp->rob__DOT__rob_q[0x36U];
    vlTOPp->rob__DOT__rob_n[0x37U] = vlTOPp->rob__DOT__rob_q[0x37U];
    vlTOPp->rob__DOT__rob_n[0x38U] = vlTOPp->rob__DOT__rob_q[0x38U];
    vlTOPp->rob__DOT__rob_n[0x39U] = vlTOPp->rob__DOT__rob_q[0x39U];
    vlTOPp->rob__DOT__rob_n[0x3aU] = vlTOPp->rob__DOT__rob_q[0x3aU];
    vlTOPp->rob__DOT__rob_n[0x3bU] = vlTOPp->rob__DOT__rob_q[0x3bU];
    vlTOPp->rob__DOT__rob_n[0x3cU] = vlTOPp->rob__DOT__rob_q[0x3cU];
    vlTOPp->rob__DOT__rob_n[0x3dU] = vlTOPp->rob__DOT__rob_q[0x3dU];
    vlTOPp->rob__DOT__rob_n[0x3eU] = vlTOPp->rob__DOT__rob_q[0x3eU];
    vlTOPp->rob__DOT__rob_n[0x3fU] = vlTOPp->rob__DOT__rob_q[0x3fU];
    vlTOPp->rob__DOT__rob_n[0x40U] = vlTOPp->rob__DOT__rob_q[0x40U];
    vlTOPp->rob__DOT__rob_n[0x41U] = vlTOPp->rob__DOT__rob_q[0x41U];
    vlTOPp->rob__DOT__rob_n[0x42U] = vlTOPp->rob__DOT__rob_q[0x42U];
    vlTOPp->rob__DOT__rob_n[0x43U] = vlTOPp->rob__DOT__rob_q[0x43U];
    vlTOPp->rob__DOT__rob_n[0x44U] = vlTOPp->rob__DOT__rob_q[0x44U];
    vlTOPp->rob__DOT__rob_n[0x45U] = vlTOPp->rob__DOT__rob_q[0x45U];
    vlTOPp->rob__DOT__rob_n[0x46U] = vlTOPp->rob__DOT__rob_q[0x46U];
    vlTOPp->rob__DOT__rob_n[0x47U] = vlTOPp->rob__DOT__rob_q[0x47U];
    vlTOPp->rob__DOT__rob_n[0x48U] = vlTOPp->rob__DOT__rob_q[0x48U];
    vlTOPp->rob__DOT__rob_n[0x49U] = vlTOPp->rob__DOT__rob_q[0x49U];
    vlTOPp->rob__DOT__rob_n[0x4aU] = vlTOPp->rob__DOT__rob_q[0x4aU];
    vlTOPp->rob__DOT__rob_n[0x4bU] = vlTOPp->rob__DOT__rob_q[0x4bU];
    vlTOPp->rob__DOT__rob_n[0x4cU] = vlTOPp->rob__DOT__rob_q[0x4cU];
    vlTOPp->rob__DOT__rob_n[0x4dU] = vlTOPp->rob__DOT__rob_q[0x4dU];
    vlTOPp->rob__DOT__rob_n[0x4eU] = vlTOPp->rob__DOT__rob_q[0x4eU];
    vlTOPp->rob__DOT__rob_n[0x4fU] = vlTOPp->rob__DOT__rob_q[0x4fU];
    vlTOPp->rob__DOT__rob_n[0x50U] = vlTOPp->rob__DOT__rob_q[0x50U];
    vlTOPp->rob__DOT__rob_n[0x51U] = vlTOPp->rob__DOT__rob_q[0x51U];
    vlTOPp->rob__DOT__rob_n[0x52U] = vlTOPp->rob__DOT__rob_q[0x52U];
    vlTOPp->rob__DOT__rob_n[0x53U] = vlTOPp->rob__DOT__rob_q[0x53U];
    vlTOPp->rob__DOT__rob_n[0x54U] = vlTOPp->rob__DOT__rob_q[0x54U];
    vlTOPp->rob__DOT__rob_n[0x55U] = vlTOPp->rob__DOT__rob_q[0x55U];
    vlTOPp->rob__DOT__rob_n[0x56U] = vlTOPp->rob__DOT__rob_q[0x56U];
    vlTOPp->rob__DOT__rob_n[0x57U] = vlTOPp->rob__DOT__rob_q[0x57U];
    vlTOPp->rob__DOT__rob_n[0x58U] = vlTOPp->rob__DOT__rob_q[0x58U];
    vlTOPp->rob__DOT__rob_n[0x59U] = vlTOPp->rob__DOT__rob_q[0x59U];
    vlTOPp->rob__DOT__rob_n[0x5aU] = vlTOPp->rob__DOT__rob_q[0x5aU];
    vlTOPp->rob__DOT__rob_n[0x5bU] = vlTOPp->rob__DOT__rob_q[0x5bU];
    vlTOPp->rob__DOT__rob_n[0x5cU] = vlTOPp->rob__DOT__rob_q[0x5cU];
    vlTOPp->rob__DOT__rob_n[0x5dU] = vlTOPp->rob__DOT__rob_q[0x5dU];
    vlTOPp->rob__DOT__rob_n[0x5eU] = vlTOPp->rob__DOT__rob_q[0x5eU];
    vlTOPp->rob__DOT__rob_n[0x5fU] = vlTOPp->rob__DOT__rob_q[0x5fU];
    vlTOPp->rob__DOT__rob_n[0x60U] = vlTOPp->rob__DOT__rob_q[0x60U];
    vlTOPp->rob__DOT__rob_n[0x61U] = vlTOPp->rob__DOT__rob_q[0x61U];
    vlTOPp->rob__DOT__rob_n[0x62U] = vlTOPp->rob__DOT__rob_q[0x62U];
    vlTOPp->rob__DOT__rob_n[0x63U] = vlTOPp->rob__DOT__rob_q[0x63U];
    vlTOPp->rob__DOT__rob_n[0x64U] = vlTOPp->rob__DOT__rob_q[0x64U];
    vlTOPp->rob__DOT__rob_n[0x65U] = vlTOPp->rob__DOT__rob_q[0x65U];
    vlTOPp->rob__DOT__rob_n[0x66U] = vlTOPp->rob__DOT__rob_q[0x66U];
    vlTOPp->rob__DOT__rob_n[0x67U] = vlTOPp->rob__DOT__rob_q[0x67U];
    vlTOPp->rob__DOT__rob_n[0x68U] = vlTOPp->rob__DOT__rob_q[0x68U];
    vlTOPp->rob__DOT__rob_n[0x69U] = vlTOPp->rob__DOT__rob_q[0x69U];
    vlTOPp->rob__DOT__rob_n[0x6aU] = vlTOPp->rob__DOT__rob_q[0x6aU];
    vlTOPp->rob__DOT__rob_n[0x6bU] = vlTOPp->rob__DOT__rob_q[0x6bU];
    vlTOPp->rob__DOT__rob_n[0x6cU] = vlTOPp->rob__DOT__rob_q[0x6cU];
    vlTOPp->rob__DOT__rob_n[0x6dU] = vlTOPp->rob__DOT__rob_q[0x6dU];
    vlTOPp->rob__DOT__rob_n[0x6eU] = vlTOPp->rob__DOT__rob_q[0x6eU];
    vlTOPp->rob__DOT__rob_n[0x6fU] = vlTOPp->rob__DOT__rob_q[0x6fU];
    vlTOPp->rob__DOT__rob_n[0x70U] = vlTOPp->rob__DOT__rob_q[0x70U];
    vlTOPp->rob__DOT__rob_n[0x71U] = vlTOPp->rob__DOT__rob_q[0x71U];
    vlTOPp->rob__DOT__rob_n[0x72U] = vlTOPp->rob__DOT__rob_q[0x72U];
    vlTOPp->rob__DOT__rob_n[0x73U] = vlTOPp->rob__DOT__rob_q[0x73U];
    vlTOPp->rob__DOT__rob_n[0x74U] = vlTOPp->rob__DOT__rob_q[0x74U];
    vlTOPp->rob__DOT__rob_n[0x75U] = vlTOPp->rob__DOT__rob_q[0x75U];
    vlTOPp->rob__DOT__rob_n[0x76U] = vlTOPp->rob__DOT__rob_q[0x76U];
    vlTOPp->rob__DOT__rob_n[0x77U] = vlTOPp->rob__DOT__rob_q[0x77U];
    vlTOPp->rob__DOT__rob_alloc_pt_n = vlTOPp->rob__DOT__rob_alloc_pt;
    vlTOPp->rob__DOT__rob_commit_pt_n = vlTOPp->rob__DOT__rob_commit_pt;
    vlTOPp->rob__DOT__rob_num_n = vlTOPp->rob__DOT__rob_num;
    if (vlTOPp->rob_mispredict_o) {
	vlTOPp->rob__DOT__rob_n[0U] = 0U;
	vlTOPp->rob__DOT__rob_n[1U] = 0U;
	vlTOPp->rob__DOT__rob_n[2U] = 0U;
	vlTOPp->rob__DOT__rob_n[3U] = 0U;
	vlTOPp->rob__DOT__rob_n[4U] = 0U;
	vlTOPp->rob__DOT__rob_n[5U] = 0U;
	vlTOPp->rob__DOT__rob_n[6U] = 0U;
	vlTOPp->rob__DOT__rob_n[7U] = 0U;
	vlTOPp->rob__DOT__rob_n[8U] = 0U;
	vlTOPp->rob__DOT__rob_n[9U] = 0U;
	vlTOPp->rob__DOT__rob_n[0xaU] = 0U;
	vlTOPp->rob__DOT__rob_n[0xbU] = 0U;
	vlTOPp->rob__DOT__rob_n[0xcU] = 0U;
	vlTOPp->rob__DOT__rob_n[0xdU] = 0U;
	vlTOPp->rob__DOT__rob_n[0xeU] = 0U;
	vlTOPp->rob__DOT__rob_n[0xfU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x10U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x11U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x12U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x13U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x14U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x15U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x16U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x17U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x18U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x19U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x1aU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x1bU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x1cU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x1dU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x1eU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x1fU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x20U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x21U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x22U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x23U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x24U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x25U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x26U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x27U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x28U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x29U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x2aU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x2bU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x2cU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x2dU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x2eU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x2fU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x30U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x31U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x32U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x33U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x34U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x35U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x36U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x37U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x38U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x39U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x3aU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x3bU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x3cU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x3dU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x3eU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x3fU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x40U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x41U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x42U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x43U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x44U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x45U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x46U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x47U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x48U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x49U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x4aU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x4bU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x4cU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x4dU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x4eU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x4fU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x50U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x51U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x52U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x53U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x54U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x55U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x56U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x57U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x58U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x59U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x5aU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x5bU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x5cU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x5dU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x5eU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x5fU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x60U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x61U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x62U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x63U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x64U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x65U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x66U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x67U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x68U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x69U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x6aU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x6bU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x6cU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x6dU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x6eU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x6fU] = 0U;
	vlTOPp->rob__DOT__rob_n[0x70U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x71U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x72U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x73U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x74U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x75U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x76U] = 0U;
	vlTOPp->rob__DOT__rob_n[0x77U] = 0U;
	vlTOPp->rob__DOT__rob_alloc_pt_n = 0U;
	vlTOPp->rob__DOT__rob_commit_pt_n = 0U;
	vlTOPp->rob__DOT__rob_num_n = 0x40U;
    } else {
	if (((IData)(vlTOPp->rob_issue_ready_o) & (IData)(vlTOPp->issue_rob_valid_i))) {
	    vlTOPp->rob__DOT____Vlvbound1 = vlTOPp->issue_rob_entry_i;
	    vlTOPp->rob__DOT__rob_alloc_pt_n = (0x3fU 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->rob__DOT__rob_alloc_pt_n)));
	    vlTOPp->rob__DOT__rob_num_n = (0x7fU & 
					   ((IData)(vlTOPp->rob__DOT__rob_num_n) 
					    - (IData)(1U)));
	    if ((0xeffU >= (0xfffU & ((IData)(0x3cU) 
				      * (IData)(vlTOPp->rob__DOT__rob_alloc_pt))))) {
		VL_ASSIGNSEL_WIIQ(60,(0xfffU & ((IData)(0x3cU) 
						* (IData)(vlTOPp->rob__DOT__rob_alloc_pt))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound1);
	    }
	}
	vlTOPp->rob__DOT__unnamedblk1__DOT__i = 0U;
	while ((0x40U > vlTOPp->rob__DOT__unnamedblk1__DOT__i)) {
	    if ((((~ ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3cU) 
					       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						  & (((IData)(0x2bU) 
						      + 
						      ((IData)(0x3cU) 
						       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						     >> 5U))] 
			 >> (0x1fU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) 
		  & (vlTOPp->cdb_i[1U] >> 0xcU)) & 
		 ((0x3fU & ((vlTOPp->cdb_i[2U] << 0x1aU) 
			    | (vlTOPp->cdb_i[1U] >> 6U))) 
		  == (0x3fU & vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->rob__DOT____Vlvbound2 = 1U;
		if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->rob__DOT__rob_n[(0x7fU 
					     & (((IData)(0x2bU) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						>> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->rob__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->rob__DOT____Vlvbound2) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->rob__DOT____Vlvbound3 = (0xfU 
						 & ((vlTOPp->cdb_i[1U] 
						     << 0x10U) 
						    | (vlTOPp->cdb_i[0U] 
						       >> 0x10U)));
		if ((0xeffU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound3);
		}
		if (((0xeffU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3cU) 
					      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						 & (((IData)(0x2aU) 
						     + 
						     ((IData)(0x3cU) 
						      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						    >> 5U))] 
			>> (0x1fU & ((IData)(0x2aU) 
				     + ((IData)(0x3cU) 
					* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->rob__DOT____Vlvbound4 = 
			(0xffffU & vlTOPp->cdb_i[0U]);
		    if ((0xeffU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3cU) 
						 * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound4);
		    }
		}
	    }
	    if ((((~ ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3cU) 
					       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						  & (((IData)(0x2bU) 
						      + 
						      ((IData)(0x3cU) 
						       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						     >> 5U))] 
			 >> (0x1fU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) 
		  & (vlTOPp->cdb_i[2U] >> 0x19U)) & 
		 ((0x3fU & ((vlTOPp->cdb_i[3U] << 0xdU) 
			    | (vlTOPp->cdb_i[2U] >> 0x13U))) 
		  == (0x3fU & vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->rob__DOT____Vlvbound2 = 1U;
		if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->rob__DOT__rob_n[(0x7fU 
					     & (((IData)(0x2bU) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						>> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->rob__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->rob__DOT____Vlvbound2) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->rob__DOT____Vlvbound3 = (0xfU 
						 & ((vlTOPp->cdb_i[2U] 
						     << 3U) 
						    | (vlTOPp->cdb_i[1U] 
						       >> 0x1dU)));
		if ((0xeffU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound3);
		}
		if (((0xeffU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3cU) 
					      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						 & (((IData)(0x2aU) 
						     + 
						     ((IData)(0x3cU) 
						      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						    >> 5U))] 
			>> (0x1fU & ((IData)(0x2aU) 
				     + ((IData)(0x3cU) 
					* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->rob__DOT____Vlvbound4 = 
			(0xffffU & ((vlTOPp->cdb_i[2U] 
				     << 0x13U) | (vlTOPp->cdb_i[1U] 
						  >> 0xdU)));
		    if ((0xeffU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3cU) 
						 * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound4);
		    }
		}
	    }
	    if ((((~ ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3cU) 
					       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						  & (((IData)(0x2bU) 
						      + 
						      ((IData)(0x3cU) 
						       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						     >> 5U))] 
			 >> (0x1fU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) 
		  & (vlTOPp->cdb_i[4U] >> 6U)) & ((0x3fU 
						   & vlTOPp->cdb_i[4U]) 
						  == 
						  (0x3fU 
						   & vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->rob__DOT____Vlvbound2 = 1U;
		if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->rob__DOT__rob_n[(0x7fU 
					     & (((IData)(0x2bU) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						>> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->rob__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->rob__DOT____Vlvbound2) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->rob__DOT____Vlvbound3 = (0xfU 
						 & ((vlTOPp->cdb_i[4U] 
						     << 0x16U) 
						    | (vlTOPp->cdb_i[3U] 
						       >> 0xaU)));
		if ((0xeffU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound3);
		}
		if (((0xeffU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3cU) 
					      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						 & (((IData)(0x2aU) 
						     + 
						     ((IData)(0x3cU) 
						      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						    >> 5U))] 
			>> (0x1fU & ((IData)(0x2aU) 
				     + ((IData)(0x3cU) 
					* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->rob__DOT____Vlvbound4 = 
			(0xffffU & ((vlTOPp->cdb_i[3U] 
				     << 6U) | (vlTOPp->cdb_i[2U] 
					       >> 0x1aU)));
		    if ((0xeffU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3cU) 
						 * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound4);
		    }
		}
	    }
	    if ((((~ ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3cU) 
					       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						  & (((IData)(0x2bU) 
						      + 
						      ((IData)(0x3cU) 
						       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						     >> 5U))] 
			 >> (0x1fU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) 
		  & (vlTOPp->cdb_i[5U] >> 0x13U)) & 
		 ((0x3fU & ((vlTOPp->cdb_i[6U] << 0x13U) 
			    | (vlTOPp->cdb_i[5U] >> 0xdU))) 
		  == (0x3fU & vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->rob__DOT____Vlvbound2 = 1U;
		if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->rob__DOT__rob_n[(0x7fU 
					     & (((IData)(0x2bU) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						>> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->rob__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->rob__DOT____Vlvbound2) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->rob__DOT____Vlvbound3 = (0xfU 
						 & ((vlTOPp->cdb_i[5U] 
						     << 9U) 
						    | (vlTOPp->cdb_i[4U] 
						       >> 0x17U)));
		if ((0xeffU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound3);
		}
		if (((0xeffU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3cU) 
					      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						 & (((IData)(0x2aU) 
						     + 
						     ((IData)(0x3cU) 
						      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						    >> 5U))] 
			>> (0x1fU & ((IData)(0x2aU) 
				     + ((IData)(0x3cU) 
					* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->rob__DOT____Vlvbound4 = 
			(0xffffU & ((vlTOPp->cdb_i[5U] 
				     << 0x19U) | (vlTOPp->cdb_i[4U] 
						  >> 7U)));
		    if ((0xeffU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3cU) 
						 * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound4);
		    }
		}
	    }
	    if ((((~ ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3cU) 
					       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						  & (((IData)(0x2bU) 
						      + 
						      ((IData)(0x3cU) 
						       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						     >> 5U))] 
			 >> (0x1fU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) 
		  & vlTOPp->cdb_i[7U]) & ((0x3fU & 
					   ((vlTOPp->cdb_i[7U] 
					     << 6U) 
					    | (vlTOPp->cdb_i[6U] 
					       >> 0x1aU))) 
					  == (0x3fU 
					      & vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->rob__DOT____Vlvbound2 = 1U;
		if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->rob__DOT__rob_n[(0x7fU 
					     & (((IData)(0x2bU) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						>> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->rob__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->rob__DOT____Vlvbound2) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->rob__DOT____Vlvbound3 = (0xfU 
						 & ((vlTOPp->cdb_i[7U] 
						     << 0x1cU) 
						    | (vlTOPp->cdb_i[6U] 
						       >> 4U)));
		if ((0xeffU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound3);
		}
		if (((0xeffU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3cU) 
					      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						 & (((IData)(0x2aU) 
						     + 
						     ((IData)(0x3cU) 
						      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						    >> 5U))] 
			>> (0x1fU & ((IData)(0x2aU) 
				     + ((IData)(0x3cU) 
					* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->rob__DOT____Vlvbound4 = 
			(0xffffU & ((vlTOPp->cdb_i[6U] 
				     << 0xcU) | (vlTOPp->cdb_i[5U] 
						 >> 0x14U)));
		    if ((0xeffU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3cU) 
						 * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound4);
		    }
		}
	    }
	    if ((((~ ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3cU) 
					       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						  & (((IData)(0x2bU) 
						      + 
						      ((IData)(0x3cU) 
						       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						     >> 5U))] 
			 >> (0x1fU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) 
		  & (vlTOPp->cdb_i[8U] >> 0xdU)) & 
		 ((0x3fU & ((vlTOPp->cdb_i[9U] << 0x19U) 
			    | (vlTOPp->cdb_i[8U] >> 7U))) 
		  == (0x3fU & vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->rob__DOT____Vlvbound2 = 1U;
		if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->rob__DOT__rob_n[(0x7fU 
					     & (((IData)(0x2bU) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						>> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->rob__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->rob__DOT____Vlvbound2) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->rob__DOT____Vlvbound3 = (0xfU 
						 & ((vlTOPp->cdb_i[8U] 
						     << 0xfU) 
						    | (vlTOPp->cdb_i[7U] 
						       >> 0x11U)));
		if ((0xeffU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound3);
		}
		if (((0xeffU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3cU) 
					      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						 & (((IData)(0x2aU) 
						     + 
						     ((IData)(0x3cU) 
						      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						    >> 5U))] 
			>> (0x1fU & ((IData)(0x2aU) 
				     + ((IData)(0x3cU) 
					* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->rob__DOT____Vlvbound4 = 
			(0xffffU & ((vlTOPp->cdb_i[8U] 
				     << 0x1fU) | (vlTOPp->cdb_i[7U] 
						  >> 1U)));
		    if ((0xeffU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3cU) 
						 * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound4);
		    }
		}
	    }
	    if ((((~ ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3cU) 
					       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						  & (((IData)(0x2bU) 
						      + 
						      ((IData)(0x3cU) 
						       * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						     >> 5U))] 
			 >> (0x1fU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) 
		  & (vlTOPp->cdb_i[9U] >> 0x1aU)) & 
		 ((0x3fU & (vlTOPp->cdb_i[9U] >> 0x14U)) 
		  == (0x3fU & vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->rob__DOT____Vlvbound2 = 1U;
		if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->rob__DOT__rob_n[(0x7fU 
					     & (((IData)(0x2bU) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						>> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->rob__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->rob__DOT____Vlvbound2) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->rob__DOT____Vlvbound3 = (0xfU 
						 & ((vlTOPp->cdb_i[9U] 
						     << 2U) 
						    | (vlTOPp->cdb_i[8U] 
						       >> 0x1eU)));
		if ((0xeffU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3cU) 
					     * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3cU) 
						    * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound3);
		}
		if (((0xeffU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3cU) 
					      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->rob__DOT__rob_q[(0x7fU 
						 & (((IData)(0x2aU) 
						     + 
						     ((IData)(0x3cU) 
						      * vlTOPp->rob__DOT__unnamedblk1__DOT__i)) 
						    >> 5U))] 
			>> (0x1fU & ((IData)(0x2aU) 
				     + ((IData)(0x3cU) 
					* vlTOPp->rob__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->rob__DOT____Vlvbound4 = 
			(0xffffU & ((vlTOPp->cdb_i[9U] 
				     << 0x12U) | (vlTOPp->cdb_i[8U] 
						  >> 0xeU)));
		    if ((0xeffU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3cU) 
						 * vlTOPp->rob__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3cU) 
						  * vlTOPp->rob__DOT__unnamedblk1__DOT__i))), vlTOPp->rob__DOT__rob_n, vlTOPp->rob__DOT____Vlvbound4);
		    }
		}
	    }
	    vlTOPp->rob__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
	    vlTOPp->rob__DOT__unnamedblk1__DOT__i = 
		((IData)(1U) + vlTOPp->rob__DOT__unnamedblk1__DOT__i);
	}
	if ((1U & (IData)((vlTOPp->rob__DOT__committing_instr 
			   >> 0x2bU)))) {
	    vlTOPp->rob__DOT____Vlvbound5 = 0U;
	    vlTOPp->rob__DOT__rob_commit_pt_n = (0x3fU 
						 & ((IData)(1U) 
						    + (IData)(vlTOPp->rob__DOT__rob_commit_pt_n)));
	    vlTOPp->rob__DOT__rob_num_n = (0x7fU & 
					   ((IData)(1U) 
					    + (IData)(vlTOPp->rob__DOT__rob_num_n)));
	    if ((0xeffU >= (0xfffU & ((IData)(0x2bU) 
				      + ((IData)(0x3cU) 
					 * (IData)(vlTOPp->rob__DOT__rob_commit_pt)))))) {
		vlTOPp->rob__DOT__rob_n[(0x7fU & (((IData)(0x2bU) 
						   + 
						   ((IData)(0x3cU) 
						    * (IData)(vlTOPp->rob__DOT__rob_commit_pt))) 
						  >> 5U))] 
		    = (((~ ((IData)(1U) << (0x1fU & 
					    ((IData)(0x2bU) 
					     + ((IData)(0x3cU) 
						* (IData)(vlTOPp->rob__DOT__rob_commit_pt)))))) 
			& vlTOPp->rob__DOT__rob_n[(0x7fU 
						   & (((IData)(0x2bU) 
						       + 
						       ((IData)(0x3cU) 
							* (IData)(vlTOPp->rob__DOT__rob_commit_pt))) 
						      >> 5U))]) 
		       | ((IData)(vlTOPp->rob__DOT____Vlvbound5) 
			  << (0x1fU & ((IData)(0x2bU) 
				       + ((IData)(0x3cU) 
					  * (IData)(vlTOPp->rob__DOT__rob_commit_pt))))));
	    }
	}
    }
}

void Vrob::_eval(Vrob__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrob::_eval\n"); );
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vrob::_eval_initial(Vrob__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrob::_eval_initial\n"); );
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vrob::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrob::final\n"); );
    // Variables
    Vrob__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vrob::_eval_settle(Vrob__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrob::_eval_settle\n"); );
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vrob::_change_request(Vrob__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrob::_change_request\n"); );
    Vrob* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vrob::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrob::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
	Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((reset_i & 0xfeU))) {
	Verilated::overWidthError("reset_i");}
    if (VL_UNLIKELY((issue_rob_valid_i & 0xfeU))) {
	Verilated::overWidthError("issue_rob_valid_i");}
    if (VL_UNLIKELY((issue_rob_entry_i & VL_ULL(0)))) {
	Verilated::overWidthError("issue_rob_entry_i");}
    if (VL_UNLIKELY((flag_rob_i & 0xf0U))) {
	Verilated::overWidthError("flag_rob_i");}
}
#endif // VL_DEBUG

void Vrob::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrob::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    reset_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(315,cdb_i);
    issue_rob_valid_i = VL_RAND_RESET_I(1);
    issue_rob_entry_i = VL_RAND_RESET_Q(60);
    rob_issue_entry_num_o = VL_RAND_RESET_I(6);
    rob_issue_ready_o = VL_RAND_RESET_I(1);
    rob_phys_valid_o = VL_RAND_RESET_I(1);
    rob_phys_reg_cl_o = VL_RAND_RESET_I(7);
    rob_sb_valid_o = VL_RAND_RESET_I(1);
    rob_mispredict_o = VL_RAND_RESET_I(1);
    rob_fe_redirected_pc_o = VL_RAND_RESET_I(16);
    rob_rename_valid_o = VL_RAND_RESET_I(1);
    rob_rename_entry_o = VL_RAND_RESET_I(12);
    rob_flag_valid_o = VL_RAND_RESET_I(1);
    rob_flag_o = VL_RAND_RESET_I(8);
    flag_rob_i = VL_RAND_RESET_I(4);
    VL_ZERO_RESET_W(3840,rob__DOT__rob_q);
    VL_ZERO_RESET_W(3840,rob__DOT__rob_n);
    rob__DOT__rob_alloc_pt = VL_RAND_RESET_I(6);
    rob__DOT__rob_alloc_pt_n = VL_RAND_RESET_I(6);
    rob__DOT__rob_commit_pt = VL_RAND_RESET_I(6);
    rob__DOT__rob_commit_pt_n = VL_RAND_RESET_I(6);
    rob__DOT__rob_num = VL_RAND_RESET_I(7);
    rob__DOT__rob_num_n = VL_RAND_RESET_I(7);
    rob__DOT__committing_instr = 0;
    rob__DOT__prev_spec_branch = VL_RAND_RESET_I(1);
    rob__DOT__predicted_pc = VL_RAND_RESET_I(16);
    rob__DOT__condition_taken = VL_RAND_RESET_I(1);
    rob__DOT__rename_entry = 0;
    rob__DOT__unnamedblk1__DOT__i = 0;
    rob__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    rob__DOT____Vlvbound1 = 0;
    rob__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    rob__DOT____Vlvbound3 = VL_RAND_RESET_I(4);
    rob__DOT____Vlvbound4 = VL_RAND_RESET_I(16);
    rob__DOT____Vlvbound5 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk_i = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
