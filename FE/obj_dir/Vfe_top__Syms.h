// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vfe_top__Syms_H_
#define _Vfe_top__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vfe_top.h"
#include "Vfe_top___024unit.h"

// SYMS CLASS
class Vfe_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vfe_top*                       TOPp;
    
    // CREATORS
    Vfe_top__Syms(Vfe_top* topp, const char* namep);
    ~Vfe_top__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
