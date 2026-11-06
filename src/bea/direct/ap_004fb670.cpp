// auto-ported from 004fb670_FUN_004fb670.c (FUN_004fb670, 261 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_005096a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005096a0_t> FUN_005096a0 = {(FUN_005096a0_t)0x005096a0};
typedef float10 (BEA_THISCALL* FUN_005099a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005099a0_t> FUN_005099a0 = {(FUN_005099a0_t)0x005099a0};

static undefined4 BEA_THISCALL ap_004fb670(void * this_, int param_1)
{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  if (param_1 == 0) {
    return 2;
  }
  fVar2 = *(float *)(param_1 + 0x1c) - *(float *)((int)this_ + 0x1c);
  fVar3 = *(float *)(param_1 + 0x20) - *(float *)((int)this_ + 0x20);
  fVar4 = *(float *)(param_1 + 0x24) - *(float *)((int)this_ + 0x24);
  fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
  if (*(void **)((int)this_ + 0x140) == (void *)0x0) {
    if (*(int *)((int)this_ + 0x144) == 0) {
      return 2;
    }
    iVar1 = *(int *)(*(int *)((int)this_ + 0x144) + 0x3d0);
    if (fVar2 < *(float *)(iVar1 + 0x2c)) {
      return 2;
    }
    if (*(float *)(iVar1 + 0x30) < fVar2) {
      return 1;
    }
  }
  else {
    fVar5 = (float10)FUN_005096a0(bea_arg(*(void **)((int)this_ + 0x140)), bea_arg(*(undefined4 *)(param_1 + 0x1c)), bea_arg(*(undefined4 *)(param_1 + 0x20)), bea_arg(*(undefined4 *)(param_1 + 0x24)), bea_arg(*(undefined4 *)(param_1 + 0x28)));
    if ((float10)fVar2 < fVar5) {
      return 2;
    }
    fVar5 = (float10)FUN_005099a0(bea_arg(*(void **)((int)this_ + 0x140)), bea_arg(*(undefined4 *)(param_1 + 0x1c)), bea_arg(*(undefined4 *)(param_1 + 0x20)), bea_arg(*(undefined4 *)(param_1 + 0x24)), bea_arg(*(undefined4 *)(param_1 + 0x28)));
    if (fVar5 < (float10)fVar2) {
      return 1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fb670, ap_004fb670));
