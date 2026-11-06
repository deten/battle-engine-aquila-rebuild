// auto-ported from 00404860_FUN_00404860.c (FUN_00404860, 90 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_004f3c80_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f3c80_t> FUN_004f3c80 = {(FUN_004f3c80_t)0x004f3c80};

static undefined4 BEA_THISCALL ap_00404860(void * this_, int param_1, int param_2, undefined4 param_3)
{
  float10 fVar1;
  
  if ((param_1 != *(int *)((int)this_ + 0x14)) || (param_2 != 0)) {
    *(undefined4 *)((int)this_ + 0x1c) = param_3;
    fVar1 = bea_fcast<float10>(FUN_004f3c80(bea_arg(*(void **)((int)this_ + 0x20)), bea_arg(param_1), bea_arg((int)this_ + 0x10)));
    if (param_2 != 0) {
      *(undefined4 *)((int)this_ + 8) = 0;
    }
    *(float *)((int)this_ + 0x18) = bea_fcast<float>(fVar1);
    *(int *)((int)this_ + 0x14) = param_1;
    if (fVar1 <= bea_fcast<float10>(0.0001)) {
      *(undefined4 *)((int)this_ + 0x18) = 0x3f800000;
    }
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00404860, ap_00404860));
