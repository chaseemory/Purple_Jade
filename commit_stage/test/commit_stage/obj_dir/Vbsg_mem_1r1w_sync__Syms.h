// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vbsg_mem_1r1w_sync__Syms_H_
#define _Vbsg_mem_1r1w_sync__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vbsg_mem_1r1w_sync.h"
#include "Vbsg_mem_1r1w_sync___024unit.h"

// SYMS CLASS
class Vbsg_mem_1r1w_sync__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vbsg_mem_1r1w_sync*            TOPp;
    
    // CREATORS
    Vbsg_mem_1r1w_sync__Syms(Vbsg_mem_1r1w_sync* topp, const char* namep);
    ~Vbsg_mem_1r1w_sync__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
