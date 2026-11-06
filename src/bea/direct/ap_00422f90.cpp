// auto-ported from 00422f90_FUN_00422f90.c (FUN_00422f90, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_00402150_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00402150_t> FUN_00402150 = {(FUN_00402150_t)0x00402150};

static void * BEA_THISCALL ap_00422f90(void * this_, undefined4 param_1)
{
  FUN_00402150(bea_arg(this_), bea_arg(param_1));
  *(undefined ***)this_ = ((void*)0x005d947c);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00422f90, ap_00422f90));
