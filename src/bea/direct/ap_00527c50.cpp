// auto-ported from 00527c50_FUN_00527c50.c (FUN_00527c50, 49 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0042e6e0_t)(uint32_t);
static const bea_guard<FUN_0042e6e0_t> FUN_0042e6e0 = {(FUN_0042e6e0_t)0x0042e6e0};

static uint32_t BEA_THISCALL ap_00527c50(void * this_, void *param_1, undefined4 param_2)
{
  if (*(int *)((int)this_ + 8) == 1) {
    *(undefined4 *)((int)this_ + 8) = 2;
  }
  else if (*(int *)((int)this_ + 8) == 3) {
    FUN_0042e6e0(bea_arg(param_1));
    *(undefined4 *)((int)this_ + 8) = 0;
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00527c50, ap_00527c50));
