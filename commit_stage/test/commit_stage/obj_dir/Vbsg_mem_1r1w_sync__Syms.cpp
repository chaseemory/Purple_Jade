// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vbsg_mem_1r1w_sync__Syms.h"
#include "Vbsg_mem_1r1w_sync.h"
#include "Vbsg_mem_1r1w_sync___024unit.h"

// FUNCTIONS
Vbsg_mem_1r1w_sync__Syms::Vbsg_mem_1r1w_sync__Syms(Vbsg_mem_1r1w_sync* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
