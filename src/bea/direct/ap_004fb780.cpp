// auto-ported from 004fb780_FUN_004fb780.c (FUN_004fb780, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_005096a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005096a0_t> FUN_005096a0 = {(FUN_005096a0_t)0x005096a0};

static float10 BEA_THISCALL ap_004fb780(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  float10 fVar1;
  
  if (*(void **)((int)this_ + 0x140) != (void *)0x0) {
    fVar1 = (float10)FUN_005096a0(bea_arg(*(void **)((int)this_ + 0x140)), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4));
    return fVar1;
  }
  if (*(int *)((int)this_ + 0x144) != 0) {
    return (float10)*(float *)(*(int *)(*(int *)((int)this_ + 0x144) + 0x3d0) + 0x2c);
  }
  return (float10)0.0f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fb780, ap_004fb780));
