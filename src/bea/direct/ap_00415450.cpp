// auto-ported from 00415450_vslot96.c (CBoat::vslot96, 813 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x410: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CBoat;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
typedef int (BEA_THISCALL* FUN_00401fa0_t)(uint32_t);
static const bea_guard<FUN_00401fa0_t> FUN_00401fa0 = {(FUN_00401fa0_t)0x00401fa0};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};

static void BEA_THISCALL ap_00415450(CBoat * this_)
{
  CBoat *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  int *piVar11;
  int iVar12;

  alignas(16) uint8_t bea_frame_[0x410] = {};   // the original stack frame (emulate_frame)
  float &local_404 = *reinterpret_cast<float *>(bea_frame_ + 0x410 - 0x404);
  undefined ** &local_3d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x410 - 0x3d8);
  float &fStack_3d4 = *reinterpret_cast<float *>(bea_frame_ + 0x410 - 0x3d4);
  float &fStack_3d0 = *reinterpret_cast<float *>(bea_frame_ + 0x410 - 0x3d0);
  float &fStack_3cc = *reinterpret_cast<float *>(bea_frame_ + 0x410 - 0x3cc);
  undefined4 &uStack_338 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x338);
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x410 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x4);
  if (*(int *)(this_ + 0x164) != 0) {
    uVar7 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar7 = uVar7 & 0x8000ffff;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xffff0000) + 1;
    }
    if ((0.7f < (float)(int)uVar7 * 1.5258789e-05f) && (iVar8 = FUN_00401fa0(bea_arg(this_)), iVar8 != 0)) {
      FUN_0048dcf0(bea_arg(&local_3d8));
      local_3d8 = ((void*)0x005d8c80);
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_4 = 0;
      local_8 = 0;
      uVar7 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      pCVar1 = this_ + 8;
      iVar8 = bea_vcall<uint32_t>(pCVar1, 0x54);
      uVar7 = uVar7 & 0x8000ffff;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffff0000) + 1;
      }
      local_404 = ((float)(int)uVar7 * 3.8146973e-06f + 0.75f) * *(float *)(iVar8 + 0x10);
      uVar7 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      uVar7 = uVar7 & 0x8000ffff;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffff0000) + 1;
      }
      if ((float)(int)uVar7 * 1.5258789e-05f <= 0.5f) {
        local_404 = -local_404;
      }
      uVar7 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      iVar8 = bea_vcall<uint32_t>(pCVar1, 0x54);
      uVar7 = uVar7 & 0x8000ffff;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffff0000) + 1;
      }
      fVar2 = *(float *)(iVar8 + 0x14);
      iVar8 = bea_vcall<uint32_t>(pCVar1, 0x54);
      fVar3 = *(float *)(iVar8 + 0x14);
      uVar9 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      iVar8 = bea_vcall<uint32_t>(pCVar1, 0x54);
      uVar9 = uVar9 & 0x8000ffff;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffff0000) + 1;
      }
      fVar4 = *(float *)(iVar8 + 0x18);
      iVar8 = bea_vcall<uint32_t>(pCVar1, 0x54);
      fVar5 = *(float *)(iVar8 + 0x18);
      pfVar10 = (float *)bea_vcall<uint32_t>(pCVar1, 0x54);
      local_404 = local_404 + *pfVar10;
      fVar3 = ((float)(int)uVar7 * fVar2 * 2.2888184e-05f - fVar3 * 0.75f) + pfVar10[1];
      fVar2 = ((float)(int)uVar9 * fVar4 * 1.5258789e-05f - fVar5 * 0.5f) + pfVar10[2];
      fStack_3d4 = local_404 * *(float *)(this_ + 0x3c) +
                   fVar3 * *(float *)(this_ + 0x40) + fVar2 * *(float *)(this_ + 0x44) +
                   *(float *)(this_ + 0x1c);
      fStack_3d0 = local_404 * *(float *)(this_ + 0x4c) +
                   fVar3 * *(float *)(this_ + 0x50) + fVar2 * *(float *)(this_ + 0x54) +
                   *(float *)(this_ + 0x20);
      fStack_3cc = local_404 * *(float *)(this_ + 0x5c) +
                   fVar3 * *(float *)(this_ + 0x60) + fVar2 * *(float *)(this_ + 100) +
                   *(float *)(this_ + 0x24);
      piVar11 = (int *)FUN_0050ff10(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xec)));
      if (piVar11 != (int *)0x0) {
        uStack_338 = *(undefined4 *)(this_ + 0x138);
        iVar8 = *(int *)(*(int *)(this_ + 0x164) + 0xec);
        iVar12 = 0;
        piVar6 = (int *)*DAT_008553f8;
        DAT_008553f8[2] = (int)piVar6;
        if (piVar6 == (int *)0x0) {
          local_1c = 0;
        }
        else {
          local_1c = *piVar6;
        }
        while (BEA_LOOP_GUARD((local_1c != 0))) {
          if (iVar12 == iVar8) goto LAB_0041572e;
          iVar12 = iVar12 + 1;
          piVar6 = *(int **)(DAT_008553f8[2] + 4);
          DAT_008553f8[2] = (int)piVar6;
          if (piVar6 == (int *)0x0) {
            local_1c = 0;
          }
          else {
            local_1c = *piVar6;
          }
        }
        local_1c = 0;
LAB_0041572e:
        local_18 = 2;
        if (fStack_3cc < DAT_006fbdfc) {
          fStack_3cc = DAT_006fbdfc;
        }
        fStack_3cc = fStack_3cc - 0.15f;
        bea_vcall<uint32_t>(piVar11, 0x24, &local_3d8);
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00415450, ap_00415450));
