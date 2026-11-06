// auto-ported from 004f1050_vslot50.c (CTentacle::vslot50, 456 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x3e0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CTentacle;
typedef char CUnit;
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
typedef undefined4 (BEA_THISCALL* CUnit__vslot50_t)(uint32_t);
static const bea_guard<CUnit__vslot50_t> CUnit__vslot50 = {(CUnit__vslot50_t)0x004fd140};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef uint32_t (BEA_THISCALL* FUN_004fcfe0_t)(uint32_t);
static const bea_guard<FUN_004fcfe0_t> FUN_004fcfe0 = {(FUN_004fcfe0_t)0x004fcfe0};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};

static undefined4 BEA_THISCALL ap_004f1050(CTentacle * this_)
{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;

  alignas(16) uint8_t bea_frame_[0x3e0] = {};   // the original stack frame (emulate_frame)
  undefined ** &local_3d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x3e0 - 0x3d8);
  float &local_3d4 = *reinterpret_cast<float *>(bea_frame_ + 0x3e0 - 0x3d4);
  float &local_3d0 = *reinterpret_cast<float *>(bea_frame_ + 0x3e0 - 0x3d0);
  float &local_3cc = *reinterpret_cast<float *>(bea_frame_ + 0x3e0 - 0x3cc);
  undefined4 &local_338 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x338);
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x3e0 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x18);
  CTentacle * &local_14 = *reinterpret_cast<CTentacle * *>(bea_frame_ + 0x3e0 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x4);
  iVar2 = CUnit__vslot50(bea_arg((CUnit *)this_));
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(this_ + 0x304) = *(undefined4 *)(*(int *)(this_ + 0x70) + 0xe8);
  piVar3 = (int *)FUN_0050ff10(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xe8)));
  FUN_0048dcf0(bea_arg(&local_3d8));
  local_3d8 = ((void*)0x005d8c80);
  local_c = 0;
  local_4 = 0;
  local_8 = 0;
  iVar2 = *(int *)(*(int *)(this_ + 0x164) + 0xe8);
  piVar1 = (int *)*DAT_008553f8;
  iVar4 = 0;
  DAT_008553f8[2] = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = *piVar1;
  }
  while (BEA_LOOP_GUARD((local_1c != 0))) {
    if (iVar4 == iVar2) goto LAB_004f1122;
    iVar4 = iVar4 + 1;
    piVar1 = *(int **)(DAT_008553f8[2] + 4);
    DAT_008553f8[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      local_1c = 0;
    }
    else {
      local_1c = *piVar1;
    }
  }
  local_1c = 0;
LAB_004f1122:
  local_338 = *(undefined4 *)(this_ + 0x138);
  local_10 = 0;
  local_18 = 0;
  local_14 = this_;
  if (piVar3 != (int *)0x0) {
    local_3d4 = *(float *)(this_ + 0x40) * *(float *)(this_ + 0x2d8) +
                *(float *)(this_ + 0x44) * *(float *)(this_ + 0x2dc) +
                *(float *)(this_ + 0x2d4) * *(float *)(this_ + 0x3c) + *(float *)(this_ + 0x1c);
    local_3d0 = *(float *)(this_ + 0x4c) * *(float *)(this_ + 0x2d4) +
                *(float *)(this_ + 0x54) * *(float *)(this_ + 0x2dc) +
                *(float *)(this_ + 0x50) * *(float *)(this_ + 0x2d8) + *(float *)(this_ + 0x20);
    local_3cc = *(float *)(this_ + 0x5c) * *(float *)(this_ + 0x2d4) +
                *(float *)(this_ + 100) * *(float *)(this_ + 0x2dc) +
                *(float *)(this_ + 0x60) * *(float *)(this_ + 0x2d8) + *(float *)(this_ + 0x24);
    bea_vcall<uint32_t>(piVar3, 0x24, &local_3d8);
  }
  FUN_004fcfe0(bea_arg(this_));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f1050, ap_004f1050));
