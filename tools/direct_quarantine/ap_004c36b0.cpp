// auto-ported from 004c36b0_vslot10.c (CPDTrail::vslot10, 2636 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xf0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CPDTrail;
typedef char Vec3;
typedef char fStack_64;
typedef char fStack_68;
#define DAT_009c63f8 GLOBAL_AT(float, 0x009c63f8)
#define DAT_009c63fc GLOBAL_AT(int, 0x009c63fc)
#define DAT_009c6400 GLOBAL_AT(int, 0x009c6400)
#define DAT_00829e40 GLOBAL_AT(int, 0x00829e40)
#define DAT_00829e44 GLOBAL_AT(int, 0x00829e44)
#define DAT_00829e48 GLOBAL_AT(int, 0x00829e48)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef float10 (BEA_CDECL* FUN_004c0c70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c0c70_t> FUN_004c0c70 = {(FUN_004c0c70_t)0x004c0c70};
typedef float10 (BEA_THISCALL* FUN_004c10c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c10c0_t> FUN_004c10c0 = {(FUN_004c10c0_t)0x004c10c0};
typedef uint32_t (BEA_THISCALL* FUN_004c35d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004c35d0_t> FUN_004c35d0 = {(FUN_004c35d0_t)0x004c35d0};
typedef undefined4 * (BEA_THISCALL* FUN_004cb5c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb5c0_t> FUN_004cb5c0 = {(FUN_004cb5c0_t)0x004cb5c0};
typedef uint32_t (BEA_THISCALL* FUN_004cb920_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb920_t> FUN_004cb920 = {(FUN_004cb920_t)0x004cb920};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static undefined4 BEA_THISCALL ap_004c36b0(CPDTrail * this_, int param_1)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  bool bVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;

  alignas(16) uint8_t bea_frame_[0xf0] = {};   // the original stack frame (emulate_frame)
  float &local_ec = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0xec);
  float &local_e8 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0xe8);
  float &local_e4 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0xe4);
  float &local_dc = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0xdc);
  float &local_d8 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0xd8);
  float &local_d4 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0xd4);
  undefined4 * &local_cc = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0xf0 - 0xcc);
  float &local_c8 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0xc8);
  float &local_c4 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0xc4);
  float &local_c0 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0xc0);
  float &local_b8 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0xb8);
  int &local_b4 = *reinterpret_cast<int *>(bea_frame_ + 0xf0 - 0xb4);
  float &local_b0 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0xb0);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0xac);
  float &local_a8 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0xa8);
  float &fStack_90 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x90);
  float &fStack_8c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x8c);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x78);
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x74);
  undefined4 &local_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0x70);
  uint &local_6c = *reinterpret_cast<uint *>(bea_frame_ + 0xf0 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x68);
  float &fStack_64 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x64);
  float &fStack_60 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x58);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x48);
  undefined4 &uStack_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0x44);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0x34);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x28);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x18);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0xf0 - 0x8);
  local_6c = 0;
  bVar14 = *(int *)(param_1 + 0x88) == 0;
  if (bVar14) {
    FUN_004c35d0(bea_arg(this_), bea_arg(param_1));
  }
  local_6c = (uint)bVar14;
  if (*(int *)(this_ + 0x80) != 0) {
    *(float *)(param_1 + 0x50) = DAT_009c63f8 * 0.003f + *(float *)(param_1 + 0x50);
  }
  if ((*(float *)(this_ + 0x7c) != 0.0f) && (iVar13 = 0, 0 < *(int *)(param_1 + 0x80))) {
    iVar7 = 0;
    do {
      iVar21 = *(int *)(param_1 + 0x88);
      if (*(int *)(iVar7 + 0x24 + iVar21) != 0) {
        local_7c = DAT_009c63f8 * *(float *)(iVar7 + 0x10 + iVar21);
        local_78 = DAT_009c63f8 * *(float *)(iVar7 + 0x14 + iVar21);
        fVar2 = DAT_009c63f8 * *(float *)(iVar7 + 0x18 + iVar21);
        *(float *)(iVar7 + iVar21) = local_7c + *(float *)(iVar7 + iVar21);
        *(float *)(iVar7 + 4 + iVar21) = local_78 + *(float *)(iVar7 + 4 + iVar21);
        *(float *)(iVar7 + 8 + iVar21) = fVar2 + *(float *)(iVar7 + 8 + iVar21);
      }
      iVar13 = iVar13 + 1;
      iVar7 = iVar7 + 0x28;
    } while (((iVar13 < *(int *)(param_1 + 0x80))));
  }
  if (*(int *)(this_ + 0x90) == 0) {
    if (DAT_009c63fc != 0) {
      if ((*(float *)(param_1 + 0x74) <= 0.001f) ||
         ((0.0f <= *(float *)(param_1 + 0x60) &&
          (*(float *)(param_1 + 0x60) <= (float)*(int *)(param_1 + 0x80))))) {
        bea_vcall<uint32_t>(this_, 0x50, param_1);
      }
      else {
        bea_vcall<uint32_t>(this_, 0x4c, param_1,param_1 + 0x38,*(float *)(param_1 + 0x74));
      }
    }
  }
  else if ((((*(int *)(this_ + 0x90) == 1) && (0.001f < *(float *)(param_1 + 0x74))) &&
           ((*(float *)(param_1 + 0x60) < -1.0f ||
            ((float)*(int *)(this_ + 0x9c) < *(float *)(param_1 + 0x60))))) &&
          (pfVar1 = *(float **)(param_1 + 0x58), pfVar1 != (float *)0x0)) {
    fVar2 = *(float *)(param_1 + 0x38);
    fVar3 = *(float *)(param_1 + 0x3c);
    local_c0 = *(float *)(param_1 + 0x40);
    local_c8 = fVar2;
    local_c4 = fVar3;
    if (pfVar1[0x28] != 0.0f) {
      local_c8 = fVar2 * pfVar1[4] + fVar3 * pfVar1[5] + local_c0 * pfVar1[6];
      local_c4 = fVar2 * pfVar1[8] + fVar3 * pfVar1[9] + local_c0 * pfVar1[10];
      local_c0 = fVar2 * pfVar1[0xc] + fVar3 * pfVar1[0xd] + local_c0 * pfVar1[0xe];
    }
    local_c8 = local_c8 + *pfVar1;
    iVar13 = *(int *)(param_1 + 0x80);
    local_c4 = local_c4 + pfVar1[1];
    local_c0 = local_c0 + pfVar1[2];
    local_78 = pfVar1[0x25] - local_c4;
    local_74 = pfVar1[0x26] - local_c0;
    fVar3 = (float)(iVar13 + -2);
    fVar2 = (pfVar1[0x24] - local_c8) / fVar3;
    fVar4 = local_78 / fVar3;
    fVar3 = local_74 / fVar3;
    if (*(int *)(this_ + 0xa8) != 0) {
      fVar18 = fVar4 * -1.0f - 0.0f;
      fVar17 = 0.0f - fVar2 * -1.0f;
      fVar5 = SQRT(fVar17 * fVar17 + fVar18 * fVar18 + 0.0f);
      if (fVar5 <= 0.0001f) {
        local_b0 = 1.0f;
        local_ac = 0.0f;
        local_a8 = 0.0f;
      }
      else {
        local_b0 = fVar18 / fVar5;
        local_ac = fVar17 / fVar5;
        local_a8 = 0.0f / fVar5;
      }
      fVar18 = local_a8 * fVar4 - local_ac * fVar3;
      fVar17 = fVar3 * local_b0 - local_a8 * fVar2;
      fVar5 = local_ac * fVar2 - fVar4 * local_b0;
      fVar6 = SQRT(fVar17 * fVar17 + fVar5 * fVar5 + fVar18 * fVar18);
      if (fVar6 <= 0.0001f) {
        local_dc = 0.0f;
        local_d8 = 1.0f;
        local_d4 = 0.0f;
      }
      else {
        local_dc = fVar18 / fVar6;
        local_d8 = fVar17 / fVar6;
        local_d4 = fVar5 / fVar6;
      }
    }
    *(undefined2 *)(param_1 + 0x7e) = 0;
    local_b4 = 0;
    if (0 < iVar13) {
      local_cc = (undefined4 *)(*(int *)(param_1 + 0x88) + 0x20);
      do {
        fStack_90 = bea_fcast<float>(DAT_009c6400);
        if (*(int *)(this_ + 0xa8) == 0) {
          if ((local_b4 == 1) || (local_b4 == iVar13 + -1)) {
            local_ec = bea_fcast<float>(DAT_00829e40);
            local_e8 = bea_fcast<float>(DAT_00829e44);
            local_e4 = bea_fcast<float>(DAT_00829e48);
          }
          else {
            fVar18 = *(float *)(this_ + 0x78);
            uVar8 = _rand();
            fStack_68 = *(float *)(this_ + 0x78);
            uVar9 = _rand();
            fStack_64 = *(float *)(this_ + 0x78);
            uVar10 = _rand();
            local_ec = (float)(int)((uVar10 & 0xff) - 0x80) * fStack_64 * 0.0078125f;
            local_e8 = (float)(int)((uVar9 & 0xff) - 0x80) * fStack_68 * 0.0078125f;
            local_e4 = (float)(int)((uVar8 & 0xff) - 0x80) * fVar18 * 0.0078125f;
            fStack_60 = local_ec;
            fStack_5c = local_e8;
            fStack_58 = local_e4;
          }
        }
        else {
          iVar7 = *(int *)(this_ + 0xb0);
          fVar18 = (float)local_b4 / (float)(iVar13 + -1);
          if (iVar7 == 0) {
            local_b8 = *(float *)(this_ + 0xac);
          }
          else {
            iVar13 = param_1;
            if (*(int *)(iVar7 + 0x84) == 0) {
              uVar12 = *(undefined4 *)(iVar7 + 0x80);
              uVar22 = *(undefined4 *)(iVar7 + 0x7c);
              iVar21 = iVar7 + 0x74;
              iVar20 = iVar7 + 0x6c;
              iVar19 = iVar7 + 100;
              iVar7 = iVar7 + 0x5c;
              fVar17 = fVar18;
            }
            else {
              fVar15 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x88)), bea_arg(DAT_009c6400), bea_arg(param_1));
              if ((*(int *)(iVar7 + 0x90) != 0) && (param_1 != 0)) {
                fStack_90 = fStack_90 - *(float *)(param_1 + 0x84);
              }
              uVar12 = *(undefined4 *)(iVar7 + 0x80);
              uVar22 = *(undefined4 *)(iVar7 + 0x7c);
              iVar21 = iVar7 + 0x74;
              iVar20 = iVar7 + 0x6c;
              iVar19 = iVar7 + 100;
              iVar7 = iVar7 + 0x5c;
              fVar16 = _CIfmod((float10)(float)fVar15,(float10)fStack_90);
              fVar17 = (float)(fVar16 / (float10)(float)fVar15);
            }
            fVar15 = (float10)FUN_004c0c70(bea_arg(fVar17), bea_arg(iVar7), bea_arg(iVar19), bea_arg(iVar20), bea_arg(iVar21), bea_arg(uVar22), bea_arg(uVar12), bea_arg(iVar13));
            local_b8 = (float)(fVar15 * (float10)*(float *)(this_ + 0xac));
          }
          fStack_8c = bea_fcast<float>(DAT_009c6400);
          iVar13 = *(int *)(this_ + 0xb8);
          if (iVar13 == 0) {
            fVar15 = (float10)*(float *)(this_ + 0xb4);
          }
          else {
            iVar7 = param_1;
            if (*(int *)(iVar13 + 0x84) == 0) {
              uVar12 = *(undefined4 *)(iVar13 + 0x80);
              uVar22 = *(undefined4 *)(iVar13 + 0x7c);
              iVar21 = iVar13 + 0x74;
              iVar20 = iVar13 + 0x6c;
              iVar19 = iVar13 + 100;
              iVar13 = iVar13 + 0x5c;
            }
            else {
              fVar15 = (float10)FUN_004c10c0(bea_arg((void *)(iVar13 + 0x88)), bea_arg(DAT_009c6400), bea_arg(param_1));
              if ((*(int *)(iVar13 + 0x90) != 0) && (param_1 != 0)) {
                fStack_8c = fStack_8c - *(float *)(param_1 + 0x84);
              }
              uVar12 = *(undefined4 *)(iVar13 + 0x80);
              uVar22 = *(undefined4 *)(iVar13 + 0x7c);
              iVar21 = iVar13 + 0x74;
              iVar20 = iVar13 + 0x6c;
              iVar19 = iVar13 + 100;
              iVar13 = iVar13 + 0x5c;
              fVar16 = _CIfmod((float10)(float)fVar15,(float10)fStack_8c);
              fVar18 = (float)(fVar16 / (float10)(float)fVar15);
            }
            fVar15 = (float10)FUN_004c0c70(bea_arg(fVar18), bea_arg(iVar13), bea_arg(iVar19), bea_arg(iVar20), bea_arg(iVar21), bea_arg(uVar22), bea_arg(uVar12), bea_arg(iVar7));
            fVar15 = fVar15 * (float10)*(float *)(this_ + 0xb4);
          }
          fVar16 = (float10)fsin(fVar15);
          fVar16 = fVar16 * (float10)local_b8;
          local_30 = (float)(fVar16 * (float10)local_dc);
          local_2c = (float)((float10)local_d8 * fVar16);
          local_28 = (float)((float10)local_d4 * fVar16);
          fVar15 = (float10)fcos(fVar15);
          fVar15 = fVar15 * (float10)local_b8;
          FUN_00401ec0(bea_arg(&local_10), bea_arg((float)(fVar15 * (float10)local_b0)), bea_arg((float)((float10)local_ac * fVar15)), bea_arg((float)((float10)local_a8 * fVar15)));
          FUN_00401ec0(bea_arg(&local_20), bea_arg(local_10 + local_30), bea_arg(local_c + local_2c), bea_arg(local_8 + local_28));
          local_ec = local_20;
          local_e8 = local_1c;
          local_e4 = local_18;
        }
        fVar17 = local_ec + local_c8;
        local_cc[1] = 1;
        fVar5 = local_e8 + local_c4;
        local_cc[-8] = bea_piece32(fVar17);
        fVar6 = local_e4 + local_c0;
        local_cc[-7] = bea_piece32(fVar5);
        local_cc[-6] = bea_piece32(fVar6);
        local_cc[-5] = local_34;
        *local_cc = *(undefined4 *)(param_1 + 0x74);
        fVar18 = *(float *)(this_ + 0x7c);
        local_40 = fVar17;
        local_3c = fVar5;
        local_38 = fVar6;
        FUN_00401ec0(bea_arg(&local_7c), bea_arg(fVar18 * local_ec), bea_arg(local_e8 * fVar18), bea_arg(local_e4 * fVar18));
        local_cc[-4] = bea_piece32(local_7c);
        local_cc[-3] = bea_piece32(local_78);
        local_cc[-2] = bea_piece32(local_74);
        local_cc[-1] = local_70;
        if ((((local_6c != 0) && (piVar11 = *(int **)(this_ + 0x94), piVar11 != (int *)0x0)) &&
            (1 < local_b4)) && (local_b4 < *(int *)(param_1 + 0x80) + -1)) {
          for (; ((piVar11 != (int *)0x0)); piVar11 = (int *)bea_vcall<uint32_t>(piVar11, 0x40)) {
            iVar13 = bea_vcall<uint32_t>(piVar11, 0x4);
            if (iVar13 != 4) {
              if (piVar11 != (int *)0x0) {
                if ((*(int *)(param_1 + 0x58) == 0) ||
                   ((*(ushort *)(*(int *)(param_1 + 0x58) + 0xb6) | 1) == 0)) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = 1;
                }
                iVar13 = FUN_004cb5c0(bea_arg(&DAT_009c63e8), bea_arg(piVar11), bea_arg(uVar12));
                if (iVar13 != 0) {
                  *(float *)(iVar13 + 0x38) = fVar17;
                  *(float *)(iVar13 + 0x3c) = fVar5;
                  *(float *)(iVar13 + 0x40) = fVar6;
                  *(undefined4 *)(iVar13 + 0x44) = uStack_44;
                  fStack_50 = fVar17;
                  fStack_4c = fVar5;
                  fStack_48 = fVar6;
                  FUN_004cb920(bea_arg(&DAT_009c63e8), bea_arg(iVar13));
                  bea_vcall<uint32_t>(*(int **)(iVar13 + 0x5c), 0x3c, iVar13);
                }
              }
              break;
            }
          }
        }
        if (local_b4 != 0) {
          local_c8 = fVar2 + local_c8;
          local_c4 = fVar4 + local_c4;
          local_c0 = fVar3 + local_c0;
        }
        local_b4 = local_b4 + 1;
        local_cc = local_cc + 10;
        iVar13 = *(int *)(param_1 + 0x80);
      } while (((local_b4 < iVar13)));
    }
    *(short *)(param_1 + 0x7e) = *(short *)(param_1 + 0x80) + -1;
  }
  uVar12 = 1;
  if ((*(int *)(this_ + 0x90) != 1) || (*(int *)(param_1 + 0x58) != 0)) {
    uVar12 = 0;
  }
  return uVar12;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c36b0, ap_004c36b0));
