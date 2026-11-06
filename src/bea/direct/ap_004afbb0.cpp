// auto-ported from 004afbb0_FUN_004afbb0.c (FUN_004afbb0, 3139 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x140: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
// @autoport-repair: 1 float/pointer cast(s) made bit copies (compiler-located, tools/repair_fcasts.py)
// Hand-fixed 2026-10-27: integer tags stored in float slots were compared with
// denormal double literals (never equal in double); compared by bits now.
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0062fc2b GLOBAL_AT(char, 0x0062fc2b)
#define DAT_0062fc2a GLOBAL_AT(char, 0x0062fc2a)
#define DAT_0062fc29 GLOBAL_AT(char, 0x0062fc29)
#define DAT_0062fc28 GLOBAL_AT(char, 0x0062fc28)
#define DAT_0062ff4b GLOBAL_AT(char, 0x0062ff4b)
#define DAT_0062ff4a GLOBAL_AT(char, 0x0062ff4a)
#define DAT_0062ff49 GLOBAL_AT(char, 0x0062ff49)
#define DAT_0062ff48 GLOBAL_AT(char, 0x0062ff48)
#define DAT_0062fbfb GLOBAL_AT(char, 0x0062fbfb)
#define DAT_0062fbfa GLOBAL_AT(char, 0x0062fbfa)
#define DAT_0062fbf9 GLOBAL_AT(char, 0x0062fbf9)
#define DAT_0062fbf8 GLOBAL_AT(char, 0x0062fbf8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_Got__d_bones_0062ff38 ((char*)0x0062ff38)
#define s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70 ((char*)0x0062fe70)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
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
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_THISCALL ap_004afbb0(void * this_, void *param_1, int *param_2, undefined4 param_3, int param_4, undefined4 param_5, int param_6, int param_7)
{
  int *piVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  undefined4 *puVar14;
  alignas(16) uint8_t bea_frame_[0x140] = {};   // the original stack frame (emulate_frame)
  float * &local_13c = *reinterpret_cast<float * *>(bea_frame_ + 0x140 - 0x13c);
  int * &local_138 = *reinterpret_cast<int * *>(bea_frame_ + 0x140 - 0x138);
  undefined4 * &local_134 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x140 - 0x134);
  float &local_130 = *reinterpret_cast<float *>(bea_frame_ + 0x140 - 0x130);
  int &local_12c = *reinterpret_cast<int *>(bea_frame_ + 0x140 - 0x12c);
  int &local_128 = *reinterpret_cast<int *>(bea_frame_ + 0x140 - 0x128);
  float &local_124 = *reinterpret_cast<float *>(bea_frame_ + 0x140 - 0x124);
  float &local_120 = *reinterpret_cast<float *>(bea_frame_ + 0x140 - 0x120);
  float &local_11c = *reinterpret_cast<float *>(bea_frame_ + 0x140 - 0x11c);
  float &local_118 = *reinterpret_cast<float *>(bea_frame_ + 0x140 - 0x118);
  int &local_114 = *reinterpret_cast<int *>(bea_frame_ + 0x140 - 0x114);
  int &local_110 = *reinterpret_cast<int *>(bea_frame_ + 0x140 - 0x110);
  int &local_10c = *reinterpret_cast<int *>(bea_frame_ + 0x140 - 0x10c);
  uint &local_108 = *reinterpret_cast<uint *>(bea_frame_ + 0x140 - 0x108);
  undefined1 (&local_104)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x140 - 0x104);
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x140 - 0x100);
  iVar12 = 0;
  local_128 = 0;
  if (0 < *(int *)((int)this_ + 0xa8)) {
    local_138 = (int *)0xc;
    do {
      FUN_00548570(bea_arg(param_1), bea_arg(iVar12 + 0x20 + *(int *)((int)this_ + 0x134)), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(iVar12 + 0x24 + *(int *)((int)this_ + 0x134)), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(iVar12 + 0x28 + *(int *)((int)this_ + 0x134)), bea_arg(4));
      *(float *)(iVar12 + 0x28 + *(int *)((int)this_ + 0x134)) =
           -*(float *)(iVar12 + 0x28 + *(int *)((int)this_ + 0x134));
      FUN_00548570(bea_arg(param_1), bea_arg(&local_108), bea_arg(4));
      *(uint *)(iVar12 + 0x2c + *(int *)((int)this_ + 0x134)) =
           (((local_108 >> 0x18) * 0x100 + (local_108 & 0xff)) * 0x100 + (local_108 >> 8 & 0xff)) *
           0x100 + (local_108 >> 0x10 & 0xff);
      iVar6 = 6;
      iVar11 = iVar12 + 0x30;
      do {
        iVar6 = iVar6 + -1;
        *(undefined4 *)(iVar11 + *(int *)((int)this_ + 0x134)) = 0xffffffff;
        iVar11 = iVar11 + 4;
      } while (((iVar6 != 0)));
      local_134 = (undefined4 *)0x0;
      if (0 < param_6) {
        do {
          FUN_00548570(bea_arg(param_1), bea_arg(&local_13c), bea_arg(4));
          if ((param_7 ==
               ((DAT_0062fc2b * 0x100 + (int)DAT_0062fc2a) * 0x100 + (int)DAT_0062fc29) * 0x100 +
               (int)DAT_0062fc28) ||
             (param_7 ==
              ((DAT_0062ff4b * 0x100 + (int)DAT_0062ff4a) * 0x100 + (int)DAT_0062ff49) * 0x100 +
              (int)DAT_0062ff48)) {
            FUN_00548570(bea_arg(param_1), bea_arg(&local_130), bea_arg(4));
            local_114 = 0;
            local_10c = 0;
            local_110 = 0x3f800000;
            local_12c = 0x3f800000;
          }
          else {
            local_130 = 1.0f;
          }
          if (param_7 ==
              ((DAT_0062ff4b * 0x100 + (int)DAT_0062ff4a) * 0x100 + (int)DAT_0062ff49) * 0x100 +
              (int)DAT_0062ff48) {
            FUN_00548570(bea_arg(param_1), bea_arg(&local_114), bea_arg(4));
            FUN_00548570(bea_arg(param_1), bea_arg(&local_10c), bea_arg(4));
            FUN_00548570(bea_arg(param_1), bea_arg(&local_110), bea_arg(4));
            FUN_00548570(bea_arg(param_1), bea_arg(&local_12c), bea_arg(4));
          }
          if (((int)local_13c < -2) || (param_4 <= (int)local_13c)) {
            local_13c = (float *)0xffffffff;
LAB_004afdea:
            if (local_134 == (undefined4 *)0x0) {
              *(undefined4 *)(*(int *)((int)this_ + 0x134) + (int)local_138 * 4) = 0;
            }
            else {
              *(undefined4 *)(*(int *)((int)this_ + 0x134) + ((int)local_138 + (int)local_134) * 4) =
                   0xffffffff;
            }
          }
          else {
            if (local_13c == (float *)0xffffffff) goto LAB_004afdea;
            if (param_7 ==
                ((DAT_0062fbfb * 0x100 + (int)DAT_0062fbfa) * 0x100 + (int)DAT_0062fbf9) * 0x100 +
                (int)DAT_0062fbf8) {
              local_130 = *(float *)(*param_2 + 0x20 + (int)local_13c * 0x24);
            }
            if ((local_134 == (undefined4 *)0x4) &&
               (*(int *)(*param_2 + (int)local_13c * 0x24) ==
                *(int *)(*param_2 + *(int *)(iVar12 + 0x30 + *(int *)((int)this_ + 0x134)) * 0x24)))
            {
              local_130 = 0.0f;
LAB_004afe9b:
              *(undefined4 *)(*(int *)((int)this_ + 0x134) + ((int)local_138 + (int)local_134) * 4) =
                   0xffffffff;
            }
            else {
              if (local_130 <= 0.0f) goto LAB_004afe9b;
              *(float **)(*(int *)((int)this_ + 0x134) + ((int)local_138 + (int)local_134) * 4) =
                   local_13c;
              if ((param_7 ==
                   ((DAT_0062fc2b * 0x100 + (int)DAT_0062fc2a) * 0x100 + (int)DAT_0062fc29) * 0x100
                   + (int)DAT_0062fc28) ||
                 (param_7 ==
                  ((DAT_0062ff4b * 0x100 + (int)DAT_0062ff4a) * 0x100 + (int)DAT_0062ff49) * 0x100 +
                  (int)DAT_0062ff48)) {
                **(float **)(*param_2 + 0xc + (int)local_13c * 0x24) = local_130;
                **(int **)(*param_2 + 0x10 + (int)local_13c * 0x24) = local_114;
                **(int **)(*param_2 + 0x14 + (int)local_13c * 0x24) = local_10c;
                **(int **)(*param_2 + 0x18 + (int)local_13c * 0x24) = local_110;
                **(int **)(*param_2 + 0x1c + (int)local_13c * 0x24) = local_12c;
                *(float *)(*param_2 + 0x20 + (int)local_13c * 0x24) = local_130;
              }
            }
          }
          local_134 = (undefined4 *)((int)local_134 + 1);
        } while ((((int)local_134 < param_6)));
      }
      local_124 = -10.0;
      puVar7 = (undefined4 *)(iVar12 + *(int *)((int)this_ + 0x134));
      local_120 = 0.0f;
      local_11c = 0.0f;
      *puVar7 = 0xc1200000;
      iVar12 = iVar12 + 0x60;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = bea_piece32(local_118);
      local_138 = local_138 + 6;
      local_128 = local_128 + 1;
    } while (((local_128 < *(int *)((int)this_ + 0xa8))));
  }
  iVar12 = 0;
  if (0 < *(int *)((int)this_ + 0xb8)) {
    do {
      FUN_00548570(bea_arg(param_1), bea_arg(local_104), bea_arg(4));
      iVar12 = iVar12 + 1;
    } while (((iVar12 < *(int *)((int)this_ + 0xb8))));
  }
  local_128 = 0;
  if (0 < *(int *)((int)this_ + 0xb4)) {
    do {
      iVar12 = 0;
      if (0 < *(int *)((int)this_ + 0xac)) {
        iVar11 = 0;
        do {
          FUN_0044c1c0(bea_arg((void *)(*(int *)(*(int *)((int)this_ + 0x84) + local_128 * 4) + iVar11)), bea_arg(param_1));
          iVar12 = iVar12 + 1;
          iVar11 = iVar11 + 0x10;
        } while (((iVar12 < *(int *)((int)this_ + 0xac))));
      }
      local_128 = local_128 + 1;
    } while (((local_128 < *(int *)((int)this_ + 0xb4))));
  }
  if (*(int *)((int)this_ + 0x8c) == 3) {
    piVar1 = (int *)((int)this_ + 0xc0);
    FUN_00548570(bea_arg(param_1), bea_arg(piVar1), bea_arg(4));
    FUN_0055de9b(local_100,s_Got__d_bones_0062ff38,*piVar1);
    CRenderThing__vslot3(local_100);
    uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*piVar1 << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x496));
    *(undefined4 *)((int)this_ + 0xd0) = uVar4;
    uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xac) << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x498));
    *(undefined4 *)((int)this_ + 0xd4) = uVar4;
    uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xac) << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x49a));
    *(undefined4 *)((int)this_ + 0xd8) = uVar4;
    iVar12 = 0;
    if (0 < *piVar1) {
      do {
        FUN_00548570(bea_arg(param_1), bea_arg(&local_12c), bea_arg(4));
        iVar12 = iVar12 + 1;
        *(undefined4 *)(*(int *)((int)this_ + 0xd0) + -4 + iVar12 * 4) =
             *(undefined4 *)(param_2[0x58] + local_12c * 4);
      } while (((iVar12 < *piVar1)));
    }
    local_12c = 0;
    if (0 < *(int *)((int)this_ + 0xac)) {
      iVar12 = 0;
      do {
        uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*piVar1 << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x4ac));
        iVar11 = 0;
        local_138 = (int *)0x0;
        *(undefined4 *)(*(int *)((int)this_ + 0xd4) + iVar12) = uVar4;
        if (0 < *piVar1) {
          iVar6 = *(int *)(*(int *)((int)this_ + 0xd4) + iVar12);
          do {
            FUN_00548570(bea_arg(param_1), bea_arg(iVar6 + iVar11 * 4), bea_arg(4));
            iVar11 = iVar11 + 1;
            iVar6 = *(int *)(*(int *)((int)this_ + 0xd4) + iVar12);
            local_138 = (int *)(uintptr_t)bea_piece32((bea_fcast<float>(local_138) + *(float *)(iVar6 + -4 + iVar11 * 4)));
          } while (((iVar11 < *piVar1)));
          if (((bea_fcast<float>(local_138) != 1.0f) && (bea_fcast<float>(local_138) != 0.0f)) && (iVar11 = 0, 0 < *piVar1))
          {
            iVar6 = *(int *)(*(int *)((int)this_ + 0xd4) + iVar12);
            do {
              iVar2 = iVar11 * 4;
              iVar11 = iVar11 + 1;
              *(float *)(iVar6 + -4 + iVar11 * 4) =
                   (1.0f / bea_fcast<float>(local_138)) * *(float *)(iVar6 + iVar2);
              iVar6 = *(int *)(*(int *)((int)this_ + 0xd4) + iVar12);
            } while (((iVar11 < *piVar1)));
          }
        }
        uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x4c5));
        *(undefined4 *)(*(int *)((int)this_ + 0xd8) + iVar12) = uVar4;
        local_13c = (float *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*piVar1 << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x4c7));
        iVar11 = 0;
        if (0 < *piVar1) {
          do {
            iVar6 = iVar11 + 1;
            local_13c[iVar11] =
                 *(float *)(*(int *)(*(int *)((int)this_ + 0xd4) + iVar12) + -4 + iVar6 * 4);
            iVar11 = iVar6;
          } while (((iVar6 < *piVar1)));
        }
        local_134 = (undefined4 *)0x0;
        do {
          fVar8 = 0.0f;
          fVar3 = 0.0f;
          local_130 = 0.0f;
          pfVar10 = local_13c;
          if (*piVar1 < 1) {
LAB_004b034a:
            puVar7 = *(undefined4 **)(*(int *)((int)this_ + 0xd8) + iVar12);
            if (local_134 == (undefined4 *)0x0) {
              *puVar7 = 0xffffffff;
            }
            else {
              puVar7[(int)local_134] = puVar7[(int)local_134 + -1];
            }
          }
          else {
            do {
              if (fVar3 < *pfVar10) {
                fVar3 = *pfVar10;
                local_130 = fVar8;
              }
              fVar8 = bea_fcast<float>((bea_piece32(fVar8) + 1));
              pfVar10 = pfVar10 + 1;
            } while (((bea_piece32(fVar8) < *piVar1)));
            if (fVar3 == 0.0f) goto LAB_004b034a;
            *(float *)(*(int *)(*(int *)((int)this_ + 0xd8) + iVar12) + (int)local_134 * 4) =
                 local_130;
          }
          local_134 = (undefined4 *)((int)local_134 + 1);
          local_13c[bea_piece32(local_130)] = local_13c[bea_piece32(local_130)] - 0.33333334f;
        } while ((((int)local_134 < 3)));
        if (local_13c != (float *)0x0) {
          FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(local_13c));
        }
        local_12c = local_12c + 1;
        iVar12 = iVar12 + 4;
      } while (((local_12c < *(int *)((int)this_ + 0xac))));
    }
  }
  iVar12 = *(int *)((int)this_ + 0xa8);
  local_134 = (undefined4 *)
              FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar12 * 0x1e0), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x4ee));
  if (local_134 == (undefined4 *)0x0) {
    local_134 = (undefined4 *)0x0;
  }
  else {
    local_12c = iVar12 * 5 + -1;
  }
  local_13c = (float *)0x0;
  local_128 = 0;
  if (0 < *(int *)((int)this_ + 0xb0)) {
    local_12c = 0;
    do {
      iVar12 = local_12c;
      FUN_00548570(bea_arg(param_1), bea_arg(&local_110), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(&local_114), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(&local_10c), bea_arg(4));
      local_130 = 0.0f;
      *(int *)(iVar12 + *(int *)((int)this_ + 0x80)) = local_110 * 0x60 + *(int *)((int)this_ + 0x134)
      ;
      *(int *)(iVar12 + 4 + *(int *)((int)this_ + 0x80)) =
           local_10c * 0x60 + *(int *)((int)this_ + 0x134);
      *(int *)(iVar12 + 8 + *(int *)((int)this_ + 0x80)) =
           local_114 * 0x60 + *(int *)((int)this_ + 0x134);
      pfVar10 = (float *)(local_134 + (int)local_13c * 0x18);
      do {
        if (local_130 == 0.0f) {
          local_138 = (int *)(iVar12 + *(int *)((int)this_ + 0x80));
        }
        else if (bea_piece32(local_130) == 1u) {
          local_138 = (int *)(iVar12 + 8 + *(int *)((int)this_ + 0x80));
        }
        else if (bea_piece32(local_130) == 2u) {
          local_138 = (int *)(iVar12 + 4 + *(int *)((int)this_ + 0x80));
        }
        FUN_0044c1c0(bea_arg(&local_124), bea_arg(param_1));
        pfVar13 = (float *)*local_138;
        if (*pfVar13 == -10.0) {
          *pfVar13 = local_124;
          pfVar13[1] = local_120;
          pfVar13[2] = local_11c;
          pfVar13[3] = local_118;
        }
        else if (((*pfVar13 != local_124) || (pfVar13[1] != local_120)) || (pfVar13[2] != local_11c)
                ) {
          iVar11 = 0;
          if (0 < (int)local_13c) {
            pfVar9 = (float *)(local_134 + 0xc);
            do {
              if (((pfVar9[-4] == pfVar13[8]) && (*pfVar9 == pfVar13[0xc])) &&
                 ((pfVar9[-0xc] == local_124 &&
                  ((pfVar9[-0xb] == local_120 && (pfVar9[-10] == local_11c)))))) {
                *local_138 = (iVar11 + *(int *)((int)this_ + 0xa8)) * 0x60 +
                             *(int *)((int)this_ + 0x134);
                goto LAB_004b0632;
              }
              iVar11 = iVar11 + 1;
              pfVar9 = pfVar9 + 0x18;
            } while (((iVar11 < (int)local_13c)));
          }
          pfVar9 = pfVar10;
          for (iVar12 = 0x18; ((iVar12 != 0)); iVar12 = iVar12 + -1) {
            *pfVar9 = *pfVar13;
            pfVar13 = pfVar13 + 1;
            pfVar9 = pfVar9 + 1;
          }
          *pfVar10 = local_124;
          pfVar10[1] = local_120;
          pfVar10[2] = local_11c;
          pfVar10[3] = local_118;
          iVar12 = (int)local_13c + *(int *)((int)this_ + 0xa8);
          local_13c = (float *)((int)local_13c + 1);
          *local_138 = iVar12 * 0x60 + *(int *)((int)this_ + 0x134);
          pfVar10 = pfVar10 + 0x18;
          iVar12 = local_12c;
        }
LAB_004b0632:
        local_130 = bea_fcast<float>((bea_piece32(local_130) + 1));
      } while (((bea_piece32(local_130) < 3)));
      local_128 = local_128 + 1;
      local_12c = iVar12 + 0xc;
    } while (((local_128 < *(int *)((int)this_ + 0xb0))));
    if (0 < (int)local_13c) {
      puVar7 = *(undefined4 **)((int)this_ + 0x134);
      iVar12 = (int)local_13c + *(int *)((int)this_ + 0xa8);
      puVar5 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar12 * 0x60), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x549));
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        local_12c = iVar12 + -1;
      }
      *(undefined4 **)((int)this_ + 0x134) = puVar5;
      puVar14 = puVar7;
      for (iVar12 = (*(int *)((int)this_ + 0xa8) * 3 & 0x7ffffffU) << 3; ((iVar12 != 0));
          iVar12 = iVar12 + -1) {
        *puVar5 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar5 = puVar5 + 1;
      }
      for (iVar12 = 0; ((iVar12 != 0)); iVar12 = iVar12 + -1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar14;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      puVar5 = local_134;
      puVar14 = (undefined4 *)(*(int *)((int)this_ + 0xa8) * 0x60 + *(int *)((int)this_ + 0x134));
      for (iVar12 = ((int)local_13c * 3 & 0x7ffffffU) << 3; ((iVar12 != 0)); iVar12 = iVar12 + -1) {
        *puVar14 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar14 = puVar14 + 1;
      }
      for (iVar12 = 0; ((iVar12 != 0)); iVar12 = iVar12 + -1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar7));
      iVar12 = 0;
      if (0 < *(int *)((int)this_ + 0xb0)) {
        iVar11 = 0;
        do {
          *(int *)(iVar11 + *(int *)((int)this_ + 0x80)) =
               ((*(int *)(iVar11 + *(int *)((int)this_ + 0x80)) - (int)puVar7) / 0x60) * 0x60 +
               *(int *)((int)this_ + 0x134);
          *(int *)(iVar11 + 4 + *(int *)((int)this_ + 0x80)) =
               ((*(int *)(iVar11 + 4 + *(int *)((int)this_ + 0x80)) - (int)puVar7) / 0x60) * 0x60 +
               *(int *)((int)this_ + 0x134);
          iVar6 = iVar11 + 8;
          iVar2 = iVar11 + 8;
          iVar11 = iVar11 + 0xc;
          iVar12 = iVar12 + 1;
          *(int *)(iVar2 + *(int *)((int)this_ + 0x80)) =
               ((*(int *)(iVar6 + *(int *)((int)this_ + 0x80)) - (int)puVar7) / 0x60) * 0x60 +
               *(int *)((int)this_ + 0x134);
        } while (((iVar12 < *(int *)((int)this_ + 0xb0))));
      }
      *(int *)((int)this_ + 0xa8) = *(int *)((int)this_ + 0xa8) + (int)local_13c;
    }
  }
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(local_134));
  return FUN_004b1eb0(bea_arg(this_), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004afbb0, ap_004afbb0));
