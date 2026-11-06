// auto-ported from 004fef40_vslot3.c (CUnitAI::vslot3, 994 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CUnitAI;
typedef char Vec3;
typedef char fStack_10;
typedef char fStack_18;
typedef char fStack_1c;
typedef char fStack_20;
typedef char fStack_28;
typedef char fStack_2c;
typedef char fStack_30;
typedef char fStack_8;
typedef char fStack_c;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef uint32_t (BEA_THISCALL* FUN_004fb650_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb650_t> FUN_004fb650 = {(FUN_004fb650_t)0x004fb650};
typedef uint32_t (BEA_THISCALL* FUN_004fb840_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb840_t> FUN_004fb840 = {(FUN_004fb840_t)0x004fb840};
typedef float10 (BEA_THISCALL* FUN_004fbc90_t)(uint32_t);
static const bea_guard<FUN_004fbc90_t> FUN_004fbc90 = {(FUN_004fbc90_t)0x004fbc90};
typedef uint32_t (BEA_THISCALL* FUN_004fde70_t)(uint32_t);
static const bea_guard<FUN_004fde70_t> FUN_004fde70 = {(FUN_004fde70_t)0x004fde70};

static float10 BEA_THISCALL ap_004fef40(CUnitAI * this_)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *this_00;
  int iVar4;
  uint uVar5;
  float10 fVar6;

  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x68);
  float &fStack_60 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x58);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x48);
  undefined1 (&auStack_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x70 - 0x40);
  float &fStack_30 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x28);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x18);
  float &fStack_10 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x8);
  bea_vcall<uint32_t>(this_, 0x10);
  iVar4 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x150);
  if (iVar4 != 0) {
    piVar1 = *(int **)(this_ + 0xc);
    if (piVar1 != (int *)0x0) {
      if (*(int *)(*(int *)((int)*(void **)(this_ + 8) + 0x164) + 0x19c) == 0) {
        FUN_004fb650(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar1), bea_arg(this_ + 0x34));
        uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
        uVar5 = uVar5 & 0x8000ffff;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xffff0000) + 1;
        }
        fStack_68 = (float)(int)uVar5 * 1.5258789e-05f + 0.5f;
      }
      else {
        bea_vcall<uint32_t>(piVar1, 0x168, this_ + 0x34);
        uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
        uVar5 = uVar5 & 0x8000ffff;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xffff0000) + 1;
        }
        *(float *)(this_ + 0x48) = (float)(int)uVar5 * 6.1035155e-07f + 0.04f;
        uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
        uVar5 = uVar5 & 0x8000ffff;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xffff0000) + 1;
        }
        *(float *)(this_ + 0x54) = (float)(int)uVar5 * 6.1035155e-07f + 0.04f;
        uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
        uVar5 = uVar5 & 0x8000ffff;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xffff0000) + 1;
        }
        if (0.5f < (float)(int)uVar5 * 1.5258789e-05f) {
          *(float *)(this_ + 0x48) = -*(float *)(this_ + 0x48);
        }
        uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
        uVar5 = uVar5 & 0x8000ffff;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xffff0000) + 1;
        }
        if (0.5f < (float)(int)uVar5 * 1.5258789e-05f) {
          *(float *)(this_ + 0x54) = -*(float *)(this_ + 0x54);
        }
        *(float *)(this_ + 0x50) = -*(float *)(this_ + 0x48);
        *(undefined4 *)(this_ + 0x4c) = *(undefined4 *)(this_ + 0x48);
        iVar4 = *(int *)(this_ + 8);
        *(float *)(this_ + 0x5c) = -*(float *)(this_ + 0x54);
        *(undefined4 *)(this_ + 0x58) = *(undefined4 *)(this_ + 0x54);
        FUN_00401ec0(bea_arg(&fStack_60), bea_arg(*(float *)(this_ + 0x34) - *(float *)(iVar4 + 0x1c)), bea_arg(*(float *)(this_ + 0x38) - *(float *)(iVar4 + 0x20)), bea_arg(*(float *)(this_ + 0x3c) - *(float *)(iVar4 + 0x24)));
        uVar2 = *(undefined4 *)(this_ + 0x58);
        uVar3 = *(undefined4 *)(this_ + 0x4c);
        FUN_004011b0(bea_arg(&fStack_30), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
        FUN_004062d0(bea_arg(&fStack_30), bea_arg(uVar3), bea_arg(uVar2), bea_arg(0));
        // class 19: the asm's order (3 sums)
        FUN_00401ec0(bea_arg(&fStack_50), bea_arg(fStack_28 * fStack_58 + fStack_2c * fStack_5c + fStack_30 * fStack_60), bea_arg(fStack_18 * fStack_58 + fStack_1c * fStack_5c + fStack_20 * fStack_60), bea_arg(fStack_8 * fStack_58 + fStack_c * fStack_5c + fStack_10 * fStack_60));
        iVar4 = *(int *)(this_ + 8);
        FUN_00401ec0(bea_arg(auStack_40), bea_arg(fStack_50 + *(float *)(iVar4 + 0x1c)), bea_arg(fStack_4c + *(float *)(iVar4 + 0x20)), bea_arg(fStack_48 + *(float *)(iVar4 + 0x24)));
        FUN_004fb650(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(this_ + 0xc)), bea_arg(auStack_40));
        fStack_68 = 0.0;
      }
      bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x128);
      if (*(int *)(*(int *)(*(int *)(this_ + 8) + 0x164) + 0x128) != 0) {
        FUN_00401000(bea_arg(this_ + 0xc), bea_arg(0));
        FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(0));
        *(undefined4 *)(this_ + 0x10) = 0;
      }
      return (float10)fStack_68;
    }
  }
  if ((*(int *)(this_ + 0x18) != 0) && (*(int *)(this_ + 0xc) != 0)) {
    FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(*(int *)(this_ + 0xc)));
    if ((*(int *)(*(int *)(*(int *)(this_ + 8) + 0x164) + 0x19c) == 0) &&
       (*(int *)(*(int *)(this_ + 8) + 0x168) != 1)) {
      bea_vcall<uint32_t>(*(int **)(this_ + 0xc), 0x168, this_ + 0x34);
      FUN_004fb650(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(this_ + 0xc)), bea_arg(this_ + 0x34));
    }
    bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x158);
    fVar6 = (float10)FUN_004fbc90(bea_arg(*(void **)(this_ + 8)));
    return fVar6 + (float10)0.1f;
  }
  this_00 = *(void **)(this_ + 8);
  *(undefined4 *)((int)this_00 + 0x1ec) = 0;
  *(undefined4 *)((int)this_00 + 0x1e8) = 0;
  if (*(int *)(*(int *)((int)this_00 + 0x164) + 0x108) != 0) {
    FUN_004fde70(bea_arg(this_00));
  }
  if (*(int *)(*(int *)(this_ + 8) + 0x110) != 0) {
    uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar5 = uVar5 & 0x8000ffff;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffff0000) + 1;
    }
    return (float10)(int)uVar5 * (float10)1.5258789e-05f + (float10)1.5f;
  }
  uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar5 = uVar5 & 0x8000ffff;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffff0000) + 1;
  }
  return (float10)(int)uVar5 * (float10)3.0517578e-05f + (float10)3.0f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fef40, ap_004fef40));
