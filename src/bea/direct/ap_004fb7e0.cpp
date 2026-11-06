// auto-ported from 004fb7e0_FUN_004fb7e0.c (FUN_004fb7e0, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_005099a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005099a0_t> FUN_005099a0 = {(FUN_005099a0_t)0x005099a0};

static float10 BEA_THISCALL ap_004fb7e0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  float10 fVar1;
  
  if (*(void **)((int)this_ + 0x140) != (void *)0x0) {
    fVar1 = (float10)FUN_005099a0(bea_arg(*(void **)((int)this_ + 0x140)), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4));
    return fVar1;
  }
  if (*(int *)((int)this_ + 0x144) != 0) {
    return (float10)*(float *)(*(int *)(*(int *)((int)this_ + 0x144) + 0x3d0) + 0x30);
  }
  return (float10)0.0f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fb7e0, ap_004fb7e0));
