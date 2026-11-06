// auto-ported from 0049e4b0_FUN_0049e4b0.c (FUN_0049e4b0, 422 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_0049e4b0(void * this_, float param_1, float param_2, float param_3, undefined4 param_4, float param_5, float param_6, float param_7, undefined4 param_8)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_c;
  float local_8;
  
  fVar1 = -param_1;
  local_c = -param_2;
  local_8 = -param_3;
  fVar3 = param_7 * local_c - param_6 * local_8;
  param_2 = param_5 * local_8 - param_7 * fVar1;
  param_3 = param_6 * fVar1 - param_5 * local_c;
  fVar4 = param_3 * local_c - local_8 * param_2;
  param_6 = local_8 * fVar3 - param_3 * fVar1;
  param_7 = param_2 * fVar1 - local_c * fVar3;
  fVar2 = SQRT(param_2 * param_2 + param_3 * param_3 + fVar3 * fVar3);
  if (fVar2 != 0.0f) {
    fVar2 = 1.0f / fVar2;
    fVar3 = fVar2 * fVar3;
    param_2 = fVar2 * param_2;
    param_3 = fVar2 * param_3;
  }
  fVar2 = SQRT(param_7 * param_7 + param_6 * param_6 + fVar4 * fVar4);
  if (fVar2 != 0.0f) {
    fVar2 = 1.0f / fVar2;
    fVar4 = fVar2 * fVar4;
    param_6 = fVar2 * param_6;
    param_7 = fVar2 * param_7;
  }
  fVar2 = SQRT(local_8 * local_8 + local_c * local_c + fVar1 * fVar1);   // asm 0x49e5cf: (z*z + y*y) + x*x
  if (fVar2 != 0.0f) {
    fVar2 = 1.0f / fVar2;
    fVar1 = fVar2 * fVar1;
    local_c = fVar2 * local_c;
    local_8 = fVar2 * local_8;
  }
  *(float *)this_ = fVar3;
  *(float *)((int)this_ + 0x10) = param_2;
  *(float *)((int)this_ + 4) = fVar4;
  *(float *)((int)this_ + 0x14) = param_6;
  *(float *)((int)this_ + 8) = fVar1;
  *(float *)((int)this_ + 0x18) = local_c;
  *(float *)((int)this_ + 0x20) = param_3;
  *(float *)((int)this_ + 0x24) = param_7;
  *(float *)((int)this_ + 0x28) = local_8;
  return bea_arg(param_7);
  return bea_arg(param_7);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049e4b0, ap_0049e4b0));
