// auto-ported from 0048a030_vslot9.c (CInfantryAI::vslot9, 671 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CInfantryAI;
typedef char fStack_10;
typedef char fStack_18;
typedef char fStack_1c;
typedef char fStack_20;
typedef char fStack_28;
typedef char fStack_2c;
typedef char fStack_30;
typedef char fStack_8;
typedef char fStack_c;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_004fb650_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb650_t> FUN_004fb650 = {(FUN_004fb650_t)0x004fb650};
typedef undefined4 (BEA_THISCALL* FUN_004fb670_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb670_t> FUN_004fb670 = {(FUN_004fb670_t)0x004fb670};
typedef uint32_t (BEA_THISCALL* FUN_004fce40_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fce40_t> FUN_004fce40 = {(FUN_004fce40_t)0x004fce40};
typedef uint32_t (BEA_THISCALL* FUN_004fce80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fce80_t> FUN_004fce80 = {(FUN_004fce80_t)0x004fce80};
typedef undefined4 (BEA_THISCALL* FUN_004fd760_t)(uint32_t);
static const bea_guard<FUN_004fd760_t> FUN_004fd760 = {(FUN_004fd760_t)0x004fd760};
typedef uint32_t (BEA_THISCALL* FUN_004ffe00_t)(uint32_t);
static const bea_guard<FUN_004ffe00_t> FUN_004ffe00 = {(FUN_004ffe00_t)0x004ffe00};

static void BEA_THISCALL ap_0048a030(CInfantryAI * this_, undefined4 param_1)
{
  int *this_00;
  void *this_01;
  bool bVar1;
  int iVar2;
  float10 fVar3;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  float &fStack_54 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x54);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x48);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x38);
  float &fStack_30 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x28);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x18);
  float &fStack_10 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x8);
  this_00 = *(int **)(this_ + 8);
  if (((((*(byte *)(this_00 + 0xb) & 4) == 0) && (this_00[0x91] != 1)) && (this_00[0x91] != 2)) &&
     (*(int *)(this_ + 0x20) != 0)) {
    if (*(int *)(this_ + 0xc) == 0) {
      bea_vcall<uint32_t>(this_00, 0x100);
    }
    else {
      iVar2 = FUN_004fb670(bea_arg(this_00), bea_arg(*(int *)(this_ + 0xc)));
      if (*(int *)(this_ + 0x1c) == 0) {
        iVar2 = 1;
      }
      if (iVar2 == 0) {
        iVar2 = *(int *)(this_ + 0xc);
        FUN_004fce80(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(iVar2 + 0x1c)), bea_arg(*(undefined4 *)(iVar2 + 0x20)), bea_arg(*(undefined4 *)(iVar2 + 0x24)), bea_arg(*(undefined4 *)(iVar2 + 0x28)));
      }
      else if (iVar2 == 1) {
        iVar2 = *(int *)(this_ + 0xc);
        bea_vcall<uint32_t>(*(int **)(this_ + 8), 0xf4, *(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20),
                   *(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x28),0);
      }
      else if (iVar2 == 2) {
        iVar2 = *(int *)(this_ + 0xc);
        FUN_004fce40(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(iVar2 + 0x1c)), bea_arg(*(undefined4 *)(iVar2 + 0x20)), bea_arg(*(undefined4 *)(iVar2 + 0x24)), bea_arg(*(undefined4 *)(iVar2 + 0x28)));
      }
    }
    bVar1 = false;
    if ((*(int *)(*(int *)((int)*(void **)(this_ + 8) + 0x164) + 0x19c) != 0) &&
       (*(int *)(this_ + 0xc) != 0)) {
      iVar2 = FUN_004fd760(bea_arg(*(void **)(this_ + 8)));
      if (iVar2 == 0) {
        FUN_004ffe00(bea_arg(this_));
        bea_vcall<uint32_t>(*(int **)(this_ + 0xc), 0x168, this_ + 0x34);
      }
      else {
        if (0.001f < ABS(*(float *)(this_ + 0x4c) - *(float *)(this_ + 0x50))) {
          *(float *)(this_ + 0x4c) =
               (*(float *)(this_ + 0x50) - *(float *)(this_ + 0x48)) * 0.028571429f +
               *(float *)(this_ + 0x4c);
        }
        if (0.001f < ABS(*(float *)(this_ + 0x58) - *(float *)(this_ + 0x5c))) {
          *(float *)(this_ + 0x58) =
               (*(float *)(this_ + 0x5c) - *(float *)(this_ + 0x54)) * 0.028571429f +
               *(float *)(this_ + 0x58);
        }
      }
      iVar2 = *(int *)(this_ + 8);
      fStack_50 = *(float *)(this_ + 0x34) - *(float *)(iVar2 + 0x1c);
      fStack_54 = *(float *)(this_ + 0x4c);
      fStack_4c = *(float *)(this_ + 0x38) - *(float *)(iVar2 + 0x20);
      fStack_48 = *(float *)(this_ + 0x3c) - *(float *)(iVar2 + 0x24);
      FUN_004062d0(bea_arg(&fStack_30), bea_arg(fStack_54), bea_arg(*(undefined4 *)(this_ + 0x58)), bea_arg(0));
      this_01 = *(void **)(this_ + 8);
      // class 19: the asm's order (3 sums)
      fStack_38 = fStack_8 * fStack_48 + fStack_c * fStack_4c + fStack_10 * fStack_50 +
                  *(float *)((int)this_01 + 0x24);
      fStack_3c = fStack_18 * fStack_48 + fStack_1c * fStack_4c + fStack_20 * fStack_50 +
                  *(float *)((int)this_01 + 0x20);
      fStack_40 = fStack_28 * fStack_48 + fStack_2c * fStack_4c + fStack_30 * fStack_50 +
                  *(float *)((int)this_01 + 0x1c);
      FUN_004fb650(bea_arg(this_01), bea_arg(*(undefined4 *)(this_ + 0xc)), bea_arg(&fStack_40));
      bVar1 = true;
    }
    fVar3 = (float10)bea_vcall<float10>(this_, 0xc);
    if (bVar1) {
      fVar3 = (float10)0.0f;
    }
    fStack_54 = (float)((float10)DAT_00672fd0 + fVar3);
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&fStack_54), bea_arg(0), bea_arg(0), bea_arg(param_1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048a030, ap_0048a030));
