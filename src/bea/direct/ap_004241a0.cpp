// auto-ported from 004241a0_FUN_004241a0.c (FUN_004241a0, 58 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_00465530_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00465530_t> FUN_00465530 = {(FUN_00465530_t)0x00465530};

static void * BEA_THISCALL ap_004241a0(void * this_, undefined4 param_1, int param_2)
{
  FUN_00465530(bea_arg(this_), bea_arg(param_1));
  *(undefined4 *)((int)this_ + 8) = 0;
  if (0 < param_2) {
    *(int *)((int)this_ + 0xc) = param_2 * 0x10;
    return this_;
  }
  if (param_2 < 0) {
    *(int *)((int)this_ + 0xc) = param_2 + -1;
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004241a0, ap_004241a0));
