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
    // ALWAYS at /Users/yongqinwang/Purple_Jade/rob/rob.sv:31
    if (vlTOPp->reset_i) {
	vlTOPp->rob__DOT__rob[0U] = vlTOPp->rob__DOT__rob_n[0U];
	vlTOPp->rob__DOT__rob[1U] = vlTOPp->rob__DOT__rob_n[1U];
	vlTOPp->rob__DOT__rob[2U] = vlTOPp->rob__DOT__rob_n[2U];
	vlTOPp->rob__DOT__rob[3U] = vlTOPp->rob__DOT__rob_n[3U];
	vlTOPp->rob__DOT__rob[4U] = vlTOPp->rob__DOT__rob_n[4U];
	vlTOPp->rob__DOT__rob[5U] = vlTOPp->rob__DOT__rob_n[5U];
	vlTOPp->rob__DOT__rob[6U] = vlTOPp->rob__DOT__rob_n[6U];
	vlTOPp->rob__DOT__rob[7U] = vlTOPp->rob__DOT__rob_n[7U];
	vlTOPp->rob__DOT__rob[8U] = vlTOPp->rob__DOT__rob_n[8U];
	vlTOPp->rob__DOT__rob[9U] = vlTOPp->rob__DOT__rob_n[9U];
	vlTOPp->rob__DOT__rob[0xaU] = vlTOPp->rob__DOT__rob_n[0xaU];
	vlTOPp->rob__DOT__rob[0xbU] = vlTOPp->rob__DOT__rob_n[0xbU];
	vlTOPp->rob__DOT__rob[0xcU] = vlTOPp->rob__DOT__rob_n[0xcU];
	vlTOPp->rob__DOT__rob[0xdU] = vlTOPp->rob__DOT__rob_n[0xdU];
	vlTOPp->rob__DOT__rob[0xeU] = vlTOPp->rob__DOT__rob_n[0xeU];
	vlTOPp->rob__DOT__rob[0xfU] = vlTOPp->rob__DOT__rob_n[0xfU];
	vlTOPp->rob__DOT__rob[0x10U] = vlTOPp->rob__DOT__rob_n[0x10U];
	vlTOPp->rob__DOT__rob[0x11U] = vlTOPp->rob__DOT__rob_n[0x11U];
	vlTOPp->rob__DOT__rob[0x12U] = vlTOPp->rob__DOT__rob_n[0x12U];
	vlTOPp->rob__DOT__rob[0x13U] = vlTOPp->rob__DOT__rob_n[0x13U];
	vlTOPp->rob__DOT__rob[0x14U] = vlTOPp->rob__DOT__rob_n[0x14U];
	vlTOPp->rob__DOT__rob[0x15U] = vlTOPp->rob__DOT__rob_n[0x15U];
	vlTOPp->rob__DOT__rob[0x16U] = vlTOPp->rob__DOT__rob_n[0x16U];
	vlTOPp->rob__DOT__rob[0x17U] = vlTOPp->rob__DOT__rob_n[0x17U];
	vlTOPp->rob__DOT__rob[0x18U] = vlTOPp->rob__DOT__rob_n[0x18U];
	vlTOPp->rob__DOT__rob[0x19U] = vlTOPp->rob__DOT__rob_n[0x19U];
	vlTOPp->rob__DOT__rob[0x1aU] = vlTOPp->rob__DOT__rob_n[0x1aU];
	vlTOPp->rob__DOT__rob[0x1bU] = vlTOPp->rob__DOT__rob_n[0x1bU];
	vlTOPp->rob__DOT__rob[0x1cU] = vlTOPp->rob__DOT__rob_n[0x1cU];
	vlTOPp->rob__DOT__rob[0x1dU] = vlTOPp->rob__DOT__rob_n[0x1dU];
	vlTOPp->rob__DOT__rob[0x1eU] = vlTOPp->rob__DOT__rob_n[0x1eU];
	vlTOPp->rob__DOT__rob[0x1fU] = vlTOPp->rob__DOT__rob_n[0x1fU];
	vlTOPp->rob__DOT__rob[0x20U] = vlTOPp->rob__DOT__rob_n[0x20U];
	vlTOPp->rob__DOT__rob[0x21U] = vlTOPp->rob__DOT__rob_n[0x21U];
	vlTOPp->rob__DOT__rob[0x22U] = vlTOPp->rob__DOT__rob_n[0x22U];
	vlTOPp->rob__DOT__rob[0x23U] = vlTOPp->rob__DOT__rob_n[0x23U];
	vlTOPp->rob__DOT__rob[0x24U] = vlTOPp->rob__DOT__rob_n[0x24U];
	vlTOPp->rob__DOT__rob[0x25U] = vlTOPp->rob__DOT__rob_n[0x25U];
	vlTOPp->rob__DOT__rob[0x26U] = vlTOPp->rob__DOT__rob_n[0x26U];
	vlTOPp->rob__DOT__rob[0x27U] = vlTOPp->rob__DOT__rob_n[0x27U];
	vlTOPp->rob__DOT__rob[0x28U] = vlTOPp->rob__DOT__rob_n[0x28U];
	vlTOPp->rob__DOT__rob[0x29U] = vlTOPp->rob__DOT__rob_n[0x29U];
	vlTOPp->rob__DOT__rob[0x2aU] = vlTOPp->rob__DOT__rob_n[0x2aU];
	vlTOPp->rob__DOT__rob[0x2bU] = vlTOPp->rob__DOT__rob_n[0x2bU];
	vlTOPp->rob__DOT__rob[0x2cU] = vlTOPp->rob__DOT__rob_n[0x2cU];
	vlTOPp->rob__DOT__rob[0x2dU] = vlTOPp->rob__DOT__rob_n[0x2dU];
	vlTOPp->rob__DOT__rob[0x2eU] = vlTOPp->rob__DOT__rob_n[0x2eU];
	vlTOPp->rob__DOT__rob[0x2fU] = vlTOPp->rob__DOT__rob_n[0x2fU];
	vlTOPp->rob__DOT__rob[0x30U] = vlTOPp->rob__DOT__rob_n[0x30U];
	vlTOPp->rob__DOT__rob[0x31U] = vlTOPp->rob__DOT__rob_n[0x31U];
	vlTOPp->rob__DOT__rob[0x32U] = vlTOPp->rob__DOT__rob_n[0x32U];
	vlTOPp->rob__DOT__rob[0x33U] = vlTOPp->rob__DOT__rob_n[0x33U];
	vlTOPp->rob__DOT__rob[0x34U] = vlTOPp->rob__DOT__rob_n[0x34U];
	vlTOPp->rob__DOT__rob[0x35U] = vlTOPp->rob__DOT__rob_n[0x35U];
	vlTOPp->rob__DOT__rob[0x36U] = vlTOPp->rob__DOT__rob_n[0x36U];
	vlTOPp->rob__DOT__rob[0x37U] = vlTOPp->rob__DOT__rob_n[0x37U];
	vlTOPp->rob__DOT__rob[0x38U] = vlTOPp->rob__DOT__rob_n[0x38U];
	vlTOPp->rob__DOT__rob[0x39U] = vlTOPp->rob__DOT__rob_n[0x39U];
	vlTOPp->rob__DOT__rob[0x3aU] = vlTOPp->rob__DOT__rob_n[0x3aU];
	vlTOPp->rob__DOT__rob[0x3bU] = vlTOPp->rob__DOT__rob_n[0x3bU];
	vlTOPp->rob__DOT__rob[0x3cU] = vlTOPp->rob__DOT__rob_n[0x3cU];
	vlTOPp->rob__DOT__rob[0x3dU] = vlTOPp->rob__DOT__rob_n[0x3dU];
	vlTOPp->rob__DOT__rob[0x3eU] = vlTOPp->rob__DOT__rob_n[0x3eU];
	vlTOPp->rob__DOT__rob[0x3fU] = vlTOPp->rob__DOT__rob_n[0x3fU];
	vlTOPp->rob__DOT__rob[0x40U] = vlTOPp->rob__DOT__rob_n[0x40U];
	vlTOPp->rob__DOT__rob[0x41U] = vlTOPp->rob__DOT__rob_n[0x41U];
	vlTOPp->rob__DOT__rob[0x42U] = vlTOPp->rob__DOT__rob_n[0x42U];
	vlTOPp->rob__DOT__rob[0x43U] = vlTOPp->rob__DOT__rob_n[0x43U];
	vlTOPp->rob__DOT__rob[0x44U] = vlTOPp->rob__DOT__rob_n[0x44U];
	vlTOPp->rob__DOT__rob[0x45U] = vlTOPp->rob__DOT__rob_n[0x45U];
	vlTOPp->rob__DOT__rob[0x46U] = vlTOPp->rob__DOT__rob_n[0x46U];
	vlTOPp->rob__DOT__rob[0x47U] = vlTOPp->rob__DOT__rob_n[0x47U];
	vlTOPp->rob__DOT__rob[0x48U] = vlTOPp->rob__DOT__rob_n[0x48U];
	vlTOPp->rob__DOT__rob[0x49U] = vlTOPp->rob__DOT__rob_n[0x49U];
	vlTOPp->rob__DOT__rob[0x4aU] = vlTOPp->rob__DOT__rob_n[0x4aU];
	vlTOPp->rob__DOT__rob[0x4bU] = vlTOPp->rob__DOT__rob_n[0x4bU];
	vlTOPp->rob__DOT__rob[0x4cU] = vlTOPp->rob__DOT__rob_n[0x4cU];
	vlTOPp->rob__DOT__rob[0x4dU] = vlTOPp->rob__DOT__rob_n[0x4dU];
	vlTOPp->rob__DOT__rob[0x4eU] = vlTOPp->rob__DOT__rob_n[0x4eU];
	vlTOPp->rob__DOT__rob[0x4fU] = vlTOPp->rob__DOT__rob_n[0x4fU];
	vlTOPp->rob__DOT__rob[0x50U] = vlTOPp->rob__DOT__rob_n[0x50U];
	vlTOPp->rob__DOT__rob[0x51U] = vlTOPp->rob__DOT__rob_n[0x51U];
	vlTOPp->rob__DOT__rob[0x52U] = vlTOPp->rob__DOT__rob_n[0x52U];
	vlTOPp->rob__DOT__rob[0x53U] = vlTOPp->rob__DOT__rob_n[0x53U];
	vlTOPp->rob__DOT__rob[0x54U] = vlTOPp->rob__DOT__rob_n[0x54U];
	vlTOPp->rob__DOT__rob[0x55U] = vlTOPp->rob__DOT__rob_n[0x55U];
	vlTOPp->rob__DOT__rob_alloc_pt = vlTOPp->rob__DOT__rob_alloc_pt_n;
	vlTOPp->rob__DOT__rob_commit_pt = vlTOPp->rob__DOT__rob_commit_pt_n;
    } else {
	vlTOPp->rob__DOT__rob[0U] = 0U;
	vlTOPp->rob__DOT__rob[1U] = 0U;
	vlTOPp->rob__DOT__rob[2U] = 0U;
	vlTOPp->rob__DOT__rob[3U] = 0U;
	vlTOPp->rob__DOT__rob[4U] = 0U;
	vlTOPp->rob__DOT__rob[5U] = 0U;
	vlTOPp->rob__DOT__rob[6U] = 0U;
	vlTOPp->rob__DOT__rob[7U] = 0U;
	vlTOPp->rob__DOT__rob[8U] = 0U;
	vlTOPp->rob__DOT__rob[9U] = 0U;
	vlTOPp->rob__DOT__rob[0xaU] = 0U;
	vlTOPp->rob__DOT__rob[0xbU] = 0U;
	vlTOPp->rob__DOT__rob[0xcU] = 0U;
	vlTOPp->rob__DOT__rob[0xdU] = 0U;
	vlTOPp->rob__DOT__rob[0xeU] = 0U;
	vlTOPp->rob__DOT__rob[0xfU] = 0U;
	vlTOPp->rob__DOT__rob[0x10U] = 0U;
	vlTOPp->rob__DOT__rob[0x11U] = 0U;
	vlTOPp->rob__DOT__rob[0x12U] = 0U;
	vlTOPp->rob__DOT__rob[0x13U] = 0U;
	vlTOPp->rob__DOT__rob[0x14U] = 0U;
	vlTOPp->rob__DOT__rob[0x15U] = 0U;
	vlTOPp->rob__DOT__rob[0x16U] = 0U;
	vlTOPp->rob__DOT__rob[0x17U] = 0U;
	vlTOPp->rob__DOT__rob[0x18U] = 0U;
	vlTOPp->rob__DOT__rob[0x19U] = 0U;
	vlTOPp->rob__DOT__rob[0x1aU] = 0U;
	vlTOPp->rob__DOT__rob[0x1bU] = 0U;
	vlTOPp->rob__DOT__rob[0x1cU] = 0U;
	vlTOPp->rob__DOT__rob[0x1dU] = 0U;
	vlTOPp->rob__DOT__rob[0x1eU] = 0U;
	vlTOPp->rob__DOT__rob[0x1fU] = 0U;
	vlTOPp->rob__DOT__rob[0x20U] = 0U;
	vlTOPp->rob__DOT__rob[0x21U] = 0U;
	vlTOPp->rob__DOT__rob[0x22U] = 0U;
	vlTOPp->rob__DOT__rob[0x23U] = 0U;
	vlTOPp->rob__DOT__rob[0x24U] = 0U;
	vlTOPp->rob__DOT__rob[0x25U] = 0U;
	vlTOPp->rob__DOT__rob[0x26U] = 0U;
	vlTOPp->rob__DOT__rob[0x27U] = 0U;
	vlTOPp->rob__DOT__rob[0x28U] = 0U;
	vlTOPp->rob__DOT__rob[0x29U] = 0U;
	vlTOPp->rob__DOT__rob[0x2aU] = 0U;
	vlTOPp->rob__DOT__rob[0x2bU] = 0U;
	vlTOPp->rob__DOT__rob[0x2cU] = 0U;
	vlTOPp->rob__DOT__rob[0x2dU] = 0U;
	vlTOPp->rob__DOT__rob[0x2eU] = 0U;
	vlTOPp->rob__DOT__rob[0x2fU] = 0U;
	vlTOPp->rob__DOT__rob[0x30U] = 0U;
	vlTOPp->rob__DOT__rob[0x31U] = 0U;
	vlTOPp->rob__DOT__rob[0x32U] = 0U;
	vlTOPp->rob__DOT__rob[0x33U] = 0U;
	vlTOPp->rob__DOT__rob[0x34U] = 0U;
	vlTOPp->rob__DOT__rob[0x35U] = 0U;
	vlTOPp->rob__DOT__rob[0x36U] = 0U;
	vlTOPp->rob__DOT__rob[0x37U] = 0U;
	vlTOPp->rob__DOT__rob[0x38U] = 0U;
	vlTOPp->rob__DOT__rob[0x39U] = 0U;
	vlTOPp->rob__DOT__rob[0x3aU] = 0U;
	vlTOPp->rob__DOT__rob[0x3bU] = 0U;
	vlTOPp->rob__DOT__rob[0x3cU] = 0U;
	vlTOPp->rob__DOT__rob[0x3dU] = 0U;
	vlTOPp->rob__DOT__rob[0x3eU] = 0U;
	vlTOPp->rob__DOT__rob[0x3fU] = 0U;
	vlTOPp->rob__DOT__rob[0x40U] = 0U;
	vlTOPp->rob__DOT__rob[0x41U] = 0U;
	vlTOPp->rob__DOT__rob[0x42U] = 0U;
	vlTOPp->rob__DOT__rob[0x43U] = 0U;
	vlTOPp->rob__DOT__rob[0x44U] = 0U;
	vlTOPp->rob__DOT__rob[0x45U] = 0U;
	vlTOPp->rob__DOT__rob[0x46U] = 0U;
	vlTOPp->rob__DOT__rob[0x47U] = 0U;
	vlTOPp->rob__DOT__rob[0x48U] = 0U;
	vlTOPp->rob__DOT__rob[0x49U] = 0U;
	vlTOPp->rob__DOT__rob[0x4aU] = 0U;
	vlTOPp->rob__DOT__rob[0x4bU] = 0U;
	vlTOPp->rob__DOT__rob[0x4cU] = 0U;
	vlTOPp->rob__DOT__rob[0x4dU] = 0U;
	vlTOPp->rob__DOT__rob[0x4eU] = 0U;
	vlTOPp->rob__DOT__rob[0x4fU] = 0U;
	vlTOPp->rob__DOT__rob[0x50U] = 0U;
	vlTOPp->rob__DOT__rob[0x51U] = 0U;
	vlTOPp->rob__DOT__rob[0x52U] = 0U;
	vlTOPp->rob__DOT__rob[0x53U] = 0U;
	vlTOPp->rob__DOT__rob[0x54U] = 0U;
	vlTOPp->rob__DOT__rob[0x55U] = 0U;
	vlTOPp->rob__DOT__rob_alloc_pt = 0U;
	vlTOPp->rob__DOT__rob_commit_pt = 0U;
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
    if (VL_UNLIKELY((sb_rob_ready_o & 0xfeU))) {
	Verilated::overWidthError("sb_rob_ready_o");}
}
#endif // VL_DEBUG

void Vrob::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrob::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    reset_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280,cdb_i);
    issue_rob_valid_i = VL_RAND_RESET_I(1);
    issue_rob_entry_i = VL_RAND_RESET_Q(33);
    rob_num_o = VL_RAND_RESET_I(6);
    rob_ready_o = VL_RAND_RESET_I(1);
    rob_phys_valid_o = VL_RAND_RESET_I(1);
    rob_phys_reg_cl_o = VL_RAND_RESET_I(7);
    rob_sb_valid_o = VL_RAND_RESET_I(1);
    sb_rob_ready_o = VL_RAND_RESET_I(1);
    VL_ZERO_RESET_W(2752,rob__DOT__rob);
    VL_ZERO_RESET_W(2752,rob__DOT__rob_n);
    rob__DOT__rob_alloc_pt = VL_RAND_RESET_I(6);
    rob__DOT__rob_alloc_pt_n = VL_RAND_RESET_I(6);
    rob__DOT__rob_commit_pt = VL_RAND_RESET_I(6);
    rob__DOT__rob_commit_pt_n = VL_RAND_RESET_I(6);
    __Vclklast__TOP__clk_i = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
