// auto-ported from 00416970_vslot3.c (CBomberGuide::vslot3, 923 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBomberGuide;
typedef char Vec3;
typedef char extraout_ST0;
typedef char extraout_ST0_00;
typedef char fStack_10;
typedef char fStack_8;
typedef char fStack_c;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};

static void BEA_THISCALL ap_00416970(CBomberGuide * this_)
{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x3c);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x28);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x20);
  // +0x158 is copied from [esp+0x1c] (00416c88, 00416cf1): the 4th lane of the
  // vector at local_30, not local_20 as Ghidra had it (as 0x402280; found by
  // tools/offline_check.py, 2026-10-30)
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x24);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x18);
  float &fStack_10 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x8);
  iVar2 = *(int *)(this_ + 0x18);
  if ((*(byte *)(iVar2 + 0x2c) & 4) != 0) {
    *(undefined4 *)(iVar2 + 0x174) = 0;
    extraout_ST0_00 = bea_fcast<float10>(bea_vcall<float10>(*(int **)(this_ + 0x18), 0x3c));
    iVar2 = *(int *)(this_ + 0x18);
    fVar6 = extraout_ST0_00 * bea_fcast<float10>(0.05f) * bea_fcast<float10>(4.0f);
    *(float *)(iVar2 + 0x14c) = bea_fcast<float>((fVar6 * bea_fcast<float10>(*(float *)(iVar2 + 0x40))));
    *(float *)(iVar2 + 0x150) = bea_fcast<float>((fVar6 * bea_fcast<float10>(*(float *)(iVar2 + 0x50))));
    *(float *)(iVar2 + 0x154) = bea_fcast<float>((fVar6 * bea_fcast<float10>(*(float *)(iVar2 + 0x60))));
    *(float *)(iVar2 + 0x158) = local_24;
    return;
  }
  FUN_00401ec0(bea_arg(&local_20), bea_arg(*(float *)(this_ + 8) - *(float *)(iVar2 + 0x1c)), bea_arg(*(float *)(this_ + 0xc) - *(float *)(iVar2 + 0x20)), bea_arg(*(float *)(this_ + 0x10) - *(float *)(iVar2 + 0x24)));
  fVar6 = bea_fcast<float10>(fpatan(bea_fcast<float10>(local_20),bea_fcast<float10>(local_1c)));
  local_3c = bea_fcast<float>(-fVar6);
  pfVar5 = (float *)bea_vcall<uint32_t>(*(int **)(this_ + 0x18), 0x6c, &local_30);
  fVar6 = bea_fcast<float10>(fpatan(bea_fcast<float10>(*pfVar5),bea_fcast<float10>(pfVar5[1])));
  iVar2 = *(int *)(this_ + 0x18);
  fVar1 = bea_fcast<float>(-fVar6);
  FUN_00401ec0(bea_arg(&fStack_10), bea_arg(*(undefined4 *)(iVar2 + 0x3c)), bea_arg(*(undefined4 *)(iVar2 + 0x4c)), bea_arg(*(undefined4 *)(iVar2 + 0x5c)));
  if (*(int *)(this_ + 0x1c) == 0) {
    local_3c = fVar1 + 1.5707964f;
  }
  else if (*(int *)(this_ + 0x1c) == 2) {
    local_3c = local_3c - 3.1415927f;
  }
  fStack_2c = 0.0f;
  if (3.1415927f < local_3c) {
    local_3c = local_3c - 6.2831855f;
  }
  if (local_3c < -3.1415927f) {
    local_3c = local_3c + 6.2831855f;
  }
  if ((-1.5707964f <= fVar1) || (local_3c <= 1.5707964f)) {
    fVar4 = local_3c;
    if ((1.5707964f < fVar1) && (local_3c < -1.5707964f)) {
      fVar4 = local_3c + 6.2831855f;
    }
  }
  else {
    fVar4 = local_3c - 6.2831855f;
  }
  fVar1 = ABS(fVar1 - fVar4);
  if (1.5707964f < fVar1) {
    fVar1 = 1.5707964f;
  }
  if (0.0f <= fStack_8 * fStack_18 + fStack_c * local_1c + fStack_10 * local_20) {   // class 19: the asm's order
    fVar4 = -0.5f;
  }
  else {
    fVar4 = 0.5f;
  }
  fVar1 = fVar1 * fVar4;
  iVar2 = *(int *)(this_ + 0x2c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(this_ + 0x18);
    FUN_00401ec0(bea_arg(&local_30), bea_arg(*(float *)(iVar2 + 0x1c) - *(float *)(iVar3 + 0x1c)), bea_arg(*(float *)(iVar2 + 0x20) - *(float *)(iVar3 + 0x20)), bea_arg(*(float *)(iVar2 + 0x24) - *(float *)(iVar3 + 0x24)));
    if (fStack_28 <= 0.0f) {
      fStack_2c = 0.5235988f;
    }
    else {
      fStack_2c = -0.5235988f;
    }
  }
  iVar2 = *(int *)(this_ + 0x18);
  if (*(float *)(*(int *)(iVar2 + 0x164) + 0x15c) <= *(float *)(this_ + 0x20)) {
    if ((*(float *)(*(int *)(iVar2 + 0x164) + 0x15c) * 3.0f <= *(float *)(this_ + 0x20)) ||
       (fStack_2c <= 0.0f)) {
      if (50.0f < *(float *)(this_ + 0x20)) {
        fStack_2c = 0.7853982f;
      }
    }
    else {
      fStack_2c = 0.0f;
    }
  }
  else {
    fStack_2c = -0.7853982f;
  }
  if (ABS(fVar1) <= 0.1f) {
    *(undefined4 *)(iVar2 + 0x174) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x174) = 0x3f800000;
  }
  iVar2 = *(int *)(this_ + 0x18);
  *(float *)(iVar2 + 0x120) = local_3c;
  local_30 = local_3c;
  *(float *)(iVar2 + 0x124) = fStack_2c;
  *(float *)(iVar2 + 0x128) = fVar1;
  fStack_28 = fVar1;
  extraout_ST0 = bea_fcast<float10>(bea_vcall<float10>(*(int **)(this_ + 0x18), 0x3c));
  iVar2 = *(int *)(this_ + 0x18);
  fVar6 = extraout_ST0 * bea_fcast<float10>(0.05f) * bea_fcast<float10>(4.0f);
  *(float *)(iVar2 + 0x14c) = bea_fcast<float>((fVar6 * bea_fcast<float10>(*(float *)(iVar2 + 0x40))));
  *(float *)(iVar2 + 0x150) = bea_fcast<float>((fVar6 * bea_fcast<float10>(*(float *)(iVar2 + 0x50))));
  *(float *)(iVar2 + 0x154) = bea_fcast<float>((fVar6 * bea_fcast<float10>(*(float *)(iVar2 + 0x60))));
  *(float *)(iVar2 + 0x158) = local_24;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00416970, ap_00416970));
