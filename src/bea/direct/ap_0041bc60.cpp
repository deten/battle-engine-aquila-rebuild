// auto-ported from 0041bc60_FUN_0041bc60.c (FUN_0041bc60, 146 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_0041bc60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0041bc60_t> FUN_0041bc60 = {(FUN_0041bc60_t)0x0041bc60};

static undefined4 BEA_THISCALL ap_0041bc60(void * this_, int param_1, int param_2)
{
  int iVar1;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    if (param_2 == param_1) {
      return 1;
    }
    iVar1 = *(int *)((int)this_ + *(int *)(param_1 + 8) * 8 + 0x1908);
    if (iVar1 != -1) {
      iVar1 = FUN_0041bc60(bea_arg(this_), bea_arg(iVar1 * 0x40 + 4 + (int)this_), bea_arg(param_2));
      if (iVar1 != 0) {
        return 1;
      }
    }
    iVar1 = *(int *)((int)this_ + *(int *)(param_1 + 0xc) * 8 + 0x1908);
    if (iVar1 != -1) {
      iVar1 = FUN_0041bc60(bea_arg(this_), bea_arg(iVar1 * 0x40 + 4 + (int)this_), bea_arg(param_2));
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041bc60, ap_0041bc60));
