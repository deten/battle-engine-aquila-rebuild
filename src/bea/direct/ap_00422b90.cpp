// auto-ported from 00422b90_vslot9.c (CCarverAI::vslot9, 540 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCarverAI;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_00422760_t)(uint32_t);
static const bea_guard<FUN_00422760_t> FUN_00422760 = {(FUN_00422760_t)0x00422760};
typedef uint32_t (BEA_THISCALL* FUN_004227a0_t)(uint32_t);
static const bea_guard<FUN_004227a0_t> FUN_004227a0 = {(FUN_004227a0_t)0x004227a0};
typedef uint32_t (BEA_THISCALL* FUN_00422db0_t)(uint32_t);
static const bea_guard<FUN_00422db0_t> FUN_00422db0 = {(FUN_00422db0_t)0x00422db0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef undefined4 (BEA_THISCALL* FUN_004fb670_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb670_t> FUN_004fb670 = {(FUN_004fb670_t)0x004fb670};
typedef undefined4 (BEA_THISCALL* FUN_004fda10_t)(uint32_t);
static const bea_guard<FUN_004fda10_t> FUN_004fda10 = {(FUN_004fda10_t)0x004fda10};

static void BEA_THISCALL ap_00422b90(CCarverAI * this_, undefined4 param_1)
{
  int *piVar1;
  int *this_00;
  uint uVar2;
  int iVar3;
  float10 fVar4;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  float &fStack_24 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x24);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x18);
  undefined4 &uStack_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x14);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x8);
  if ((*(byte *)(*(int *)(this_ + 8) + 0x2c) & 4) == 0) {
    FUN_00422db0(bea_arg(this_));
    bea_vcall<uint32_t>(this_, 0xc);
    piVar1 = *(int **)(this_ + 0xc);
    this_00 = *(int **)(this_ + 8);
    if (piVar1 == (int *)0x0) {
      FUN_004227a0(bea_arg(this_00));
      *(undefined4 *)(this_ + 0x60) = 0;
      iVar3 = bea_vcall<uint32_t>(this_, 0x14);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_004fda10(bea_arg(*(void **)(this_ + 8)));
      if (iVar3 == 0) {
        bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x100);
      }
    }
    else {
      fStack_24 = SQRT((bea_fcast<float>(piVar1[8]) - bea_fcast<float>(this_00[8])) *
                       (bea_fcast<float>(piVar1[8]) - bea_fcast<float>(this_00[8])) +
                       (bea_fcast<float>(piVar1[9]) - bea_fcast<float>(this_00[9])) *
                       (bea_fcast<float>(piVar1[9]) - bea_fcast<float>(this_00[9])) +
                       (bea_fcast<float>(piVar1[7]) - bea_fcast<float>(this_00[7])) *
                       (bea_fcast<float>(piVar1[7]) - bea_fcast<float>(this_00[7])));
      fVar4 = (float10)bea_vcall<float10>(this_00, 0x40);
      fStack_24 = (float)((float10)fStack_24 - fVar4);
      fVar4 = (float10)bea_vcall<float10>(piVar1, 0x40);
      if (*(int *)(this_ + 0x60) == 0) {
        if ((float10)40.0f < (float10)fStack_24 - fVar4) {
          *(undefined4 *)(this_ + 0x60) = 1;
        }
        iVar3 = 2;
      }
      else if ((float10)15.0f <= (float10)fStack_24 - fVar4) {
        iVar3 = FUN_004fb670(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(this_ + 0xc)));
      }
      else {
        iVar3 = 2;
        *(undefined4 *)(this_ + 0x60) = 0;
      }
      if (*(int *)(this_ + 0x60) == 0) {
        FUN_004227a0(bea_arg(*(void **)(this_ + 8)));
      }
      else {
        FUN_00422760(bea_arg(*(void **)(this_ + 8)));
      }
      if ((iVar3 == 0) || (iVar3 == 1)) {
        iVar3 = *(int *)(this_ + 0xc);
        bea_vcall<uint32_t>(*(int **)(this_ + 8), 0xf4, *(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x20),
                   *(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x28),0);
      }
      else if (iVar3 == 2) {
        iVar3 = *(int *)(this_ + 0xc);
        piVar1 = *(int **)(this_ + 8);
        fStack_c = *(float *)(iVar3 + 0x20) - bea_fcast<float>(piVar1[8]);
        fStack_8 = *(float *)(iVar3 + 0x24) - bea_fcast<float>(piVar1[9]);
        fStack_20 = bea_fcast<float>(piVar1[7]) - (*(float *)(iVar3 + 0x1c) - bea_fcast<float>(piVar1[7]));
        fStack_1c = bea_fcast<float>(piVar1[8]) - fStack_c;
        fStack_18 = bea_fcast<float>(piVar1[9]) - fStack_8;
        bea_vcall<uint32_t>(piVar1, 0xf4, fStack_20,fStack_1c,fStack_18,uStack_14,0);
      }
    }
    uVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar2 = uVar2 & 0x8000ffff;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffff0000) + 1;
    }
    fStack_24 = (float)(int)uVar2 * 3.8146973e-06f + 0.25f + DAT_00672fd0;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&fStack_24), bea_arg(0), bea_arg(0), bea_arg(param_1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00422b90, ap_00422b90));
