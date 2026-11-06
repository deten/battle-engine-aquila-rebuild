// auto-ported from 00445900_vslot9.c (CDiveBomberAI::vslot9, 460 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDiveBomberAI;
#define DAT_008a9d3c GLOBAL_AT(int, 0x008a9d3c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef float10 (BEA_THISCALL* FUN_00445ad0_t)(uint32_t);
static const bea_guard<FUN_00445ad0_t> FUN_00445ad0 = {(FUN_00445ad0_t)0x00445ad0};
typedef float10 (BEA_THISCALL* FUN_00445f40_t)(uint32_t);
static const bea_guard<FUN_00445f40_t> FUN_00445f40 = {(FUN_00445f40_t)0x00445f40};
typedef float10 (BEA_THISCALL* FUN_00446150_t)(uint32_t);
static const bea_guard<FUN_00446150_t> FUN_00446150 = {(FUN_00446150_t)0x00446150};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_004fb840_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb840_t> FUN_004fb840 = {(FUN_004fb840_t)0x004fb840};
typedef undefined4 (BEA_THISCALL* FUN_004fda10_t)(uint32_t);
static const bea_guard<FUN_004fda10_t> FUN_004fda10 = {(FUN_004fda10_t)0x004fda10};

static void BEA_THISCALL ap_00445900(CDiveBomberAI * this_, float param_1)
{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  float10 fVar7;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  CDiveBomberAI * &local_4 = *reinterpret_cast<CDiveBomberAI * *>(bea_frame_ + 0x10 - 0x4);
  if (*(int *)(this_ + 0x20) == 0) {
    return;
  }
  if ((*(byte *)((int)*(void **)(this_ + 8) + 0x2c) & 4) != 0) {
    return;
  }
  bVar5 = false;
  local_4 = this_;
  iVar6 = FUN_004fda10(bea_arg(*(void **)(this_ + 8)));
  if (iVar6 == 0) {
    bea_vcall<uint32_t>(this_, 0x10);
  }
  else if (((DAT_008a9d3c != 0) && (iVar6 = *(int *)(DAT_008a9d3c + 0x1c), iVar6 != 0)) &&
          (piVar1 = *(int **)(this_ + 8), piVar1[0x4e] == *(int *)(iVar6 + 0x138))) {
    fVar2 = *(float *)(iVar6 + 0x1c) - bea_fcast<float>(piVar1[7]);
    fVar4 = *(float *)(iVar6 + 0x20) - bea_fcast<float>(piVar1[8]);
    fVar3 = *(float *)(iVar6 + 0x24) - bea_fcast<float>(piVar1[9]);
    local_4 = (CDiveBomberAI *)(uintptr_t)bea_piece32(SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2));
    if (bea_fcast<float>(local_4) <= 90.0f) {
      bea_vcall<uint32_t>(this_, 0x10);
      if ((bea_fcast<float>(local_4) < 15.0f) && (*(int *)(this_ + 0xc) == 0)) {
        bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x100);
      }
    }
    else {
      bea_vcall<uint32_t>(piVar1, 0xf4, *(undefined4 *)(iVar6 + 0x1c),*(undefined4 *)(iVar6 + 0x20),
                 *(undefined4 *)(iVar6 + 0x24),*(undefined4 *)(iVar6 + 0x28),0);
      bVar5 = true;
    }
  }
  if (*(int *)(this_ + 0xc) == 0) {
    if (!bVar5) goto LAB_00445a6c;
  }
  else {
    FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(*(int *)(this_ + 0xc)));
    if (*(int *)(*(int *)(this_ + 8) + 0x140) != 0) {
      iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(this_ + 8) + 0x140) + 0xa0) + 0x18);
      if (((*(float *)(iVar6 + 0x3c) * 0.025f == 0.0f) || (*(int *)(iVar6 + 0x50) != 0)) ||
         (*(int *)(iVar6 + 0x6c) != 0)) {
        if ((*(uint *)(*(int *)(this_ + 0xc) + 0x34) & 0x400) == 0) {
          *(undefined4 *)(this_ + 0x60) = 0;
        }
        else {
          *(undefined4 *)(this_ + 0x60) = 2;
        }
      }
      else {
        *(undefined4 *)(this_ + 0x60) = 1;
      }
    }
LAB_00445a6c:
    iVar6 = *(int *)(this_ + 0x60);
    if (iVar6 == 0) {
      fVar7 = bea_fcast<float10>(FUN_00445ad0(bea_arg(this_)));
      goto LAB_00445a99;
    }
    if (iVar6 == 1) {
      fVar7 = bea_fcast<float10>(FUN_00445f40(bea_arg(this_)));
      goto LAB_00445a99;
    }
    if (iVar6 == 2) {
      fVar7 = bea_fcast<float10>(FUN_00446150(bea_arg(this_)));
      goto LAB_00445a99;
    }
  }
  fVar7 = bea_fcast<float10>(param_1);
LAB_00445a99:
  local_4 = (CDiveBomberAI *)(uintptr_t)bea_piece32(bea_fcast<float>((bea_fcast<float10>(DAT_00672fd0) + fVar7)));
  FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&local_4), bea_arg(0), bea_arg(0), bea_arg(param_1));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00445900, ap_00445900));
