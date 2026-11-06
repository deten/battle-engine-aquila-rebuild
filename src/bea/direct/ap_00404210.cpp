// auto-ported from 00404210_vslot66.c (CAnimal::vslot66, 953 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CAnimal;
typedef char Vec3;
#define DAT_00660134 GLOBAL_AT(int, 0x00660134)
#define DAT_00660130 GLOBAL_AT(int, 0x00660130)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef undefined4 (BEA_THISCALL* FUN_00492ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00492ca0_t> FUN_00492ca0 = {(FUN_00492ca0_t)0x00492ca0};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static void BEA_THISCALL ap_00404210(CAnimal * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  CAnimal *pCVar7;
  int iVar8;
  CAnimal *pCVar9;
  float10 fVar10;
  float10 fVar11;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x28);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x1c);
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x14);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x4);
  *(undefined4 *)(this_ + 0x8c) = *(undefined4 *)(this_ + 0x1c);
  *(undefined4 *)(this_ + 0x90) = *(undefined4 *)(this_ + 0x20);
  *(undefined4 *)(this_ + 0x94) = *(undefined4 *)(this_ + 0x24);
  *(undefined4 *)(this_ + 0x98) = *(undefined4 *)(this_ + 0x28);
  iVar6 = *(int *)(this_ + 0xd0);
  pCVar9 = this_ + 0x3c;
  pCVar7 = this_ + 0x9c;
  for (iVar8 = 0xc; BEA_LOOP_GUARD((iVar8 != 0)); iVar8 = iVar8 + -1) {
    *(float *)pCVar7 = *(float *)pCVar9;
    pCVar9 = pCVar9 + 4;
    pCVar7 = pCVar7 + 4;
  }
  if ((iVar6 == 0) || (iVar6 = _rand(), iVar6 % 0x32 == 1)) {
    iVar6 = _rand();
    iVar6 = iVar6 % DAT_00660134;
    for (pCVar9 = DAT_00660130; BEA_LOOP_GUARD(((pCVar7 = pCVar9, 0 < iVar6 && (pCVar7 = (CAnimal *)0x0, pCVar9 != (CAnimal *)0x0))));
        pCVar9 = *(CAnimal **)(pCVar9 + 0xcc)) {
      iVar6 = iVar6 + -1;
    }
    if (pCVar7 != this_) {
      *(CAnimal **)(this_ + 0xd0) = pCVar7;
    }
  }
  iVar6 = *(int *)(this_ + 0xd0);
  if (iVar6 == 0) goto LAB_0040458c;
  local_10 = *(float *)(this_ + 0x40);
  local_c = *(float *)(this_ + 0x50);
  local_8 = *(float *)(this_ + 0x60);
  local_4 = *(undefined4 *)(iVar6 + 0x28);
  fVar11 = (float10)fpatan((float10)*(float *)(iVar6 + 0x1c) - (float10)*(float *)(this_ + 0x1c),
                           (float10)*(float *)(iVar6 + 0x20) - (float10)*(float *)(this_ + 0x20));
  local_28 = (float)-fVar11;
  fVar11 = (float10)fpatan((float10)local_10,(float10)local_c);
  fVar1 = (float)-fVar11;
  local_14 = SQRT(local_8 * local_8 + local_c * local_c + local_10 * local_10);
  if (local_14 <= 0.0f) {
    local_1c = 0.0f;
  }
  else {
    fVar11 = _CIasin((float10)local_8 / (float10)local_14);
    local_1c = (float)fVar11;
  }
  FUN_00401ec0(bea_arg(&local_10), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  FUN_00401ec0(bea_arg(&local_10), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
  fVar2 = ABS(local_28 - fVar1);
  if (0.03f <= fVar2) {
    if (local_28 <= fVar1) {
      if (fVar2 <= 3.1415927f) goto LAB_004043c5;
      local_28 = fVar1 + 0.03f;
    }
    else if (3.1415927f < fVar2) {
LAB_004043c5:
      local_28 = fVar1 - 0.03f;
    }
    else {
      local_28 = fVar1 + 0.03f;
    }
  }
  iVar6 = _rand();
  if (iVar6 % 100 == 0) {
    iVar6 = _rand();
    *(float *)(this_ + 0xdc) = (float)iVar6 * 0.5f * 3.051851e-05f - 0.25f;
  }
  if (-30.0f < *(float *)(this_ + 0x24)) {
    *(undefined4 *)(this_ + 0xdc) = 0xbe800000;
  }
  if (*(float *)(this_ + 0x24) < -60.0f) {
    *(undefined4 *)(this_ + 0xdc) = 0x3e800000;
  }
  fVar11 = (float10)local_1c;
  if ((float10)*(float *)(this_ + 0xdc) < fVar11) {
    fVar11 = fVar11 - (float10)0.01f;
  }
  if (fVar11 < (float10)*(float *)(this_ + 0xdc)) {
    fVar11 = fVar11 + (float10)0.01f;
  }
  fVar10 = (float10)fcos((float10)local_28);
  fVar1 = (float)fVar10;
  fVar10 = (float10)fsin((float10)local_28);
  fVar2 = (float)fVar10;
  fVar10 = (float10)fcos((float10)0.0f);
  fVar3 = (float)fVar10;
  fVar10 = (float10)fsin((float10)0.0f);
  fVar4 = (float)fVar10;
  fVar10 = (float10)fcos(fVar11);
  fVar5 = (float)fVar10;
  fVar11 = (float10)fsin(fVar11);
  *(float *)(this_ + 0x3c) =
       (float)((float10)fVar3 * (float10)fVar1 - fVar11 * (float10)fVar4 * (float10)fVar2);
  *(float *)(this_ + 0x40) = -(fVar5 * fVar2);
  local_14 = (float)(fVar11 * (float10)fVar3);
  *(float *)(this_ + 0x44) = local_14 * fVar2 + fVar4 * fVar1;
  *(float *)(this_ + 0x4c) =
       (float)(fVar11 * (float10)fVar4 * (float10)fVar1 + (float10)fVar3 * (float10)fVar2);
  *(float *)(this_ + 0x50) = fVar5 * fVar1;
  *(float *)(this_ + 0x54) = fVar4 * fVar2 - local_14 * fVar1;
  *(float *)(this_ + 0x5c) = -(fVar5 * fVar4);
  *(float *)(this_ + 0x60) = (float)fVar11;
  *(float *)(this_ + 100) = fVar5 * fVar3;
  local_10 = *(float *)(this_ + 0x40) * 0.03f;
  local_c = *(float *)(this_ + 0x50) * 0.03f;
  local_8 = *(float *)(this_ + 0x60) * 0.03f;
  *(float *)(this_ + 0x7c) = local_10;
  *(float *)(this_ + 0x80) = local_c;
  *(float *)(this_ + 0x84) = local_8;
  *(undefined4 *)(this_ + 0x88) = local_4;
  *(float *)(this_ + 0x1c) = *(float *)(this_ + 0x1c) + *(float *)(this_ + 0x7c);
  *(float *)(this_ + 0x20) = *(float *)(this_ + 0x80) + *(float *)(this_ + 0x20);
  *(float *)(this_ + 0x24) = *(float *)(this_ + 0x84) + *(float *)(this_ + 0x24);
LAB_0040458c:
  FUN_00492ca0(bea_arg(this_ + 0xc), bea_arg(this_ + 0x1c));
  if (((byte)this_[0x2c] & 1) == 0) {
    local_14 = -1.0;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&local_14), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_00404210.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
