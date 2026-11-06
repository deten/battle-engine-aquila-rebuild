// auto-ported from 004c9000_vslot11.c (CPDPMesh::vslot11, 6956 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x150: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CPDPMesh;
typedef char Mat34;
typedef char Vec3;
typedef char _DAT_00630e0c;
typedef char bStack_120;
typedef char bStack_134;
typedef char fStack_114;
typedef char fStack_84;
typedef char fStack_b4;
typedef char fStack_fc;
typedef char uStack_f4;
typedef char uStack_f8;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_0089c9a4 GLOBAL_AT(int, 0x0089c9a4)
#define DAT_0089ce4c GLOBAL_AT(int, 0x0089ce4c)
#define DAT_009c6400 GLOBAL_AT(int, 0x009c6400)
#define _DAT_00630e0c GLOBAL_AT(float, 0x00630e0c)
#define DAT_009c648c GLOBAL_AT(int, 0x009c648c)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define s_Mech_Pulse_Bolt_Blast_Large_00630e24 ((char*)0x00630e24)
#define s_Mech_Pulse_Bolt_Blast_Aug_00630e40 ((char*)0x00630e40)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef uint32_t (BEA_THISCALL* FUN_00406d50_t)(uint32_t);
static const bea_guard<FUN_00406d50_t> FUN_00406d50 = {(FUN_00406d50_t)0x00406d50};
typedef float10 (BEA_THISCALL* FUN_0040d180_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040d180_t> FUN_0040d180 = {(FUN_0040d180_t)0x0040d180};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef float10 (BEA_CDECL* FUN_004c0c70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c0c70_t> FUN_004c0c70 = {(FUN_004c0c70_t)0x004c0c70};
typedef float10 (BEA_THISCALL* FUN_004c10c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c10c0_t> FUN_004c10c0 = {(FUN_004c10c0_t)0x004c10c0};
typedef uint32_t (BEA_CDECL* FUN_004c7db0_t)(void);
static const bea_guard<FUN_004c7db0_t> FUN_004c7db0 = {(FUN_004c7db0_t)0x004c7db0};
typedef int (BEA_CDECL* FUN_004cab30_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cab30_t> FUN_004cab30 = {(FUN_004cab30_t)0x004cab30};
typedef float10 (BEA_CDECL* FUN_004cac40_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cac40_t> FUN_004cac40 = {(FUN_004cac40_t)0x004cac40};
typedef uint32_t (BEA_CDECL* FUN_004cac80_t)(float, float, ...);
static const bea_guard<FUN_004cac80_t> FUN_004cac80 = {(FUN_004cac80_t)0x004cac80};
typedef undefined1 (BEA_STDCALL* FUN_00515970_t)(uint32_t);
static const bea_guard<FUN_00515970_t> FUN_00515970 = {(FUN_00515970_t)0x00515970};
typedef uint32_t (BEA_THISCALL* FUN_00550180_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550180_t> FUN_00550180 = {(FUN_00550180_t)0x00550180};
typedef int (BEA_THISCALL* FUN_005501d0_t)(uint32_t);
static const bea_guard<FUN_005501d0_t> FUN_005501d0 = {(FUN_005501d0_t)0x005501d0};
typedef uint32_t (BEA_THISCALL* FUN_005501e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005501e0_t> FUN_005501e0 = {(FUN_005501e0_t)0x005501e0};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))

static undefined4 BEA_THISCALL ap_004c9000(CPDPMesh * this_, int param_1)
{
  float fVar1;
  CPDPMesh CVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  CPDPMesh *pCVar16;
  CPDPMesh *pCVar17;
  float *pfVar18;
  char *pcVar19;
  bool bVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float fVar26;
  float fVar27;
  int iVar28;
  int iVar29;

  alignas(16) uint8_t bea_frame_[0x150] = {};   // the original stack frame (emulate_frame)
  int &local_150 = *reinterpret_cast<int *>(bea_frame_ + 0x150 - 0x150);
  int &iStack_14c = *reinterpret_cast<int *>(bea_frame_ + 0x150 - 0x14c);
  int &iStack_148 = *reinterpret_cast<int *>(bea_frame_ + 0x150 - 0x148);
  int &local_144 = *reinterpret_cast<int *>(bea_frame_ + 0x150 - 0x144);
  float &fStack_140 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x140);
  byte &bStack_134 = *reinterpret_cast<byte *>(bea_frame_ + 0x150 - 0x134);
  byte &local_124 = *reinterpret_cast<byte *>(bea_frame_ + 0x150 - 0x124);
  byte &bStack_120 = *reinterpret_cast<byte *>(bea_frame_ + 0x150 - 0x120);
  int &iStack_118 = *reinterpret_cast<int *>(bea_frame_ + 0x150 - 0x118);
  float &fStack_114 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x114);
  float &local_110 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x110);
  float &local_104 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x104);
  int &iStack_100 = *reinterpret_cast<int *>(bea_frame_ + 0x150 - 0x100);
  float &fStack_fc = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xfc);
  uint &uStack_f8 = *reinterpret_cast<uint *>(bea_frame_ + 0x150 - 0xf8);
  uint &uStack_f4 = *reinterpret_cast<uint *>(bea_frame_ + 0x150 - 0xf4);
  uint &uStack_f0 = *reinterpret_cast<uint *>(bea_frame_ + 0x150 - 0xf0);
  uint &local_ec = *reinterpret_cast<uint *>(bea_frame_ + 0x150 - 0xec);
  uint &local_e8 = *reinterpret_cast<uint *>(bea_frame_ + 0x150 - 0xe8);
  float &local_e4 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xe4);
  float &local_e0 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xe0);
  float &local_dc = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xdc);
  float &local_d4 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xd4);
  float &fStack_cc = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xcc);
  float &fStack_b4 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xb4);
  float (&local_b0)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x150 - 0xb0);
  float &local_a0 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xa0);
  float &local_9c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x9c);
  float &local_98 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x98);
  float &fStack_94 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x94);
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x90);
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x88);
  float &fStack_84 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x84);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x80);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x78);
  float &fStack_74 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x74);
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x70);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x68);
  float &local_64 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x64);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x5c);
  undefined1 (&auStack_54)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x150 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x4c);
  float &fStack_44 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x44);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x38);
  float &fStack_34 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x34);
  float (&local_30)[2] = *reinterpret_cast<float (*)[2]>(bea_frame_ + 0x150 - 0x30);
  int &iStack_28 = *reinterpret_cast<int *>(bea_frame_ + 0x150 - 0x28);
  float &fStack_24 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x24);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x20);
  FUN_004c7db0();
  if (*(int *)(this_ + 100) == 0) {
    return 0;
  }
  iVar14 = *(int *)(param_1 + 0x58);
  if ((iVar14 != 0) && (*(int *)(iVar14 + 0xac) != -0x40800000)) {
    fVar26 = DAT_00672fd0 - 0.09999f;
    fVar1 = *(float *)(iVar14 + 0xac);
    if (fVar26 >= fVar1 && (fVar26 == fVar1) == 0) {
      return CONCAT22((short)((uint)iVar14 >> 0x10),
                      (ushort)(fVar26 < fVar1) << 8 | (ushort)(bea_isnan(fVar26) || bea_isnan(fVar1)) << 10 |
                      (ushort)(fVar26 == fVar1) << 0xe);
    }
  }
  FUN_004c10c0(bea_arg(this_ + 0x74), bea_arg(((float)*(int *)(this_ + 0x60) - *(float *)(param_1 + 0x60)) /
               (float)*(int *)(this_ + 0x60)), bea_arg(param_1));
  fVar21 = (float10)FUN_004c10c0(bea_arg(this_ + 0x7c), bea_arg(((float)*(int *)(this_ + 0x60) - *(float *)(param_1 + 0x60)) /
                                 (float)*(int *)(this_ + 0x60)), bea_arg(param_1));
  local_70 = (float)fVar21;
  FUN_004c10c0(bea_arg(this_ + 0x84), bea_arg(((float)*(int *)(this_ + 0x60) - *(float *)(param_1 + 0x60)) /
               (float)*(int *)(this_ + 0x60)), bea_arg(param_1));
  fVar21 = (float10)FUN_004c10c0(bea_arg(this_ + 0x8c), bea_arg(((float)*(int *)(this_ + 0x60) - *(float *)(param_1 + 0x60)) /
                                 (float)*(int *)(this_ + 0x60)), bea_arg(param_1));
  iVar14 = *(int *)(this_ + 0x70);
  local_e8 = 0xff;
  local_64 = (float)fVar21;
  local_e4 = (float)CONCAT31(((*(uint32_t*)((char*)&local_e4) >> 8) & 0xffffffu),0xff);
  local_ec = 0xff;
  if (iVar14 != 0) {
    fVar1 = ((float)*(int *)(this_ + 0x60) - *(float *)(param_1 + 0x60)) /
            (float)*(int *)(this_ + 0x60);
    if (*(int *)(iVar14 + 0xa8) == 0) {
      if (*(int *)(iVar14 + 0xa4) == 0) {
        fVar21 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x5c)), bea_arg(fVar1), bea_arg(param_1));
        local_124 = (byte)(longlong)ROUND(fVar21 * (float10)255.0f);
        local_e8 = (uint)local_124;
        fVar21 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 100)), bea_arg(fVar1), bea_arg(param_1));
        local_124 = (byte)(longlong)ROUND(fVar21 * (float10)255.0f);
        local_e4 = (float)CONCAT31(((*(uint32_t*)((char*)&local_e4) >> 8) & 0xffffffu),local_124);
        fVar21 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x6c)), bea_arg(fVar1), bea_arg(param_1));
        local_124 = (byte)(longlong)ROUND(fVar21 * (float10)255.0f);
      }
      else {
        fVar26 = 1.0f - fVar1;
        fVar21 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x74)), bea_arg(fVar1), bea_arg(param_1));
        fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x5c)), bea_arg(fVar1), bea_arg(param_1));
        local_124 = (byte)(longlong)
                          ROUND((fVar22 * (float10)fVar26 +
                                (float10)(float)(fVar21 * (float10)fVar1)) * (float10)255.0f);
        local_e8 = (uint)local_124;
        fVar21 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x7c)), bea_arg(fVar1), bea_arg(param_1));
        fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 100)), bea_arg(fVar1), bea_arg(param_1));
        local_124 = (byte)(longlong)
                          ROUND((fVar22 * (float10)fVar26 +
                                (float10)(float)(fVar21 * (float10)fVar1)) * (float10)255.0f);
        local_e4 = (float)CONCAT31(((*(uint32_t*)((char*)&local_e4) >> 8) & 0xffffffu),local_124);
        fVar21 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x84)), bea_arg(fVar1), bea_arg(param_1));
        fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x6c)), bea_arg(fVar1), bea_arg(param_1));
        local_124 = (byte)(longlong)
                          ROUND((fVar22 * (float10)fVar26 +
                                (float10)(float)(fVar21 * (float10)fVar1)) * (float10)255.0f);
      }
    }
    else if (*(float *)(iVar14 + 0xac) <= fVar1) {
      fVar1 = (fVar1 - *(float *)(iVar14 + 0xac)) / (1.0f - *(float *)(iVar14 + 0xac));
      fVar26 = 1.0f - fVar1;
      fVar21 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x74)), bea_arg(fVar1), bea_arg(param_1));
      fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x8c)), bea_arg(fVar1), bea_arg(param_1));
      local_124 = (byte)(longlong)
                        ROUND((fVar22 * (float10)fVar26 + (float10)(float)(fVar21 * (float10)fVar1))
                              * (float10)255.0f);
      local_e8 = (uint)local_124;
      fVar21 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x7c)), bea_arg(fVar1), bea_arg(param_1));
      fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x94)), bea_arg(fVar1), bea_arg(param_1));
      local_124 = (byte)(longlong)
                        ROUND((fVar22 * (float10)fVar26 + (float10)(float)(fVar21 * (float10)fVar1))
                              * (float10)255.0f);
      local_e4 = (float)CONCAT31(((*(uint32_t*)((char*)&local_e4) >> 8) & 0xffffffu),local_124);
      fVar21 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x84)), bea_arg(fVar1), bea_arg(param_1));
      fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x9c)), bea_arg(fVar1), bea_arg(param_1));
      local_124 = (byte)(longlong)
                        ROUND((fVar22 * (float10)fVar26 + (float10)(float)(fVar21 * (float10)fVar1))
                              * (float10)255.0f);
    }
    else {
      fVar1 = fVar1 / *(float *)(iVar14 + 0xac);
      fVar26 = 1.0f - fVar1;
      fVar21 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x8c)), bea_arg(fVar1), bea_arg(param_1));
      fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x5c)), bea_arg(fVar1), bea_arg(param_1));
      local_124 = (byte)(longlong)
                        ROUND((fVar22 * (float10)fVar26 + (float10)(float)(fVar21 * (float10)fVar1))
                              * (float10)255.0f);
      local_e8 = (uint)local_124;
      fVar21 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x94)), bea_arg(fVar1), bea_arg(param_1));
      fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 100)), bea_arg(fVar1), bea_arg(param_1));
      local_124 = (byte)(longlong)
                        ROUND((fVar22 * (float10)fVar26 + (float10)(float)(fVar21 * (float10)fVar1))
                              * (float10)255.0f);
      local_e4 = (float)CONCAT31(((*(uint32_t*)((char*)&local_e4) >> 8) & 0xffffffu),local_124);
      fVar21 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x9c)), bea_arg(fVar1), bea_arg(param_1));
      fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x6c)), bea_arg(fVar1), bea_arg(param_1));
      local_124 = (byte)(longlong)
                        ROUND((fVar22 * (float10)fVar26 + (float10)(float)(fVar21 * (float10)fVar1))
                              * (float10)255.0f);
    }
    local_ec = (uint)local_124;
  }
  fVar1 = *(float *)(param_1 + 0x38);
  local_dc = *(float *)(param_1 + 0x3c);
  fVar26 = *(float *)(param_1 + 0x40);
  local_d4 = *(float *)(param_1 + 0x44);
  pfVar15 = (float *)(param_1 + 8);
  pfVar18 = local_b0;
  for (iVar14 = 0xc; ((iVar14 != 0)); iVar14 = iVar14 + -1) {
    *pfVar18 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar18 = pfVar18 + 1;
  }
  iVar14 = *(int *)(param_1 + 0x58);
  local_e0 = fVar1;
  if (iVar14 != 0) {
    if (*(int *)(iVar14 + 0xa0) != 0) {
      local_e0 = fVar1 * *(float *)(iVar14 + 0x10) +
                 local_dc * *(float *)(iVar14 + 0x14) + fVar26 * *(float *)(iVar14 + 0x18);
      local_dc = fVar1 * *(float *)(iVar14 + 0x20) +
                 local_dc * *(float *)(iVar14 + 0x24) + fVar26 * *(float *)(iVar14 + 0x28);
      pfVar15 = &local_80;
      local_d4 = local_104;
      local_80 = local_88 * *(float *)(iVar14 + 0x30) +
                 local_8c * *(float *)(iVar14 + 0x20) + local_90 * *(float *)(iVar14 + 0x10);
      local_7c = local_88 * *(float *)(iVar14 + 0x34) +
                 local_90 * *(float *)(iVar14 + 0x14) + local_8c * *(float *)(iVar14 + 0x24);
      local_78 = local_88 * *(float *)(iVar14 + 0x38) +
                 local_90 * *(float *)(iVar14 + 0x18) + local_8c * *(float *)(iVar14 + 0x28);
      uVar7 = FUN_00401ec0(bea_arg(&local_50), bea_arg(local_98 * *(float *)(iVar14 + 0x30) +
                           local_9c * *(float *)(iVar14 + 0x20) +
                           local_a0 * *(float *)(iVar14 + 0x10)), bea_arg(local_98 * *(float *)(iVar14 + 0x34) +
                           local_a0 * *(float *)(iVar14 + 0x14) +
                           local_9c * *(float *)(iVar14 + 0x24)), bea_arg(local_98 * *(float *)(iVar14 + 0x38) +
                           local_a0 * *(float *)(iVar14 + 0x18) +
                           local_9c * *(float *)(iVar14 + 0x28)));
      uVar8 = FUN_00401ec0(bea_arg(&local_40), bea_arg(local_b0[2] * *(float *)(iVar14 + 0x30) +
                           local_b0[1] * *(float *)(iVar14 + 0x20) +
                           local_b0[0] * *(float *)(iVar14 + 0x10)), bea_arg(local_b0[0] * *(float *)(iVar14 + 0x14) +
                           local_b0[2] * *(float *)(iVar14 + 0x34) +
                           local_b0[1] * *(float *)(iVar14 + 0x24)), bea_arg(local_b0[2] * *(float *)(iVar14 + 0x38) +
                           local_b0[1] * *(float *)(iVar14 + 0x28) +
                           local_b0[0] * *(float *)(iVar14 + 0x18)));
      FUN_00401f10(bea_arg(local_30), bea_arg(uVar8), bea_arg(uVar7), bea_arg(pfVar15));
      pfVar15 = local_30;
      pfVar18 = local_b0;
      for (iVar14 = 0xc; ((iVar14 != 0)); iVar14 = iVar14 + -1) {
        *pfVar18 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        pfVar18 = pfVar18 + 1;
      }
    }
    local_e0 = local_e0 + *(float *)(*(int *)(param_1 + 0x58) + 0x80);
    local_dc = local_dc + *(float *)(*(int *)(param_1 + 0x58) + 0x84);
  }
  bea_vcall<uint32_t>((&DAT_0089c9a4)[DAT_0089ce4c], 0x0, &local_60);
  if (*(int *)(this_ + 0x5c) == 0) {
    iVar9 = FUN_005501d0(bea_arg(*(void **)(this_ + 100)));
    fVar21 = (float10)FUN_004c10c0(bea_arg(this_ + 0xac), bea_arg(((float)*(int *)(this_ + 0x60) - *(float *)(param_1 + 0x60)) /
                                   (float)*(int *)(this_ + 0x60)), bea_arg(param_1));
    fVar22 = (float10)FUN_004c10c0(bea_arg(this_ + 0xa4), bea_arg(((float)*(int *)(this_ + 0x60) - *(float *)(param_1 + 0x60)) /
                                   (float)*(int *)(this_ + 0x60)), bea_arg(param_1));
    fStack_140 = bea_fcast<float>(DAT_009c6400);
    fVar1 = local_64 - local_e4;
    iVar14 = *(int *)(this_ + 0xa0);
    if (iVar14 == 0) {
      fVar23 = (float10)*(float *)(this_ + 0x9c);
    }
    else {
      iVar10 = param_1;
      if (*(int *)(iVar14 + 0x84) == 0) {
        uVar7 = *(undefined4 *)(iVar14 + 0x80);
        uVar8 = *(undefined4 *)(iVar14 + 0x7c);
        iVar13 = iVar14 + 0x74;
        iVar12 = iVar14 + 0x6c;
        iVar28 = iVar14 + 100;
        iVar14 = iVar14 + 0x5c;
        fVar26 = 0.5f;
      }
      else {
        fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar14 + 0x88)), bea_arg(DAT_009c6400), bea_arg(param_1));
        if ((*(int *)(iVar14 + 0x90) != 0) && (param_1 != 0)) {
          fStack_140 = fStack_140 - *(float *)(param_1 + 0x84);
        }
        uVar7 = *(undefined4 *)(iVar14 + 0x80);
        uVar8 = *(undefined4 *)(iVar14 + 0x7c);
        iVar13 = iVar14 + 0x74;
        iVar12 = iVar14 + 0x6c;
        iVar28 = iVar14 + 100;
        iVar14 = iVar14 + 0x5c;
        fVar24 = _CIfmod((float10)(float)fVar23,(float10)fStack_140);
        fVar26 = (float)(fVar24 / (float10)(float)fVar23);
      }
      fVar23 = (float10)FUN_004c0c70(bea_arg(fVar26), bea_arg(iVar14), bea_arg(iVar28), bea_arg(iVar12), bea_arg(iVar13), bea_arg(uVar8), bea_arg(uVar7), bea_arg(iVar10));
      fVar23 = fVar23 * (float10)*(float *)(this_ + 0x9c);
    }
    iVar14 = *(int *)(this_ + 0x94);
    local_150 = *(int *)(this_ + 0x98);
    fVar23 = (ABS((float10)(float)fVar21) + ABS(fVar23 * (float10)(float)fVar22)) * (float10)0.5f;
    fVar23 = ((fVar23 * fVar23) /
             (float10)((local_60 - local_e0) * (local_60 - local_e0) +
                      (fStack_5c - local_dc) * (fStack_5c - local_dc) + fVar1 * fVar1)) *
             (float10)_DAT_00630e0c * (float10)102400.0f;
    if ((float10)30.0f <= fVar23) {
      if ((float10)300.0f <= fVar23) goto LAB_004ca481;
      if ((4 < iVar14) && (iVar14 = iVar14 / 2, iVar14 < 4)) {
        iVar14 = 4;
      }
      if (local_150 < 5) goto LAB_004ca481;
      local_150 = local_150 / 2;
    }
    else {
      if ((4 < iVar14) && (iVar14 = iVar14 / 3, iVar14 < 4)) {
        iVar14 = 4;
      }
      if (local_150 < 5) goto LAB_004ca481;
      local_150 = local_150 / 3;
    }
    if (local_150 < 4) {
      local_150 = 4;
    }
LAB_004ca481:
    fStack_fc = 0.0f;
    if (0 < iVar14) {
      do {
        fStack_140 = bea_fcast<float>(DAT_009c6400);
        iVar10 = *(int *)(this_ + 0xa0);
        fVar1 = (float)(int)fStack_fc / (float)(iVar14 + -1);
        fVar26 = fVar1 * (float)fVar21;
        fVar3 = fVar1 * fStack_74 + fStack_68;
        if (iVar10 == 0) {
          fVar23 = (float10)*(float *)(this_ + 0x9c);
        }
        else {
          iVar13 = param_1;
          if (*(int *)(iVar10 + 0x84) == 0) {
            uVar7 = *(undefined4 *)(iVar10 + 0x80);
            uVar8 = *(undefined4 *)(iVar10 + 0x7c);
            iVar12 = iVar10 + 0x74;
            iVar28 = iVar10 + 0x6c;
            iVar29 = iVar10 + 100;
            iVar10 = iVar10 + 0x5c;
            fVar27 = fVar1;
          }
          else {
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x88)), bea_arg(DAT_009c6400), bea_arg(param_1));
            if ((*(int *)(iVar10 + 0x90) != 0) && (param_1 != 0)) {
              fStack_140 = fStack_140 - *(float *)(param_1 + 0x84);
            }
            uVar7 = *(undefined4 *)(iVar10 + 0x80);
            uVar8 = *(undefined4 *)(iVar10 + 0x7c);
            iVar12 = iVar10 + 0x74;
            iVar28 = iVar10 + 0x6c;
            iVar29 = iVar10 + 100;
            iVar10 = iVar10 + 0x5c;
            fVar24 = _CIfmod((float10)(float)fVar23,(float10)fStack_140);
            fVar27 = (float)(fVar24 / (float10)(float)fVar23);
          }
          fVar23 = (float10)FUN_004c0c70(bea_arg(fVar27), bea_arg(iVar10), bea_arg(iVar29), bea_arg(iVar28), bea_arg(iVar12), bea_arg(uVar8), bea_arg(uVar7), bea_arg(iVar13));
          fVar23 = fVar23 * (float10)*(float *)(this_ + 0x9c);
        }
        iVar10 = *(int *)(this_ + 0x6c);
        fVar27 = (float)(fVar23 * (float10)(float)fVar22);
        if (iVar10 == 0) {
          iVar10 = (local_ec + 0xff00) * 0x100 + local_e8;
          uVar11 = uStack_f0;
        }
        else {
          if (*(int *)(iVar10 + 0xa8) == 0) {
            if (*(int *)(iVar10 + 0xa4) == 0) {
              fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x5c)), bea_arg(fVar1), bea_arg(param_1));
              bStack_134 = (byte)(longlong)ROUND(fVar23 * (float10)255.0f);
              uStack_f8 = (uint)bStack_134;
              fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 100)), bea_arg(fVar1), bea_arg(param_1));
              bStack_134 = (byte)(longlong)ROUND(fVar23 * (float10)255.0f);
              uStack_f4 = (uint)bStack_134;
              fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x6c)), bea_arg(fVar1), bea_arg(param_1));
              bStack_134 = (byte)(longlong)ROUND(fVar23 * (float10)255.0f);
            }
            else {
              fVar4 = 1.0f - fVar1;
              fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x5c)), bea_arg(fVar1), bea_arg(param_1));
              fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x74)), bea_arg(fVar1), bea_arg(param_1));
              bStack_134 = (byte)(longlong)
                                 ROUND((fVar24 * (float10)fVar1 +
                                       (float10)(float)(fVar23 * (float10)fVar4)) * (float10)255.0f);
              uStack_f8 = (uint)bStack_134;
              fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 100)), bea_arg(fVar1), bea_arg(param_1));
              fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x7c)), bea_arg(fVar1), bea_arg(param_1));
              bStack_134 = (byte)(longlong)
                                 ROUND((fVar24 * (float10)fVar1 +
                                       (float10)(float)(fVar23 * (float10)fVar4)) * (float10)255.0f);
              uStack_f4 = (uint)bStack_134;
              fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x6c)), bea_arg(fVar1), bea_arg(param_1));
              fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x84)), bea_arg(fVar1), bea_arg(param_1));
              bStack_134 = (byte)(longlong)
                                 ROUND((fVar24 * (float10)fVar1 +
                                       (float10)(float)(fVar23 * (float10)fVar4)) * (float10)255.0f);
            }
          }
          else if (*(float *)(iVar10 + 0xac) <= fVar1) {
            fVar1 = (fVar1 - *(float *)(iVar10 + 0xac)) / (1.0f - *(float *)(iVar10 + 0xac));
            fVar4 = 1.0f - fVar1;
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x8c)), bea_arg(fVar1), bea_arg(param_1));
            fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x74)), bea_arg(fVar1), bea_arg(param_1));
            bStack_134 = (byte)(longlong)
                               ROUND((fVar24 * (float10)fVar1 +
                                     (float10)(float)(fVar23 * (float10)fVar4)) * (float10)255.0f);
            uStack_f8 = (uint)bStack_134;
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x94)), bea_arg(fVar1), bea_arg(param_1));
            fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x7c)), bea_arg(fVar1), bea_arg(param_1));
            bStack_134 = (byte)(longlong)
                               ROUND((fVar24 * (float10)fVar1 +
                                     (float10)(float)(fVar23 * (float10)fVar4)) * (float10)255.0f);
            uStack_f4 = (uint)bStack_134;
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x9c)), bea_arg(fVar1), bea_arg(param_1));
            fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x84)), bea_arg(fVar1), bea_arg(param_1));
            bStack_134 = (byte)(longlong)
                               ROUND((fVar24 * (float10)fVar1 +
                                     (float10)(float)(fVar23 * (float10)fVar4)) * (float10)255.0f);
          }
          else {
            fVar1 = fVar1 / *(float *)(iVar10 + 0xac);
            fVar4 = 1.0f - fVar1;
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x8c)), bea_arg(fVar1), bea_arg(param_1));
            fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x5c)), bea_arg(fVar1), bea_arg(param_1));
            bStack_134 = (byte)(longlong)
                               ROUND((fVar24 * (float10)fVar4 +
                                     (float10)(float)(fVar23 * (float10)fVar1)) * (float10)255.0f);
            uStack_f8 = (uint)bStack_134;
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x94)), bea_arg(fVar1), bea_arg(param_1));
            fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 100)), bea_arg(fVar1), bea_arg(param_1));
            bStack_134 = (byte)(longlong)
                               ROUND((fVar24 * (float10)fVar4 +
                                     (float10)(float)(fVar23 * (float10)fVar1)) * (float10)255.0f);
            uStack_f4 = (uint)bStack_134;
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x9c)), bea_arg(fVar1), bea_arg(param_1));
            fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x6c)), bea_arg(fVar1), bea_arg(param_1));
            bStack_134 = (byte)(longlong)
                               ROUND((fVar24 * (float10)fVar4 +
                                     (float10)(float)(fVar23 * (float10)fVar1)) * (float10)255.0f);
          }
          iVar10 = (((int)(uStack_f8 * local_ec) >> 8) + 0xff00) * 0x100 +
                   ((int)(uStack_f4 * local_e8) >> 8);
          uVar11 = (int)((uint)bStack_134 * (uStack_f0 & 0xff)) >> 8;
        }
        iStack_100 = 0;
        if (0 < local_150 + 1) {
          fVar1 = local_b0[0] * fVar26;
          fVar4 = local_a0 * fVar26;
          fVar26 = local_90 * fVar26;
          do {
            fVar23 = ((float10)iStack_100 / (float10)local_150) * (float10)6.2831855f;
            fVar24 = (float10)fsin(fVar23);
            fStack_84 = (float)(fVar24 * (float10)fVar27);
            fVar23 = (float10)fcos(fVar23);
            fVar23 = fVar23 * (float10)fVar27;
            fStack_34 = (float)(fVar23 * (float10)local_b0[1] +
                                (float10)fStack_b4 * (float10)fStack_84 + (float10)fVar1) + local_e4
            ;
            local_50 = local_e0 +
                       (float)((float10)fStack_84 * (float10)local_b0[3] +
                               fVar23 * (float10)local_9c + (float10)fVar4);
            fStack_4c = (float)((float10)local_dc +
                               (float10)fStack_84 * (float10)fStack_94 + fVar23 * (float10)local_8c
                               + (float10)fVar26);
            fStack_20 = (float)(((float10)iStack_100 / (float10)local_150) * (float10)local_d4 +
                               (float10)fStack_cc);
            local_30[0] = local_50;
            local_30[1] = fStack_4c;
            iStack_28 = iVar10 * 0x100 + (uVar11 & 0xff);
            fStack_24 = fVar3;
            FUN_005501e0(bea_arg(*(void **)(this_ + 100)), bea_arg(&fStack_34));
            iStack_100 = iStack_100 + 1;
          } while (((iStack_100 < local_150 + 1)));
        }
        fStack_fc = (float)((int)fStack_fc + 1);
      } while ((((int)fStack_fc < iVar14)));
    }
    local_d4 = (float)(iVar14 + -1);
    iVar14 = local_150 + 1 + iVar9;
    if ((int)local_d4 < 1) {
      return (int)local_d4;
    }
    do {
      iVar10 = iVar9;
      fStack_cc = (float)local_150;
      local_144 = iVar14;
      if (0 < local_150) {
        do {
          local_144 = local_144 + 1;
          iVar10 = iVar10 + 1;
          FUN_00550180(bea_arg(*(void **)(this_ + 100)), bea_arg(iVar9), bea_arg(iVar10), bea_arg(iVar14));
          FUN_00550180(bea_arg(*(void **)(this_ + 100)), bea_arg(iVar10), bea_arg(iVar14), bea_arg(local_144));
          iVar9 = iVar9 + 1;
          iVar14 = iVar14 + 1;
          fStack_cc = (float)((int)fStack_cc + -1);
        } while (((fStack_cc != 0.0f)));
      }
      iVar9 = iVar9 + 1;
      iVar14 = iVar14 + 1;
      local_d4 = (float)((int)local_d4 + -1);
    } while (((local_d4 != 0.0f)));
    return 0;
  }
  iVar14 = *(int *)(this_ + 0x5c) + -1;
  if (iVar14 != 0) {
    return iVar14;
  }
  iVar9 = FUN_005501d0(bea_arg(*(void **)(this_ + 100)));
  fVar21 = (float10)FUN_004c10c0(bea_arg(this_ + 0xdc), bea_arg(((float)*(int *)(this_ + 0x60) - *(float *)(param_1 + 0x60)) /
                                 (float)*(int *)(this_ + 0x60)), bea_arg(param_1));
  fVar1 = (float)fVar21;
  fVar21 = (float10)FUN_004c10c0(bea_arg(this_ + 0xbc), bea_arg(((float)*(int *)(this_ + 0x60) - *(float *)(param_1 + 0x60)) /
                                 (float)*(int *)(this_ + 0x60)), bea_arg(param_1));
  fStack_fc = (float)(fVar21 * (float10)0.017453292f - (float10)1.5707964f);
  fVar21 = (float10)FUN_004c10c0(bea_arg(this_ + 0xc4), bea_arg(((float)*(int *)(this_ + 0x60) - *(float *)(param_1 + 0x60)) /
                                 (float)*(int *)(this_ + 0x60)), bea_arg(param_1));
  fVar22 = (float10)FUN_004c10c0(bea_arg(this_ + 0xcc), bea_arg(((float)*(int *)(this_ + 0x60) - *(float *)(param_1 + 0x60)) /
                                 (float)*(int *)(this_ + 0x60)), bea_arg(param_1));
  fStack_6c = (float)(fVar22 * (float10)0.017453292f);
  fVar22 = (float10)FUN_004c10c0(bea_arg(this_ + 0xd4), bea_arg(((float)*(int *)(this_ + 0x60) - *(float *)(param_1 + 0x60)) /
                                 (float)*(int *)(this_ + 0x60)), bea_arg(param_1));
  iVar14 = *(int *)(this_ + 0xb8);
  iStack_14c = *(int *)(this_ + 0xb4);
  fVar26 = ((fVar1 * fVar1) /
           ((fStack_5c - local_dc) * (fStack_5c - local_dc) +
            (local_60 - local_e0) * (local_60 - local_e0) +
           (local_64 - local_e4) * (local_64 - local_e4))) * _DAT_00630e0c * 102400.0f;
  iVar10 = FUN_00515970(bea_arg(0x3b));
  if ((((iVar10 == 0) && (DAT_009c648c != 0)) && (iVar10 = FUN_004725d0(bea_arg(&DAT_008a9a98)), iVar10 == 0)
      ) && (((this_[5] == (CPDPMesh)0x65 && (this_[9] == (CPDPMesh)0x50)) &&
            ((this_[0x1a] == (CPDPMesh)0x41 || (this_[0x1a] == (CPDPMesh)0x4c)))))) {
    pCVar17 = this_ + 4;
    pcVar19 = s_Mech_Pulse_Bolt_Blast_Aug_00630e40;
    pCVar16 = pCVar17;
    do {
      CVar2 = *pCVar16;
      bVar20 = (byte)CVar2 < (byte)*pcVar19;
      if (CVar2 != (CPDPMesh)*pcVar19) {
LAB_004c9920:
        iVar10 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
        goto LAB_004c9925;
      }
      if (CVar2 == (CPDPMesh)0x0) break;
      CVar2 = pCVar16[1];
      bVar20 = (byte)CVar2 < (byte)*(CPDPMesh *)(pcVar19 + 1);
      if (CVar2 != *(CPDPMesh *)(pcVar19 + 1)) goto LAB_004c9920;
      pCVar16 = pCVar16 + 2;
      pcVar19 = pcVar19 + 2;
    } while (((CVar2 != (CPDPMesh)0x0)));
    iVar10 = 0;
LAB_004c9925:
    if (iVar10 != 0) {
      pcVar19 = s_Mech_Pulse_Bolt_Blast_Large_00630e24;
      do {
        CVar2 = *pCVar17;
        bVar20 = (byte)CVar2 < (byte)*pcVar19;
        if (CVar2 != (CPDPMesh)*pcVar19) {
LAB_004c9958:
          iVar10 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
          goto LAB_004c995d;
        }
        if (CVar2 == (CPDPMesh)0x0) break;
        CVar2 = pCVar17[1];
        bVar20 = (byte)CVar2 < (byte)*(CPDPMesh *)(pcVar19 + 1);
        if (CVar2 != *(CPDPMesh *)(pcVar19 + 1)) goto LAB_004c9958;
        pCVar17 = pCVar17 + 2;
        pcVar19 = pcVar19 + 2;
      } while (((CVar2 != (CPDPMesh)0x0)));
      iVar10 = 0;
LAB_004c995d:
      if (iVar10 != 0) goto LAB_004c9978;
    }
    bVar20 = true;
    iStack_14c = 0x32;
    iVar14 = 0x32;
    goto LAB_004c9a37;
  }
LAB_004c9978:
  bVar20 = false;
  if (10.0f <= fVar26) {
    if (30.0f <= fVar26) goto LAB_004c9a37;
    if ((4 < iStack_14c) && (iStack_14c = iStack_14c / 2, iStack_14c < 4)) {
      iStack_14c = 4;
    }
    if (iVar14 < 5) goto LAB_004c9a37;
    iVar14 = iVar14 / 2;
  }
  else {
    if ((4 < iStack_14c) && (iStack_14c = iStack_14c / 3, iStack_14c < 4)) {
      iStack_14c = 4;
    }
    if (iVar14 < 5) goto LAB_004c9a37;
    iVar14 = iVar14 / 3;
  }
  if (iVar14 < 4) {
    iVar14 = 4;
  }
LAB_004c9a37:
  local_70 = (float)iStack_14c;
  local_144 = 0;
  fVar26 = ((float)(fVar21 * (float10)0.017453292f - (float10)1.5707964f) - fStack_fc) / local_70;
  fVar3 = (float)(fVar22 * (float10)0.017453292f) - fStack_6c;
  if (0 < iStack_14c + 1) {
    do {
      iVar10 = *(int *)(this_ + 0x6c);
      fVar27 = (float)local_144 / local_70;
      fVar4 = fVar27 * fStack_74 + fStack_68;
      fVar21 = (float10)fsin((float10)fStack_fc);
      fVar22 = (float10)fcos((float10)fStack_fc);
      if (iVar10 == 0) {
        iVar10 = (local_ec + 0xff00) * 0x100 + local_e8;
        uVar11 = uStack_f0;
      }
      else {
        if (*(int *)(iVar10 + 0xa8) == 0) {
          if (*(int *)(iVar10 + 0xa4) == 0) {
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x5c)), bea_arg(fVar27), bea_arg(param_1));
            bStack_120 = (byte)(longlong)ROUND(fVar23 * (float10)255.0f);
            local_104 = (float)(uint)bStack_120;
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 100)), bea_arg(fVar27), bea_arg(param_1));
            bStack_120 = (byte)(longlong)ROUND(fVar23 * (float10)255.0f);
            uStack_f4 = (uint)bStack_120;
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x6c)), bea_arg(fVar27), bea_arg(param_1));
            bStack_120 = (byte)(longlong)ROUND(fVar23 * (float10)255.0f);
          }
          else {
            fVar5 = 1.0f - fVar27;
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x5c)), bea_arg(fVar27), bea_arg(param_1));
            fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x74)), bea_arg(fVar27), bea_arg(param_1));
            bStack_120 = (byte)(longlong)
                               ROUND((fVar24 * (float10)fVar27 +
                                     (float10)(float)(fVar23 * (float10)fVar5)) * (float10)255.0f);
            local_104 = (float)(uint)bStack_120;
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 100)), bea_arg(fVar27), bea_arg(param_1));
            fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x7c)), bea_arg(fVar27), bea_arg(param_1));
            bStack_120 = (byte)(longlong)
                               ROUND((fVar24 * (float10)fVar27 +
                                     (float10)(float)(fVar23 * (float10)fVar5)) * (float10)255.0f);
            uStack_f4 = (uint)bStack_120;
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x6c)), bea_arg(fVar27), bea_arg(param_1));
            fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x84)), bea_arg(fVar27), bea_arg(param_1));
            bStack_120 = (byte)(longlong)
                               ROUND((fVar24 * (float10)fVar27 +
                                     (float10)(float)(fVar23 * (float10)fVar5)) * (float10)255.0f);
          }
        }
        else if (*(float *)(iVar10 + 0xac) <= fVar27) {
          fVar27 = (fVar27 - *(float *)(iVar10 + 0xac)) / (1.0f - *(float *)(iVar10 + 0xac));
          fVar5 = 1.0f - fVar27;
          fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x8c)), bea_arg(fVar27), bea_arg(param_1));
          fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x74)), bea_arg(fVar27), bea_arg(param_1));
          bStack_120 = (byte)(longlong)
                             ROUND((fVar24 * (float10)fVar27 +
                                   (float10)(float)(fVar23 * (float10)fVar5)) * (float10)255.0f);
          local_104 = (float)(uint)bStack_120;
          fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x94)), bea_arg(fVar27), bea_arg(param_1));
          fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x7c)), bea_arg(fVar27), bea_arg(param_1));
          bStack_120 = (byte)(longlong)
                             ROUND((fVar24 * (float10)fVar27 +
                                   (float10)(float)(fVar23 * (float10)fVar5)) * (float10)255.0f);
          uStack_f4 = (uint)bStack_120;
          fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x9c)), bea_arg(fVar27), bea_arg(param_1));
          fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x84)), bea_arg(fVar27), bea_arg(param_1));
          bStack_120 = (byte)(longlong)
                             ROUND((fVar24 * (float10)fVar27 +
                                   (float10)(float)(fVar23 * (float10)fVar5)) * (float10)255.0f);
        }
        else {
          fVar27 = fVar27 / *(float *)(iVar10 + 0xac);
          fVar5 = 1.0f - fVar27;
          fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x8c)), bea_arg(fVar27), bea_arg(param_1));
          fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x5c)), bea_arg(fVar27), bea_arg(param_1));
          bStack_120 = (byte)(longlong)
                             ROUND((fVar24 * (float10)fVar5 +
                                   (float10)(float)(fVar23 * (float10)fVar27)) * (float10)255.0f);
          local_104 = (float)(uint)bStack_120;
          fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x94)), bea_arg(fVar27), bea_arg(param_1));
          fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 100)), bea_arg(fVar27), bea_arg(param_1));
          bStack_120 = (byte)(longlong)
                             ROUND((fVar24 * (float10)fVar5 +
                                   (float10)(float)(fVar23 * (float10)fVar27)) * (float10)255.0f);
          uStack_f4 = (uint)bStack_120;
          fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x9c)), bea_arg(fVar27), bea_arg(param_1));
          fVar24 = (float10)FUN_004c10c0(bea_arg((void *)(iVar10 + 0x6c)), bea_arg(fVar27), bea_arg(param_1));
          bStack_120 = (byte)(longlong)
                             ROUND((fVar24 * (float10)fVar5 +
                                   (float10)(float)(fVar23 * (float10)fVar27)) * (float10)255.0f);
        }
        iVar10 = (((int)((int)local_104 * local_ec) >> 8) + 0xff00) * 0x100 +
                 ((int)(uStack_f4 * local_e8) >> 8);
        uVar11 = (int)((uint)bStack_120 * (uStack_f0 & 0xff)) >> 8;
      }
      iVar10 = iVar10 * 0x100 + (uVar11 & 0xff);
      local_150 = 0;
      fStack_140 = fStack_6c;
      if (0 < iVar14 + 1) {
        do {
          fVar23 = (float10)fcos((float10)fStack_140);
          fVar24 = (float10)fsin((float10)fStack_140);
          fStack_114 = (float)fVar23 * (float)(fVar22 * (float10)fVar1);
          local_110 = (float)-fVar24 * (float)(fVar22 * (float10)fVar1);
          fVar25 = (float10)(float)(fVar21 * (float10)fVar1);
          if (bVar20) {
            fVar27 = fStack_fc * 0.31830987f + 1.0f;
            fVar5 = fVar27 * (float)fVar23;
            fVar6 = fVar1 * 0.2f;
            fVar27 = fVar27 * (float)-fVar24 - fVar6;
            fVar23 = (float10)FUN_004cac80(fVar27,-fVar5 - fVar6);
            fVar24 = (float10)FUN_004cac80(fVar6 + fVar5,fVar27);
            fVar25 = fVar24 * (float10)(float)fVar23 + (float10)1.0f;
            fStack_114 = (float)(fVar25 * (float10)fStack_114);
            local_110 = (float)(fVar25 * (float10)local_110);
            fVar25 = fVar25 * (float10)(float)(fVar21 * (float10)fVar1);
          }
          FUN_00401ec0(bea_arg(&fStack_44), bea_arg((float)((float10)local_110 * (float10)local_b0[0] +
                              fVar25 * (float10)local_b0[1] +
                              (float10)fStack_b4 * (float10)fStack_114)), bea_arg((float)((float10)local_110 * (float10)local_a0 +
                              (float10)fStack_114 * (float10)local_b0[3] +
                              fVar25 * (float10)local_9c)), bea_arg((float)((float10)local_110 * (float10)local_90 +
                              (float10)fStack_114 * (float10)fStack_94 + fVar25 * (float10)local_8c)));
          fVar27 = local_e4 + fStack_44;
          fVar5 = local_e0 + local_40;
          fStack_84 = fStack_44;
          local_80 = local_40;
          local_7c = fStack_3c;
          fVar6 = local_dc + fStack_3c;
          local_78 = fStack_38;
          fStack_20 = ((float)local_150 / (float)iVar14) * local_d4 + fStack_cc;
          fStack_34 = fVar27;
          local_30[0] = fVar5;
          local_30[1] = fVar6;
          iVar13 = iVar10;
          fStack_24 = fVar4;
          if (((!bVar20) && (iVar12 = FUN_00515970(bea_arg(0x3b)), iVar12 == 0)) && (DAT_009c648c != 0)) {
            FUN_00406d50(bea_arg(&fStack_84));
            FUN_00401ec0(bea_arg(auStack_54), bea_arg(local_64 - fVar27), bea_arg(local_60 - fVar5), bea_arg(fStack_5c - fVar6));
            FUN_00406d50(bea_arg(auStack_54));
            fVar23 = (float10)FUN_0040d180(bea_arg(&fStack_84), bea_arg(auStack_54));
            uVar8 = 0x3ecccccd;
            uVar7 = 0x3e4ccccd;
            fVar27 = (float)ABS(fVar23);
            fVar23 = (float10)FUN_004cac40(bea_arg(fVar27), bea_arg(0x3e4ccccd), bea_arg(0x3ecccccd));
            iVar13 = FUN_004cab30(bea_arg(iVar10), bea_arg(0), bea_arg((float)fVar23), bea_arg(fVar27), bea_arg(uVar7), bea_arg(uVar8));
          }
          iStack_28 = iVar13;
          FUN_005501e0(bea_arg(*(void **)(this_ + 100)), bea_arg(&fStack_34));
          fStack_140 = fStack_140 + fVar3 / (float)iVar14;
          local_150 = local_150 + 1;
        } while (((local_150 < iVar14 + 1)));
      }
      fStack_fc = fStack_fc + fVar26;
      local_144 = local_144 + 1;
    } while (((local_144 < iStack_14c + 1)));
  }
  iVar10 = iVar14 + 1 + iVar9;
  if (iStack_14c < 1) {
    return iVar14;
  }
  iStack_118 = iStack_14c;
  do {
    iVar13 = iVar9;
    iStack_148 = iVar14;
    local_144 = iVar10;
    if (0 < iVar14) {
      do {
        local_144 = local_144 + 1;
        iVar13 = iVar13 + 1;
        FUN_00550180(bea_arg(*(void **)(this_ + 100)), bea_arg(iVar9), bea_arg(iVar13), bea_arg(iVar10));
        FUN_00550180(bea_arg(*(void **)(this_ + 100)), bea_arg(iVar13), bea_arg(iVar10), bea_arg(local_144));
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 1;
        iStack_148 = iStack_148 + -1;
      } while (((iStack_148 != 0)));
    }
    iVar9 = iVar9 + 1;
    iVar10 = iVar10 + 1;
    iStack_118 = iStack_118 + -1;
  } while (((iStack_118 != 0)));
  return iVar14;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c9000, ap_004c9000));
