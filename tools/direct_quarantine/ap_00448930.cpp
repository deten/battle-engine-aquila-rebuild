// auto-ported from 00448930_vslot3.c (CDropshipGuide::vslot3, 3087 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x120: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CDropshipGuide;
typedef char Vec3;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_00406d50_t)(uint32_t);
static const bea_guard<FUN_00406d50_t> FUN_00406d50 = {(FUN_00406d50_t)0x00406d50};
typedef uint32_t (BEA_THISCALL* FUN_00449560_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00449560_t> FUN_00449560 = {(FUN_00449560_t)0x00449560};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef float * (BEA_FASTCALL* FUN_0047ec60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ec60_t> FUN_0047ec60 = {(FUN_0047ec60_t)0x0047ec60};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static void BEA_THISCALL ap_00448930(CDropshipGuide * this_)
{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  float10 fVar9;

  alignas(16) uint8_t bea_frame_[0x120] = {};   // the original stack frame (emulate_frame)
  float &local_11c = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x11c);
  float &local_118 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x118);
  float &local_114 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x114);
  float &local_110 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x110);
  float &local_10c = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x10c);
  float &local_108 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x108);
  undefined4 &local_104 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0x104);
  float &local_100 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x100);
  float &local_fc = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xfc);
  float &local_f8 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xf8);
  float &local_f4 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xf4);
  float &local_f0 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xf0);
  float &local_ec = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xec);
  undefined4 &local_e8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0xe8);
  float &local_e4 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xe4);
  float &local_e0 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xe0);
  float &local_dc = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xdc);
  undefined4 &local_d8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0xd8);
  float &local_d4 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xd4);
  float &local_d0 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xd0);
  float &local_cc = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xcc);
  float &local_c4 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xc4);
  float &local_c0 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xc0);
  float &local_bc = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xbc);
  undefined4 &local_b8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0xb8);
  float &local_b4 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xb4);
  float &local_b0 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xb0);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0xac);
  undefined4 &local_a8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0xa8);
  undefined4 &local_a4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0xa4);
  undefined4 &local_a0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0xa0);
  undefined4 &local_9c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0x9c);
  undefined4 &local_98 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0x98);
  undefined4 &local_94 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0x94);
  undefined4 &local_90 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0x90);
  undefined4 &local_8c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0x8c);
  undefined4 &local_88 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0x88);
  undefined4 &local_84 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0x84);
  undefined4 &local_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0x80);
  undefined4 &local_7c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0x7c);
  undefined4 &local_78 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0x78);
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x74);
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x70);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x6c);
  int * &local_64 = *reinterpret_cast<int * *>(bea_frame_ + 0x120 - 0x64);
  int &local_60 = *reinterpret_cast<int *>(bea_frame_ + 0x120 - 0x60);
  int &local_5c = *reinterpret_cast<int *>(bea_frame_ + 0x120 - 0x5c);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x58);
  int &local_54 = *reinterpret_cast<int *>(bea_frame_ + 0x120 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x48);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0x34);
  undefined1 (&local_30)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x120 - 0x30);
  undefined1 (&local_20)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x120 - 0x20);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x120 - 0x10);
  piVar1 = *(int **)(this_ + 0x18);
  if ((*(byte *)(piVar1 + 0xb) & 4) != 0) {
    piVar1[0x5d] = 0;
    puVar5 = (undefined4 *)FUN_00401ec0(bea_arg(local_20), bea_arg(0), bea_arg(0), bea_arg(0));
    iVar3 = *(int *)(this_ + 0x18);
    *(undefined4 *)(iVar3 + 0x14c) = *puVar5;
    *(undefined4 *)(iVar3 + 0x150) = puVar5[1];
    *(undefined4 *)(iVar3 + 0x154) = puVar5[2];
    *(undefined4 *)(iVar3 + 0x158) = puVar5[3];
    return;
  }
  local_118 = (float)piVar1[0x45];
  local_60 = piVar1[7];
  local_5c = piVar1[8];
  local_58 = (float)piVar1[9];
  local_54 = piVar1[10];
  local_64 = piVar1;
  fVar8 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_60));
  if ((float10)DAT_006fbdfc < fVar8) {
    fVar8 = (float10)DAT_006fbdfc;
  }
  iVar3 = *(int *)(this_ + 0x18);
  local_fc = (float)(fVar8 - (float10)local_58);
  FUN_00401ec0(bea_arg(&local_74), bea_arg(*(float *)(this_ + 8) - *(float *)(iVar3 + 0x1c)), bea_arg(*(float *)(this_ + 0xc) - *(float *)(iVar3 + 0x20)), bea_arg(*(float *)(this_ + 0x10) - *(float *)(iVar3 + 0x24)));
  fVar8 = (float10)fpatan((float10)local_74,(float10)local_70);
  iVar3 = *(int *)(this_ + 0x18);
  local_f8 = 0.0f;
  local_100 = 0.0f;
  local_c4 = 0.0f;
  local_c0 = 0.0f;
  local_bc = 0.0f;
  local_11c = (float)-fVar8;
  FUN_00401ec0(bea_arg(&local_50), bea_arg(*(undefined4 *)(iVar3 + 0x3c)), bea_arg(*(undefined4 *)(iVar3 + 0x4c)), bea_arg(*(undefined4 *)(iVar3 + 0x5c)));
  fVar6 = local_bc;
  fVar7 = local_c0;
  switch(piVar1[0x9f]) {
  case 0:
  case 1:
    if (*(int *)(this_ + 0x1c) == 0) {
      local_11c = local_118 + 1.5707964f;
      local_f8 = 0.0f;
    }
    else if (*(int *)(this_ + 0x1c) == 2) {
      local_11c = local_11c - 3.1415927f;
    }
    iVar3 = *(int *)(this_ + 0x18);
    if (local_fc < *(float *)(*(int *)(iVar3 + 0x164) + 0x15c)) {
      local_f8 = -0.62831855;
      local_11c = local_118;
    }
    if (3.1415927f < local_11c) {
      local_11c = local_11c - 6.2831855f;
    }
    if (local_11c < -3.1415927f) {
      local_11c = local_11c + 6.2831855f;
    }
    if ((-1.5707964f <= local_118) || (local_11c <= 1.5707964f)) {
      fVar7 = local_11c;
      if ((1.5707964f < local_118) && (local_11c < -1.5707964f)) {
        fVar7 = local_11c + 6.2831855f;
      }
    }
    else {
      fVar7 = local_11c - 6.2831855f;
    }
    fVar7 = ABS(local_118 - fVar7);
    if (0.3926991f < fVar7) {
      fVar7 = 0.3926991f;
    }
    local_100 = fVar7;
    if (0.0f <= local_50 * local_74 + local_48 * local_6c + local_4c * local_70) {
      local_100 = -fVar7;
    }
    if (fVar7 <= 0.5235988f) {
      *(undefined4 *)(iVar3 + 0x174) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x174) = 0x3f800000;
    }
    iVar3 = *(int *)(this_ + 0x18);
    FUN_00401ec0(bea_arg(&local_40), bea_arg(*(float *)(iVar3 + 0x40) * 0.001f), bea_arg(*(float *)(iVar3 + 0x50) * 0.001f), bea_arg(*(float *)(iVar3 + 0x60) * 0.001f));
    local_c4 = local_40;
    fVar6 = local_38;
    fVar7 = local_3c;
    local_b8 = local_34;
    break;
  case 2:
    local_11c = (float)piVar1[0xa8];
    if ((-1.5707964f <= local_118) || (local_11c <= 1.5707964f)) {
      fVar2 = local_11c;
      if ((1.5707964f < local_118) && (local_11c < -1.5707964f)) {
        fVar2 = local_11c + 6.2831855f;
      }
    }
    else {
      fVar2 = local_11c - 6.2831855f;
    }
    local_100 = ABS(local_118 - fVar2);
    if (0.3926991f < local_100) {
      local_100 = 0.3926991f;
    }
    if (0.0f <= local_50 * local_74 + local_48 * local_6c + local_4c * local_70) {
      local_100 = -local_100;
    }
    break;
  case 3:
    *(undefined4 *)(*(int *)(this_ + 0x18) + 0x174) = 0;
    local_11c = local_118;
    if (local_fc <= 10.0f) {
      FUN_004011b0(bea_arg(&local_a4), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
      fVar8 = (float10)fsin((float10)local_11c);
      local_114 = local_11c;
      fVar9 = (float10)fcos((float10)local_11c);
      puVar5 = (undefined4 *)(uintptr_t)bea_piece32(FUN_00401ec0(bea_arg(&local_b4), bea_arg((float)fVar9), bea_arg((float)-fVar8), bea_arg(0)));
      fVar8 = (float10)fcos((float10)local_114);
      local_a4 = *puVar5;
      local_a0 = puVar5[1];
      local_9c = puVar5[2];
      local_98 = puVar5[3];
      fVar9 = (float10)fsin((float10)local_114);
      puVar5 = (undefined4 *)(uintptr_t)bea_piece32(FUN_00401ec0(bea_arg(&local_b4), bea_arg((float)fVar9), bea_arg((float)fVar8), bea_arg(0)));
      local_94 = *puVar5;
      local_90 = puVar5[1];
      local_8c = puVar5[2];
      local_88 = puVar5[3];
      puVar5 = (undefined4 *)FUN_00401ec0(bea_arg(&local_b4), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
      local_84 = *puVar5;
      local_80 = puVar5[1];
      local_7c = puVar5[2];
      local_78 = puVar5[3];
      FUN_00401ec0(bea_arg(&local_110), bea_arg(local_a0), bea_arg(local_90), bea_arg(local_80));
      FUN_0047ec60(bea_arg(&DAT_006fadc8), bea_arg(&local_d4), bea_arg(&local_60));
      FUN_00401ec0(bea_arg(&local_e4), bea_arg(local_10c * local_cc - local_108 * local_d0), bea_arg(local_108 * local_d4 - local_cc * local_110), bea_arg(local_d0 * local_110 - local_10c * local_d4));
      FUN_00401ec0(bea_arg(&local_f4), bea_arg(local_e0 * local_cc - local_dc * local_d0), bea_arg(local_dc * local_d4 - local_cc * local_e4), bea_arg(local_d0 * local_e4 - local_e0 * local_d4));
      fVar7 = SQRT(local_f0 * local_f0 + local_ec * local_ec + local_f4 * local_f4);
      if (fVar7 != 0.0f) {
        fVar7 = 1.0f / fVar7;
        local_f4 = fVar7 * local_f4;
        local_f0 = local_f0 * fVar7;
        local_ec = fVar7 * local_ec;
      }
      local_f8 = -local_ec;
      local_ac = local_dc;
      local_b4 = local_e4;
      local_b0 = local_e0;
      local_a8 = local_d8;
      fVar7 = SQRT(local_e0 * local_e0 + local_dc * local_dc + local_e4 * local_e4);
      if (fVar7 != 0.0f) {
        local_dc = (1.0f / fVar7) * local_dc;
      }
      local_118 = 0.0f;
      local_114 = 0.0f;
      local_100 = local_dc;
      if (local_fc < 4.0f) {
        bea_vcall<uint32_t>(*(int **)(this_ + 0x18), 0x6c, &local_b4);
        local_118 = local_b4 * -0.05f;
        local_114 = local_b0 * -0.05f;
      }
      iVar3 = bea_vcall<uint32_t>(piVar1, 0x6c, local_10);
      fVar7 = local_114;
      local_b8 = local_104;
      if (*(float *)(iVar3 + 8) <= local_fc * 0.022222223f) {
        if (0.075f < local_fc) {
          local_110 = 0.0f;
          local_10c = 0.0f;
          fVar7 = 0.0f;
          local_108 = 0.005;
          local_c4 = 0.0f;
          fVar6 = 0.005;
          break;
        }
      }
      else if (0.075f < local_fc) {
        local_108 = local_fc * -0.0005f;
        local_110 = local_118;
        local_10c = local_114;
        local_c4 = local_118;
        fVar6 = local_108;
        break;
      }
      local_108 = 0.002;
      local_110 = local_118;
      local_10c = local_114;
      local_c4 = local_118;
      fVar6 = 0.002;
    }
    else {
      local_f8 = -0.15;
      uVar4 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      local_114 = (float)(uVar4 & 0x8000ffff);
      if (bea_piece32(local_114) < 0) {
        local_114 = (float)((bea_piece32(local_114) - 1U | 0xffff0000) + 1);
      }
      local_f4 = 0.0f;
      local_f0 = 0.0f;
      local_ec = 0.005;
      local_c4 = 0.0f;
      local_100 = (float)bea_piece32(local_114) * 3.8146973e-06f - 0.5f;
      fVar6 = 0.005;
      fVar7 = 0.0f;
      local_b8 = local_e8;
    }
    break;
  case 4:
    puVar5 = (undefined4 *)FUN_00401ec0(bea_arg(local_20), bea_arg(0), bea_arg(0), bea_arg(0));
    iVar3 = *(int *)(this_ + 0x18);
    *(undefined4 *)(iVar3 + 0x14c) = *puVar5;
    *(undefined4 *)(iVar3 + 0x150) = puVar5[1];
    *(undefined4 *)(iVar3 + 0x154) = puVar5[2];
    *(undefined4 *)(iVar3 + 0x158) = puVar5[3];
    fVar6 = local_bc;
    fVar7 = local_c0;
    break;
  case 5:
    local_110 = 0.0f;
    local_c4 = 0.0f;
    local_10c = 0.0f;
    local_108 = -0.001f;
    *(undefined4 *)(*(int *)(this_ + 0x18) + 0x174) = 0;
    fVar6 = -0.001f;
    fVar7 = 0.0f;
    local_b8 = local_104;
    if (local_fc <= 5.0f) {
      FUN_004011b0(bea_arg(&local_a4), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
      fVar8 = (float10)fsin((float10)local_11c);
      local_114 = local_11c;
      fVar9 = (float10)fcos((float10)local_11c);
      puVar5 = (undefined4 *)(uintptr_t)bea_piece32(FUN_00401ec0(bea_arg(local_30), bea_arg((float)fVar9), bea_arg((float)-fVar8), bea_arg(0)));
      fVar8 = (float10)fcos((float10)local_114);
      local_a4 = *puVar5;
      local_a0 = puVar5[1];
      local_9c = puVar5[2];
      local_98 = puVar5[3];
      fVar9 = (float10)fsin((float10)local_114);
      puVar5 = (undefined4 *)(uintptr_t)bea_piece32(FUN_00401ec0(bea_arg(local_30), bea_arg((float)fVar9), bea_arg((float)fVar8), bea_arg(0)));
      local_94 = *puVar5;
      local_90 = puVar5[1];
      local_8c = puVar5[2];
      local_88 = puVar5[3];
      puVar5 = (undefined4 *)FUN_00401ec0(bea_arg(local_30), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
      local_84 = *puVar5;
      local_80 = puVar5[1];
      local_7c = puVar5[2];
      local_78 = puVar5[3];
      FUN_00401ec0(bea_arg(&local_110), bea_arg(local_a0), bea_arg(local_90), bea_arg(local_80));
      FUN_0047ec60(bea_arg(&DAT_006fadc8), bea_arg(&local_d4), bea_arg(&local_60));
      FUN_00401ec0(bea_arg(&local_e4), bea_arg(local_10c * local_cc - local_108 * local_d0), bea_arg(local_108 * local_d4 - local_cc * local_110), bea_arg(local_d0 * local_110 - local_10c * local_d4));
      FUN_00401ec0(bea_arg(&local_f4), bea_arg(local_e0 * local_cc - local_d0 * local_dc), bea_arg(local_d4 * local_dc - local_cc * local_e4), bea_arg(local_d0 * local_e4 - local_e0 * local_d4));
      fVar2 = SQRT(local_f4 * local_f4 + local_f0 * local_f0 + local_ec * local_ec);
      if (fVar2 != 0.0f) {
        fVar2 = 1.0f / fVar2;
        local_f4 = fVar2 * local_f4;
        local_f0 = local_f0 * fVar2;
        local_ec = fVar2 * local_ec;
      }
      local_b4 = local_e4;
      local_b0 = local_e0;
      local_f8 = -local_ec;
      local_a8 = local_d8;
      local_ac = local_dc;
      FUN_00406d50(bea_arg(&local_b4));
      local_100 = local_ac;
      local_11c = local_118;
    }
    else {
      local_f8 = -0.1;
      uVar4 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      local_114 = (float)(uVar4 & 0x8000ffff);
      if (bea_piece32(local_114) < 0) {
        local_114 = (float)((bea_piece32(local_114) - 1U | 0xffff0000) + 1);
      }
      local_11c = local_118;
      local_100 = (float)bea_piece32(local_114) * 1.5258789e-06f - 0.2f;
    }
  }
  iVar3 = local_64[0x9f];
  if (((iVar3 != 4) && (iVar3 != 6)) && (iVar3 != 7)) {
    puVar5 = (undefined4 *)FUN_00449560(bea_arg(&local_e4), bea_arg(&local_11c), bea_arg(&local_f8), bea_arg(&local_100));
    iVar3 = *(int *)(this_ + 0x18);
    *(undefined4 *)(iVar3 + 0x120) = *puVar5;
    *(undefined4 *)(iVar3 + 0x124) = puVar5[1];
    *(undefined4 *)(iVar3 + 0x128) = puVar5[2];
    iVar3 = *(int *)(this_ + 0x18);
    *(float *)(iVar3 + 0x14c) = local_c4;
    *(float *)(iVar3 + 0x150) = fVar7;
    *(float *)(iVar3 + 0x154) = fVar6;
    *(undefined4 *)(iVar3 + 0x158) = local_b8;
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00448930, ap_00448930));
