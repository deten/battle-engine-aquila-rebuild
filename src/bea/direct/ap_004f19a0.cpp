// auto-ported from 004f19a0_vslot3.c (CTentacleGuide::vslot3, 1069 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CTentacleGuide;
typedef uint32_t (BEA_THISCALL* FUN_0041ad10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041ad10_t> FUN_0041ad10 = {(FUN_0041ad10_t)0x0041ad10};
typedef undefined4 (BEA_THISCALL* FUN_004fde10_t)(uint32_t);
static const bea_guard<FUN_004fde10_t> FUN_004fde10 = {(FUN_004fde10_t)0x004fde10};

static void BEA_THISCALL ap_004f19a0(CTentacleGuide * this_)
{
  float *pfVar1;
  float fVar2;
  int iVar3;
  void *this_00;
  float fVar4;
  float fVar5;
  int iVar6;
  
  iVar3 = *(int *)(this_ + 0x18);
  this_00 = *(void **)(iVar3 + 0x26c);
  if (this_00 == (void *)0x0) {
    return;
  }
  if ((*(byte *)(iVar3 + 0x2c) & 4) != 0) {
    return;
  }
  if ((*(byte *)((int)this_00 + 0x2c) & 4) != 0) {
    return;
  }
  iVar6 = FUN_004fde10(bea_arg(this_00));
  if (iVar6 != 0) {
    return;
  }
  fVar2 = *(float *)(iVar3 + 0x2cc);
  if (fVar2 <= 3.1415927f) {
    if (fVar2 < -3.1415927f) {
      fVar2 = fVar2 + 6.2831855f;
    }
  }
  else {
    fVar2 = fVar2 - 6.2831855f;
  }
  fVar4 = *(float *)(iVar3 + 0x2c4);
  if ((-1.5707964f <= fVar4) || (fVar2 <= 1.5707964f)) {
    fVar5 = fVar2;
    if ((1.5707964f < fVar4) && (fVar2 < -1.5707964f)) {
      fVar5 = fVar2 + 6.2831855f;
    }
  }
  else {
    fVar5 = fVar2 - 6.2831855f;
  }
  fVar4 = ABS(fVar4 - fVar5) * 0.1f;
  if (fVar2 <= *(float *)(iVar3 + 0x2c4)) {
    fVar4 = *(float *)(iVar3 + 0x2c4) - fVar4;
  }
  else {
    fVar4 = fVar4 + *(float *)(iVar3 + 0x2c4);
  }
  *(float *)(iVar3 + 0x2c4) = fVar4;
  if (*(float *)(iVar3 + 0x2c4) <= 3.1415927f) {
    if (*(float *)(iVar3 + 0x2c4) < -3.1415927f) {
      *(undefined4 *)(iVar3 + 0x2c4) = 0xc0490fdb;
    }
  }
  else {
    *(undefined4 *)(iVar3 + 0x2c4) = 0x40490fdb;
  }
  fVar2 = *(float *)(iVar3 + 0x2d0);
  fVar4 = *(float *)(iVar3 + 0x2c8);
  if ((-1.5707964f <= fVar4) || (fVar2 <= 1.5707964f)) {
    if ((1.5707964f < fVar4) && (fVar2 < -1.5707964f)) {
      fVar2 = fVar2 + 6.2831855f;
    }
  }
  else {
    fVar2 = fVar2 - 6.2831855f;
  }
  fVar2 = ABS(fVar4 - fVar2) * 0.1f;
  if (*(float *)(iVar3 + 0x2d0) <= *(float *)(iVar3 + 0x2c8)) {
    if (3.1415927f < *(float *)(iVar3 + 0x2c8) - *(float *)(iVar3 + 0x2d0)) {
      *(float *)(iVar3 + 0x2c8) = fVar2 + *(float *)(iVar3 + 0x2c8);
      goto LAB_004f1bb0;
    }
  }
  else if (*(float *)(iVar3 + 0x2d0) - *(float *)(iVar3 + 0x2c8) <= 3.1415927f) {
    *(float *)(iVar3 + 0x2c8) = fVar2 + *(float *)(iVar3 + 0x2c8);
    goto LAB_004f1bb0;
  }
  *(float *)(iVar3 + 0x2c8) = *(float *)(iVar3 + 0x2c8) - fVar2;
LAB_004f1bb0:
  fVar2 = *(float *)(iVar3 + 0x2e4) - *(float *)(iVar3 + 0x2d4);
  fVar4 = *(float *)(iVar3 + 0x2e8) - *(float *)(iVar3 + 0x2d8);
  if (*(int *)(iVar3 + 0x2c0) == 2) {
    pfVar1 = (float *)(iVar3 + 0x2f4);
    *pfVar1 = fVar2 * 0.01f + *pfVar1;
    *(float *)(iVar3 + 0x2f8) = fVar4 * 0.01f + *(float *)(iVar3 + 0x2f8);
    *(float *)(iVar3 + 0x2fc) =
         (*(float *)(iVar3 + 0x2ec) - *(float *)(iVar3 + 0x2dc)) * 0.01f + *(float *)(iVar3 + 0x2fc);
    if (0.5f < SQRT(*pfVar1 * *pfVar1 + *(float *)(iVar3 + 0x2f8) * *(float *)(iVar3 + 0x2f8) +
                   *(float *)(iVar3 + 0x2fc) * *(float *)(iVar3 + 0x2fc))) {
      fVar2 = SQRT(*pfVar1 * *pfVar1 + *(float *)(iVar3 + 0x2f8) * *(float *)(iVar3 + 0x2f8) +
                   *(float *)(iVar3 + 0x2fc) * *(float *)(iVar3 + 0x2fc));
      if (fVar2 != 0.0f) {
        fVar2 = 1.0f / fVar2;
        *pfVar1 = fVar2 * *pfVar1;
        *(float *)(iVar3 + 0x2f8) = fVar2 * *(float *)(iVar3 + 0x2f8);
        *(float *)(iVar3 + 0x2fc) = fVar2 * *(float *)(iVar3 + 0x2fc);
      }
      *pfVar1 = *pfVar1 * 0.5f;
      *(float *)(iVar3 + 0x2f8) = *(float *)(iVar3 + 0x2f8) * 0.5f;
      *(float *)(iVar3 + 0x2fc) = *(float *)(iVar3 + 0x2fc) * 0.5f;
    }
  }
  else {
    pfVar1 = (float *)(iVar3 + 0x2f4);
    *pfVar1 = fVar2 * 0.001f + *pfVar1;
    *(float *)(iVar3 + 0x2f8) = fVar4 * 0.001f + *(float *)(iVar3 + 0x2f8);
    *(float *)(iVar3 + 0x2fc) =
         (*(float *)(iVar3 + 0x2ec) - *(float *)(iVar3 + 0x2dc)) * 0.001f + *(float *)(iVar3 + 0x2fc)
    ;
    if (0.1f < SQRT(*pfVar1 * *pfVar1 + *(float *)(iVar3 + 0x2f8) * *(float *)(iVar3 + 0x2f8) +
                   *(float *)(iVar3 + 0x2fc) * *(float *)(iVar3 + 0x2fc))) {
      fVar2 = SQRT(*pfVar1 * *pfVar1 + *(float *)(iVar3 + 0x2f8) * *(float *)(iVar3 + 0x2f8) +
                   *(float *)(iVar3 + 0x2fc) * *(float *)(iVar3 + 0x2fc));
      if (fVar2 != 0.0f) {
        fVar2 = 1.0f / fVar2;
        *pfVar1 = fVar2 * *pfVar1;
        *(float *)(iVar3 + 0x2f8) = fVar2 * *(float *)(iVar3 + 0x2f8);
        *(float *)(iVar3 + 0x2fc) = fVar2 * *(float *)(iVar3 + 0x2fc);
      }
      *pfVar1 = *pfVar1 * 0.1f;
      *(float *)(iVar3 + 0x2f8) = *(float *)(iVar3 + 0x2f8) * 0.1f;
      *(float *)(iVar3 + 0x2fc) = *(float *)(iVar3 + 0x2fc) * 0.1f;
      FUN_0041ad10(bea_arg((void *)(iVar3 + 0x2d4)), bea_arg(pfVar1));
      return;
    }
  }
  FUN_0041ad10(bea_arg((void *)(iVar3 + 0x2d4)), bea_arg(iVar3 + 0x2f4));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f19a0, ap_004f19a0));
