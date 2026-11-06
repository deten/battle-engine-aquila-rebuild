// auto-ported from 004d0db0_FUN_004d0db0.c (FUN_004d0db0, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_0044ae20_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044ae20_t> FUN_0044ae20 = {(FUN_0044ae20_t)0x0044ae20};

static void * BEA_THISCALL ap_004d0db0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  FUN_0044ae20(bea_arg(this_), bea_arg(param_3), bea_arg(param_2));
  *(undefined4 *)((int)this_ + 8) = param_1;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d0db0, ap_004d0db0));
