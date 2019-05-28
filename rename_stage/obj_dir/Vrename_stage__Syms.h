// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vrename_stage__Syms_H_
#define _Vrename_stage__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vrename_stage.h"
#include "Vrename_stage___024unit.h"

// SYMS CLASS
class Vrename_stage__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vrename_stage*                 TOPp;
    
    // CREATORS
    Vrename_stage__Syms(Vrename_stage* topp, const char* namep);
    ~Vrename_stage__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
