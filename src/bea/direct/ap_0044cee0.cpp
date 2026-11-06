// auto-ported from 0044cee0_FUN_0044cee0.c (FUN_0044cee0, 738 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x3f0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};

static void BEA_THISCALL ap_0044cee0(void * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  int *piVar12;
  int iVar13;

  alignas(16) uint8_t bea_frame_[0x3f0] = {};   // the original stack frame (emulate_frame)
  float &fStack_3ec = *reinterpret_cast<float *>(bea_frame_ + 0x3f0 - 0x3ec);
  float &fStack_3e8 = *reinterpret_cast<float *>(bea_frame_ + 0x3f0 - 0x3e8);
  float &fStack_3e4 = *reinterpret_cast<float *>(bea_frame_ + 0x3f0 - 0x3e4);
  float &fStack_3e0 = *reinterpret_cast<float *>(bea_frame_ + 0x3f0 - 0x3e0);
  undefined ** &local_3d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x3f0 - 0x3d8);
  float &fStack_3d4 = *reinterpret_cast<float *>(bea_frame_ + 0x3f0 - 0x3d4);
  float &fStack_3d0 = *reinterpret_cast<float *>(bea_frame_ + 0x3f0 - 0x3d0);
  float &fStack_3cc = *reinterpret_cast<float *>(bea_frame_ + 0x3f0 - 0x3cc);
  float &fStack_3c8 = *reinterpret_cast<float *>(bea_frame_ + 0x3f0 - 0x3c8);
  undefined4 &uStack_338 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x338);
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x3f0 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x4);
  if (*(int *)((int)this_ + 0xe4) != 0) {
    uVar7 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar7 = uVar7 & 0x8000ffff;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xffff0000) + 1;
    }
    if (0.75f < (float)(int)uVar7 * 1.5258789e-05f) {
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
      piVar12 = (int *)((int)this_ + 8);
      iVar8 = bea_vcall<uint32_t>(piVar12, 0x54);
      uVar7 = uVar7 & 0x8000ffff;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffff0000) + 1;
      }
      fVar1 = *(float *)(iVar8 + 0x10);
      iVar8 = bea_vcall<uint32_t>(piVar12, 0x54);
      fVar2 = *(float *)(iVar8 + 0x10);
      uVar9 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      iVar8 = bea_vcall<uint32_t>(piVar12, 0x54);
      uVar9 = uVar9 & 0x8000ffff;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffff0000) + 1;
      }
      fVar3 = *(float *)(iVar8 + 0x14);
      iVar8 = bea_vcall<uint32_t>(piVar12, 0x54);
      fVar4 = *(float *)(iVar8 + 0x14);
      uVar10 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      iVar8 = bea_vcall<uint32_t>(piVar12, 0x54);
      uVar10 = uVar10 & 0x8000ffff;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffff0000) + 1;
      }
      fVar5 = *(float *)(iVar8 + 0x18);
      iVar8 = bea_vcall<uint32_t>(piVar12, 0x54);
      fStack_3e0 = (float)(int)uVar10 * fVar5 * 1.5258789e-05f - *(float *)(iVar8 + 0x18) * 0.5f;
      pfVar11 = (float *)bea_vcall<uint32_t>(piVar12, 0x54);
      fVar1 = ((float)(int)uVar7 * fVar1 * 1.5258789e-05f - fVar2 * 0.5f) + *pfVar11;
      fVar3 = ((float)(int)uVar9 * fVar3 * 1.5258789e-05f - fVar4 * 0.5f) + pfVar11[1];
      fVar2 = fStack_3e0 + pfVar11[2];
      fStack_3e8 = fVar1 * *(float *)((int)this_ + 0x3c) +
                   fVar3 * *(float *)((int)this_ + 0x40) + fVar2 * *(float *)((int)this_ + 0x44);
      fStack_3e4 = fVar1 * *(float *)((int)this_ + 0x4c) +
                   fVar3 * *(float *)((int)this_ + 0x50) + fVar2 * *(float *)((int)this_ + 0x54);
      fStack_3d4 = fStack_3e8 + *(float *)((int)this_ + 0x1c);
      fStack_3d0 = fStack_3e4 + *(float *)((int)this_ + 0x20);
      fStack_3cc = fVar1 * *(float *)((int)this_ + 0x5c) +
                   fVar3 * *(float *)((int)this_ + 0x60) + fVar2 * *(float *)((int)this_ + 100) +
                   *(float *)((int)this_ + 0x24);
      uStack_338 = *(undefined4 *)((int)this_ + 0xec);
      fStack_3c8 = fStack_3ec;
      if (*(int **)((int)this_ + 0x30) != (int *)0x0) {
        pfVar11 = (float *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x20, &fStack_3e8,0);
        fStack_3d4 = *pfVar11;
        fStack_3d0 = pfVar11[1];
        fStack_3cc = pfVar11[2];
        fStack_3c8 = pfVar11[3];
      }
      piVar12 = (int *)FUN_0050ff10(bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0xe4) + 8)));
      if (piVar12 != (int *)0x0) {
        iVar13 = 0;
        piVar6 = (int *)*DAT_008553f8;
        iVar8 = *(int *)(*(int *)((int)this_ + 0xe4) + 8);
        DAT_008553f8[2] = (int)piVar6;
        if (piVar6 == (int *)0x0) {
          local_1c = 0;
        }
        else {
          local_1c = *piVar6;
        }
        while (BEA_LOOP_GUARD((local_1c != 0))) {
          if (iVar13 == iVar8) goto LAB_0044d199;
          iVar13 = iVar13 + 1;
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
LAB_0044d199:
        local_18 = 2;
        bea_vcall<uint32_t>(piVar12, 0x24, &local_3d8);
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044cee0, ap_0044cee0));
