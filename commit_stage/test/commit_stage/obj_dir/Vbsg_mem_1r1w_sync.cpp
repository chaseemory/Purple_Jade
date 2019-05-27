// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_mem_1r1w_sync.h for the primary calling header

#include "Vbsg_mem_1r1w_sync.h" // For This
#include "Vbsg_mem_1r1w_sync__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vbsg_mem_1r1w_sync) {
    Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp = __VlSymsp = new Vbsg_mem_1r1w_sync__Syms(this, name());
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vbsg_mem_1r1w_sync::__Vconfigure(Vbsg_mem_1r1w_sync__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vbsg_mem_1r1w_sync::~Vbsg_mem_1r1w_sync() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vbsg_mem_1r1w_sync::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbsg_mem_1r1w_sync::eval\n"); );
    Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vbsg_mem_1r1w_sync::_eval_initial_loop(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vbsg_mem_1r1w_sync::_sequent__TOP__1(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_mem_1r1w_sync::_sequent__TOP__1\n"); );
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__commit_stage__DOT__mem__DOT__synth__DOT__mem__v0,0,0);
    VL_SIG16(__Vdlyvdim0__commit_stage__DOT__mem__DOT__synth__DOT__mem__v0,15,0);
    VL_SIG16(__Vdlyvval__commit_stage__DOT__mem__DOT__synth__DOT__mem__v0,15,0);
    // Body
    __Vdlyvset__commit_stage__DOT__mem__DOT__synth__DOT__mem__v0 = 0U;
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../../../common//../basejump_stl/bsg_mem/bsg_mem_1r1w_sync_synth.v:60
    vlTOPp->commit_stage__DOT__mem__DOT__synth__DOT__r_addr_r 
	= vlTOPp->exe_mem_addr_i;
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//arch_state.sv:87
    if (vlTOPp->reset_i) {
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[1U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[2U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[3U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[4U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[5U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[6U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[7U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[8U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[9U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xaU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xbU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xcU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xdU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xeU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xfU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x10U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x11U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x12U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x13U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x14U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x15U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x16U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x17U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x18U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x19U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1aU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1bU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1cU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1dU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1eU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1fU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x20U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x21U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x22U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x23U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x24U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x25U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x26U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x27U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x28U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x29U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2aU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2bU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2cU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2dU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2eU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2fU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x30U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x31U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x32U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x33U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x34U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x35U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x36U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x37U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x38U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x39U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3aU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3bU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3cU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3dU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3eU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3fU] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__valid[0U] = 0xffffU;
	vlTOPp->commit_stage__DOT__states__DOT__valid[1U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__valid[2U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__valid[3U] = 0U;
	vlTOPp->commit_stage__DOT__states__DOT__flag = 0U;
    } else {
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[1U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[1U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[2U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[2U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[3U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[3U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[4U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[4U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[5U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[5U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[6U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[6U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[7U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[7U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[8U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[8U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[9U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[9U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xaU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xaU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xbU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xbU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xcU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xcU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xdU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xdU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xeU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xeU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xfU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xfU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x10U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x10U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x11U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x11U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x12U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x12U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x13U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x13U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x14U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x14U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x15U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x15U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x16U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x16U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x17U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x17U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x18U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x18U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x19U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x19U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1aU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1aU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1bU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1bU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1cU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1cU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1dU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1dU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1eU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1eU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1fU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1fU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x20U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x20U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x21U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x21U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x22U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x22U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x23U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x23U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x24U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x24U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x25U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x25U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x26U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x26U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x27U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x27U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x28U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x28U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x29U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x29U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2aU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2aU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2bU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2bU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2cU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2cU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2dU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2dU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2eU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2eU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2fU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2fU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x30U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x30U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x31U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x31U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x32U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x32U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x33U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x33U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x34U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x34U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x35U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x35U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x36U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x36U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x37U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x37U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x38U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x38U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x39U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x39U];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3aU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3aU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3bU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3bU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3cU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3cU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3dU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3dU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3eU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3eU];
	vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3fU] 
	    = vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3fU];
	vlTOPp->commit_stage__DOT__states__DOT__valid[0U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__valid_n[0U];
	vlTOPp->commit_stage__DOT__states__DOT__valid[1U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__valid_n[1U];
	vlTOPp->commit_stage__DOT__states__DOT__valid[2U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__valid_n[2U];
	vlTOPp->commit_stage__DOT__states__DOT__valid[3U] 
	    = vlTOPp->commit_stage__DOT__states__DOT__valid_n[3U];
	vlTOPp->commit_stage__DOT__states__DOT__flag 
	    = vlTOPp->commit_stage__DOT__states__DOT__flag_n;
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../../../common//../basejump_stl/bsg_mem/bsg_mem_1r1w_sync_synth.v:68
    if (vlTOPp->commit_stage__DOT__sb_mem_v) {
	__Vdlyvval__commit_stage__DOT__mem__DOT__synth__DOT__mem__v0 
	    = (0xffffU & ((0x20fU >= (0x3ffU & ((IData)(0x21U) 
						* (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))))
			   ? (((0U == (0x1fU & ((IData)(0x21U) 
						* (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))))
			        ? 0U : (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
					((IData)(1U) 
					 + (0x1fU & 
					    (((IData)(0x21U) 
					      * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
					     >> 5U)))] 
					<< ((IData)(0x20U) 
					    - (0x1fU 
					       & ((IData)(0x21U) 
						  * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))))) 
			      | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
				 (0x1fU & (((IData)(0x21U) 
					    * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
					   >> 5U))] 
				 >> (0x1fU & ((IData)(0x21U) 
					      * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))))
			   : 0U));
	__Vdlyvset__commit_stage__DOT__mem__DOT__synth__DOT__mem__v0 = 1U;
	__Vdlyvdim0__commit_stage__DOT__mem__DOT__synth__DOT__mem__v0 
	    = (0xffffU & ((0x20fU >= (0x3ffU & ((IData)(0x10U) 
						+ ((IData)(0x21U) 
						   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))))
			   ? (((0U == (0x1fU & ((IData)(0x10U) 
						+ ((IData)(0x21U) 
						   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))))
			        ? 0U : (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
					((IData)(1U) 
					 + (0x1fU & 
					    (((IData)(0x10U) 
					      + ((IData)(0x21U) 
						 * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))) 
					     >> 5U)))] 
					<< ((IData)(0x20U) 
					    - (0x1fU 
					       & ((IData)(0x10U) 
						  + 
						  ((IData)(0x21U) 
						   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))))))) 
			      | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
				 (0x1fU & (((IData)(0x10U) 
					    + ((IData)(0x21U) 
					       * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))) 
					   >> 5U))] 
				 >> (0x1fU & ((IData)(0x10U) 
					      + ((IData)(0x21U) 
						 * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))))))
			   : 0U));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//rob.sv:208
    if (vlTOPp->reset_i) {
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[1U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[2U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[3U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[4U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[5U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[6U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[7U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[8U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[9U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xaU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xbU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xcU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xdU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xeU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xfU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x10U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x11U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x12U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x13U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x14U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x15U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x16U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x17U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x18U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x19U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x20U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x21U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x22U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x23U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x24U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x25U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x26U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x27U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x28U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x29U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x30U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x31U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x32U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x33U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x34U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x35U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x36U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x37U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x38U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x39U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x40U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x41U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x42U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x43U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x44U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x45U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x46U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x47U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x48U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x49U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x50U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x51U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x52U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x53U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x54U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x55U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x56U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x57U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x58U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x59U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x60U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x61U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x62U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x63U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x64U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x65U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x66U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x67U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x68U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x69U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x70U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x71U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x72U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x73U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x74U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x75U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x76U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x77U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x78U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x79U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num = 0x40U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__prev_spec_branch = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__predicted_pc = 0U;
    } else {
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[1U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[1U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[2U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[2U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[3U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[3U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[4U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[4U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[5U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[5U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[6U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[6U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[7U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[7U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[8U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[8U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[9U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[9U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xaU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xaU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xbU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xbU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xcU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xcU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xdU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xdU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xeU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xeU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xfU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xfU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x10U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x10U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x11U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x11U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x12U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x12U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x13U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x13U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x14U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x14U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x15U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x15U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x16U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x16U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x17U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x17U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x18U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x18U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x19U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x19U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1aU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1aU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1bU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1bU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1cU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1cU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1dU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1dU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1eU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1eU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1fU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1fU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x20U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x20U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x21U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x21U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x22U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x22U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x23U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x23U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x24U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x24U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x25U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x25U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x26U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x26U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x27U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x27U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x28U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x28U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x29U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x29U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2aU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2aU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2bU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2bU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2cU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2cU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2dU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2dU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2eU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2eU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2fU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2fU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x30U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x30U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x31U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x31U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x32U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x32U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x33U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x33U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x34U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x34U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x35U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x35U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x36U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x36U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x37U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x37U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x38U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x38U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x39U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x39U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3aU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3aU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3bU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3bU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3cU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3cU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3dU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3dU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3eU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3eU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3fU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3fU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x40U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x40U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x41U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x41U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x42U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x42U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x43U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x43U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x44U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x44U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x45U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x45U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x46U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x46U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x47U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x47U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x48U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x48U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x49U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x49U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4aU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4aU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4bU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4bU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4cU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4cU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4dU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4dU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4eU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4eU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4fU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4fU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x50U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x50U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x51U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x51U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x52U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x52U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x53U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x53U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x54U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x54U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x55U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x55U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x56U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x56U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x57U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x57U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x58U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x58U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x59U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x59U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5aU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5aU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5bU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5bU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5cU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5cU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5dU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5dU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5eU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5eU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5fU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5fU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x60U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x60U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x61U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x61U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x62U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x62U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x63U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x63U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x64U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x64U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x65U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x65U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x66U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x66U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x67U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x67U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x68U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x68U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x69U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x69U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6aU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6aU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6bU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6bU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6cU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6cU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6dU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6dU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6eU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6eU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6fU] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6fU];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x70U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x70U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x71U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x71U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x72U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x72U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x73U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x73U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x74U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x74U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x75U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x75U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x76U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x76U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x77U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x77U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x78U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x78U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x79U] 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x79U];
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt_n;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt_n;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num_n;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__prev_spec_branch 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__prev_spec_branch_n;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__predicted_pc 
	    = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__predicted_pc_n;
    }
    // ALWAYSPOST at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../../../common//../basejump_stl/bsg_mem/bsg_mem_1r1w_sync_synth.v:70
    if (__Vdlyvset__commit_stage__DOT__mem__DOT__synth__DOT__mem__v0) {
	vlTOPp->commit_stage__DOT__mem__DOT__synth__DOT__mem[__Vdlyvdim0__commit_stage__DOT__mem__DOT__synth__DOT__mem__v0] 
	    = __Vdlyvval__commit_stage__DOT__mem__DOT__synth__DOT__mem__v0;
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//arch_state.sv:67
    vlTOPp->exe_mem_data_o = vlTOPp->commit_stage__DOT__mem__DOT__synth__DOT__mem
	[vlTOPp->commit_stage__DOT__mem__DOT__synth__DOT__r_addr_r];
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//store_buffer.sv:161
    if (vlTOPp->reset_i) {
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[1U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[2U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[3U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[4U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[5U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[6U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[7U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[8U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[9U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xaU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xbU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xcU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xdU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xeU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xfU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0x10U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_num = 0x10U;
    } else {
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0U] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0U];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[1U] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[1U];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[2U] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[2U];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[3U] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[3U];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[4U] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[4U];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[5U] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[5U];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[6U] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[6U];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[7U] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[7U];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[8U] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[8U];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[9U] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[9U];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xaU] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xaU];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xbU] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xbU];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xcU] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xcU];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xdU] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xdU];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xeU] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xeU];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xfU] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xfU];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0x10U] 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0x10U];
	vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt_n;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt_n;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_num 
	    = vlTOPp->commit_stage__DOT__sb__DOT__sb_num_n;
    }
    vlTOPp->rob_rename_entry_num_o = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt;
    vlTOPp->rob_fe_redirected_pc_o = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__predicted_pc;
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
	= (VL_ULL(0x1fffffffffffffff) & ((0xf3fU >= 
					  (0xfffU & 
					   ((IData)(0x3dU) 
					    * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))))
					  ? (((0U == 
					       (0x1fU 
						& ((IData)(0x3dU) 
						   * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))))
					       ? VL_ULL(0)
					       : ((QData)((IData)(
								  vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
								  ((IData)(2U) 
								   + 
								   (0x7fU 
								    & (((IData)(0x3dU) 
									* (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)) 
								       >> 5U)))])) 
						  << 
						  ((IData)(0x40U) 
						   - 
						   (0x1fU 
						    & ((IData)(0x3dU) 
						       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)))))) 
					     | (((QData)((IData)(
								 vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
								 ((IData)(1U) 
								  + 
								  (0x7fU 
								   & (((IData)(0x3dU) 
								       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)) 
								      >> 5U)))])) 
						 << 
						 ((0U 
						   == 
						   (0x1fU 
						    & ((IData)(0x3dU) 
						       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))))
						   ? 0x20U
						   : 
						  ((IData)(0x20U) 
						   - 
						   (0x1fU 
						    & ((IData)(0x3dU) 
						       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)))))) 
						| ((QData)((IData)(
								   vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
								   (0x7fU 
								    & (((IData)(0x3dU) 
									* (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)) 
								       >> 5U))])) 
						   >> 
						   (0x1fU 
						    & ((IData)(0x3dU) 
						       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))))))
					  : VL_ULL(0)));
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rename_entry 
	= ((0x800U & ((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
			       >> 0xbU)) << 0xbU)) 
	   | ((0x780U & ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr) 
			 << 7U)) | (0x7fU & (IData)(
						    (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						     >> 4U)))));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//rob.sv:118
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__condition_taken 
	= (1U & ((1U & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
				>> 0x28U))) ? ((1U 
						& (IData)(
							  (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							   >> 0x27U)))
					        ? (
						   (1U 
						    & (IData)(
							      (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							       >> 0x26U)))
						    ? 
						   (~ (IData)(
							      (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							       >> 0x25U)))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
								>> 0x25U)))
						     ? 
						    (((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
						      >> 1U) 
						     | ((1U 
							 & (~ 
							    ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
							     >> 2U))) 
							== 
							(1U 
							 & (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag))))
						     : 
						    ((~ 
						      ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
						       >> 1U)) 
						     & ((1U 
							 & ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
							    >> 2U)) 
							== 
							(1U 
							 & (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag))))))
					        : (
						   (1U 
						    & (IData)(
							      (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							       >> 0x26U)))
						    ? 
						   ((1U 
						     & (IData)(
							       (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
								>> 0x25U)))
						     ? 
						    ((1U 
						      & (~ 
							 ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
							  >> 2U))) 
						     == 
						     (1U 
						      & (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag)))
						     : 
						    ((1U 
						      & ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
							 >> 2U)) 
						     == 
						     (1U 
						      & (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag))))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
								>> 0x25U)))
						     ? 
						    ((~ 
						      ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
						       >> 3U)) 
						     | ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
							>> 1U))
						     : 
						    (((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
						      >> 3U) 
						     & (~ 
							((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
							 >> 1U))))))
		  : ((1U & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
				    >> 0x27U))) ? (
						   (1U 
						    & (IData)(
							      (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							       >> 0x26U)))
						    ? 
						   ((1U 
						     & (IData)(
							       (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
								>> 0x25U)))
						     ? 
						    (~ (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag))
						     : (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
								>> 0x25U)))
						     ? 
						    (~ 
						     ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
						      >> 2U))
						     : 
						    ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
						     >> 2U)))
		      : ((1U & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					>> 0x26U)))
			  ? ((1U & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					    >> 0x25U)))
			      ? (~ ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
				    >> 3U)) : ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
					       >> 3U))
			  : ((1U & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					    >> 0x25U)))
			      ? (~ ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
				    >> 1U)) : ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
					       >> 1U))))));
    vlTOPp->rob_mispredict_o = (((((0xffffU & (IData)(
						      (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						       >> 0x2cU))) 
				   != (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__predicted_pc)) 
				  & (0x40U != (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num))) 
				 & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					    >> 0x3cU))) 
				& (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__prev_spec_branch));
    vlTOPp->sb_issue_entry_num_o = vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt;
    vlTOPp->sb_commit_pt_o = vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt;
    vlTOPp->sb_rename_clear_st_num_o = vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt;
    vlTOPp->sb_wb_vector_o = ((0xfffeU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (1U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[1U]));
    vlTOPp->sb_wb_vector_o = ((0xfffdU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (2U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[2U]));
    vlTOPp->sb_wb_vector_o = ((0xfffbU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (4U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[3U]));
    vlTOPp->sb_wb_vector_o = ((0xfff7U & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (8U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[4U]));
    vlTOPp->sb_wb_vector_o = ((0xffefU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x10U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[5U]));
    vlTOPp->sb_wb_vector_o = ((0xffdfU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x20U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[6U]));
    vlTOPp->sb_wb_vector_o = ((0xffbfU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x40U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[7U]));
    vlTOPp->sb_wb_vector_o = ((0xff7fU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x80U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[8U]));
    vlTOPp->sb_wb_vector_o = ((0xfeffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x100U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[9U]));
    vlTOPp->sb_wb_vector_o = ((0xfdffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x200U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xaU]));
    vlTOPp->sb_wb_vector_o = ((0xfbffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x400U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xbU]));
    vlTOPp->sb_wb_vector_o = ((0xf7ffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x800U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xcU]));
    vlTOPp->sb_wb_vector_o = ((0xefffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x1000U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xdU]));
    vlTOPp->sb_wb_vector_o = ((0xdfffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x2000U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xeU]));
    vlTOPp->sb_wb_vector_o = ((0xbfffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x4000U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xfU]));
    vlTOPp->sb_wb_vector_o = ((0x7fffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x8000U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0x10U]));
    vlTOPp->rob_rename_entry_o = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rename_entry;
    vlTOPp->rob_rename_valid_o = (1U & ((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						 >> 0x2bU)) 
					& (~ (IData)(vlTOPp->rob_mispredict_o))));
    vlTOPp->sb_issue_ready_o = ((0U != (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_num)) 
				& (~ (IData)(vlTOPp->rob_mispredict_o)));
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__prev_spec_branch_n 
	= (1U & ((1U & ((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
				 >> 0x2bU)) & (~ (IData)(vlTOPp->rob_mispredict_o))))
		  ? (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
			     >> 0x2aU)) : (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__prev_spec_branch)));
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__predicted_pc_n 
	= (0xffffU & ((1U & ((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
				      >> 0x2bU)) & 
			     (~ (IData)(vlTOPp->rob_mispredict_o))))
		       ? ((1U & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					 >> 0x29U)))
			   ? ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__condition_taken)
			       ? (0xffffU & (IData)(
						    (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						     >> 0x15U)))
			       : ((IData)(1U) + (0xffffU 
						 & (IData)(
							   (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							    >> 0x2cU)))))
			   : (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
				      >> 0x15U))) : (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__predicted_pc)));
    vlTOPp->commit_stage__DOT__states__DOT__flag_n 
	= (0xfU & ((((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
			      >> 0x2bU)) & (~ (IData)(vlTOPp->rob_mispredict_o))) 
		    & (0U != (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					      >> 0x11U)))))
		    ? (((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
				 >> 0x11U)) & (IData)(
						      (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						       >> 0xdU))) 
		       | ((~ (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
				      >> 0x11U))) & (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag)))
		    : (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag)));
    vlTOPp->commit_stage__DOT__sb_mem_v = ((((IData)(
						     (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						      >> 0x2bU)) 
					     & (IData)(
						       (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							>> 0xcU))) 
					    & (~ (IData)(vlTOPp->rob_mispredict_o))) 
					   & ((0x20fU 
					       >= (0x3ffU 
						   & ((IData)(0x20U) 
						      + 
						      ((IData)(0x21U) 
						       * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))))) 
					      & (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
						 (0x1fU 
						  & (((IData)(0x20U) 
						      + 
						      ((IData)(0x21U) 
						       * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))) 
						     >> 5U))] 
						 >> 
						 (0x1fU 
						  & ((IData)(0x20U) 
						     + 
						     ((IData)(0x21U) 
						      * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))))));
    vlTOPp->rob_rename_ready_o = ((0U != (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num)) 
				  & (~ (IData)(vlTOPp->rob_mispredict_o)));
    vlTOPp->sb_rename_clear_st_v_o = vlTOPp->commit_stage__DOT__sb_mem_v;
}

VL_INLINE_OPT void Vbsg_mem_1r1w_sync::_combo__TOP__2(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_mem_1r1w_sync::_combo__TOP__2\n"); );
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[6U] 
	= vlTOPp->cdb_i[6U];
    vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[5U] 
	= vlTOPp->cdb_i[5U];
    vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[4U] 
	= vlTOPp->cdb_i[4U];
    vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[3U] 
	= vlTOPp->cdb_i[3U];
    vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[2U] 
	= vlTOPp->cdb_i[2U];
    vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[1U] 
	= vlTOPp->cdb_i[1U];
    vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[0U] 
	= vlTOPp->cdb_i[0U];
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//arch_state.sv:42
    vlTOPp->rs1_valid_o = (1U & (vlTOPp->commit_stage__DOT__states__DOT__valid[
				 ((IData)(vlTOPp->issue_read_rs1_i) 
				  >> 5U)] >> (0x1fU 
					      & (IData)(vlTOPp->issue_read_rs1_i))));
    vlTOPp->rs1_data_o = (0xffffU & (((0U == (0x1fU 
					      & ((IData)(vlTOPp->issue_read_rs1_i) 
						 << 4U)))
				       ? 0U : (vlTOPp->commit_stage__DOT__states__DOT__reg_q[
					       ((IData)(1U) 
						+ (0x3fU 
						   & ((IData)(vlTOPp->issue_read_rs1_i) 
						      >> 1U)))] 
					       << ((IData)(0x20U) 
						   - 
						   (0x1fU 
						    & ((IData)(vlTOPp->issue_read_rs1_i) 
						       << 4U))))) 
				     | (vlTOPp->commit_stage__DOT__states__DOT__reg_q[
					(0x3fU & ((IData)(vlTOPp->issue_read_rs1_i) 
						  >> 1U))] 
					>> (0x1fU & 
					    ((IData)(vlTOPp->issue_read_rs1_i) 
					     << 4U)))));
    vlTOPp->rs2_valid_o = (1U & (vlTOPp->commit_stage__DOT__states__DOT__valid[
				 ((IData)(vlTOPp->issue_read_rs2_i) 
				  >> 5U)] >> (0x1fU 
					      & (IData)(vlTOPp->issue_read_rs2_i))));
    vlTOPp->rs2_data_o = (0xffffU & (((0U == (0x1fU 
					      & ((IData)(vlTOPp->issue_read_rs2_i) 
						 << 4U)))
				       ? 0U : (vlTOPp->commit_stage__DOT__states__DOT__reg_q[
					       ((IData)(1U) 
						+ (0x3fU 
						   & ((IData)(vlTOPp->issue_read_rs2_i) 
						      >> 1U)))] 
					       << ((IData)(0x20U) 
						   - 
						   (0x1fU 
						    & ((IData)(vlTOPp->issue_read_rs2_i) 
						       << 4U))))) 
				     | (vlTOPp->commit_stage__DOT__states__DOT__reg_q[
					(0x3fU & ((IData)(vlTOPp->issue_read_rs2_i) 
						  >> 1U))] 
					>> (0x1fU & 
					    ((IData)(vlTOPp->issue_read_rs2_i) 
					     << 4U)))));
    if (((IData)(vlTOPp->exe_w_v_i) & ((0x7fU & (IData)(vlTOPp->exe_addr_i)) 
				       == (IData)(vlTOPp->issue_read_rs1_i)))) {
	vlTOPp->rs1_valid_o = 1U;
	vlTOPp->rs1_data_o = (0xffffU & vlTOPp->exe_data_i[0U]);
    }
    if (((IData)(vlTOPp->exe_w_v_i) & ((0x7fU & (IData)(vlTOPp->exe_addr_i)) 
				       == (IData)(vlTOPp->issue_read_rs2_i)))) {
	vlTOPp->rs2_valid_o = 1U;
	vlTOPp->rs2_data_o = (0xffffU & vlTOPp->exe_data_i[0U]);
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 1U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 7U))) 
					       == (IData)(vlTOPp->issue_read_rs1_i)))) {
	vlTOPp->rs1_valid_o = 1U;
	vlTOPp->rs1_data_o = (0xffffU & ((vlTOPp->exe_data_i[1U] 
					  << 0x10U) 
					 | (vlTOPp->exe_data_i[0U] 
					    >> 0x10U)));
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 1U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 7U))) 
					       == (IData)(vlTOPp->issue_read_rs2_i)))) {
	vlTOPp->rs2_valid_o = 1U;
	vlTOPp->rs2_data_o = (0xffffU & ((vlTOPp->exe_data_i[1U] 
					  << 0x10U) 
					 | (vlTOPp->exe_data_i[0U] 
					    >> 0x10U)));
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 2U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0xeU))) 
					       == (IData)(vlTOPp->issue_read_rs1_i)))) {
	vlTOPp->rs1_valid_o = 1U;
	vlTOPp->rs1_data_o = (0xffffU & vlTOPp->exe_data_i[1U]);
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 2U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0xeU))) 
					       == (IData)(vlTOPp->issue_read_rs2_i)))) {
	vlTOPp->rs2_valid_o = 1U;
	vlTOPp->rs2_data_o = (0xffffU & vlTOPp->exe_data_i[1U]);
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 3U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x15U))) 
					       == (IData)(vlTOPp->issue_read_rs1_i)))) {
	vlTOPp->rs1_valid_o = 1U;
	vlTOPp->rs1_data_o = (0xffffU & ((vlTOPp->exe_data_i[2U] 
					  << 0x10U) 
					 | (vlTOPp->exe_data_i[1U] 
					    >> 0x10U)));
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 3U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x15U))) 
					       == (IData)(vlTOPp->issue_read_rs2_i)))) {
	vlTOPp->rs2_valid_o = 1U;
	vlTOPp->rs2_data_o = (0xffffU & ((vlTOPp->exe_data_i[2U] 
					  << 0x10U) 
					 | (vlTOPp->exe_data_i[1U] 
					    >> 0x10U)));
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 4U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x1cU))) 
					       == (IData)(vlTOPp->issue_read_rs1_i)))) {
	vlTOPp->rs1_valid_o = 1U;
	vlTOPp->rs1_data_o = (0xffffU & vlTOPp->exe_data_i[2U]);
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 4U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x1cU))) 
					       == (IData)(vlTOPp->issue_read_rs2_i)))) {
	vlTOPp->rs2_valid_o = 1U;
	vlTOPp->rs2_data_o = (0xffffU & vlTOPp->exe_data_i[2U]);
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 5U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x23U))) 
					       == (IData)(vlTOPp->issue_read_rs1_i)))) {
	vlTOPp->rs1_valid_o = 1U;
	vlTOPp->rs1_data_o = (0xffffU & ((vlTOPp->exe_data_i[3U] 
					  << 0x10U) 
					 | (vlTOPp->exe_data_i[2U] 
					    >> 0x10U)));
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 5U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x23U))) 
					       == (IData)(vlTOPp->issue_read_rs2_i)))) {
	vlTOPp->rs2_valid_o = 1U;
	vlTOPp->rs2_data_o = (0xffffU & ((vlTOPp->exe_data_i[3U] 
					  << 0x10U) 
					 | (vlTOPp->exe_data_i[2U] 
					    >> 0x10U)));
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 6U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x2aU))) 
					       == (IData)(vlTOPp->issue_read_rs1_i)))) {
	vlTOPp->rs1_valid_o = 1U;
	vlTOPp->rs1_data_o = (0xffffU & vlTOPp->exe_data_i[3U]);
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 6U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x2aU))) 
					       == (IData)(vlTOPp->issue_read_rs2_i)))) {
	vlTOPp->rs2_valid_o = 1U;
	vlTOPp->rs2_data_o = (0xffffU & vlTOPp->exe_data_i[3U]);
    }
    vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num 
	= (0xfU & ((IData)(vlTOPp->exe_ld_bypass_sb_num_i) 
		   - (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//store_buffer.sv:135
    vlTOPp->commit_stage__DOT__sb__DOT__match_vector = 0U;
    if ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[1U] 
	 & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[1U] 
			 << 0x10U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0U] 
				      >> 0x10U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (1U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[2U] 
	  >> 1U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[2U] 
				 << 0xfU) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[1U] 
					     >> 0x11U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (2U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[3U] 
	  >> 2U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[3U] 
				 << 0xeU) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[2U] 
					     >> 0x12U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (4U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[4U] 
	  >> 3U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[4U] 
				 << 0xdU) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[3U] 
					     >> 0x13U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (8U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[5U] 
	  >> 4U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[5U] 
				 << 0xcU) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[4U] 
					     >> 0x14U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x10U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[6U] 
	  >> 5U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[6U] 
				 << 0xbU) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[5U] 
					     >> 0x15U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x20U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[7U] 
	  >> 6U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[7U] 
				 << 0xaU) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[6U] 
					     >> 0x16U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x40U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[8U] 
	  >> 7U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[8U] 
				 << 9U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[7U] 
					   >> 0x17U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x80U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[9U] 
	  >> 8U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[9U] 
				 << 8U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[8U] 
					   >> 0x18U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x100U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xaU] 
	  >> 9U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xaU] 
				 << 7U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[9U] 
					   >> 0x19U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x200U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xbU] 
	  >> 0xaU) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xbU] 
				   << 6U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xaU] 
					     >> 0x1aU))) 
		      == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x400U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xcU] 
	  >> 0xbU) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xcU] 
				   << 5U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xbU] 
					     >> 0x1bU))) 
		      == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x800U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xdU] 
	  >> 0xcU) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xdU] 
				   << 4U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xcU] 
					     >> 0x1cU))) 
		      == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x1000U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xeU] 
	  >> 0xdU) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xeU] 
				   << 3U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xdU] 
					     >> 0x1dU))) 
		      == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x2000U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xfU] 
	  >> 0xeU) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xfU] 
				   << 2U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xeU] 
					     >> 0x1eU))) 
		      == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x4000U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0x10U] 
	  >> 0xfU) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0x10U] 
				   << 1U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xfU] 
					     >> 0x1fU))) 
		      == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x8000U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//arch_state.sv:67
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[1U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[1U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[2U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[2U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[3U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[3U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[4U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[4U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[5U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[5U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[6U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[6U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[7U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[7U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[8U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[8U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[9U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[9U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xaU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xaU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xbU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xbU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xcU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xcU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xdU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xdU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xeU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xeU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xfU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xfU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x10U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x10U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x11U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x11U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x12U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x12U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x13U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x13U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x14U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x14U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x15U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x15U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x16U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x16U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x17U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x17U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x18U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x18U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x19U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x19U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1aU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1aU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1bU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1bU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1cU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1cU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1dU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1dU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1eU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1eU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1fU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1fU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x20U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x20U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x21U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x21U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x22U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x22U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x23U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x23U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x24U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x24U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x25U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x25U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x26U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x26U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x27U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x27U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x28U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x28U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x29U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x29U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2aU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2aU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2bU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2bU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2cU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2cU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2dU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2dU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2eU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2eU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2fU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2fU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x30U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x30U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x31U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x31U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x32U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x32U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x33U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x33U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x34U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x34U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x35U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x35U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x36U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x36U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x37U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x37U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x38U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x38U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x39U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x39U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3aU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3aU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3bU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3bU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3cU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3cU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3dU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3dU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3eU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3eU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3fU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3fU];
    vlTOPp->commit_stage__DOT__states__DOT__valid_n[0U] 
	= vlTOPp->commit_stage__DOT__states__DOT__valid[0U];
    vlTOPp->commit_stage__DOT__states__DOT__valid_n[1U] 
	= vlTOPp->commit_stage__DOT__states__DOT__valid[1U];
    vlTOPp->commit_stage__DOT__states__DOT__valid_n[2U] 
	= vlTOPp->commit_stage__DOT__states__DOT__valid[2U];
    vlTOPp->commit_stage__DOT__states__DOT__valid_n[3U] 
	= vlTOPp->commit_stage__DOT__states__DOT__valid[3U];
    if ((1U & (IData)(vlTOPp->exe_w_v_i))) {
	VL_ASSIGNSEL_WIII(16,(0x7f0U & ((IData)(vlTOPp->exe_addr_i) 
					<< 4U)), vlTOPp->commit_stage__DOT__states__DOT__reg_n, 
			  (0xffffU & vlTOPp->exe_data_i[0U]));
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(vlTOPp->exe_addr_i) 
							    >> 5U))] 
	    = (vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)(vlTOPp->exe_addr_i) >> 5U))] 
	       | ((IData)(1U) << (0x1fU & (IData)(vlTOPp->exe_addr_i))));
    }
    if ((2U & (IData)(vlTOPp->exe_w_v_i))) {
	VL_ASSIGNSEL_WIII(16,(0x7f0U & ((IData)((vlTOPp->exe_addr_i 
						 >> 7U)) 
					<< 4U)), vlTOPp->commit_stage__DOT__states__DOT__reg_n, 
			  (0xffffU & ((vlTOPp->exe_data_i[1U] 
				       << 0x10U) | 
				      (vlTOPp->exe_data_i[0U] 
				       >> 0x10U))));
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(
								    (vlTOPp->exe_addr_i 
								     >> 7U)) 
							    >> 5U))] 
	    = (vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)((vlTOPp->exe_addr_i >> 7U)) 
		      >> 5U))] | ((IData)(1U) << (0x1fU 
						  & (IData)(
							    (vlTOPp->exe_addr_i 
							     >> 7U)))));
    }
    if ((4U & (IData)(vlTOPp->exe_w_v_i))) {
	VL_ASSIGNSEL_WIII(16,(0x7f0U & ((IData)((vlTOPp->exe_addr_i 
						 >> 0xeU)) 
					<< 4U)), vlTOPp->commit_stage__DOT__states__DOT__reg_n, 
			  (0xffffU & vlTOPp->exe_data_i[1U]));
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(
								    (vlTOPp->exe_addr_i 
								     >> 0xeU)) 
							    >> 5U))] 
	    = (vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)((vlTOPp->exe_addr_i >> 0xeU)) 
		      >> 5U))] | ((IData)(1U) << (0x1fU 
						  & (IData)(
							    (vlTOPp->exe_addr_i 
							     >> 0xeU)))));
    }
    if ((8U & (IData)(vlTOPp->exe_w_v_i))) {
	VL_ASSIGNSEL_WIII(16,(0x7f0U & ((IData)((vlTOPp->exe_addr_i 
						 >> 0x15U)) 
					<< 4U)), vlTOPp->commit_stage__DOT__states__DOT__reg_n, 
			  (0xffffU & ((vlTOPp->exe_data_i[2U] 
				       << 0x10U) | 
				      (vlTOPp->exe_data_i[1U] 
				       >> 0x10U))));
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(
								    (vlTOPp->exe_addr_i 
								     >> 0x15U)) 
							    >> 5U))] 
	    = (vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)((vlTOPp->exe_addr_i >> 0x15U)) 
		      >> 5U))] | ((IData)(1U) << (0x1fU 
						  & (IData)(
							    (vlTOPp->exe_addr_i 
							     >> 0x15U)))));
    }
    if ((0x10U & (IData)(vlTOPp->exe_w_v_i))) {
	VL_ASSIGNSEL_WIII(16,(0x7f0U & ((IData)((vlTOPp->exe_addr_i 
						 >> 0x1cU)) 
					<< 4U)), vlTOPp->commit_stage__DOT__states__DOT__reg_n, 
			  (0xffffU & vlTOPp->exe_data_i[2U]));
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(
								    (vlTOPp->exe_addr_i 
								     >> 0x1cU)) 
							    >> 5U))] 
	    = (vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)((vlTOPp->exe_addr_i >> 0x1cU)) 
		      >> 5U))] | ((IData)(1U) << (0x1fU 
						  & (IData)(
							    (vlTOPp->exe_addr_i 
							     >> 0x1cU)))));
    }
    if ((0x20U & (IData)(vlTOPp->exe_w_v_i))) {
	VL_ASSIGNSEL_WIII(16,(0x7f0U & ((IData)((vlTOPp->exe_addr_i 
						 >> 0x23U)) 
					<< 4U)), vlTOPp->commit_stage__DOT__states__DOT__reg_n, 
			  (0xffffU & ((vlTOPp->exe_data_i[3U] 
				       << 0x10U) | 
				      (vlTOPp->exe_data_i[2U] 
				       >> 0x10U))));
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(
								    (vlTOPp->exe_addr_i 
								     >> 0x23U)) 
							    >> 5U))] 
	    = (vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)((vlTOPp->exe_addr_i >> 0x23U)) 
		      >> 5U))] | ((IData)(1U) << (0x1fU 
						  & (IData)(
							    (vlTOPp->exe_addr_i 
							     >> 0x23U)))));
    }
    if ((0x40U & (IData)(vlTOPp->exe_w_v_i))) {
	VL_ASSIGNSEL_WIII(16,(0x7f0U & ((IData)((vlTOPp->exe_addr_i 
						 >> 0x2aU)) 
					<< 4U)), vlTOPp->commit_stage__DOT__states__DOT__reg_n, 
			  (0xffffU & vlTOPp->exe_data_i[3U]));
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(
								    (vlTOPp->exe_addr_i 
								     >> 0x2aU)) 
							    >> 5U))] 
	    = (vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)((vlTOPp->exe_addr_i >> 0x2aU)) 
		      >> 5U))] | ((IData)(1U) << (0x1fU 
						  & (IData)(
							    (vlTOPp->exe_addr_i 
							     >> 0x2aU)))));
    }
    if ((1U & ((((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
			  >> 0x2bU)) & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						>> 0xbU))) 
		& (~ (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
			      >> 0xcU)))) & (~ (IData)(vlTOPp->rob_mispredict_o))))) {
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(
								    (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
								     >> 4U)) 
							    >> 5U))] 
	    = ((~ ((IData)(1U) << (0x1fU & (IData)(
						   (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						    >> 4U))))) 
	       & vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
			       >> 4U)) >> 5U))]);
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//store_buffer.sv:87
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[1U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[1U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[2U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[2U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[3U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[3U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[4U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[4U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[5U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[5U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[6U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[6U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[7U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[7U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[8U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[8U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[9U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[9U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xaU] 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xaU];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xbU] 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xbU];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xcU] 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xcU];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xdU] 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xdU];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xeU] 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xeU];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xfU] 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xfU];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0x10U] 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0x10U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt_n 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt;
    vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt_n 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt;
    vlTOPp->commit_stage__DOT__sb__DOT__sb_num_n = vlTOPp->commit_stage__DOT__sb__DOT__sb_num;
    if (vlTOPp->issue_sb_v_i) {
	vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound1 = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt_n 
	    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt_n)));
	vlTOPp->commit_stage__DOT__sb__DOT__sb_num_n 
	    = (0x1fU & ((IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_num_n) 
			- (IData)(1U)));
	if ((0x20fU >= (0x3ffU & ((IData)(0x20U) + 
				  ((IData)(0x21U) * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt)))))) {
	    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[(0x1fU 
						      & (((IData)(0x20U) 
							  + 
							  ((IData)(0x21U) 
							   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt))) 
							 >> 5U))] 
		= (((~ ((IData)(1U) << (0x1fU & ((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt)))))) 
		    & vlTOPp->commit_stage__DOT__sb__DOT__sb_n[
		    (0x1fU & (((IData)(0x20U) + ((IData)(0x21U) 
						 * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt))) 
			      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound1) 
					   << (0x1fU 
					       & ((IData)(0x20U) 
						  + 
						  ((IData)(0x21U) 
						   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt))))));
	}
    }
    if (vlTOPp->exe_sb_v_i) {
	vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound2 = 1U;
	if ((0x20fU >= (0x3ffU & ((IData)(0x20U) + 
				  ((IData)(0x21U) * 
				   (0xfU & (IData)(
						   (vlTOPp->exe_sb_i 
						    >> 0x20U)))))))) {
	    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[(0x1fU 
						      & (((IData)(0x20U) 
							  + 
							  ((IData)(0x21U) 
							   * 
							   (0xfU 
							    & (IData)(
								      (vlTOPp->exe_sb_i 
								       >> 0x20U))))) 
							 >> 5U))] 
		= (((~ ((IData)(1U) << (0x1fU & ((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * 
						  (0xfU 
						   & (IData)(
							     (vlTOPp->exe_sb_i 
							      >> 0x20U)))))))) 
		    & vlTOPp->commit_stage__DOT__sb__DOT__sb_n[
		    (0x1fU & (((IData)(0x20U) + ((IData)(0x21U) 
						 * 
						 (0xfU 
						  & (IData)(
							    (vlTOPp->exe_sb_i 
							     >> 0x20U))))) 
			      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound2) 
					   << (0x1fU 
					       & ((IData)(0x20U) 
						  + 
						  ((IData)(0x21U) 
						   * 
						   (0xfU 
						    & (IData)(
							      (vlTOPp->exe_sb_i 
							       >> 0x20U))))))));
	}
	vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound3 
	    = (0xffffU & (IData)((vlTOPp->exe_sb_i 
				  >> 0x10U)));
	if ((0x20fU >= (0x3ffU & ((IData)(0x10U) + 
				  ((IData)(0x21U) * 
				   (0xfU & (IData)(
						   (vlTOPp->exe_sb_i 
						    >> 0x20U)))))))) {
	    VL_ASSIGNSEL_WIII(16,(0x3ffU & ((IData)(0x10U) 
					    + ((IData)(0x21U) 
					       * (0xfU 
						  & (IData)(
							    (vlTOPp->exe_sb_i 
							     >> 0x20U)))))), vlTOPp->commit_stage__DOT__sb__DOT__sb_n, vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound3);
	}
	vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound4 
	    = (0xffffU & (IData)(vlTOPp->exe_sb_i));
	if ((0x20fU >= (0x3ffU & ((IData)(0x21U) * 
				  (0xfU & (IData)((vlTOPp->exe_sb_i 
						   >> 0x20U))))))) {
	    VL_ASSIGNSEL_WIII(16,(0x3ffU & ((IData)(0x21U) 
					    * (0xfU 
					       & (IData)(
							 (vlTOPp->exe_sb_i 
							  >> 0x20U))))), vlTOPp->commit_stage__DOT__sb__DOT__sb_n, vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound4);
	}
    }
    if (vlTOPp->commit_stage__DOT__sb_mem_v) {
	vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound5 = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt_n 
	    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt_n)));
	vlTOPp->commit_stage__DOT__sb__DOT__sb_num_n 
	    = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_num_n)));
	if ((0x20fU >= (0x3ffU & ((IData)(0x20U) + 
				  ((IData)(0x21U) * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))))) {
	    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[(0x1fU 
						      & (((IData)(0x20U) 
							  + 
							  ((IData)(0x21U) 
							   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))) 
							 >> 5U))] 
		= (((~ ((IData)(1U) << (0x1fU & ((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))))) 
		    & vlTOPp->commit_stage__DOT__sb__DOT__sb_n[
		    (0x1fU & (((IData)(0x20U) + ((IData)(0x21U) 
						 * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))) 
			      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound5) 
					   << (0x1fU 
					       & ((IData)(0x20U) 
						  + 
						  ((IData)(0x21U) 
						   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))))));
	}
    }
    if (vlTOPp->rob_mispredict_o) {
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[1U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[2U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[3U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[4U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[5U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[6U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[7U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[8U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[9U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xaU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xbU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xcU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xdU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xeU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xfU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0x10U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt_n = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt_n = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_num_n = 0x10U;
    }
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb[6U] 
	= vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i
	[6U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb[5U] 
	= vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i
	[5U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb[4U] 
	= vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i
	[4U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb[3U] 
	= vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i
	[3U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb[2U] 
	= vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i
	[2U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb[1U] 
	= vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i
	[1U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb[0U] 
	= vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i
	[0U];
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//store_buffer.sv:146
    vlTOPp->commit_stage__DOT__sb__DOT__address_match = 0U;
    vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0U;
    if ((1U & ((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
		 << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	       >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 1U) & (1U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 1U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 2U) & (2U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 2U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 3U) & (3U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 3U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 4U) & (4U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 4U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 5U) & (5U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 5U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 6U) & (6U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 6U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 7U) & (7U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 7U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 8U) & (8U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 8U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 9U) & (9U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 9U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 0xaU) & (0xaU <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0xaU;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 0xbU) & (0xbU <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0xbU;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 0xcU) & (0xcU <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0xcU;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 0xdU) & (0xdU <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0xdU;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 0xeU) & (0xeU <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0xeU;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 0xfU) & (0xfU <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0xfU;
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//rob.sv:140
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[1U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[1U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[2U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[2U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[3U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[3U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[4U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[4U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[5U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[5U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[6U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[6U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[7U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[7U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[8U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[8U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[9U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[9U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xaU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xaU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xbU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xbU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xcU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xcU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xdU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xdU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xeU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xeU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xfU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xfU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x10U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x10U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x11U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x11U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x12U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x12U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x13U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x13U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x14U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x14U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x15U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x15U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x16U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x16U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x17U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x17U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x18U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x18U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x19U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x19U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1aU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1aU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1bU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1bU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1cU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1cU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1dU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1dU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1eU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1eU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1fU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1fU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x20U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x20U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x21U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x21U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x22U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x22U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x23U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x23U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x24U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x24U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x25U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x25U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x26U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x26U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x27U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x27U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x28U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x28U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x29U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x29U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2aU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2aU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2bU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2bU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2cU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2cU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2dU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2dU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2eU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2eU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2fU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2fU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x30U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x30U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x31U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x31U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x32U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x32U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x33U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x33U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x34U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x34U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x35U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x35U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x36U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x36U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x37U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x37U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x38U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x38U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x39U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x39U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3aU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3aU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3bU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3bU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3cU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3cU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3dU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3dU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3eU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3eU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3fU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3fU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x40U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x40U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x41U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x41U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x42U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x42U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x43U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x43U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x44U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x44U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x45U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x45U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x46U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x46U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x47U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x47U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x48U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x48U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x49U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x49U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4aU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4aU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4bU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4bU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4cU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4cU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4dU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4dU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4eU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4eU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4fU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4fU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x50U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x50U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x51U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x51U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x52U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x52U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x53U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x53U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x54U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x54U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x55U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x55U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x56U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x56U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x57U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x57U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x58U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x58U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x59U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x59U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5aU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5aU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5bU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5bU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5cU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5cU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5dU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5dU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5eU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5eU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5fU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5fU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x60U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x60U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x61U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x61U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x62U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x62U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x63U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x63U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x64U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x64U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x65U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x65U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x66U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x66U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x67U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x67U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x68U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x68U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x69U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x69U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6aU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6aU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6bU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6bU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6cU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6cU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6dU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6dU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6eU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6eU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6fU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6fU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x70U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x70U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x71U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x71U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x72U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x72U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x73U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x73U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x74U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x74U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x75U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x75U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x76U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x76U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x77U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x77U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x78U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x78U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x79U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x79U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt_n 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt;
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt_n 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt;
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num_n 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num;
    if (vlTOPp->rob_mispredict_o) {
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[1U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[2U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[3U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[4U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[5U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[6U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[7U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[8U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[9U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xaU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xbU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xcU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xdU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xeU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xfU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x10U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x11U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x12U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x13U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x14U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x15U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x16U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x17U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x18U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x19U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x20U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x21U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x22U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x23U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x24U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x25U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x26U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x27U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x28U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x29U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x30U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x31U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x32U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x33U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x34U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x35U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x36U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x37U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x38U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x39U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x40U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x41U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x42U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x43U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x44U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x45U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x46U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x47U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x48U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x49U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x50U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x51U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x52U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x53U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x54U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x55U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x56U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x57U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x58U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x59U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x60U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x61U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x62U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x63U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x64U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x65U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x66U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x67U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x68U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x69U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x70U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x71U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x72U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x73U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x74U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x75U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x76U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x77U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x78U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x79U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt_n = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt_n = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num_n = 0x40U;
    } else {
	if (((IData)(vlTOPp->rob_rename_ready_o) & (IData)(vlTOPp->rename_rob_valid_i))) {
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound1 
		= vlTOPp->rename_rob_entry_i;
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt_n 
		= (0x3fU & ((IData)(1U) + (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt_n)));
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num_n 
		= (0x7fU & ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num_n) 
			    - (IData)(1U)));
	    if ((0xf3fU >= (0xfffU & ((IData)(0x3dU) 
				      * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt))))) {
		VL_ASSIGNSEL_WIIQ(61,(0xfffU & ((IData)(0x3dU) 
						* (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound1);
	    }
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound2 = 1U;
	    if ((0xf3fU >= (0xfffU & ((IData)(0x3cU) 
				      + ((IData)(0x3dU) 
					 * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt)))))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
								       & (((IData)(0x3cU) 
									   + 
									   ((IData)(0x3dU) 
									    * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt))) 
									  >> 5U))] 
		    = (((~ ((IData)(1U) << (0x1fU & 
					    ((IData)(0x3cU) 
					     + ((IData)(0x3dU) 
						* (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt)))))) 
			& vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			(0x7fU & (((IData)(0x3cU) + 
				   ((IData)(0x3dU) 
				    * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt))) 
				  >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound2) 
					       << (0x1fU 
						   & ((IData)(0x3cU) 
						      + 
						      ((IData)(0x3dU) 
						       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt))))));
	    }
	}
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i = 0U;
	while ((0x40U > vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) {
	    if ((((~ ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3dU) 
					       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			 (0x7fU & (((IData)(0x2bU) 
				    + ((IData)(0x3dU) 
				       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				   >> 5U))] >> (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) 
		  & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [0U] >> 0x21U))) & ((0x3fU 
						  & (IData)(
							    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
							    [0U])) 
						 == 
						 (0x3fU 
						  & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3 = 1U;
		if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
									   & (((IData)(0x2bU) 
									       + 
									       ((IData)(0x3dU) 
										* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
									      >> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3dU) 
					  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3dU) 
							* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4 
		    = (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
				       [0U] >> 0x16U)));
		if ((0xf3fU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4);
		}
		if (((0xf3fU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3dU) 
					      * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			(0x7fU & (((IData)(0x2aU) + 
				   ((IData)(0x3dU) 
				    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				  >> 5U))] >> (0x1fU 
					       & ((IData)(0x2aU) 
						  + 
						  ((IData)(0x3dU) 
						   * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5 
			= (0xffffU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
					      [0U] 
					      >> 6U)));
		    if ((0xf3fU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3dU) 
						 * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3dU) 
						  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5);
		    }
		}
	    }
	    if ((((~ ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3dU) 
					       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			 (0x7fU & (((IData)(0x2bU) 
				    + ((IData)(0x3dU) 
				       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				   >> 5U))] >> (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) 
		  & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [1U] >> 0x21U))) & ((0x3fU 
						  & (IData)(
							    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
							    [1U])) 
						 == 
						 (0x3fU 
						  & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3 = 1U;
		if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
									   & (((IData)(0x2bU) 
									       + 
									       ((IData)(0x3dU) 
										* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
									      >> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3dU) 
					  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3dU) 
							* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4 
		    = (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
				       [1U] >> 0x16U)));
		if ((0xf3fU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4);
		}
		if (((0xf3fU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3dU) 
					      * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			(0x7fU & (((IData)(0x2aU) + 
				   ((IData)(0x3dU) 
				    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				  >> 5U))] >> (0x1fU 
					       & ((IData)(0x2aU) 
						  + 
						  ((IData)(0x3dU) 
						   * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5 
			= (0xffffU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
					      [1U] 
					      >> 6U)));
		    if ((0xf3fU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3dU) 
						 * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3dU) 
						  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5);
		    }
		}
	    }
	    if ((((~ ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3dU) 
					       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			 (0x7fU & (((IData)(0x2bU) 
				    + ((IData)(0x3dU) 
				       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				   >> 5U))] >> (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) 
		  & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [2U] >> 0x21U))) & ((0x3fU 
						  & (IData)(
							    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
							    [2U])) 
						 == 
						 (0x3fU 
						  & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3 = 1U;
		if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
									   & (((IData)(0x2bU) 
									       + 
									       ((IData)(0x3dU) 
										* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
									      >> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3dU) 
					  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3dU) 
							* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4 
		    = (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
				       [2U] >> 0x16U)));
		if ((0xf3fU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4);
		}
		if (((0xf3fU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3dU) 
					      * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			(0x7fU & (((IData)(0x2aU) + 
				   ((IData)(0x3dU) 
				    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				  >> 5U))] >> (0x1fU 
					       & ((IData)(0x2aU) 
						  + 
						  ((IData)(0x3dU) 
						   * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5 
			= (0xffffU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
					      [2U] 
					      >> 6U)));
		    if ((0xf3fU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3dU) 
						 * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3dU) 
						  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5);
		    }
		}
	    }
	    if ((((~ ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3dU) 
					       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			 (0x7fU & (((IData)(0x2bU) 
				    + ((IData)(0x3dU) 
				       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				   >> 5U))] >> (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) 
		  & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [3U] >> 0x21U))) & ((0x3fU 
						  & (IData)(
							    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
							    [3U])) 
						 == 
						 (0x3fU 
						  & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3 = 1U;
		if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
									   & (((IData)(0x2bU) 
									       + 
									       ((IData)(0x3dU) 
										* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
									      >> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3dU) 
					  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3dU) 
							* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4 
		    = (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
				       [3U] >> 0x16U)));
		if ((0xf3fU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4);
		}
		if (((0xf3fU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3dU) 
					      * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			(0x7fU & (((IData)(0x2aU) + 
				   ((IData)(0x3dU) 
				    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				  >> 5U))] >> (0x1fU 
					       & ((IData)(0x2aU) 
						  + 
						  ((IData)(0x3dU) 
						   * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5 
			= (0xffffU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
					      [3U] 
					      >> 6U)));
		    if ((0xf3fU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3dU) 
						 * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3dU) 
						  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5);
		    }
		}
	    }
	    if ((((~ ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3dU) 
					       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			 (0x7fU & (((IData)(0x2bU) 
				    + ((IData)(0x3dU) 
				       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				   >> 5U))] >> (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) 
		  & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [4U] >> 0x21U))) & ((0x3fU 
						  & (IData)(
							    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
							    [4U])) 
						 == 
						 (0x3fU 
						  & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3 = 1U;
		if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
									   & (((IData)(0x2bU) 
									       + 
									       ((IData)(0x3dU) 
										* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
									      >> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3dU) 
					  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3dU) 
							* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4 
		    = (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
				       [4U] >> 0x16U)));
		if ((0xf3fU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4);
		}
		if (((0xf3fU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3dU) 
					      * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			(0x7fU & (((IData)(0x2aU) + 
				   ((IData)(0x3dU) 
				    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				  >> 5U))] >> (0x1fU 
					       & ((IData)(0x2aU) 
						  + 
						  ((IData)(0x3dU) 
						   * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5 
			= (0xffffU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
					      [4U] 
					      >> 6U)));
		    if ((0xf3fU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3dU) 
						 * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3dU) 
						  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5);
		    }
		}
	    }
	    if ((((~ ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3dU) 
					       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			 (0x7fU & (((IData)(0x2bU) 
				    + ((IData)(0x3dU) 
				       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				   >> 5U))] >> (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) 
		  & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [5U] >> 0x21U))) & ((0x3fU 
						  & (IData)(
							    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
							    [5U])) 
						 == 
						 (0x3fU 
						  & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3 = 1U;
		if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
									   & (((IData)(0x2bU) 
									       + 
									       ((IData)(0x3dU) 
										* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
									      >> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3dU) 
					  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3dU) 
							* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4 
		    = (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
				       [5U] >> 0x16U)));
		if ((0xf3fU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4);
		}
		if (((0xf3fU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3dU) 
					      * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			(0x7fU & (((IData)(0x2aU) + 
				   ((IData)(0x3dU) 
				    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				  >> 5U))] >> (0x1fU 
					       & ((IData)(0x2aU) 
						  + 
						  ((IData)(0x3dU) 
						   * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5 
			= (0xffffU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
					      [5U] 
					      >> 6U)));
		    if ((0xf3fU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3dU) 
						 * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3dU) 
						  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5);
		    }
		}
	    }
	    if ((((~ ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3dU) 
					       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			 (0x7fU & (((IData)(0x2bU) 
				    + ((IData)(0x3dU) 
				       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				   >> 5U))] >> (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) 
		  & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [6U] >> 0x21U))) & ((0x3fU 
						  & (IData)(
							    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
							    [6U])) 
						 == 
						 (0x3fU 
						  & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3 = 1U;
		if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
									   & (((IData)(0x2bU) 
									       + 
									       ((IData)(0x3dU) 
										* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
									      >> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3dU) 
					  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3dU) 
							* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4 
		    = (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
				       [6U] >> 0x16U)));
		if ((0xf3fU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4);
		}
		if (((0xf3fU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3dU) 
					      * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			(0x7fU & (((IData)(0x2aU) + 
				   ((IData)(0x3dU) 
				    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				  >> 5U))] >> (0x1fU 
					       & ((IData)(0x2aU) 
						  + 
						  ((IData)(0x3dU) 
						   * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5 
			= (0xffffU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
					      [6U] 
					      >> 6U)));
		    if ((0xf3fU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3dU) 
						 * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3dU) 
						  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5);
		    }
		}
	    }
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i 
		= ((IData)(1U) + vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i);
	}
	if ((1U & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
			   >> 0x2bU)))) {
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound6 = 0U;
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt_n 
		= (0x3fU & ((IData)(1U) + (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt_n)));
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num_n 
		= (0x7fU & ((IData)(1U) + (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num_n)));
	    if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
				      + ((IData)(0x3dU) 
					 * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)))))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
								       & (((IData)(0x2bU) 
									   + 
									   ((IData)(0x3dU) 
									    * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))) 
									  >> 5U))] 
		    = (((~ ((IData)(1U) << (0x1fU & 
					    ((IData)(0x2bU) 
					     + ((IData)(0x3dU) 
						* (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)))))) 
			& vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			(0x7fU & (((IData)(0x2bU) + 
				   ((IData)(0x3dU) 
				    * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))) 
				  >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound6) 
					       << (0x1fU 
						   & ((IData)(0x2bU) 
						      + 
						      ((IData)(0x3dU) 
						       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))))));
	    }
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound7 = 0U;
	    if ((0xf3fU >= (0xfffU & ((IData)(0x3cU) 
				      + ((IData)(0x3dU) 
					 * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)))))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
								       & (((IData)(0x3cU) 
									   + 
									   ((IData)(0x3dU) 
									    * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))) 
									  >> 5U))] 
		    = (((~ ((IData)(1U) << (0x1fU & 
					    ((IData)(0x3cU) 
					     + ((IData)(0x3dU) 
						* (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)))))) 
			& vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			(0x7fU & (((IData)(0x3cU) + 
				   ((IData)(0x3dU) 
				    * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))) 
				  >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound7) 
					       << (0x1fU 
						   & ((IData)(0x3cU) 
						      + 
						      ((IData)(0x3dU) 
						       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))))));
	    }
	}
    }
    vlTOPp->sb_ld_bypass_valid_o = ((IData)(vlTOPp->commit_stage__DOT__sb__DOT__address_match) 
				    & (~ (IData)(vlTOPp->rob_mispredict_o)));
    vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num 
	= (0xfU & ((IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num) 
		   + (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)));
    vlTOPp->sb_ld_bypass_value_o = (0xffffU & ((0x20fU 
						>= 
						(0x3ffU 
						 & ((IData)(0x21U) 
						    * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num))))
					        ? (
						   ((0U 
						     == 
						     (0x1fU 
						      & ((IData)(0x21U) 
							 * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num))))
						     ? 0U
						     : 
						    (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
						     ((IData)(1U) 
						      + 
						      (0x1fU 
						       & (((IData)(0x21U) 
							   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num)) 
							  >> 5U)))] 
						     << 
						     ((IData)(0x20U) 
						      - 
						      (0x1fU 
						       & ((IData)(0x21U) 
							  * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num)))))) 
						   | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
						      (0x1fU 
						       & (((IData)(0x21U) 
							   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num)) 
							  >> 5U))] 
						      >> 
						      (0x1fU 
						       & ((IData)(0x21U) 
							  * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num)))))
					        : 0U));
}

void Vbsg_mem_1r1w_sync::_settle__TOP__3(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_mem_1r1w_sync::_settle__TOP__3\n"); );
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[6U] 
	= vlTOPp->cdb_i[6U];
    vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[5U] 
	= vlTOPp->cdb_i[5U];
    vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[4U] 
	= vlTOPp->cdb_i[4U];
    vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[3U] 
	= vlTOPp->cdb_i[3U];
    vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[2U] 
	= vlTOPp->cdb_i[2U];
    vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[1U] 
	= vlTOPp->cdb_i[1U];
    vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[0U] 
	= vlTOPp->cdb_i[0U];
    vlTOPp->rob_rename_entry_num_o = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt;
    vlTOPp->rob_fe_redirected_pc_o = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__predicted_pc;
    vlTOPp->exe_mem_data_o = vlTOPp->commit_stage__DOT__mem__DOT__synth__DOT__mem
	[vlTOPp->commit_stage__DOT__mem__DOT__synth__DOT__r_addr_r];
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//arch_state.sv:67
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//arch_state.sv:42
    vlTOPp->rs1_valid_o = (1U & (vlTOPp->commit_stage__DOT__states__DOT__valid[
				 ((IData)(vlTOPp->issue_read_rs1_i) 
				  >> 5U)] >> (0x1fU 
					      & (IData)(vlTOPp->issue_read_rs1_i))));
    vlTOPp->rs1_data_o = (0xffffU & (((0U == (0x1fU 
					      & ((IData)(vlTOPp->issue_read_rs1_i) 
						 << 4U)))
				       ? 0U : (vlTOPp->commit_stage__DOT__states__DOT__reg_q[
					       ((IData)(1U) 
						+ (0x3fU 
						   & ((IData)(vlTOPp->issue_read_rs1_i) 
						      >> 1U)))] 
					       << ((IData)(0x20U) 
						   - 
						   (0x1fU 
						    & ((IData)(vlTOPp->issue_read_rs1_i) 
						       << 4U))))) 
				     | (vlTOPp->commit_stage__DOT__states__DOT__reg_q[
					(0x3fU & ((IData)(vlTOPp->issue_read_rs1_i) 
						  >> 1U))] 
					>> (0x1fU & 
					    ((IData)(vlTOPp->issue_read_rs1_i) 
					     << 4U)))));
    vlTOPp->rs2_valid_o = (1U & (vlTOPp->commit_stage__DOT__states__DOT__valid[
				 ((IData)(vlTOPp->issue_read_rs2_i) 
				  >> 5U)] >> (0x1fU 
					      & (IData)(vlTOPp->issue_read_rs2_i))));
    vlTOPp->rs2_data_o = (0xffffU & (((0U == (0x1fU 
					      & ((IData)(vlTOPp->issue_read_rs2_i) 
						 << 4U)))
				       ? 0U : (vlTOPp->commit_stage__DOT__states__DOT__reg_q[
					       ((IData)(1U) 
						+ (0x3fU 
						   & ((IData)(vlTOPp->issue_read_rs2_i) 
						      >> 1U)))] 
					       << ((IData)(0x20U) 
						   - 
						   (0x1fU 
						    & ((IData)(vlTOPp->issue_read_rs2_i) 
						       << 4U))))) 
				     | (vlTOPp->commit_stage__DOT__states__DOT__reg_q[
					(0x3fU & ((IData)(vlTOPp->issue_read_rs2_i) 
						  >> 1U))] 
					>> (0x1fU & 
					    ((IData)(vlTOPp->issue_read_rs2_i) 
					     << 4U)))));
    if (((IData)(vlTOPp->exe_w_v_i) & ((0x7fU & (IData)(vlTOPp->exe_addr_i)) 
				       == (IData)(vlTOPp->issue_read_rs1_i)))) {
	vlTOPp->rs1_valid_o = 1U;
	vlTOPp->rs1_data_o = (0xffffU & vlTOPp->exe_data_i[0U]);
    }
    if (((IData)(vlTOPp->exe_w_v_i) & ((0x7fU & (IData)(vlTOPp->exe_addr_i)) 
				       == (IData)(vlTOPp->issue_read_rs2_i)))) {
	vlTOPp->rs2_valid_o = 1U;
	vlTOPp->rs2_data_o = (0xffffU & vlTOPp->exe_data_i[0U]);
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 1U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 7U))) 
					       == (IData)(vlTOPp->issue_read_rs1_i)))) {
	vlTOPp->rs1_valid_o = 1U;
	vlTOPp->rs1_data_o = (0xffffU & ((vlTOPp->exe_data_i[1U] 
					  << 0x10U) 
					 | (vlTOPp->exe_data_i[0U] 
					    >> 0x10U)));
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 1U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 7U))) 
					       == (IData)(vlTOPp->issue_read_rs2_i)))) {
	vlTOPp->rs2_valid_o = 1U;
	vlTOPp->rs2_data_o = (0xffffU & ((vlTOPp->exe_data_i[1U] 
					  << 0x10U) 
					 | (vlTOPp->exe_data_i[0U] 
					    >> 0x10U)));
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 2U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0xeU))) 
					       == (IData)(vlTOPp->issue_read_rs1_i)))) {
	vlTOPp->rs1_valid_o = 1U;
	vlTOPp->rs1_data_o = (0xffffU & vlTOPp->exe_data_i[1U]);
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 2U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0xeU))) 
					       == (IData)(vlTOPp->issue_read_rs2_i)))) {
	vlTOPp->rs2_valid_o = 1U;
	vlTOPp->rs2_data_o = (0xffffU & vlTOPp->exe_data_i[1U]);
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 3U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x15U))) 
					       == (IData)(vlTOPp->issue_read_rs1_i)))) {
	vlTOPp->rs1_valid_o = 1U;
	vlTOPp->rs1_data_o = (0xffffU & ((vlTOPp->exe_data_i[2U] 
					  << 0x10U) 
					 | (vlTOPp->exe_data_i[1U] 
					    >> 0x10U)));
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 3U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x15U))) 
					       == (IData)(vlTOPp->issue_read_rs2_i)))) {
	vlTOPp->rs2_valid_o = 1U;
	vlTOPp->rs2_data_o = (0xffffU & ((vlTOPp->exe_data_i[2U] 
					  << 0x10U) 
					 | (vlTOPp->exe_data_i[1U] 
					    >> 0x10U)));
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 4U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x1cU))) 
					       == (IData)(vlTOPp->issue_read_rs1_i)))) {
	vlTOPp->rs1_valid_o = 1U;
	vlTOPp->rs1_data_o = (0xffffU & vlTOPp->exe_data_i[2U]);
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 4U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x1cU))) 
					       == (IData)(vlTOPp->issue_read_rs2_i)))) {
	vlTOPp->rs2_valid_o = 1U;
	vlTOPp->rs2_data_o = (0xffffU & vlTOPp->exe_data_i[2U]);
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 5U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x23U))) 
					       == (IData)(vlTOPp->issue_read_rs1_i)))) {
	vlTOPp->rs1_valid_o = 1U;
	vlTOPp->rs1_data_o = (0xffffU & ((vlTOPp->exe_data_i[3U] 
					  << 0x10U) 
					 | (vlTOPp->exe_data_i[2U] 
					    >> 0x10U)));
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 5U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x23U))) 
					       == (IData)(vlTOPp->issue_read_rs2_i)))) {
	vlTOPp->rs2_valid_o = 1U;
	vlTOPp->rs2_data_o = (0xffffU & ((vlTOPp->exe_data_i[3U] 
					  << 0x10U) 
					 | (vlTOPp->exe_data_i[2U] 
					    >> 0x10U)));
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 6U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x2aU))) 
					       == (IData)(vlTOPp->issue_read_rs1_i)))) {
	vlTOPp->rs1_valid_o = 1U;
	vlTOPp->rs1_data_o = (0xffffU & vlTOPp->exe_data_i[3U]);
    }
    if ((((IData)(vlTOPp->exe_w_v_i) >> 6U) & ((0x7fU 
						& (IData)(
							  (vlTOPp->exe_addr_i 
							   >> 0x2aU))) 
					       == (IData)(vlTOPp->issue_read_rs2_i)))) {
	vlTOPp->rs2_valid_o = 1U;
	vlTOPp->rs2_data_o = (0xffffU & vlTOPp->exe_data_i[3U]);
    }
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
	= (VL_ULL(0x1fffffffffffffff) & ((0xf3fU >= 
					  (0xfffU & 
					   ((IData)(0x3dU) 
					    * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))))
					  ? (((0U == 
					       (0x1fU 
						& ((IData)(0x3dU) 
						   * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))))
					       ? VL_ULL(0)
					       : ((QData)((IData)(
								  vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
								  ((IData)(2U) 
								   + 
								   (0x7fU 
								    & (((IData)(0x3dU) 
									* (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)) 
								       >> 5U)))])) 
						  << 
						  ((IData)(0x40U) 
						   - 
						   (0x1fU 
						    & ((IData)(0x3dU) 
						       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)))))) 
					     | (((QData)((IData)(
								 vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
								 ((IData)(1U) 
								  + 
								  (0x7fU 
								   & (((IData)(0x3dU) 
								       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)) 
								      >> 5U)))])) 
						 << 
						 ((0U 
						   == 
						   (0x1fU 
						    & ((IData)(0x3dU) 
						       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))))
						   ? 0x20U
						   : 
						  ((IData)(0x20U) 
						   - 
						   (0x1fU 
						    & ((IData)(0x3dU) 
						       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)))))) 
						| ((QData)((IData)(
								   vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
								   (0x7fU 
								    & (((IData)(0x3dU) 
									* (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)) 
								       >> 5U))])) 
						   >> 
						   (0x1fU 
						    & ((IData)(0x3dU) 
						       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))))))
					  : VL_ULL(0)));
    vlTOPp->sb_issue_entry_num_o = vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt;
    vlTOPp->sb_commit_pt_o = vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt;
    vlTOPp->sb_rename_clear_st_num_o = vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt;
    vlTOPp->sb_wb_vector_o = ((0xfffeU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (1U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[1U]));
    vlTOPp->sb_wb_vector_o = ((0xfffdU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (2U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[2U]));
    vlTOPp->sb_wb_vector_o = ((0xfffbU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (4U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[3U]));
    vlTOPp->sb_wb_vector_o = ((0xfff7U & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (8U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[4U]));
    vlTOPp->sb_wb_vector_o = ((0xffefU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x10U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[5U]));
    vlTOPp->sb_wb_vector_o = ((0xffdfU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x20U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[6U]));
    vlTOPp->sb_wb_vector_o = ((0xffbfU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x40U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[7U]));
    vlTOPp->sb_wb_vector_o = ((0xff7fU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x80U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[8U]));
    vlTOPp->sb_wb_vector_o = ((0xfeffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x100U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[9U]));
    vlTOPp->sb_wb_vector_o = ((0xfdffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x200U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xaU]));
    vlTOPp->sb_wb_vector_o = ((0xfbffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x400U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xbU]));
    vlTOPp->sb_wb_vector_o = ((0xf7ffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x800U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xcU]));
    vlTOPp->sb_wb_vector_o = ((0xefffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x1000U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xdU]));
    vlTOPp->sb_wb_vector_o = ((0xdfffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x2000U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xeU]));
    vlTOPp->sb_wb_vector_o = ((0xbfffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x4000U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xfU]));
    vlTOPp->sb_wb_vector_o = ((0x7fffU & (IData)(vlTOPp->sb_wb_vector_o)) 
			      | (0x8000U & vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0x10U]));
    vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num 
	= (0xfU & ((IData)(vlTOPp->exe_ld_bypass_sb_num_i) 
		   - (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//store_buffer.sv:135
    vlTOPp->commit_stage__DOT__sb__DOT__match_vector = 0U;
    if ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[1U] 
	 & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[1U] 
			 << 0x10U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0U] 
				      >> 0x10U))) == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (1U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[2U] 
	  >> 1U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[2U] 
				 << 0xfU) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[1U] 
					     >> 0x11U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (2U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[3U] 
	  >> 2U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[3U] 
				 << 0xeU) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[2U] 
					     >> 0x12U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (4U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[4U] 
	  >> 3U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[4U] 
				 << 0xdU) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[3U] 
					     >> 0x13U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (8U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[5U] 
	  >> 4U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[5U] 
				 << 0xcU) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[4U] 
					     >> 0x14U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x10U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[6U] 
	  >> 5U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[6U] 
				 << 0xbU) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[5U] 
					     >> 0x15U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x20U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[7U] 
	  >> 6U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[7U] 
				 << 0xaU) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[6U] 
					     >> 0x16U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x40U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[8U] 
	  >> 7U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[8U] 
				 << 9U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[7U] 
					   >> 0x17U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x80U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[9U] 
	  >> 8U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[9U] 
				 << 8U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[8U] 
					   >> 0x18U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x100U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xaU] 
	  >> 9U) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xaU] 
				 << 7U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[9U] 
					   >> 0x19U))) 
		    == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x200U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xbU] 
	  >> 0xaU) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xbU] 
				   << 6U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xaU] 
					     >> 0x1aU))) 
		      == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x400U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xcU] 
	  >> 0xbU) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xcU] 
				   << 5U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xbU] 
					     >> 0x1bU))) 
		      == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x800U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xdU] 
	  >> 0xcU) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xdU] 
				   << 4U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xcU] 
					     >> 0x1cU))) 
		      == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x1000U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xeU] 
	  >> 0xdU) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xeU] 
				   << 3U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xdU] 
					     >> 0x1dU))) 
		      == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x2000U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xfU] 
	  >> 0xeU) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xfU] 
				   << 2U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xeU] 
					     >> 0x1eU))) 
		      == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x4000U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    if (((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0x10U] 
	  >> 0xfU) & ((0xffffU & ((vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0x10U] 
				   << 1U) | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xfU] 
					     >> 0x1fU))) 
		      == (IData)(vlTOPp->exe_ld_bypass_addr_i)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__match_vector 
	    = (0x8000U | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector));
    }
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb[6U] 
	= vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i
	[6U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb[5U] 
	= vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i
	[5U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb[4U] 
	= vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i
	[4U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb[3U] 
	= vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i
	[3U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb[2U] 
	= vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i
	[2U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb[1U] 
	= vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i
	[1U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb[0U] 
	= vlTOPp->commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i
	[0U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rename_entry 
	= ((0x800U & ((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
			       >> 0xbU)) << 0xbU)) 
	   | ((0x780U & ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr) 
			 << 7U)) | (0x7fU & (IData)(
						    (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						     >> 4U)))));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//rob.sv:118
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__condition_taken 
	= (1U & ((1U & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
				>> 0x28U))) ? ((1U 
						& (IData)(
							  (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							   >> 0x27U)))
					        ? (
						   (1U 
						    & (IData)(
							      (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							       >> 0x26U)))
						    ? 
						   (~ (IData)(
							      (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							       >> 0x25U)))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
								>> 0x25U)))
						     ? 
						    (((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
						      >> 1U) 
						     | ((1U 
							 & (~ 
							    ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
							     >> 2U))) 
							== 
							(1U 
							 & (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag))))
						     : 
						    ((~ 
						      ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
						       >> 1U)) 
						     & ((1U 
							 & ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
							    >> 2U)) 
							== 
							(1U 
							 & (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag))))))
					        : (
						   (1U 
						    & (IData)(
							      (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							       >> 0x26U)))
						    ? 
						   ((1U 
						     & (IData)(
							       (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
								>> 0x25U)))
						     ? 
						    ((1U 
						      & (~ 
							 ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
							  >> 2U))) 
						     == 
						     (1U 
						      & (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag)))
						     : 
						    ((1U 
						      & ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
							 >> 2U)) 
						     == 
						     (1U 
						      & (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag))))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
								>> 0x25U)))
						     ? 
						    ((~ 
						      ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
						       >> 3U)) 
						     | ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
							>> 1U))
						     : 
						    (((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
						      >> 3U) 
						     & (~ 
							((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
							 >> 1U))))))
		  : ((1U & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
				    >> 0x27U))) ? (
						   (1U 
						    & (IData)(
							      (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							       >> 0x26U)))
						    ? 
						   ((1U 
						     & (IData)(
							       (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
								>> 0x25U)))
						     ? 
						    (~ (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag))
						     : (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
								>> 0x25U)))
						     ? 
						    (~ 
						     ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
						      >> 2U))
						     : 
						    ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
						     >> 2U)))
		      : ((1U & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					>> 0x26U)))
			  ? ((1U & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					    >> 0x25U)))
			      ? (~ ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
				    >> 3U)) : ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
					       >> 3U))
			  : ((1U & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					    >> 0x25U)))
			      ? (~ ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
				    >> 1U)) : ((IData)(vlTOPp->commit_stage__DOT__states__DOT__flag) 
					       >> 1U))))));
    vlTOPp->rob_mispredict_o = (((((0xffffU & (IData)(
						      (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						       >> 0x2cU))) 
				   != (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__predicted_pc)) 
				  & (0x40U != (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num))) 
				 & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					    >> 0x3cU))) 
				& (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__prev_spec_branch));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//store_buffer.sv:146
    vlTOPp->commit_stage__DOT__sb__DOT__address_match = 0U;
    vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0U;
    if ((1U & ((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
		 << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	       >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 1U) & (1U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 1U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 2U) & (2U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 2U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 3U) & (3U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 3U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 4U) & (4U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 4U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 5U) & (5U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 5U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 6U) & (6U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 6U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 7U) & (7U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 7U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 8U) & (8U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 8U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 9U) & (9U <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 9U;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 0xaU) & (0xaU <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0xaU;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 0xbU) & (0xbU <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0xbU;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 0xcU) & (0xcU <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0xcU;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 0xdU) & (0xdU <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0xdU;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 0xeU) & (0xeU <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0xeU;
    }
    if (((((((IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector) 
	     << 0x10U) | (IData)(vlTOPp->commit_stage__DOT__sb__DOT__match_vector)) 
	   >> (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)) 
	  >> 0xfU) & (0xfU <= (IData)(vlTOPp->commit_stage__DOT__sb__DOT__trimed_sb_num)))) {
	vlTOPp->commit_stage__DOT__sb__DOT__address_match = 1U;
	vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num = 0xfU;
    }
    vlTOPp->rob_rename_entry_o = vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rename_entry;
    vlTOPp->rob_rename_valid_o = (1U & ((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						 >> 0x2bU)) 
					& (~ (IData)(vlTOPp->rob_mispredict_o))));
    vlTOPp->sb_issue_ready_o = ((0U != (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_num)) 
				& (~ (IData)(vlTOPp->rob_mispredict_o)));
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__prev_spec_branch_n 
	= (1U & ((1U & ((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
				 >> 0x2bU)) & (~ (IData)(vlTOPp->rob_mispredict_o))))
		  ? (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
			     >> 0x2aU)) : (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__prev_spec_branch)));
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__predicted_pc_n 
	= (0xffffU & ((1U & ((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
				      >> 0x2bU)) & 
			     (~ (IData)(vlTOPp->rob_mispredict_o))))
		       ? ((1U & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					 >> 0x29U)))
			   ? ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__condition_taken)
			       ? (0xffffU & (IData)(
						    (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						     >> 0x15U)))
			       : ((IData)(1U) + (0xffffU 
						 & (IData)(
							   (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							    >> 0x2cU)))))
			   : (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
				      >> 0x15U))) : (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__predicted_pc)));
    vlTOPp->commit_stage__DOT__states__DOT__flag_n 
	= (0xfU & ((((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
			      >> 0x2bU)) & (~ (IData)(vlTOPp->rob_mispredict_o))) 
		    & (0U != (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
					      >> 0x11U)))))
		    ? (((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
				 >> 0x11U)) & (IData)(
						      (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						       >> 0xdU))) 
		       | ((~ (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
				      >> 0x11U))) & (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag)))
		    : (IData)(vlTOPp->commit_stage__DOT__states__DOT__flag)));
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//arch_state.sv:67
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[1U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[1U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[2U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[2U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[3U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[3U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[4U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[4U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[5U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[5U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[6U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[6U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[7U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[7U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[8U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[8U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[9U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[9U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xaU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xaU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xbU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xbU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xcU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xcU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xdU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xdU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xeU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xeU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0xfU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0xfU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x10U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x10U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x11U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x11U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x12U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x12U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x13U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x13U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x14U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x14U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x15U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x15U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x16U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x16U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x17U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x17U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x18U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x18U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x19U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x19U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1aU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1aU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1bU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1bU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1cU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1cU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1dU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1dU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1eU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1eU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x1fU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x1fU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x20U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x20U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x21U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x21U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x22U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x22U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x23U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x23U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x24U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x24U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x25U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x25U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x26U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x26U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x27U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x27U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x28U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x28U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x29U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x29U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2aU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2aU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2bU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2bU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2cU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2cU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2dU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2dU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2eU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2eU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x2fU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x2fU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x30U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x30U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x31U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x31U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x32U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x32U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x33U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x33U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x34U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x34U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x35U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x35U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x36U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x36U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x37U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x37U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x38U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x38U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x39U] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x39U];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3aU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3aU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3bU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3bU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3cU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3cU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3dU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3dU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3eU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3eU];
    vlTOPp->commit_stage__DOT__states__DOT__reg_n[0x3fU] 
	= vlTOPp->commit_stage__DOT__states__DOT__reg_q[0x3fU];
    vlTOPp->commit_stage__DOT__states__DOT__valid_n[0U] 
	= vlTOPp->commit_stage__DOT__states__DOT__valid[0U];
    vlTOPp->commit_stage__DOT__states__DOT__valid_n[1U] 
	= vlTOPp->commit_stage__DOT__states__DOT__valid[1U];
    vlTOPp->commit_stage__DOT__states__DOT__valid_n[2U] 
	= vlTOPp->commit_stage__DOT__states__DOT__valid[2U];
    vlTOPp->commit_stage__DOT__states__DOT__valid_n[3U] 
	= vlTOPp->commit_stage__DOT__states__DOT__valid[3U];
    if ((1U & (IData)(vlTOPp->exe_w_v_i))) {
	VL_ASSIGNSEL_WIII(16,(0x7f0U & ((IData)(vlTOPp->exe_addr_i) 
					<< 4U)), vlTOPp->commit_stage__DOT__states__DOT__reg_n, 
			  (0xffffU & vlTOPp->exe_data_i[0U]));
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(vlTOPp->exe_addr_i) 
							    >> 5U))] 
	    = (vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)(vlTOPp->exe_addr_i) >> 5U))] 
	       | ((IData)(1U) << (0x1fU & (IData)(vlTOPp->exe_addr_i))));
    }
    if ((2U & (IData)(vlTOPp->exe_w_v_i))) {
	VL_ASSIGNSEL_WIII(16,(0x7f0U & ((IData)((vlTOPp->exe_addr_i 
						 >> 7U)) 
					<< 4U)), vlTOPp->commit_stage__DOT__states__DOT__reg_n, 
			  (0xffffU & ((vlTOPp->exe_data_i[1U] 
				       << 0x10U) | 
				      (vlTOPp->exe_data_i[0U] 
				       >> 0x10U))));
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(
								    (vlTOPp->exe_addr_i 
								     >> 7U)) 
							    >> 5U))] 
	    = (vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)((vlTOPp->exe_addr_i >> 7U)) 
		      >> 5U))] | ((IData)(1U) << (0x1fU 
						  & (IData)(
							    (vlTOPp->exe_addr_i 
							     >> 7U)))));
    }
    if ((4U & (IData)(vlTOPp->exe_w_v_i))) {
	VL_ASSIGNSEL_WIII(16,(0x7f0U & ((IData)((vlTOPp->exe_addr_i 
						 >> 0xeU)) 
					<< 4U)), vlTOPp->commit_stage__DOT__states__DOT__reg_n, 
			  (0xffffU & vlTOPp->exe_data_i[1U]));
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(
								    (vlTOPp->exe_addr_i 
								     >> 0xeU)) 
							    >> 5U))] 
	    = (vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)((vlTOPp->exe_addr_i >> 0xeU)) 
		      >> 5U))] | ((IData)(1U) << (0x1fU 
						  & (IData)(
							    (vlTOPp->exe_addr_i 
							     >> 0xeU)))));
    }
    if ((8U & (IData)(vlTOPp->exe_w_v_i))) {
	VL_ASSIGNSEL_WIII(16,(0x7f0U & ((IData)((vlTOPp->exe_addr_i 
						 >> 0x15U)) 
					<< 4U)), vlTOPp->commit_stage__DOT__states__DOT__reg_n, 
			  (0xffffU & ((vlTOPp->exe_data_i[2U] 
				       << 0x10U) | 
				      (vlTOPp->exe_data_i[1U] 
				       >> 0x10U))));
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(
								    (vlTOPp->exe_addr_i 
								     >> 0x15U)) 
							    >> 5U))] 
	    = (vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)((vlTOPp->exe_addr_i >> 0x15U)) 
		      >> 5U))] | ((IData)(1U) << (0x1fU 
						  & (IData)(
							    (vlTOPp->exe_addr_i 
							     >> 0x15U)))));
    }
    if ((0x10U & (IData)(vlTOPp->exe_w_v_i))) {
	VL_ASSIGNSEL_WIII(16,(0x7f0U & ((IData)((vlTOPp->exe_addr_i 
						 >> 0x1cU)) 
					<< 4U)), vlTOPp->commit_stage__DOT__states__DOT__reg_n, 
			  (0xffffU & vlTOPp->exe_data_i[2U]));
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(
								    (vlTOPp->exe_addr_i 
								     >> 0x1cU)) 
							    >> 5U))] 
	    = (vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)((vlTOPp->exe_addr_i >> 0x1cU)) 
		      >> 5U))] | ((IData)(1U) << (0x1fU 
						  & (IData)(
							    (vlTOPp->exe_addr_i 
							     >> 0x1cU)))));
    }
    if ((0x20U & (IData)(vlTOPp->exe_w_v_i))) {
	VL_ASSIGNSEL_WIII(16,(0x7f0U & ((IData)((vlTOPp->exe_addr_i 
						 >> 0x23U)) 
					<< 4U)), vlTOPp->commit_stage__DOT__states__DOT__reg_n, 
			  (0xffffU & ((vlTOPp->exe_data_i[3U] 
				       << 0x10U) | 
				      (vlTOPp->exe_data_i[2U] 
				       >> 0x10U))));
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(
								    (vlTOPp->exe_addr_i 
								     >> 0x23U)) 
							    >> 5U))] 
	    = (vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)((vlTOPp->exe_addr_i >> 0x23U)) 
		      >> 5U))] | ((IData)(1U) << (0x1fU 
						  & (IData)(
							    (vlTOPp->exe_addr_i 
							     >> 0x23U)))));
    }
    if ((0x40U & (IData)(vlTOPp->exe_w_v_i))) {
	VL_ASSIGNSEL_WIII(16,(0x7f0U & ((IData)((vlTOPp->exe_addr_i 
						 >> 0x2aU)) 
					<< 4U)), vlTOPp->commit_stage__DOT__states__DOT__reg_n, 
			  (0xffffU & vlTOPp->exe_data_i[3U]));
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(
								    (vlTOPp->exe_addr_i 
								     >> 0x2aU)) 
							    >> 5U))] 
	    = (vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)((vlTOPp->exe_addr_i >> 0x2aU)) 
		      >> 5U))] | ((IData)(1U) << (0x1fU 
						  & (IData)(
							    (vlTOPp->exe_addr_i 
							     >> 0x2aU)))));
    }
    if ((1U & ((((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
			  >> 0x2bU)) & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						>> 0xbU))) 
		& (~ (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
			      >> 0xcU)))) & (~ (IData)(vlTOPp->rob_mispredict_o))))) {
	vlTOPp->commit_stage__DOT__states__DOT__valid_n[(3U 
							 & ((IData)(
								    (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
								     >> 4U)) 
							    >> 5U))] 
	    = ((~ ((IData)(1U) << (0x1fU & (IData)(
						   (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						    >> 4U))))) 
	       & vlTOPp->commit_stage__DOT__states__DOT__valid_n[
	       (3U & ((IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
			       >> 4U)) >> 5U))]);
    }
    vlTOPp->commit_stage__DOT__sb_mem_v = ((((IData)(
						     (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
						      >> 0x2bU)) 
					     & (IData)(
						       (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
							>> 0xcU))) 
					    & (~ (IData)(vlTOPp->rob_mispredict_o))) 
					   & ((0x20fU 
					       >= (0x3ffU 
						   & ((IData)(0x20U) 
						      + 
						      ((IData)(0x21U) 
						       * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))))) 
					      & (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
						 (0x1fU 
						  & (((IData)(0x20U) 
						      + 
						      ((IData)(0x21U) 
						       * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))) 
						     >> 5U))] 
						 >> 
						 (0x1fU 
						  & ((IData)(0x20U) 
						     + 
						     ((IData)(0x21U) 
						      * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))))));
    vlTOPp->rob_rename_ready_o = ((0U != (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num)) 
				  & (~ (IData)(vlTOPp->rob_mispredict_o)));
    vlTOPp->sb_ld_bypass_valid_o = ((IData)(vlTOPp->commit_stage__DOT__sb__DOT__address_match) 
				    & (~ (IData)(vlTOPp->rob_mispredict_o)));
    vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num 
	= (0xfU & ((IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_trimed_sb_num) 
		   + (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)));
    vlTOPp->sb_rename_clear_st_v_o = vlTOPp->commit_stage__DOT__sb_mem_v;
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//store_buffer.sv:87
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[1U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[1U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[2U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[2U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[3U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[3U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[4U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[4U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[5U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[5U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[6U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[6U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[7U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[7U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[8U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[8U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[9U] = 
	vlTOPp->commit_stage__DOT__sb__DOT__sb_q[9U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xaU] 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xaU];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xbU] 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xbU];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xcU] 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xcU];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xdU] 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xdU];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xeU] 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xeU];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xfU] 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0xfU];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0x10U] 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_q[0x10U];
    vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt_n 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt;
    vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt_n 
	= vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt;
    vlTOPp->commit_stage__DOT__sb__DOT__sb_num_n = vlTOPp->commit_stage__DOT__sb__DOT__sb_num;
    if (vlTOPp->issue_sb_v_i) {
	vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound1 = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt_n 
	    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt_n)));
	vlTOPp->commit_stage__DOT__sb__DOT__sb_num_n 
	    = (0x1fU & ((IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_num_n) 
			- (IData)(1U)));
	if ((0x20fU >= (0x3ffU & ((IData)(0x20U) + 
				  ((IData)(0x21U) * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt)))))) {
	    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[(0x1fU 
						      & (((IData)(0x20U) 
							  + 
							  ((IData)(0x21U) 
							   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt))) 
							 >> 5U))] 
		= (((~ ((IData)(1U) << (0x1fU & ((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt)))))) 
		    & vlTOPp->commit_stage__DOT__sb__DOT__sb_n[
		    (0x1fU & (((IData)(0x20U) + ((IData)(0x21U) 
						 * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt))) 
			      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound1) 
					   << (0x1fU 
					       & ((IData)(0x20U) 
						  + 
						  ((IData)(0x21U) 
						   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt))))));
	}
    }
    if (vlTOPp->exe_sb_v_i) {
	vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound2 = 1U;
	if ((0x20fU >= (0x3ffU & ((IData)(0x20U) + 
				  ((IData)(0x21U) * 
				   (0xfU & (IData)(
						   (vlTOPp->exe_sb_i 
						    >> 0x20U)))))))) {
	    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[(0x1fU 
						      & (((IData)(0x20U) 
							  + 
							  ((IData)(0x21U) 
							   * 
							   (0xfU 
							    & (IData)(
								      (vlTOPp->exe_sb_i 
								       >> 0x20U))))) 
							 >> 5U))] 
		= (((~ ((IData)(1U) << (0x1fU & ((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * 
						  (0xfU 
						   & (IData)(
							     (vlTOPp->exe_sb_i 
							      >> 0x20U)))))))) 
		    & vlTOPp->commit_stage__DOT__sb__DOT__sb_n[
		    (0x1fU & (((IData)(0x20U) + ((IData)(0x21U) 
						 * 
						 (0xfU 
						  & (IData)(
							    (vlTOPp->exe_sb_i 
							     >> 0x20U))))) 
			      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound2) 
					   << (0x1fU 
					       & ((IData)(0x20U) 
						  + 
						  ((IData)(0x21U) 
						   * 
						   (0xfU 
						    & (IData)(
							      (vlTOPp->exe_sb_i 
							       >> 0x20U))))))));
	}
	vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound3 
	    = (0xffffU & (IData)((vlTOPp->exe_sb_i 
				  >> 0x10U)));
	if ((0x20fU >= (0x3ffU & ((IData)(0x10U) + 
				  ((IData)(0x21U) * 
				   (0xfU & (IData)(
						   (vlTOPp->exe_sb_i 
						    >> 0x20U)))))))) {
	    VL_ASSIGNSEL_WIII(16,(0x3ffU & ((IData)(0x10U) 
					    + ((IData)(0x21U) 
					       * (0xfU 
						  & (IData)(
							    (vlTOPp->exe_sb_i 
							     >> 0x20U)))))), vlTOPp->commit_stage__DOT__sb__DOT__sb_n, vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound3);
	}
	vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound4 
	    = (0xffffU & (IData)(vlTOPp->exe_sb_i));
	if ((0x20fU >= (0x3ffU & ((IData)(0x21U) * 
				  (0xfU & (IData)((vlTOPp->exe_sb_i 
						   >> 0x20U))))))) {
	    VL_ASSIGNSEL_WIII(16,(0x3ffU & ((IData)(0x21U) 
					    * (0xfU 
					       & (IData)(
							 (vlTOPp->exe_sb_i 
							  >> 0x20U))))), vlTOPp->commit_stage__DOT__sb__DOT__sb_n, vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound4);
	}
    }
    if (vlTOPp->commit_stage__DOT__sb_mem_v) {
	vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound5 = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt_n 
	    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt_n)));
	vlTOPp->commit_stage__DOT__sb__DOT__sb_num_n 
	    = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_num_n)));
	if ((0x20fU >= (0x3ffU & ((IData)(0x20U) + 
				  ((IData)(0x21U) * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))))) {
	    vlTOPp->commit_stage__DOT__sb__DOT__sb_n[(0x1fU 
						      & (((IData)(0x20U) 
							  + 
							  ((IData)(0x21U) 
							   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))) 
							 >> 5U))] 
		= (((~ ((IData)(1U) << (0x1fU & ((IData)(0x20U) 
						 + 
						 ((IData)(0x21U) 
						  * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt)))))) 
		    & vlTOPp->commit_stage__DOT__sb__DOT__sb_n[
		    (0x1fU & (((IData)(0x20U) + ((IData)(0x21U) 
						 * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))) 
			      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__sb__DOT____Vlvbound5) 
					   << (0x1fU 
					       & ((IData)(0x20U) 
						  + 
						  ((IData)(0x21U) 
						   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt))))));
	}
    }
    if (vlTOPp->rob_mispredict_o) {
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[1U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[2U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[3U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[4U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[5U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[6U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[7U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[8U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[9U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xaU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xbU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xcU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xdU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xeU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0xfU] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_n[0x10U] = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_alloc_pt_n = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_commit_pt_n = 0U;
	vlTOPp->commit_stage__DOT__sb__DOT__sb_num_n = 0x10U;
    }
    // ALWAYS at /Users/yongqinwang/Purple_Jade/commit_stage/test/commit_stage/../..//rob.sv:140
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[1U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[1U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[2U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[2U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[3U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[3U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[4U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[4U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[5U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[5U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[6U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[6U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[7U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[7U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[8U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[8U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[9U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[9U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xaU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xaU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xbU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xbU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xcU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xcU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xdU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xdU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xeU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xeU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xfU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0xfU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x10U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x10U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x11U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x11U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x12U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x12U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x13U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x13U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x14U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x14U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x15U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x15U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x16U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x16U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x17U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x17U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x18U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x18U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x19U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x19U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1aU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1aU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1bU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1bU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1cU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1cU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1dU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1dU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1eU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1eU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1fU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x1fU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x20U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x20U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x21U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x21U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x22U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x22U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x23U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x23U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x24U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x24U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x25U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x25U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x26U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x26U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x27U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x27U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x28U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x28U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x29U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x29U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2aU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2aU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2bU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2bU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2cU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2cU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2dU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2dU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2eU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2eU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2fU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x2fU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x30U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x30U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x31U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x31U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x32U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x32U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x33U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x33U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x34U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x34U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x35U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x35U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x36U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x36U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x37U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x37U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x38U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x38U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x39U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x39U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3aU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3aU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3bU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3bU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3cU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3cU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3dU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3dU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3eU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3eU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3fU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x3fU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x40U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x40U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x41U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x41U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x42U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x42U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x43U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x43U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x44U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x44U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x45U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x45U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x46U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x46U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x47U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x47U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x48U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x48U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x49U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x49U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4aU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4aU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4bU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4bU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4cU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4cU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4dU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4dU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4eU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4eU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4fU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x4fU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x50U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x50U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x51U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x51U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x52U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x52U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x53U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x53U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x54U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x54U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x55U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x55U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x56U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x56U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x57U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x57U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x58U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x58U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x59U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x59U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5aU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5aU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5bU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5bU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5cU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5cU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5dU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5dU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5eU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5eU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5fU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x5fU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x60U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x60U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x61U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x61U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x62U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x62U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x63U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x63U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x64U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x64U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x65U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x65U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x66U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x66U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x67U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x67U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x68U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x68U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x69U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x69U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6aU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6aU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6bU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6bU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6cU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6cU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6dU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6dU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6eU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6eU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6fU] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x6fU];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x70U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x70U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x71U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x71U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x72U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x72U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x73U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x73U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x74U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x74U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x75U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x75U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x76U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x76U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x77U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x77U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x78U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x78U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x79U] 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[0x79U];
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt_n 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt;
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt_n 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt;
    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num_n 
	= vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num;
    if (vlTOPp->rob_mispredict_o) {
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[1U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[2U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[3U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[4U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[5U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[6U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[7U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[8U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[9U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xaU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xbU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xcU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xdU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xeU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0xfU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x10U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x11U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x12U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x13U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x14U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x15U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x16U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x17U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x18U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x19U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x1fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x20U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x21U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x22U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x23U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x24U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x25U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x26U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x27U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x28U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x29U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x2fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x30U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x31U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x32U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x33U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x34U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x35U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x36U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x37U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x38U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x39U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x3fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x40U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x41U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x42U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x43U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x44U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x45U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x46U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x47U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x48U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x49U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x4fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x50U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x51U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x52U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x53U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x54U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x55U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x56U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x57U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x58U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x59U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x5fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x60U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x61U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x62U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x63U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x64U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x65U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x66U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x67U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x68U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x69U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6aU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6bU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6cU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6dU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6eU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x6fU] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x70U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x71U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x72U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x73U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x74U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x75U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x76U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x77U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x78U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[0x79U] = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt_n = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt_n = 0U;
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num_n = 0x40U;
    } else {
	if (((IData)(vlTOPp->rob_rename_ready_o) & (IData)(vlTOPp->rename_rob_valid_i))) {
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound1 
		= vlTOPp->rename_rob_entry_i;
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt_n 
		= (0x3fU & ((IData)(1U) + (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt_n)));
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num_n 
		= (0x7fU & ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num_n) 
			    - (IData)(1U)));
	    if ((0xf3fU >= (0xfffU & ((IData)(0x3dU) 
				      * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt))))) {
		VL_ASSIGNSEL_WIIQ(61,(0xfffU & ((IData)(0x3dU) 
						* (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound1);
	    }
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound2 = 1U;
	    if ((0xf3fU >= (0xfffU & ((IData)(0x3cU) 
				      + ((IData)(0x3dU) 
					 * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt)))))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
								       & (((IData)(0x3cU) 
									   + 
									   ((IData)(0x3dU) 
									    * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt))) 
									  >> 5U))] 
		    = (((~ ((IData)(1U) << (0x1fU & 
					    ((IData)(0x3cU) 
					     + ((IData)(0x3dU) 
						* (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt)))))) 
			& vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			(0x7fU & (((IData)(0x3cU) + 
				   ((IData)(0x3dU) 
				    * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt))) 
				  >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound2) 
					       << (0x1fU 
						   & ((IData)(0x3cU) 
						      + 
						      ((IData)(0x3dU) 
						       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt))))));
	    }
	}
	vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i = 0U;
	while ((0x40U > vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) {
	    if ((((~ ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3dU) 
					       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			 (0x7fU & (((IData)(0x2bU) 
				    + ((IData)(0x3dU) 
				       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				   >> 5U))] >> (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) 
		  & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [0U] >> 0x21U))) & ((0x3fU 
						  & (IData)(
							    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
							    [0U])) 
						 == 
						 (0x3fU 
						  & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3 = 1U;
		if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
									   & (((IData)(0x2bU) 
									       + 
									       ((IData)(0x3dU) 
										* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
									      >> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3dU) 
					  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3dU) 
							* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4 
		    = (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
				       [0U] >> 0x16U)));
		if ((0xf3fU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4);
		}
		if (((0xf3fU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3dU) 
					      * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			(0x7fU & (((IData)(0x2aU) + 
				   ((IData)(0x3dU) 
				    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				  >> 5U))] >> (0x1fU 
					       & ((IData)(0x2aU) 
						  + 
						  ((IData)(0x3dU) 
						   * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5 
			= (0xffffU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
					      [0U] 
					      >> 6U)));
		    if ((0xf3fU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3dU) 
						 * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3dU) 
						  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5);
		    }
		}
	    }
	    if ((((~ ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3dU) 
					       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			 (0x7fU & (((IData)(0x2bU) 
				    + ((IData)(0x3dU) 
				       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				   >> 5U))] >> (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) 
		  & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [1U] >> 0x21U))) & ((0x3fU 
						  & (IData)(
							    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
							    [1U])) 
						 == 
						 (0x3fU 
						  & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3 = 1U;
		if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
									   & (((IData)(0x2bU) 
									       + 
									       ((IData)(0x3dU) 
										* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
									      >> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3dU) 
					  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3dU) 
							* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4 
		    = (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
				       [1U] >> 0x16U)));
		if ((0xf3fU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4);
		}
		if (((0xf3fU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3dU) 
					      * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			(0x7fU & (((IData)(0x2aU) + 
				   ((IData)(0x3dU) 
				    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				  >> 5U))] >> (0x1fU 
					       & ((IData)(0x2aU) 
						  + 
						  ((IData)(0x3dU) 
						   * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5 
			= (0xffffU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
					      [1U] 
					      >> 6U)));
		    if ((0xf3fU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3dU) 
						 * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3dU) 
						  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5);
		    }
		}
	    }
	    if ((((~ ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3dU) 
					       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			 (0x7fU & (((IData)(0x2bU) 
				    + ((IData)(0x3dU) 
				       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				   >> 5U))] >> (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) 
		  & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [2U] >> 0x21U))) & ((0x3fU 
						  & (IData)(
							    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
							    [2U])) 
						 == 
						 (0x3fU 
						  & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3 = 1U;
		if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
									   & (((IData)(0x2bU) 
									       + 
									       ((IData)(0x3dU) 
										* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
									      >> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3dU) 
					  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3dU) 
							* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4 
		    = (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
				       [2U] >> 0x16U)));
		if ((0xf3fU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4);
		}
		if (((0xf3fU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3dU) 
					      * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			(0x7fU & (((IData)(0x2aU) + 
				   ((IData)(0x3dU) 
				    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				  >> 5U))] >> (0x1fU 
					       & ((IData)(0x2aU) 
						  + 
						  ((IData)(0x3dU) 
						   * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5 
			= (0xffffU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
					      [2U] 
					      >> 6U)));
		    if ((0xf3fU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3dU) 
						 * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3dU) 
						  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5);
		    }
		}
	    }
	    if ((((~ ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3dU) 
					       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			 (0x7fU & (((IData)(0x2bU) 
				    + ((IData)(0x3dU) 
				       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				   >> 5U))] >> (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) 
		  & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [3U] >> 0x21U))) & ((0x3fU 
						  & (IData)(
							    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
							    [3U])) 
						 == 
						 (0x3fU 
						  & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3 = 1U;
		if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
									   & (((IData)(0x2bU) 
									       + 
									       ((IData)(0x3dU) 
										* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
									      >> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3dU) 
					  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3dU) 
							* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4 
		    = (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
				       [3U] >> 0x16U)));
		if ((0xf3fU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4);
		}
		if (((0xf3fU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3dU) 
					      * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			(0x7fU & (((IData)(0x2aU) + 
				   ((IData)(0x3dU) 
				    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				  >> 5U))] >> (0x1fU 
					       & ((IData)(0x2aU) 
						  + 
						  ((IData)(0x3dU) 
						   * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5 
			= (0xffffU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
					      [3U] 
					      >> 6U)));
		    if ((0xf3fU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3dU) 
						 * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3dU) 
						  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5);
		    }
		}
	    }
	    if ((((~ ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3dU) 
					       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			 (0x7fU & (((IData)(0x2bU) 
				    + ((IData)(0x3dU) 
				       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				   >> 5U))] >> (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) 
		  & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [4U] >> 0x21U))) & ((0x3fU 
						  & (IData)(
							    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
							    [4U])) 
						 == 
						 (0x3fU 
						  & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3 = 1U;
		if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
									   & (((IData)(0x2bU) 
									       + 
									       ((IData)(0x3dU) 
										* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
									      >> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3dU) 
					  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3dU) 
							* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4 
		    = (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
				       [4U] >> 0x16U)));
		if ((0xf3fU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4);
		}
		if (((0xf3fU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3dU) 
					      * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			(0x7fU & (((IData)(0x2aU) + 
				   ((IData)(0x3dU) 
				    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				  >> 5U))] >> (0x1fU 
					       & ((IData)(0x2aU) 
						  + 
						  ((IData)(0x3dU) 
						   * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5 
			= (0xffffU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
					      [4U] 
					      >> 6U)));
		    if ((0xf3fU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3dU) 
						 * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3dU) 
						  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5);
		    }
		}
	    }
	    if ((((~ ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3dU) 
					       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			 (0x7fU & (((IData)(0x2bU) 
				    + ((IData)(0x3dU) 
				       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				   >> 5U))] >> (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) 
		  & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [5U] >> 0x21U))) & ((0x3fU 
						  & (IData)(
							    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
							    [5U])) 
						 == 
						 (0x3fU 
						  & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3 = 1U;
		if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
									   & (((IData)(0x2bU) 
									       + 
									       ((IData)(0x3dU) 
										* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
									      >> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3dU) 
					  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3dU) 
							* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4 
		    = (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
				       [5U] >> 0x16U)));
		if ((0xf3fU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4);
		}
		if (((0xf3fU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3dU) 
					      * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			(0x7fU & (((IData)(0x2aU) + 
				   ((IData)(0x3dU) 
				    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				  >> 5U))] >> (0x1fU 
					       & ((IData)(0x2aU) 
						  + 
						  ((IData)(0x3dU) 
						   * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5 
			= (0xffffU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
					      [5U] 
					      >> 6U)));
		    if ((0xf3fU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3dU) 
						 * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3dU) 
						  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5);
		    }
		}
	    }
	    if ((((~ ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					    + ((IData)(0x3dU) 
					       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		      & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			 (0x7fU & (((IData)(0x2bU) 
				    + ((IData)(0x3dU) 
				       * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				   >> 5U))] >> (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) 
		  & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
			     [6U] >> 0x21U))) & ((0x3fU 
						  & (IData)(
							    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
							    [6U])) 
						 == 
						 (0x3fU 
						  & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3 = 1U;
		if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
									   & (((IData)(0x2bU) 
									       + 
									       ((IData)(0x3dU) 
										* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
									      >> 5U))] 
			= (((~ ((IData)(1U) << (0x1fU 
						& ((IData)(0x2bU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) 
			    & vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			    (0x7fU & (((IData)(0x2bU) 
				       + ((IData)(0x3dU) 
					  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				      >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound3) 
						   << 
						   (0x1fU 
						    & ((IData)(0x2bU) 
						       + 
						       ((IData)(0x3dU) 
							* vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))));
		}
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4 
		    = (0xfU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
				       [6U] >> 0x16U)));
		if ((0xf3fU >= (0xfffU & ((IData)(0xdU) 
					  + ((IData)(0x3dU) 
					     * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
		    VL_ASSIGNSEL_WIII(4,(0xfffU & ((IData)(0xdU) 
						   + 
						   ((IData)(0x3dU) 
						    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound4);
		}
		if (((0xf3fU >= (0xfffU & ((IData)(0x2aU) 
					   + ((IData)(0x3dU) 
					      * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))) 
		     & (vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_q[
			(0x7fU & (((IData)(0x2aU) + 
				   ((IData)(0x3dU) 
				    * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)) 
				  >> 5U))] >> (0x1fU 
					       & ((IData)(0x2aU) 
						  + 
						  ((IData)(0x3dU) 
						   * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i)))))) {
		    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5 
			= (0xffffU & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__cdb
					      [6U] 
					      >> 6U)));
		    if ((0xf3fU >= (0xfffU & ((IData)(0x15U) 
					      + ((IData)(0x3dU) 
						 * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))))) {
			VL_ASSIGNSEL_WIII(16,(0xfffU 
					      & ((IData)(0x15U) 
						 + 
						 ((IData)(0x3dU) 
						  * vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i))), vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n, vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound5);
		    }
		}
	    }
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 7U;
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i 
		= ((IData)(1U) + vlTOPp->commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i);
	}
	if ((1U & (IData)((vlTOPp->commit_stage__DOT__reorder_buffer__DOT__committing_instr 
			   >> 0x2bU)))) {
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound6 = 0U;
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt_n 
		= (0x3fU & ((IData)(1U) + (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt_n)));
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num_n 
		= (0x7fU & ((IData)(1U) + (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_num_n)));
	    if ((0xf3fU >= (0xfffU & ((IData)(0x2bU) 
				      + ((IData)(0x3dU) 
					 * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)))))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
								       & (((IData)(0x2bU) 
									   + 
									   ((IData)(0x3dU) 
									    * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))) 
									  >> 5U))] 
		    = (((~ ((IData)(1U) << (0x1fU & 
					    ((IData)(0x2bU) 
					     + ((IData)(0x3dU) 
						* (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)))))) 
			& vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			(0x7fU & (((IData)(0x2bU) + 
				   ((IData)(0x3dU) 
				    * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))) 
				  >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound6) 
					       << (0x1fU 
						   & ((IData)(0x2bU) 
						      + 
						      ((IData)(0x3dU) 
						       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))))));
	    }
	    vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound7 = 0U;
	    if ((0xf3fU >= (0xfffU & ((IData)(0x3cU) 
				      + ((IData)(0x3dU) 
					 * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)))))) {
		vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[(0x7fU 
								       & (((IData)(0x3cU) 
									   + 
									   ((IData)(0x3dU) 
									    * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))) 
									  >> 5U))] 
		    = (((~ ((IData)(1U) << (0x1fU & 
					    ((IData)(0x3cU) 
					     + ((IData)(0x3dU) 
						* (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt)))))) 
			& vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_n[
			(0x7fU & (((IData)(0x3cU) + 
				   ((IData)(0x3dU) 
				    * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))) 
				  >> 5U))]) | ((IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT____Vlvbound7) 
					       << (0x1fU 
						   & ((IData)(0x3cU) 
						      + 
						      ((IData)(0x3dU) 
						       * (IData)(vlTOPp->commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt))))));
	    }
	}
    }
    vlTOPp->sb_ld_bypass_value_o = (0xffffU & ((0x20fU 
						>= 
						(0x3ffU 
						 & ((IData)(0x21U) 
						    * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num))))
					        ? (
						   ((0U 
						     == 
						     (0x1fU 
						      & ((IData)(0x21U) 
							 * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num))))
						     ? 0U
						     : 
						    (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
						     ((IData)(1U) 
						      + 
						      (0x1fU 
						       & (((IData)(0x21U) 
							   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num)) 
							  >> 5U)))] 
						     << 
						     ((IData)(0x20U) 
						      - 
						      (0x1fU 
						       & ((IData)(0x21U) 
							  * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num)))))) 
						   | (vlTOPp->commit_stage__DOT__sb__DOT__sb_q[
						      (0x1fU 
						       & (((IData)(0x21U) 
							   * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num)) 
							  >> 5U))] 
						      >> 
						      (0x1fU 
						       & ((IData)(0x21U) 
							  * (IData)(vlTOPp->commit_stage__DOT__sb__DOT__matched_sb_num)))))
					        : 0U));
}

void Vbsg_mem_1r1w_sync::_eval(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_mem_1r1w_sync::_eval\n"); );
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vbsg_mem_1r1w_sync::_eval_initial(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_mem_1r1w_sync::_eval_initial\n"); );
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbsg_mem_1r1w_sync::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_mem_1r1w_sync::final\n"); );
    // Variables
    Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbsg_mem_1r1w_sync::_eval_settle(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_mem_1r1w_sync::_eval_settle\n"); );
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vbsg_mem_1r1w_sync::_change_request(Vbsg_mem_1r1w_sync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_mem_1r1w_sync::_change_request\n"); );
    Vbsg_mem_1r1w_sync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vbsg_mem_1r1w_sync::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_mem_1r1w_sync::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
	Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((reset_i & 0xfeU))) {
	Verilated::overWidthError("reset_i");}
    if (VL_UNLIKELY((exe_w_v_i & 0x80U))) {
	Verilated::overWidthError("exe_w_v_i");}
    if (VL_UNLIKELY((issue_read_rs1_i & 0x80U))) {
	Verilated::overWidthError("issue_read_rs1_i");}
    if (VL_UNLIKELY((issue_read_rs2_i & 0x80U))) {
	Verilated::overWidthError("issue_read_rs2_i");}
    if (VL_UNLIKELY((issue_sb_v_i & 0xfeU))) {
	Verilated::overWidthError("issue_sb_v_i");}
    if (VL_UNLIKELY((exe_sb_v_i & 0xfeU))) {
	Verilated::overWidthError("exe_sb_v_i");}
    if (VL_UNLIKELY((exe_sb_i & VL_ULL(0)))) {
	Verilated::overWidthError("exe_sb_i");}
    if (VL_UNLIKELY((exe_ld_bypass_sb_num_i & 0xf0U))) {
	Verilated::overWidthError("exe_ld_bypass_sb_num_i");}
    if (VL_UNLIKELY((rename_rob_valid_i & 0xfeU))) {
	Verilated::overWidthError("rename_rob_valid_i");}
    if (VL_UNLIKELY((rename_rob_entry_i & VL_ULL(0)))) {
	Verilated::overWidthError("rename_rob_entry_i");}
}
#endif // VL_DEBUG

void Vbsg_mem_1r1w_sync::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_mem_1r1w_sync::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    reset_i = VL_RAND_RESET_I(1);
    exe_w_v_i = VL_RAND_RESET_I(7);
    exe_addr_i = VL_RAND_RESET_Q(49);
    VL_RAND_RESET_W(112,exe_data_i);
    issue_read_rs1_i = VL_RAND_RESET_I(7);
    rs1_valid_o = VL_RAND_RESET_I(1);
    rs1_data_o = VL_RAND_RESET_I(16);
    issue_read_rs2_i = VL_RAND_RESET_I(7);
    rs2_valid_o = VL_RAND_RESET_I(1);
    rs2_data_o = VL_RAND_RESET_I(16);
    issue_sb_v_i = VL_RAND_RESET_I(1);
    sb_issue_entry_num_o = VL_RAND_RESET_I(4);
    sb_issue_ready_o = VL_RAND_RESET_I(1);
    exe_sb_v_i = VL_RAND_RESET_I(1);
    exe_sb_i = VL_RAND_RESET_Q(36);
    { int __Vi0=0; for (; __Vi0<7; ++__Vi0) {
	    cdb_i[__Vi0] = VL_RAND_RESET_Q(34);
    }}
    exe_mem_addr_i = VL_RAND_RESET_I(16);
    exe_ld_bypass_sb_num_i = VL_RAND_RESET_I(4);
    exe_mem_data_o = VL_RAND_RESET_I(16);
    rename_rob_valid_i = VL_RAND_RESET_I(1);
    rename_rob_entry_i = VL_RAND_RESET_Q(61);
    rob_rename_ready_o = VL_RAND_RESET_I(1);
    exe_ld_bypass_addr_i = VL_RAND_RESET_I(16);
    sb_ld_bypass_valid_o = VL_RAND_RESET_I(1);
    sb_ld_bypass_value_o = VL_RAND_RESET_I(16);
    rob_rename_valid_o = VL_RAND_RESET_I(1);
    rob_rename_entry_o = VL_RAND_RESET_I(12);
    rob_rename_entry_num_o = VL_RAND_RESET_I(6);
    sb_rename_clear_st_v_o = VL_RAND_RESET_I(1);
    sb_rename_clear_st_num_o = VL_RAND_RESET_I(4);
    rob_mispredict_o = VL_RAND_RESET_I(1);
    rob_fe_redirected_pc_o = VL_RAND_RESET_I(16);
    sb_wb_vector_o = VL_RAND_RESET_I(16);
    sb_commit_pt_o = VL_RAND_RESET_I(4);
    commit_stage__DOT__sb_mem_v = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<7; ++__Vi0) {
	    commit_stage__DOT____Vcellinp__reorder_buffer__cdb_i[__Vi0] = VL_RAND_RESET_Q(34);
    }}
    { int __Vi0=0; for (; __Vi0<7; ++__Vi0) {
	    commit_stage__DOT__reorder_buffer__DOT__cdb[__Vi0] = 0;
    }}
    VL_ZERO_RESET_W(3904,commit_stage__DOT__reorder_buffer__DOT__rob_q);
    VL_ZERO_RESET_W(3904,commit_stage__DOT__reorder_buffer__DOT__rob_n);
    commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt = VL_RAND_RESET_I(6);
    commit_stage__DOT__reorder_buffer__DOT__rob_alloc_pt_n = VL_RAND_RESET_I(6);
    commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt = VL_RAND_RESET_I(6);
    commit_stage__DOT__reorder_buffer__DOT__rob_commit_pt_n = VL_RAND_RESET_I(6);
    commit_stage__DOT__reorder_buffer__DOT__rob_num = VL_RAND_RESET_I(7);
    commit_stage__DOT__reorder_buffer__DOT__rob_num_n = VL_RAND_RESET_I(7);
    commit_stage__DOT__reorder_buffer__DOT__committing_instr = 0;
    commit_stage__DOT__reorder_buffer__DOT__prev_spec_branch_n = VL_RAND_RESET_I(1);
    commit_stage__DOT__reorder_buffer__DOT__prev_spec_branch = VL_RAND_RESET_I(1);
    commit_stage__DOT__reorder_buffer__DOT__predicted_pc_n = VL_RAND_RESET_I(16);
    commit_stage__DOT__reorder_buffer__DOT__predicted_pc = VL_RAND_RESET_I(16);
    commit_stage__DOT__reorder_buffer__DOT__condition_taken = VL_RAND_RESET_I(1);
    commit_stage__DOT__reorder_buffer__DOT__rename_entry = 0;
    commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i = 0;
    commit_stage__DOT__reorder_buffer__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    commit_stage__DOT__reorder_buffer__DOT____Vlvbound1 = 0;
    commit_stage__DOT__reorder_buffer__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    commit_stage__DOT__reorder_buffer__DOT____Vlvbound3 = VL_RAND_RESET_I(1);
    commit_stage__DOT__reorder_buffer__DOT____Vlvbound4 = VL_RAND_RESET_I(4);
    commit_stage__DOT__reorder_buffer__DOT____Vlvbound5 = VL_RAND_RESET_I(16);
    commit_stage__DOT__reorder_buffer__DOT____Vlvbound6 = VL_RAND_RESET_I(1);
    commit_stage__DOT__reorder_buffer__DOT____Vlvbound7 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048,commit_stage__DOT__states__DOT__reg_n);
    VL_RAND_RESET_W(2048,commit_stage__DOT__states__DOT__reg_q);
    VL_RAND_RESET_W(128,commit_stage__DOT__states__DOT__valid);
    VL_RAND_RESET_W(128,commit_stage__DOT__states__DOT__valid_n);
    commit_stage__DOT__states__DOT__flag = VL_RAND_RESET_I(4);
    commit_stage__DOT__states__DOT__flag_n = VL_RAND_RESET_I(4);
    VL_ZERO_RESET_W(528,commit_stage__DOT__sb__DOT__sb_n);
    VL_ZERO_RESET_W(528,commit_stage__DOT__sb__DOT__sb_q);
    commit_stage__DOT__sb__DOT__sb_alloc_pt = VL_RAND_RESET_I(4);
    commit_stage__DOT__sb__DOT__sb_alloc_pt_n = VL_RAND_RESET_I(4);
    commit_stage__DOT__sb__DOT__sb_commit_pt = VL_RAND_RESET_I(4);
    commit_stage__DOT__sb__DOT__sb_commit_pt_n = VL_RAND_RESET_I(4);
    commit_stage__DOT__sb__DOT__sb_num = VL_RAND_RESET_I(5);
    commit_stage__DOT__sb__DOT__sb_num_n = VL_RAND_RESET_I(5);
    commit_stage__DOT__sb__DOT__address_match = VL_RAND_RESET_I(1);
    commit_stage__DOT__sb__DOT__match_vector = VL_RAND_RESET_I(16);
    commit_stage__DOT__sb__DOT__trimed_sb_num = VL_RAND_RESET_I(4);
    commit_stage__DOT__sb__DOT__matched_trimed_sb_num = VL_RAND_RESET_I(4);
    commit_stage__DOT__sb__DOT__matched_sb_num = VL_RAND_RESET_I(4);
    commit_stage__DOT__sb__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    commit_stage__DOT__sb__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    commit_stage__DOT__sb__DOT____Vlvbound3 = VL_RAND_RESET_I(16);
    commit_stage__DOT__sb__DOT____Vlvbound4 = VL_RAND_RESET_I(16);
    commit_stage__DOT__sb__DOT____Vlvbound5 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65536; ++__Vi0) {
	    commit_stage__DOT__mem__DOT__synth__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    commit_stage__DOT__mem__DOT__synth__DOT__r_addr_r = VL_RAND_RESET_I(16);
    __Vclklast__TOP__clk_i = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
