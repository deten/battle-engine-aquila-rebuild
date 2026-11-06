// auto-ported from 00429270_vslot3.c (CComponentGuide::vslot3, 567 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComponentGuide;
typedef float10 (BEA_THISCALL* FUN_00428bc0_t)(uint32_t);
static const bea_guard<FUN_00428bc0_t> FUN_00428bc0 = {(FUN_00428bc0_t)0x00428bc0};
typedef undefined4 (BEA_THISCALL* FUN_004fde10_t)(uint32_t);
static const bea_guard<FUN_004fde10_t> FUN_004fde10 = {(FUN_004fde10_t)0x004fde10};

static undefined4 BEA_THISCALL ap_00429270(CComponentGuide * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *this_00;
  void *this_01;
  undefined4 uVar5;
  int iVar6;
  undefined2 uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float local_14;
  
  this_00 = *(void **)(this_ + 0x18);
  this_01 = *(void **)((int)this_00 + 0x26c);
  if (this_01 == (void *)0x0) {
    return 0;
  }
  uVar5 = (uint)(byte)(4);
  if ((*(byte *)((int)this_00 + 0x2c) & 4) != 0) {
    return uVar5;
  }
  if ((*(byte *)((int)this_01 + 0x2c) & 4) != 0) {
    return uVar5;
  }
  iVar6 = FUN_004fde10(bea_arg(this_01));
  if (iVar6 != 0) {
    return iVar6;
  }
  fVar1 = *(float *)(this_ + 8);
  fVar2 = *(float *)(*(int *)(this_ + 0x18) + 0x1c);
  fVar3 = *(float *)(this_ + 0xc);
  fVar4 = *(float *)(*(int *)(this_ + 0x18) + 0x20);
  fVar8 = (float10)FUN_00428bc0(bea_arg(this_00));
  fVar10 = fVar8;
  if (*(int *)(this_ + 0x1c) != 0) {
    fVar10 = (float10)fpatan((float10)(fVar1 - fVar2),(float10)(fVar3 - fVar4));
    fVar10 = -fVar10;
  }
  fVar9 = fVar8 + (float10)*(float *)((int)this_00 + 0x250);
  *(float *)((int)this_00 + 0x250) = (float)fVar9;
  if (fVar9 <= (float10)3.1415927f) {
    if (fVar9 < (float10)-3.1415927f) {
      *(float *)((int)this_00 + 0x250) = (float)(fVar9 + (float10)6.2831855f);
    }
  }
  else {
    *(float *)((int)this_00 + 0x250) = (float)(fVar9 - (float10)6.2831855f);
  }
  fVar1 = *(float *)((int)this_00 + 0x250);
  uVar7 = (undefined2)((uint)fVar1 >> 0x10);
  if ((-1.5707964f <= fVar1) || (fVar10 < (float10)1.5707964f)) {
    fVar9 = fVar10;
    if ((1.5707964f <= fVar1) && (fVar10 < (float10)-1.5707964f)) {
      fVar9 = fVar10 + (float10)6.2831855f;
    }
  }
  else {
    fVar9 = fVar10 - (float10)6.2831855f;
  }
  iVar6 = *(int *)((int)this_00 + 0x164);
  fVar9 = ABS((float10)fVar1 - fVar9) * (float10)0.1f;
  local_14 = (float)fVar9;
  if ((float10)*(float *)(iVar6 + 0xb8) < fVar9) {
    local_14 = *(float *)(iVar6 + 0xb8);
  }
  if (fVar10 <= (float10)*(float *)((int)this_00 + 0x250)) {
    if ((float10)3.1415927f < (float10)*(float *)((int)this_00 + 0x250) - fVar10) {
      local_14 = local_14 + *(float *)((int)this_00 + 0x250);
      goto LAB_00429415;
    }
  }
  else if (fVar10 - (float10)*(float *)((int)this_00 + 0x250) <= (float10)3.1415927f) {
    local_14 = local_14 + *(float *)((int)this_00 + 0x250);
    goto LAB_00429415;
  }
  local_14 = *(float *)((int)this_00 + 0x250) - local_14;
LAB_00429415:
  *(float *)((int)this_00 + 0x250) = local_14;
  fVar8 = (float10)*(float *)((int)this_00 + 0x250) - fVar8;
  *(float *)((int)this_00 + 0x250) = (float)fVar8;
  if (fVar8 <= (float10)3.1415927f) {
    if (fVar8 < (float10)-3.1415927f) {
      *(float *)((int)this_00 + 0x250) = (float)(fVar8 + (float10)6.2831855f);
    }
  }
  else {
    *(float *)((int)this_00 + 0x250) = (float)(fVar8 - (float10)6.2831855f);
  }
  fVar1 = *(float *)(iVar6 + 0xd8);
  fVar2 = *(float *)((int)this_00 + 0x250);
  if (fVar1 >= fVar2) {
    fVar2 = -*(float *)(iVar6 + 0xd8);
    fVar1 = *(float *)((int)this_00 + 0x250);
    uVar5 = CONCAT22(uVar7,(ushort)(fVar2 < fVar1) << 8 | (ushort)(bea_isnan(fVar2) || bea_isnan(fVar1)) << 10 |
                           (ushort)(fVar2 == fVar1) << 0xe);
    if (fVar2 < fVar1 || (fVar2 == fVar1) != 0) {
      return uVar5;
    }
    *(float *)((int)this_00 + 0x250) = fVar2;
    return uVar5;
  }
  *(float *)((int)this_00 + 0x250) = *(float *)(iVar6 + 0xd8);
  return CONCAT22(uVar7,(ushort)(fVar1 < fVar2) << 8 | (ushort)(bea_isnan(fVar1) || bea_isnan(fVar2)) << 10 |
                        (ushort)(fVar1 == fVar2) << 0xe);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00429270, ap_00429270));
