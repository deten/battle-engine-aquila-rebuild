// auto-ported from 004df1a0_vslot3.c (CSentinelAI::vslot3, 557 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x80: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CSentinelAI;
typedef char fStack_38;
typedef char fStack_3c;
typedef char fStack_40;
typedef char fStack_48;
typedef char fStack_4c;
typedef char fStack_50;
typedef char fStack_58;
typedef char fStack_5c;
typedef char fStack_60;
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef void * (BEA_THISCALL* FUN_0044adb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044adb0_t> FUN_0044adb0 = {(FUN_0044adb0_t)0x0044adb0};
typedef uint32_t (BEA_THISCALL* FUN_004fb650_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb650_t> FUN_004fb650 = {(FUN_004fb650_t)0x004fb650};
typedef uint32_t (BEA_THISCALL* FUN_004fb840_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb840_t> FUN_004fb840 = {(FUN_004fb840_t)0x004fb840};
typedef uint32_t (BEA_THISCALL* FUN_004ffe00_t)(uint32_t);
static const bea_guard<FUN_004ffe00_t> FUN_004ffe00 = {(FUN_004ffe00_t)0x004ffe00};

static float10 BEA_THISCALL ap_004df1a0(CSentinelAI * this_)
{
  CSentinelAI *a1;
  undefined4 uVar1;
  float fVar2;
  int *piVar3;
  void *this_00;
  float *pfVar4;
  int iVar5;
  float10 fVar6;

  alignas(16) uint8_t bea_frame_[0x80] = {};   // the original stack frame (emulate_frame)
  float &fStack_80 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x7c);
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
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x80 - 0x30);
  bea_vcall<uint32_t>(this_, 0x10);
  if (*(int *)(this_ + 0xc) != 0) {
    iVar5 = *(int *)(this_ + 8);
    uVar1 = *(undefined4 *)(iVar5 + 0xe0);
    FUN_004011b0(bea_arg(&fStack_60), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    FUN_004062d0(bea_arg(&fStack_60), bea_arg(uVar1), bea_arg(0), bea_arg(0));
    FUN_0040d320(bea_arg(&fStack_60), bea_arg(auStack_30), bea_arg(iVar5 + 0x3c));
    pfVar4 = (float *)FUN_0044adb0(bea_arg(&fStack_80), bea_arg(auStack_30));
    fVar2 = *pfVar4;
    a1 = this_ + 0x34;
    bea_vcall<uint32_t>(*(int **)(this_ + 0xc), 0x168, a1);
    piVar3 = *(int **)(this_ + 8);
    fStack_80 = *(float *)a1 - bea_fcast<float>(piVar3[7]);
    fStack_7c = *(float *)(this_ + 0x38) - bea_fcast<float>(piVar3[8]);
    iVar5 = bea_vcall<uint32_t>(piVar3, 0x150);
    if (iVar5 != 0) {
      fVar6 = bea_fcast<float10>(fpatan(bea_fcast<float10>(fStack_80),bea_fcast<float10>(fStack_7c)));
      fVar6 = -fVar6;
      if ((-1.5707964f <= fVar2) || (fVar6 <= bea_fcast<float10>(1.5707964f))) {
        if ((1.5707964f < fVar2) && (fVar6 < bea_fcast<float10>(-1.5707964f))) {
          fVar6 = fVar6 + bea_fcast<float10>(6.2831855f);
        }
      }
      else {
        fVar6 = fVar6 - bea_fcast<float10>(6.2831855f);
      }
      if (ABS(bea_fcast<float10>(fVar2) - fVar6) < bea_fcast<float10>(0.1f)) {
        FUN_004ffe00(bea_arg(this_));
        iVar5 = *(int *)(this_ + 8);
        fStack_80 = *(float *)a1 - *(float *)(iVar5 + 0x1c);
        fStack_7c = *(float *)(this_ + 0x38) - *(float *)(iVar5 + 0x20);
        fStack_78 = *(float *)(this_ + 0x3c) - *(float *)(iVar5 + 0x24);
        FUN_004062d0(bea_arg(&fStack_60), bea_arg(*(undefined4 *)(this_ + 0x4c)), bea_arg(*(undefined4 *)(this_ + 0x58)), bea_arg(0));
        this_00 = *(void **)(this_ + 8);
        // class 19: the asm's order (3 sums)
        fStack_68 = fStack_38 * fStack_78 + fStack_3c * fStack_7c + fStack_40 * fStack_80 +
                    *(float *)((int)this_00 + 0x24);
        fStack_6c = fStack_48 * fStack_78 + fStack_4c * fStack_7c + fStack_50 * fStack_80 +
                    *(float *)((int)this_00 + 0x20);
        fStack_70 = fStack_58 * fStack_78 + fStack_5c * fStack_7c + fStack_60 * fStack_80 +
                    *(float *)((int)this_00 + 0x1c);
        FUN_004fb650(bea_arg(this_00), bea_arg(*(undefined4 *)(this_ + 0xc)), bea_arg(&fStack_70));
        bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x128);
        return bea_fcast<float10>(0.0f);
      }
    }
    FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(this_ + 0xc)));
    bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x158);
  }
  return bea_fcast<float10>(0.5);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004df1a0, ap_004df1a0));
