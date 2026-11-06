// auto-ported from 0040b120_FUN_0040b120.c (FUN_0040b120, 1330 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x80: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char Vec3;
typedef char fStack_28;
typedef char fStack_2c;
typedef char fStack_30;
typedef char fStack_48;
typedef char fStack_4c;
typedef char fStack_50;
typedef char fStack_58;
typedef char fStack_5c;
typedef char fStack_60;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef f80 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};
typedef float10 (BEA_CDECL* FUN_0040b660_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040b660_t> FUN_0040b660 = {(FUN_0040b660_t)0x0040b660};
typedef uint32_t (BEA_THISCALL* FUN_004f3ac0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f3ac0_t> FUN_004f3ac0 = {(FUN_004f3ac0_t)0x004f3ac0};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static void BEA_THISCALL ap_0040b120(void * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int *this_00;
  int iVar4;
  float *pfVar5;
  float10 fVar6;

  alignas(16) uint8_t bea_frame_[0x80] = {};   // the original stack frame (emulate_frame)
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x78);
  float &fStack_70 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x70);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x68);
  float &fStack_60 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x58);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x48);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x38);
  float &fStack_30 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x28);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x18);
  undefined1 (&auStack_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x80 - 0x10);
  iVar4 = bea_vcall<uint32_t>(this_, 0x1d4);
  fVar2 = *(float *)((int)this_ + 0x114);
  fVar3 = *(float *)((int)this_ + 0x118);
  *(undefined4 *)((int)this_ + 0x50c) = *(undefined4 *)((int)this_ + 0x504);
  this_00 = *(int **)((int)this_ + 0x4e0);
  *(undefined4 *)((int)this_ + 0x508) = *(undefined4 *)((int)this_ + 0x500);
  if (this_00 == (int *)0x0) {
    *(undefined4 *)((int)this_ + 0x4e4) = 0;
    *(undefined4 *)((int)this_ + 0x4f0) = 0;
  }
  else {
    if ((*(byte *)(this_00 + 0xd) & 0x10) == 0) {
      FUN_004f3ac0(bea_arg(this_00), bea_arg(&fStack_70));
    }
    else {
      bea_vcall<uint32_t>(this_00, 0x168, &fStack_70);
    }
    if ((*(int *)(iVar4 + 0xa0) == 0) || (*(int *)(*(int *)(iVar4 + 0xa0) + 0xb0) == 0)) {
      pfVar5 = (float *)bea_vcall<uint32_t>(this_, 0x6c, auStack_10);
      FUN_00401ec0(bea_arg(&fStack_20), bea_arg(*pfVar5 + *(float *)((int)this_ + 0x1c)), bea_arg(pfVar5[1] + *(float *)((int)this_ + 0x20)), bea_arg(pfVar5[2] + *(float *)((int)this_ + 0x24)));
      FUN_00401ec0(bea_arg(&fStack_40), bea_arg(fStack_70 - fStack_20), bea_arg(fStack_6c - fStack_1c), bea_arg(fStack_68 - fStack_18));
      fVar6 = bea_fcast<float10>(fpatan(bea_fcast<float10>(fStack_40),bea_fcast<float10>(fStack_3c)));
      fVar6 = -fVar6;
      if ((-1.5707964f <= fVar2) || (fVar6 <= bea_fcast<float10>(1.5707964f))) {
        if ((1.5707964f < fVar2) && (fVar6 < bea_fcast<float10>(-1.5707964f))) {
          fVar6 = fVar6 + bea_fcast<float10>(6.2831855f);
        }
      }
      else {
        fVar6 = fVar6 - bea_fcast<float10>(6.2831855f);
      }
      *(float *)((int)this_ + 0x4e4) = bea_fcast<float>(-(bea_fcast<float10>(fVar2) - fVar6));
      fVar6 = bea_fcast<float10>(FUN_004026b0(bea_arg(&fStack_40)));
      if (fVar6 <= bea_fcast<float10>(0.0f)) {
        fStack_78 = 0.0f;
      }
      else {
        fVar6 = _CIasin(bea_fcast<float10>(fStack_38) / bea_fcast<float10>(bea_fcast<float>(fVar6)));
        fStack_78 = bea_fcast<float>(fVar6);
      }
      fVar6 = bea_fcast<float10>(FUN_0040b660(bea_arg(fVar3), bea_arg(fStack_78)));
      *(float *)((int)this_ + 0x4f0) = bea_fcast<float>(-fVar6);
    }
    else {
      pfVar5 = (float *)bea_vcall<uint32_t>(this_, 0x6c, auStack_10);
      fStack_60 = *pfVar5 + *(float *)((int)this_ + 0x1c);
      fStack_5c = pfVar5[1] + *(float *)((int)this_ + 0x20);
      fStack_58 = pfVar5[2] + *(float *)((int)this_ + 0x24);
      if ((*(int *)(iVar4 + 0xa0) == 0) ||
         (iVar4 = *(int *)(*(int *)(iVar4 + 0xa0) + 0x18), iVar4 == 0)) {
        fVar1 = 0.0f;
      }
      else if (*(int *)(iVar4 + 0x50) == 0) {
        fVar1 = *(float *)(iVar4 + 0x2c);
      }
      else {
        fVar1 = 1000.0f;
      }
      FUN_00401ec0(bea_arg(&fStack_50), bea_arg(fVar1 * *(float *)((int)this_ + 0x40)), bea_arg(fVar1 * *(float *)((int)this_ + 0x50)), bea_arg(fVar1 * *(float *)((int)this_ + 0x60)));
      bea_vcall<uint32_t>(*(int **)((int)this_ + 0x4e0), 0x6c, &fStack_30);
      FUN_00401ec0(bea_arg(&fStack_60), bea_arg(fStack_60 - fStack_70), bea_arg(fStack_5c - fStack_6c), bea_arg(fStack_58 - fStack_68));
      // class 19: the asm's order (2 sums)
      fVar1 = (SQRT(fStack_58 * fStack_58 + fStack_5c * fStack_5c + fStack_60 * fStack_60) /
              SQRT(fStack_48 * fStack_48 + fStack_4c * fStack_4c + fStack_50 * fStack_50)) * 20.0f;
      FUN_00401ec0(bea_arg(&fStack_60), bea_arg(fStack_30 * fVar1), bea_arg(fStack_2c * fVar1), bea_arg(fStack_28 * fVar1));
      FUN_00401ec0(bea_arg(&fStack_20), bea_arg(fStack_60 + fStack_70), bea_arg(fStack_5c + fStack_6c), bea_arg(fStack_58 + fStack_68));
      pfVar5 = (float *)bea_vcall<uint32_t>(this_, 0x6c, auStack_10);
      FUN_00401ec0(bea_arg(&fStack_60), bea_arg(*(float *)((int)this_ + 0x1c) + *pfVar5), bea_arg(*(float *)((int)this_ + 0x20) + pfVar5[1]), bea_arg(*(float *)((int)this_ + 0x24) + pfVar5[2]));
      FUN_00401ec0(bea_arg(&fStack_40), bea_arg(fStack_20 - fStack_60), bea_arg(fStack_1c - fStack_5c), bea_arg(fStack_18 - fStack_58));
      fVar6 = bea_fcast<float10>(fpatan(bea_fcast<float10>(fStack_40),bea_fcast<float10>(fStack_3c)));
      fVar6 = -fVar6;
      if ((-1.5707964f <= fVar2) || (fVar6 <= bea_fcast<float10>(1.5707964f))) {
        if ((1.5707964f < fVar2) && (fVar6 < bea_fcast<float10>(-1.5707964f))) {
          fVar6 = fVar6 + bea_fcast<float10>(6.2831855f);
        }
      }
      else {
        fVar6 = fVar6 - bea_fcast<float10>(6.2831855f);
      }
      *(float *)((int)this_ + 0x4e4) = bea_fcast<float>(-(bea_fcast<float10>(fVar2) - fVar6));
      fVar6 = bea_fcast<float10>(FUN_004026b0(bea_arg(&fStack_40)));
      if (fVar6 <= bea_fcast<float10>(0.0f)) {
        fVar6 = bea_fcast<float10>(0.0f);
      }
      else {
        fVar6 = _CIasin(bea_fcast<float10>(fStack_38) / bea_fcast<float10>(bea_fcast<float>(fVar6)));
      }
      fVar2 = bea_fcast<float>(fVar6);
      if ((-1.5707964f <= fVar3) || (fVar2 <= 1.5707964f)) {
        if ((1.5707964f < fVar3) && (fVar2 < -1.5707964f)) {
          fVar6 = bea_fcast<float10>(fVar2) + bea_fcast<float10>(6.2831855f);
        }
      }
      else {
        fVar6 = bea_fcast<float10>(fVar2) - bea_fcast<float10>(6.2831855f);
      }
      fVar6 = -(bea_fcast<float10>(fVar3) - fVar6);
      *(float *)((int)this_ + 0x4f0) = bea_fcast<float>(fVar6);
      if (bea_fcast<float10>(0.2f) < ABS(bea_fcast<float10>(*(float *)((int)this_ + 0x4e4))) + ABS(fVar6)) {
        *(undefined4 *)((int)this_ + 0x500) = *(undefined4 *)((int)this_ + 0x4e4);
        *(float *)((int)this_ + 0x504) = bea_fcast<float>(fVar6);
        if (*(int *)((int)this_ + 0x4fc) == 0) {
          *(undefined4 *)((int)this_ + 0x508) = *(undefined4 *)((int)this_ + 0x4e4);
          *(float *)((int)this_ + 0x50c) = bea_fcast<float>(fVar6);
        }
        *(undefined4 *)((int)this_ + 0x4fc) = 1;
        *(undefined4 *)((int)this_ + 0x4e4) = 0;
        *(undefined4 *)((int)this_ + 0x4f0) = 0;
        goto LAB_0040b5f7;
      }
    }
  }
  *(undefined4 *)((int)this_ + 0x4fc) = 0;
LAB_0040b5f7:
  *(undefined4 *)((int)this_ + 0x4ec) = *(undefined4 *)((int)this_ + 0x4e8);
  *(undefined4 *)((int)this_ + 0x4f8) = *(undefined4 *)((int)this_ + 0x4f4);
  *(float *)((int)this_ + 0x4e8) =
       (*(float *)((int)this_ + 0x4e4) - *(float *)((int)this_ + 0x4e8)) * 0.5f +
       *(float *)((int)this_ + 0x4e8);
  *(float *)((int)this_ + 0x4f4) =
       (*(float *)((int)this_ + 0x4f0) - *(float *)((int)this_ + 0x4f4)) * 0.5f +
       *(float *)((int)this_ + 0x4f4);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040b120, ap_0040b120));
