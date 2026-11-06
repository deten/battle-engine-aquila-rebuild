// auto-ported from 004fec60_vslot9.c (CUnitAI::vslot9, 736 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnitAI;
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
typedef uint32_t (BEA_THISCALL* FUN_004fcec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fcec0_t> FUN_004fcec0 = {(FUN_004fcec0_t)0x004fcec0};
typedef undefined4 (BEA_THISCALL* FUN_004fd760_t)(uint32_t);
static const bea_guard<FUN_004fd760_t> FUN_004fd760 = {(FUN_004fd760_t)0x004fd760};

static void BEA_THISCALL ap_004fec60(CUnitAI * this_, undefined4 param_1)
{
  int *this_00;
  void *this_01;
  bool bVar1;
  int iVar2;
  float10 fVar3;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  float &local_54 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x48);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x38);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x28);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x18);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x8);
  this_00 = *(int **)(this_ + 8);
  if (((((*(byte *)(this_00 + 0xb) & 4) == 0) && (this_00[0x91] != 1)) && (this_00[0x91] != 2)) &&
     (*(int *)(this_ + 0x20) != 0)) {
    if ((int *)this_00[0x52] == (int *)0x0) {
      if (*(int *)(this_ + 0xc) == 0) {
        bea_vcall<uint32_t>(this_00, 0x100);
      }
      else {
        iVar2 = FUN_004fb670(bea_arg(this_00), bea_arg(*(int *)(this_ + 0xc)));
        if (iVar2 == 0) {
          iVar2 = *(int *)(this_ + 0xc);
          FUN_004fce80(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(iVar2 + 0x1c)), bea_arg(*(undefined4 *)(iVar2 + 0x20)), bea_arg(*(undefined4 *)(iVar2 + 0x24)), bea_arg(*(undefined4 *)(iVar2 + 0x28)));
        }
      }
    }
    else {
      iVar2 = bea_vcall<uint32_t>(this_00[0x52], 0x14c);
      if (iVar2 == 1) {
        if (*(int *)(this_ + 0xc) == 0) {
          bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x100);
        }
        else {
          iVar2 = FUN_004fb670(bea_arg(*(void **)(this_ + 8)), bea_arg(*(int *)(this_ + 0xc)));
          if (iVar2 == 0) {
            iVar2 = *(int *)(this_ + 0xc);
            FUN_004fce80(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(iVar2 + 0x1c)), bea_arg(*(undefined4 *)(iVar2 + 0x20)), bea_arg(*(undefined4 *)(iVar2 + 0x24)), bea_arg(*(undefined4 *)(iVar2 + 0x28)));
          }
          else if (iVar2 == 1) {
            iVar2 = *(int *)(this_ + 0xc);
            FUN_004fcec0(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(iVar2 + 0x1c)), bea_arg(*(undefined4 *)(iVar2 + 0x20)), bea_arg(*(undefined4 *)(iVar2 + 0x24)), bea_arg(*(undefined4 *)(iVar2 + 0x28)));
          }
          else if (iVar2 == 2) {
            iVar2 = *(int *)(this_ + 0xc);
            FUN_004fce40(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(iVar2 + 0x1c)), bea_arg(*(undefined4 *)(iVar2 + 0x20)), bea_arg(*(undefined4 *)(iVar2 + 0x24)), bea_arg(*(undefined4 *)(iVar2 + 0x28)));
          }
        }
      }
    }
    bVar1 = false;
    if (*(int *)(*(int *)((int)*(void **)(this_ + 8) + 0x164) + 0x19c) != 0) {
      iVar2 = FUN_004fd760(bea_arg(*(void **)(this_ + 8)));
      if (iVar2 != 0) {
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
        iVar2 = *(int *)(this_ + 8);
        local_54 = *(float *)(this_ + 0x4c);
        local_50 = *(float *)(this_ + 0x34) - *(float *)(iVar2 + 0x1c);
        local_4c = *(float *)(this_ + 0x38) - *(float *)(iVar2 + 0x20);
        local_48 = *(float *)(this_ + 0x3c) - *(float *)(iVar2 + 0x24);
        FUN_004062d0(bea_arg(&local_30), bea_arg(local_54), bea_arg(*(undefined4 *)(this_ + 0x58)), bea_arg(0));
        this_01 = *(void **)(this_ + 8);
        // class 19: the asm's order (3 sums)
        local_38 = local_8 * local_48 + local_c * local_4c + local_10 * local_50 +
                   *(float *)((int)this_01 + 0x24);
        local_3c = local_18 * local_48 + local_1c * local_4c + local_20 * local_50 +
                   *(float *)((int)this_01 + 0x20);
        local_40 = local_28 * local_48 + local_2c * local_4c + local_30 * local_50 +
                   *(float *)((int)this_01 + 0x1c);
        FUN_004fb650(bea_arg(this_01), bea_arg(*(undefined4 *)(this_ + 0xc)), bea_arg(&local_40));
        bVar1 = true;
      }
    }
    fVar3 = (float10)bea_vcall<float10>(this_, 0xc);
    if (bVar1) {
      fVar3 = (float10)0.0f;
    }
    local_54 = (float)((float10)DAT_00672fd0 + fVar3);
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&local_54), bea_arg(0), bea_arg(0), bea_arg(param_1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fec60, ap_004fec60));
