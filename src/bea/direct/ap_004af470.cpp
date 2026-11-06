// auto-ported from 004af470_FUN_004af470.c (FUN_004af470, 1848 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xa0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Mat34;
typedef char Vec3;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70 ((char*)0x0062fe70)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef uint32_t (BEA_THISCALL* FUN_0044c1c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044c1c0_t> FUN_0044c1c0 = {(FUN_0044c1c0_t)0x0044c1c0};
typedef uint32_t (BEA_THISCALL* FUN_004b1eb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b1eb0_t> FUN_004b1eb0 = {(FUN_004b1eb0_t)0x004b1eb0};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_004af470(void * this_, void *param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5)
{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int iVar14;
  alignas(16) uint8_t bea_frame_[0xa0] = {};   // the original stack frame (emulate_frame)
  undefined4 * &local_98 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0xa0 - 0x98);
  int &local_94 = *reinterpret_cast<int *>(bea_frame_ + 0xa0 - 0x94);
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x90);
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x88);
  float &local_84 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x84);
  int &local_80 = *reinterpret_cast<int *>(bea_frame_ + 0xa0 - 0x80);
  int * &local_7c = *reinterpret_cast<int * *>(bea_frame_ + 0xa0 - 0x7c);
  int &local_78 = *reinterpret_cast<int *>(bea_frame_ + 0xa0 - 0x78);
  int &local_74 = *reinterpret_cast<int *>(bea_frame_ + 0xa0 - 0x74);
  int &local_70 = *reinterpret_cast<int *>(bea_frame_ + 0xa0 - 0x70);
  int &local_6c = *reinterpret_cast<int *>(bea_frame_ + 0xa0 - 0x6c);
  int &local_68 = *reinterpret_cast<int *>(bea_frame_ + 0xa0 - 0x68);
  undefined4 &local_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x64);
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x60);
  undefined4 &local_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x5c);
  undefined1 (&local_54)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0xa0 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x48);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x38);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x28);
  undefined1 (&local_20)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xa0 - 0x20);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xa0 - 0x10);
  iVar14 = 0;
  if (0 < *(int *)((int)this_ + 0xa8)) {
    iVar11 = 0;
    do {
      FUN_00548570(bea_arg(param_1), bea_arg(iVar11 + 0x20 + *(int *)((int)this_ + 0x134)), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(iVar11 + 0x24 + *(int *)((int)this_ + 0x134)), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(iVar11 + 0x28 + *(int *)((int)this_ + 0x134)), bea_arg(4));
      *(float *)(iVar11 + 0x28 + *(int *)((int)this_ + 0x134)) =
           -*(float *)(iVar11 + 0x28 + *(int *)((int)this_ + 0x134));
      FUN_00548570(bea_arg(param_1), bea_arg(iVar11 + 0x2c + *(int *)((int)this_ + 0x134)), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(&local_98), bea_arg(4));
      if (((int)local_98 < -2) || (param_4 <= (int)local_98)) {
        local_98 = (undefined4 *)0xffffffff;
      }
      iVar8 = 6;
      iVar5 = iVar11 + 0x30;
      do {
        iVar8 = iVar8 + -1;
        *(undefined4 *)(iVar5 + *(int *)((int)this_ + 0x134)) = 0xffffffff;
        iVar5 = iVar5 + 4;
      } while (((iVar8 != 0)));
      if (local_98 == (undefined4 *)0xffffffff) {
        *(undefined4 *)(iVar11 + 0x30 + *(int *)((int)this_ + 0x134)) = 0;
      }
      else {
        *(undefined4 **)(iVar11 + 0x30 + *(int *)((int)this_ + 0x134)) = local_98;
      }
      local_90 = -10.0;
      puVar10 = (undefined4 *)(iVar11 + *(int *)((int)this_ + 0x134));
      local_8c = 0.0;
      *puVar10 = 0xc1200000;
      local_88 = 0.0;
      puVar10[1] = 0;
      iVar14 = iVar14 + 1;
      iVar11 = iVar11 + 0x60;
      puVar10[2] = 0;
      puVar10[3] = bea_piece32(local_84);
    } while (((iVar14 < *(int *)((int)this_ + 0xa8))));
  }
  iVar14 = 0;
  if (0 < *(int *)((int)this_ + 0xb8)) {
    do {
      FUN_00548570(bea_arg(param_1), bea_arg(local_54), bea_arg(4));
      iVar14 = iVar14 + 1;
    } while (((iVar14 < *(int *)((int)this_ + 0xb8))));
  }
  iVar14 = 0;
  local_78 = 0;
  if (0 < *(int *)((int)this_ + 0xb4)) {
    do {
      iVar11 = 0;
      if (0 < *(int *)((int)this_ + 0xac)) {
        local_98 = (undefined4 *)0x0;
        do {
          FUN_0044c1c0(bea_arg((void *)(*(int *)(*(int *)((int)this_ + 0x84) + iVar14) + (int)local_98)), bea_arg(param_1));
          iVar11 = iVar11 + 1;
          local_98 = local_98 + 4;
        } while (((iVar11 < *(int *)((int)this_ + 0xac))));
      }
      iVar11 = 0;
      local_80 = 0;
      if (0 < *(int *)((int)this_ + 0xac)) {
        do {
          pfVar6 = (float *)(*(int *)(*(int *)((int)this_ + 0x84) + iVar14) + iVar11);
          *pfVar6 = *pfVar6 - *(float *)((int)this_ + 0x60);
          pfVar6[1] = pfVar6[1] - *(float *)((int)this_ + 100);
          pfVar6[2] = pfVar6[2] - *(float *)((int)this_ + 0x68);
          local_64 = *(undefined4 *)((int)this_ + 8);
          local_60 = *(undefined4 *)((int)this_ + 0x18);
          local_5c = *(undefined4 *)((int)this_ + 0x28);
          FUN_00401ec0(bea_arg(local_20), bea_arg(*(undefined4 *)((int)this_ + 4)), bea_arg(*(undefined4 *)((int)this_ + 0x14)), bea_arg(*(undefined4 *)((int)this_ + 0x24)));
          FUN_00401ec0(bea_arg(local_10), bea_arg(*(undefined4 *)this_), bea_arg(*(undefined4 *)((int)this_ + 0x10)), bea_arg(*(undefined4 *)((int)this_ + 0x20)));
          FUN_00401f10(bea_arg(&local_50), bea_arg(local_10), bea_arg(local_20), bea_arg(&local_64));
          pfVar6 = (float *)(*(int *)(*(int *)((int)this_ + 0x84) + iVar14) + iVar11);
          local_90 = local_48 * pfVar6[2] + local_50 * *pfVar6 + local_4c * pfVar6[1];
          local_8c = local_38 * pfVar6[2] + local_40 * *pfVar6 + local_3c * pfVar6[1];
          fVar3 = pfVar6[1];
          fVar4 = *pfVar6;
          *pfVar6 = local_90;
          pfVar6[1] = local_8c;
          iVar11 = iVar11 + 0x10;
          local_88 = local_28 * pfVar6[2] + local_30 * fVar4 + local_2c * fVar3;
          pfVar6[2] = local_88;
          pfVar6[3] = local_84;
          local_80 = local_80 + 1;
        } while (((local_80 < *(int *)((int)this_ + 0xac))));
      }
      local_78 = local_78 + 1;
      iVar14 = iVar14 + 4;
    } while (((local_78 < *(int *)((int)this_ + 0xb4))));
  }
  iVar14 = *(int *)((int)this_ + 0xa8);
  local_98 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar14 * 0x1e0), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x382));
  if (local_98 == (undefined4 *)0x0) {
    local_98 = (undefined4 *)0x0;
  }
  else {
    local_74 = iVar14 * 5 + -1;
  }
  local_94 = 0;
  local_78 = 0;
  if (0 < *(int *)((int)this_ + 0xb0)) {
    local_70 = 0;
    do {
      iVar11 = local_70;
      iVar14 = local_94;
      FUN_00548570(bea_arg(param_1), bea_arg(&local_68), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(&local_74), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(&local_6c), bea_arg(4));
      local_80 = 0;
      *(int *)(*(int *)((int)this_ + 0x80) + iVar11) = local_68 * 0x60 + *(int *)((int)this_ + 0x134);
      *(int *)(*(int *)((int)this_ + 0x80) + 4 + iVar11) =
           local_6c * 0x60 + *(int *)((int)this_ + 0x134);
      *(int *)(*(int *)((int)this_ + 0x80) + 8 + iVar11) =
           local_74 * 0x60 + *(int *)((int)this_ + 0x134);
      pfVar6 = (float *)(local_98 + iVar14 * 0x18);
      do {
        if (local_80 == 0) {
          local_7c = (int *)(*(int *)((int)this_ + 0x80) + iVar11);
        }
        else if (local_80 == 1) {
          local_7c = (int *)(*(int *)((int)this_ + 0x80) + 8 + iVar11);
        }
        else if (local_80 == 2) {
          local_7c = (int *)(*(int *)((int)this_ + 0x80) + 4 + iVar11);
        }
        FUN_00548570(bea_arg(param_1), bea_arg(&local_90), bea_arg(0xc));
        local_88 = -local_88;
        pfVar12 = (float *)*local_7c;
        if (*pfVar12 == -10.0) {
          *pfVar12 = local_90;
          pfVar12[1] = local_8c;
          pfVar12[2] = local_88;
          pfVar12[3] = local_84;
        }
        else if (((*pfVar12 != local_90) || (pfVar12[1] != local_8c)) || (pfVar12[2] != local_88)) {
          iVar14 = 0;
          if (0 < local_94) {
            pfVar9 = (float *)(local_98 + 0xc);
            do {
              if (((pfVar9[-4] == pfVar12[8]) && (*pfVar9 == pfVar12[0xc])) &&
                 ((pfVar9[-0xc] == local_90 &&
                  ((pfVar9[-0xb] == local_8c && (pfVar9[-10] == local_88)))))) {
                *local_7c = (iVar14 + *(int *)((int)this_ + 0xa8)) * 0x60 +
                            *(int *)((int)this_ + 0x134);
                goto LAB_004af9e7;
              }
              iVar14 = iVar14 + 1;
              pfVar9 = pfVar9 + 0x18;
            } while (((iVar14 < local_94)));
          }
          pfVar9 = pfVar6;
          for (iVar14 = 0x18; ((iVar14 != 0)); iVar14 = iVar14 + -1) {
            *pfVar9 = *pfVar12;
            pfVar12 = pfVar12 + 1;
            pfVar9 = pfVar9 + 1;
          }
          *pfVar6 = local_90;
          pfVar6[1] = local_8c;
          pfVar6[2] = local_88;
          pfVar6[3] = local_84;
          iVar14 = local_94 + *(int *)((int)this_ + 0xa8);
          local_94 = local_94 + 1;
          *local_7c = iVar14 * 0x60 + *(int *)((int)this_ + 0x134);
          pfVar6 = pfVar6 + 0x18;
          iVar11 = local_70;
        }
LAB_004af9e7:
        local_80 = local_80 + 1;
      } while (((local_80 < 3)));
      local_78 = local_78 + 1;
      local_70 = iVar11 + 0xc;
    } while (((local_78 < *(int *)((int)this_ + 0xb0))));
    if (0 < local_94) {
      puVar10 = *(undefined4 **)((int)this_ + 0x134);
      iVar14 = local_94 + *(int *)((int)this_ + 0xa8);
      puVar7 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar14 * 0x60), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x3dc));
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        local_74 = iVar14 + -1;
      }
      *(undefined4 **)((int)this_ + 0x134) = puVar7;
      puVar13 = puVar10;
      for (iVar14 = (*(int *)((int)this_ + 0xa8) * 3 & 0x7ffffffU) << 3; ((iVar14 != 0));
          iVar14 = iVar14 + -1) {
        *puVar7 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar7 = puVar7 + 1;
      }
      for (iVar14 = 0; ((iVar14 != 0)); iVar14 = iVar14 + -1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar13;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar7 = local_98;
      puVar13 = (undefined4 *)(*(int *)((int)this_ + 0xa8) * 0x60 + *(int *)((int)this_ + 0x134));
      for (iVar14 = (local_94 * 3 & 0x7ffffffU) << 3; ((iVar14 != 0)); iVar14 = iVar14 + -1) {
        *puVar13 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar13 = puVar13 + 1;
      }
      for (iVar14 = 0; ((iVar14 != 0)); iVar14 = iVar14 + -1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      iVar14 = 0;
      if (0 < *(int *)((int)this_ + 0xb0)) {
        iVar11 = 0;
        do {
          *(int *)(*(int *)((int)this_ + 0x80) + iVar11) =
               ((*(int *)(*(int *)((int)this_ + 0x80) + iVar11) - (int)puVar10) / 0x60) * 0x60 +
               *(int *)((int)this_ + 0x134);
          *(int *)(*(int *)((int)this_ + 0x80) + 4 + iVar11) =
               ((*(int *)(*(int *)((int)this_ + 0x80) + 4 + iVar11) - (int)puVar10) / 0x60) * 0x60 +
               *(int *)((int)this_ + 0x134);
          piVar1 = (int *)(*(int *)((int)this_ + 0x80) + 8 + iVar11);
          piVar2 = (int *)(*(int *)((int)this_ + 0x80) + 8 + iVar11);
          iVar11 = iVar11 + 0xc;
          iVar14 = iVar14 + 1;
          *piVar2 = ((*piVar1 - (int)puVar10) / 0x60) * 0x60 + *(int *)((int)this_ + 0x134);
        } while (((iVar14 < *(int *)((int)this_ + 0xb0))));
      }
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar10));
      *(int *)((int)this_ + 0xa8) = *(int *)((int)this_ + 0xa8) + local_94;
    }
  }
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(local_98));
  return FUN_004b1eb0(bea_arg(this_), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004af470, ap_004af470));
