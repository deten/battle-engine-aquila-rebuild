// auto-ported from 00445f40_FUN_00445f40.c (FUN_00445f40, 514 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static FUN_004de8d0_t const FUN_004de8d0 = (FUN_004de8d0_t)0x004de8d0;
typedef uint32_t (BEA_THISCALL* FUN_004fce40_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_004fce40_t const FUN_004fce40 = (FUN_004fce40_t)0x004fce40;

static float10 BEA_THISCALL ap_00445f40(void * this_)
{
  int *piVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fStack_28;
  float local_24;
  float local_20;
  float fStack_1c;
  undefined4 uStack_18;
  float local_10;
  float local_c;
  
  uVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar2 = uVar2 & 0x8000ffff;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xffff0000) + 1;
  }
  local_24 = (float)(int)uVar2 * 7.6293945e-06f + 0.5f;
  if (*(int *)((int)this_ + 0xc) != 0) {
    fVar4 = (float10)bea_vcall<float10>(this_, 0xc);
    local_24 = (float)fVar4;
  }
  piVar1 = *(int **)((int)this_ + 0xc);
  if (piVar1 == (int *)0x0) {
    iVar3 = bea_vcall<uint32_t>(this_, 0x14);
    if (iVar3 != 0) {
      return (float10)0.0f;
    }
    bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x100);
    return (float10)local_24;
  }
  iVar3 = *(int *)((int)this_ + 8);
  local_10 = (float)piVar1[7] - *(float *)(iVar3 + 0x1c);
  local_c = (float)piVar1[8] - *(float *)(iVar3 + 0x20);
  local_20 = *(float *)(iVar3 + 0x114);
  fStack_1c = *(float *)(iVar3 + 0x118);
  uStack_18 = *(undefined4 *)(iVar3 + 0x11c);
  fVar5 = SQRT(local_10 * local_10 + local_c * local_c);
  if (fVar5 <= 35.0f) {
    if (5.0f < fVar5) {
      fVar4 = (float10)fpatan((float10)local_10,(float10)local_c);
      fStack_28 = (float)-fVar4;
      if (((float10)-1.5707964f <= -fVar4) || (local_20 <= 1.5707964f)) {
        fVar5 = local_20;
        if ((1.5707964f < fStack_28) && (local_20 < -1.5707964f)) {
          fVar5 = local_20 + 6.2831855f;
        }
      }
      else {
        fVar5 = local_20 - 6.2831855f;
      }
      if (1.5707964f < ABS(fStack_28 - fVar5)) {
        *(undefined4 *)((int)this_ + 0x6c) = 0;
      }
    }
  }
  else {
    *(undefined4 *)((int)this_ + 0x6c) = 1;
  }
  bea_vcall<uint32_t>(piVar1, 0x168, &local_20);
  fVar5 = fStack_1c - 30.0f;
  fStack_1c = fVar5;
  if (*(int *)((int)this_ + 0x6c) != 0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0xf4, local_24,local_20,fVar5,uStack_18,0);
    return (float10)fVar5;
  }
  FUN_004fce40(bea_arg(*(void **)((int)this_ + 8)), bea_arg(local_24), bea_arg(local_20), bea_arg(fVar5), bea_arg(uStack_18));
  return (float10)fStack_28;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00445f40, ap_00445f40));
