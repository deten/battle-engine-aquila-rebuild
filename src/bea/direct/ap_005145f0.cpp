// auto-ported from 005145f0_FUN_005145f0.c (FUN_005145f0, 37 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_0042d640_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d640_t> FUN_0042d640 = {(FUN_0042d640_t)0x0042d640};

static void * BEA_THISCALL ap_005145f0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  FUN_0042d640(bea_arg(this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3));
  *(undefined ***)this_ = ((void*)0x005e48e0);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005145f0, ap_005145f0));
