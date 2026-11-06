// auto-ported from 00542a50_FUN_00542a50.c (FUN_00542a50, 1164 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x110: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char Vec3;
#define _DAT_0067a680 GLOBAL_AT(float, 0x0067a680)
#define _DAT_00650890 GLOBAL_AT(int, 0x00650890)
#define _DAT_006508a0 GLOBAL_AT(int, 0x006508a0)
#define _DAT_006508b0 GLOBAL_AT(int, 0x006508b0)
#define DAT_00650888 GLOBAL_AT(int, 0x00650888)
#define DAT_0065088c GLOBAL_AT(int, 0x0065088c)
#define _DAT_00650898 GLOBAL_AT(int, 0x00650898)
#define _DAT_0065089c GLOBAL_AT(int, 0x0065089c)
#define _DAT_006508a8 GLOBAL_AT(int, 0x006508a8)
#define _DAT_006508ac GLOBAL_AT(int, 0x006508ac)
#define _DAT_006508b4 GLOBAL_AT(int, 0x006508b4)
#define _DAT_006508a4 GLOBAL_AT(int, 0x006508a4)
#define _DAT_00650894 GLOBAL_AT(int, 0x00650894)
#define _DAT_006508b8 GLOBAL_AT(int, 0x006508b8)
#define _DAT_006508bc GLOBAL_AT(int, 0x006508bc)
#define _DAT_006508c0 GLOBAL_AT(int, 0x006508c0)
#define _DAT_006508c4 GLOBAL_AT(int, 0x006508c4)
#define DAT_008aa790 GLOBAL_AT(undefined4, 0x008aa790)
#define DAT_008aa864 GLOBAL_AT(int, 0x008aa864)
#define DAT_008aa860 GLOBAL_AT(int, 0x008aa860)
#define DAT_008aa868 GLOBAL_AT(int, 0x008aa868)
#define DAT_008aa86c GLOBAL_AT(int, 0x008aa86c)
#define DAT_008aa850 GLOBAL_AT(int, 0x008aa850)
#define DAT_008aa858 GLOBAL_AT(int, 0x008aa858)
#define DAT_008aa854 GLOBAL_AT(int, 0x008aa854)
#define DAT_008aa85c GLOBAL_AT(int, 0x008aa85c)
#define DAT_009c65c0 GLOBAL_AT(undefined4, 0x009c65c0)
#define DAT_008aa780 GLOBAL_AT(int, 0x008aa780)
#define _DAT_008aa780 GLOBAL_AT(int, 0x008aa780)
#define _DAT_008aa784 GLOBAL_AT(int, 0x008aa784)
#define _DAT_008aa788 GLOBAL_AT(int, 0x008aa788)
#define _DAT_008aa78c GLOBAL_AT(int, 0x008aa78c)
#define DAT_008aa770 GLOBAL_AT(undefined4, 0x008aa770)
#define DAT_008aa730 GLOBAL_AT(float, 0x008aa730)
#define _DAT_008aa8b0 GLOBAL_AT(int, 0x008aa8b0)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_00406d50_t)(uint32_t);
static const bea_guard<FUN_00406d50_t> FUN_00406d50 = {(FUN_00406d50_t)0x00406d50};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef uint32_t (BEA_THISCALL* FUN_004404f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004404f0_t> FUN_004404f0 = {(FUN_004404f0_t)0x004404f0};
typedef uint32_t (BEA_THISCALL* FUN_0044a5f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044a5f0_t> FUN_0044a5f0 = {(FUN_0044a5f0_t)0x0044a5f0};
typedef float * (BEA_THISCALL* FUN_00494350_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00494350_t> FUN_00494350 = {(FUN_00494350_t)0x00494350};
typedef int (BEA_CDECL* FUN_004b52c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b52c0_t> FUN_004b52c0 = {(FUN_004b52c0_t)0x004b52c0};
typedef uint32_t (BEA_THISCALL* FUN_00542ee0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00542ee0_t> FUN_00542ee0 = {(FUN_00542ee0_t)0x00542ee0};

static void BEA_CDECL ap_00542a50(float param_1)
{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 fVar9;

  alignas(16) uint8_t bea_frame_[0x110] = {};   // the original stack frame (emulate_frame)
  int &local_108 = *reinterpret_cast<int *>(bea_frame_ + 0x110 - 0x108);
  float &local_fc = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xfc);
  float &local_f8 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xf8);
  float &local_f4 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xf4);
  float &local_f0 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xf0);
  undefined1 (&local_ec)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x110 - 0xec);
  float &local_dc = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xdc);
  float &local_d8 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xd8);
  float &local_d4 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xd4);
  float &local_d0 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xd0);
  float &local_cc = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xcc);
  float &local_c8 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xc8);
  float &local_c4 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xc4);
  float &local_c0 = *reinterpret_cast<float *>(bea_frame_ + 0x110 - 0xc0);
  undefined4 (&local_bc)[4] = *reinterpret_cast<undefined4 (*)[4]>(bea_frame_ + 0x110 - 0xbc);
  undefined4 &local_ac = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0xac);
  undefined4 &local_a8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0xa8);
  undefined4 &local_a4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0xa4);
  undefined4 &local_a0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0xa0);
  undefined4 &local_9c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x9c);
  undefined4 &local_98 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x98);
  undefined4 &local_94 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x94);
  undefined4 &local_90 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x90);
  undefined1 (&local_8c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x110 - 0x8c);
  undefined4 &local_7c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x7c);
  undefined1 (&local_78)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x110 - 0x78);
  undefined1 (&local_68)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x110 - 0x68);
  undefined4 &local_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x58);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x54);
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x50);
  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x34);
  undefined1 (&local_30)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x110 - 0x30);
  undefined1 (&local_20)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x110 - 0x20);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x110 - 0x10);
  fVar8 = (float10)fcos((float10)param_1);
  _DAT_0067a680 = param_1;
  local_fc = (float)fVar8;
  fVar9 = (float10)fsin((float10)param_1);
  local_f8 = (float)-fVar9;
  pfVar2 = (float *)FUN_00401ec0(bea_arg(local_8c), bea_arg((float)fVar9), bea_arg((float)fVar8), bea_arg(0));
  local_dc = *pfVar2;
  local_d8 = pfVar2[1];
  local_d4 = pfVar2[2];
  local_d0 = pfVar2[3];
  pfVar2 = (float *)FUN_00401ec0(bea_arg(local_8c), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
  _DAT_00650890 = bea_piece32(*pfVar2);
  local_108 = 0;
  _DAT_006508a0 = bea_piece32(pfVar2[1]);
  _DAT_006508b0 = bea_piece32(pfVar2[2]);
  local_c0 = pfVar2[3];
  DAT_00650888 = bea_piece32(local_fc);
  DAT_0065088c = bea_piece32(local_dc);
  _DAT_00650898 = bea_piece32(local_f8);
  _DAT_0065089c = bea_piece32(local_d8);
  _DAT_006508a8 = 0;
  _DAT_006508ac = bea_piece32(local_d4);
  _DAT_006508b4 = 0;
  _DAT_006508a4 = 0;
  _DAT_00650894 = 0;
  _DAT_006508b8 = 0;
  _DAT_006508bc = 0;
  _DAT_006508c0 = 0;
  _DAT_006508c4 = 0x3f800000;
  puVar4 = &DAT_008aa790;
  local_cc = bea_fcast<float>(_DAT_00650890);
  local_c8 = bea_fcast<float>(_DAT_006508a0);
  local_c4 = bea_fcast<float>(_DAT_006508b0);
  do {
    fVar8 = (float10)local_108 * (float10)1.5707964f + (float10)_DAT_0067a680;
    fVar9 = (float10)fsin(fVar8);
    fVar8 = (float10)fcos(fVar8);
    puVar3 = (undefined4 *)FUN_00401ec0(bea_arg(local_8c), bea_arg((float)fVar8), bea_arg(-(float)fVar9), bea_arg(0));
    local_bc[0] = *puVar3;
    local_bc[1] = puVar3[1];
    local_bc[2] = puVar3[2];
    local_bc[3] = puVar3[3];
    puVar3 = (undefined4 *)FUN_00401ec0(bea_arg(local_10), bea_arg((float)fVar9), bea_arg((float)fVar8), bea_arg(0));
    local_ac = *puVar3;
    local_a8 = puVar3[1];
    local_a4 = puVar3[2];
    local_a0 = puVar3[3];
    puVar3 = (undefined4 *)FUN_00401ec0(bea_arg(local_20), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
    local_9c = *puVar3;
    puVar7 = puVar4 + 0xc;
    local_98 = puVar3[1];
    local_94 = puVar3[2];
    local_90 = puVar3[3];
    local_108 = local_108 + 1;
    puVar3 = local_bc;
    for (iVar6 = 0xc; ((iVar6 != 0)); iVar6 = iVar6 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar4 = puVar7;
  } while ((((int)puVar7 < 0x8aa850)));
  FUN_00401ec0(bea_arg(&local_fc), bea_arg(local_fc + 0.0f), bea_arg(local_dc + 0.0f), bea_arg(local_cc + 0.0f));
  DAT_008aa864 = bea_piece32(local_f8);
  DAT_008aa860 = bea_piece32(local_fc);
  DAT_008aa868 = bea_piece32(local_f4);
  DAT_008aa86c = bea_piece32(local_f0);
  FUN_00401ec0(bea_arg(&local_fc), bea_arg(0), bea_arg(local_d4 + 0.0f), bea_arg(local_c4 + 0.0f));
  DAT_008aa850 = bea_piece32(local_fc);
  DAT_008aa858 = bea_piece32(local_f4);
  DAT_008aa854 = bea_piece32(local_f8);
  DAT_008aa85c = bea_piece32(local_f0);
  local_7c = 0;
  FUN_0044a5f0(bea_arg(local_68), bea_arg(0), bea_arg(0), bea_arg(0));
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  FUN_0044a5f0(bea_arg(local_78), bea_arg(0), bea_arg(0), bea_arg(0));
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  FUN_0044a5f0(bea_arg(local_30), bea_arg(0), bea_arg(0), bea_arg(0));
  puVar4 = &DAT_009c65c0;
  puVar3 = &local_7c;
  for (iVar6 = 0x17; ((iVar6 != 0)); iVar6 = iVar6 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar4 = (undefined4 *)FUN_004404f0(bea_arg(local_68), bea_arg(local_20));
  _DAT_008aa780 = *puVar4;
  _DAT_008aa784 = puVar4[1];
  _DAT_008aa788 = puVar4[2];
  _DAT_008aa78c = puVar4[3];
  FUN_00406d50(bea_arg(&DAT_008aa780));
  local_108 = 0;
  puVar4 = &DAT_008aa770;
  pfVar2 = (float *)&DAT_008aa730;
  do {
    fVar1 = (float)local_108 * 1.5707964f + _DAT_0067a680;
    FUN_004011b0(bea_arg(local_bc), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    FUN_00542ee0(bea_arg(local_bc), bea_arg(fVar1));
    puVar3 = (undefined4 *)FUN_00494350(bea_arg(local_bc), bea_arg(local_ec));
    puVar7 = local_bc;
    for (iVar6 = 0xc; ((iVar6 != 0)); iVar6 = iVar6 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_0040d2c0(bea_arg(local_bc), bea_arg(&local_fc), bea_arg(&DAT_008aa780));
    *pfVar2 = local_fc;
    pfVar2[1] = local_f8;
    pfVar2[2] = local_f4;
    pfVar2[3] = local_f0;
    uVar5 = FUN_004b52c0(bea_arg(&local_fc), bea_arg(0x3f800000));
    *puVar4 = uVar5;
    pfVar2 = pfVar2 + 4;
    local_108 = local_108 + 1;
    puVar4 = puVar4 + 1;
  } while ((((int)pfVar2 < 0x8aa770)));
  _DAT_008aa8b0 = 0xffffffff;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00542a50, ap_00542a50));
