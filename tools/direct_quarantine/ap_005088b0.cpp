// auto-ported from 005088b0_FUN_005088b0.c (FUN_005088b0, 2181 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x190: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char Vec3;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_008a9d7c GLOBAL_AT(int, 0x008a9d7c)
#define DAT_008a9d80 GLOBAL_AT(int, 0x008a9d80)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef f80 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_004098e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004098e0_t> FUN_004098e0 = {(FUN_004098e0_t)0x004098e0};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef uint32_t (BEA_THISCALL* FUN_0044a850_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a850_t> FUN_0044a850 = {(FUN_0044a850_t)0x0044a850};
typedef uint32_t (BEA_THISCALL* FUN_0044a930_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a930_t> FUN_0044a930 = {(FUN_0044a930_t)0x0044a930};
typedef undefined4 (BEA_THISCALL* FUN_0044c780_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044c780_t> FUN_0044c780 = {(FUN_0044c780_t)0x0044c780};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef float * (BEA_FASTCALL* FUN_0047ec60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ec60_t> FUN_0047ec60 = {(FUN_0047ec60_t)0x0047ec60};
typedef uint32_t (BEA_THISCALL* FUN_0050a0e0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0050a0e0_t> FUN_0050a0e0 = {(FUN_0050a0e0_t)0x0050a0e0};
typedef undefined4 (BEA_STDCALL* FUN_0050b030_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0050b030_t> FUN_0050b030 = {(FUN_0050b030_t)0x0050b030};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static undefined4 BEA_THISCALL ap_005088b0(void * this_, int param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  undefined4 *puVar11;
  uint uVar12;
  void *this_00;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;

  alignas(16) uint8_t bea_frame_[0x190] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_190 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x190);
  undefined4 &local_18c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x18c);
  undefined4 &local_188 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x188);
  undefined4 &local_184 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x184);
  undefined4 &local_180 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x180);
  undefined4 &local_17c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x17c);
  undefined4 &local_178 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x178);
  undefined4 &local_174 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x174);
  undefined4 &local_170 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x170);
  undefined4 &local_16c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x16c);
  undefined4 &local_168 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x168);
  undefined4 &local_164 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x164);
  undefined4 &local_160 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x160);
  undefined4 uVar17;
  int *piVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float &local_130 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0x130);
  float &local_128 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0x128);
  float &local_124 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0x124);
  float &local_120 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0x120);
  float &local_11c = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0x11c);
  float &local_110 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0x110);
  float &local_10c = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0x10c);
  float &local_108 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0x108);
  float &local_100 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0x100);
  float &local_fc = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0xfc);
  float &local_f8 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0xf8);
  float &local_f0 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0xf0);
  float &local_ec = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0xec);
  float &local_e8 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0xe8);
  undefined4 &local_e4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0xe4);
  float &local_e0 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0xe0);
  float &local_dc = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0xdc);
  float &local_d8 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0xd8);
  int (&local_d0)[4] = *reinterpret_cast<int (*)[4]>(bea_frame_ + 0x190 - 0xd0);
  undefined ** &local_c0 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x190 - 0xc0);
  undefined4 &local_bc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0xbc);
  undefined4 &local_b8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0xb8);
  undefined4 &local_b4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0xb4);
  undefined4 &local_ac = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0xac);
  undefined4 &local_a8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0xa8);
  undefined4 &local_a4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0xa4);
  undefined4 &local_a0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0xa0);
  float &local_9c = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0x9c);
  float &local_98 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0x98);
  float &local_94 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0x94);
  undefined4 &local_90 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x90);
  undefined1 (&local_8c)[32] = *reinterpret_cast<undefined1 (*)[32]>(bea_frame_ + 0x190 - 0x8c);
  undefined4 &local_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x6c);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0x68);
  undefined4 &local_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x64);
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x60);
  undefined1 (&local_5c)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x190 - 0x5c);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0x58);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x190 - 0x48);
  undefined1 (&local_2c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x190 - 0x2c);
  undefined1 (&local_1c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x190 - 0x1c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x190 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x190 - 0x4);
  fVar3 = DAT_006fbdfc;
  iVar9 = FUN_0044a850(bea_arg(this_), bea_arg(&local_110));
  if (fVar3 < *(float *)(iVar9 + 8)) {
    return 0;
  }
  if (((*(int *)((int)this_ + 0xa0) != 0) &&
      (iVar9 = *(int *)(*(int *)((int)this_ + 0xa0) + 0x18), iVar9 != 0)) &&
     (*(int *)(iVar9 + 0x58) != 0)) {
    this_00 = DAT_008a9d7c;
    if (*(int *)(*(int *)((int)this_ + 8) + 0x138) != 0) {
      this_00 = DAT_008a9d80;
    }
    if ((this_00 != (void *)0x0) &&
       (iVar9 = FUN_0044c780(bea_arg(this_00), bea_arg(*(undefined4 *)(param_1 + 0x1c)), bea_arg(*(undefined4 *)(param_1 + 0x20)), bea_arg(*(undefined4 *)(param_1 + 0x24)), bea_arg(*(undefined4 *)(param_1 + 0x28))),
       iVar9 == 0)) {
      return 0;
    }
  }
  fVar3 = *(float *)(*(int *)(*(int *)((int)this_ + 0xa0) + 0x18) + 0x2c);
  iVar9 = FUN_0044a930(bea_arg(this_), bea_arg(local_5c));
  local_d8 = fVar3 * *(float *)(iVar9 + 0x24);
  local_dc = fVar3 * *(float *)(iVar9 + 0x14);
  local_e0 = fVar3 * *(float *)(iVar9 + 4);
  FUN_0050a0e0(bea_arg(this_), bea_arg(&local_f0), bea_arg(param_1));
  pfVar10 = (float *)FUN_0044a850(bea_arg(this_), bea_arg(&local_110));
  local_f8 = local_e8 - pfVar10[2];
  local_fc = local_ec - pfVar10[1];
  local_100 = local_f0 - *pfVar10;
  fVar13 = bea_fcast<float10>(FUN_004026b0(bea_arg(&local_100)));
  if (fVar13 <= bea_fcast<float10>(0.0f)) {
    local_128 = 0.0f;
  }
  else {
    fVar13 = _CIasin(bea_fcast<float10>(bea_fcast<float>((bea_fcast<float10>(local_f8) / fVar13))));
    local_128 = bea_fcast<float>(fVar13);
  }
  if (*(int *)((int)this_ + 0x98) == 0) {
    fVar13 = bea_fcast<float10>(FUN_004026b0(bea_arg(&local_e0)));
    if (fVar13 <= bea_fcast<float10>(0.0f)) {
      fVar13 = bea_fcast<float10>(0.0f);
    }
    else {
      fVar13 = _CIasin(bea_fcast<float10>(bea_fcast<float>((bea_fcast<float10>(local_d8) / fVar13))));
    }
    local_128 = bea_fcast<float>((bea_fcast<float10>(local_128) - fVar13));
    fVar13 = bea_fcast<float10>(FUN_004026b0(bea_arg(&local_e0)));
    if (fVar13 <= bea_fcast<float10>(0.0f)) goto LAB_00508a9d;
    fVar13 = _CIasin(bea_fcast<float10>(bea_fcast<float>((bea_fcast<float10>(local_d8) / fVar13))));
  }
  else {
    local_128 = *(float *)(*(int *)((int)this_ + 8) + 0xe8);
LAB_00508a9d:
    fVar13 = bea_fcast<float10>(0.0f);
  }
  iVar9 = *(int *)((int)this_ + 0xa0);
  iVar4 = *(int *)(iVar9 + 0x18);
  if (((*(float *)(iVar4 + 0x3c) * 0.025f == 0.0f) || (*(int *)(iVar4 + 0x50) != 0)) ||
     (*(int *)(iVar4 + 0x6c) != 0)) {
    if (*(int *)(*(int *)(iVar9 + 0x18) + 0x6c) != 0) {
      fVar13 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(*(int *)((int)this_ + 8) + 0x1c)));
      if (fVar13 <= bea_fcast<float10>(DAT_006fbdfc)) {
        return 0;
      }
      return 1;
    }
    if (*(int *)((int)this_ + 0x98) != 0) {
      iVar9 = *(int *)((int)this_ + 8);
      uVar17 = *(undefined4 *)(iVar9 + 0xe0);
      FUN_004011b0(bea_arg(local_8c), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
      FUN_004062d0(bea_arg(local_8c), bea_arg(uVar17), bea_arg(0), bea_arg(0));
      FUN_0040d320(bea_arg(local_8c), bea_arg(local_5c), bea_arg(iVar9 + 0x3c));
      fVar14 = bea_fcast<float10>(fpatan(bea_fcast<float10>(local_58),bea_fcast<float10>(local_48)));
      fVar13 = bea_fcast<float10>(fcos(-fVar14));
      fVar14 = bea_fcast<float10>(fsin(bea_fcast<float10>(bea_fcast<float>(-fVar14))));
      puVar11 = (undefined4 *)FUN_00401ec0(bea_arg(local_2c), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
      local_6c = *puVar11;
      fVar3 = bea_fcast<float>(puVar11[1]);
      local_64 = puVar11[2];
      local_60 = puVar11[3];
      local_68 = fVar3;
      FUN_0047ec60(bea_arg(&DAT_006fadc8), bea_arg(&local_110), bea_arg(*(int *)((int)this_ + 8) + 0x1c));
      local_128 = (local_10c * (local_108 * bea_fcast<float>(fVar13) - local_10c * fVar3) -
                  (local_110 * fVar3 - local_108 * bea_fcast<float>(-fVar14)) * local_110) + local_128;
    }
    iVar9 = *(int *)((int)this_ + 0xa0);
    if (*(float *)(iVar9 + 0x7c) < local_128) {
      return 0;
    }
    if (local_128 < *(float *)(iVar9 + 0x80)) {
      return 0;
    }
    if (*(int *)(*(int *)(iVar9 + 0x18) + 0x48) != 0) {
      return 1;
    }
    puVar11 = (undefined4 *)FUN_0044a850(bea_arg(this_), bea_arg(local_1c));
    local_ac = *puVar11;
    local_a8 = puVar11[1];
    local_a4 = puVar11[2];
    local_a0 = puVar11[3];
    local_9c = local_f0;
    local_98 = local_ec;
    local_94 = local_e8;
    local_90 = local_e4;
    local_c0 = ((void*)0x005d8bfc);
    local_d0[0] = 0;
    local_d0[1] = 0xffffffff;
    local_d0[2] = 0;
    local_d0[3] = 0xbf800000;
    uVar12 = (uint)((*(uint *)(param_1 + 0x34) & 0x100) == 0);
    uVar23 = 0xffffffff;
    uVar22 = 1;
    uVar21 = 4;
    uVar20 = 1;
    uVar17 = *(undefined4 *)((int)this_ + 8);
    piVar18 = local_d0;
    uVar19 = 0;
    FUN_004098e0(bea_arg(&local_190), bea_arg(&local_c0));
    iVar9 = FUN_0050b030(bea_arg(local_190), bea_arg(local_18c), bea_arg(local_188), bea_arg(local_184), bea_arg(local_180), bea_arg(local_17c), bea_arg(local_178), bea_arg(local_174), bea_arg(local_170), bea_arg(local_16c), bea_arg(local_168), bea_arg(local_164), bea_arg(local_160), bea_arg(uVar17), bea_arg(piVar18), bea_arg(uVar19), bea_arg(uVar12), bea_arg(uVar20), bea_arg(uVar21), bea_arg(uVar22), bea_arg(uVar23))
    ;
    if (iVar9 != 3) {
      return 0;
    }
    if (local_d0[0] == 0) {
      return 0;
    }
    if ((*(byte *)(local_d0[0] + 0x34) & 0x10) == 0) {
      return 0;
    }
    if (*(int *)(local_d0[0] + 0x138) != *(int *)(param_1 + 0x138)) {
      return 0;
    }
    return 1;
  }
  fVar5 = *(float *)(*(int *)((int)this_ + 8) + 0x24) - *(float *)(param_1 + 0x24);
  fVar6 = *(float *)(*(int *)(iVar9 + 0x18) + 0x2c) * 0.05f;
  fVar7 = *(float *)(*(int *)(iVar9 + 0x18) + 0x3c) * 0.025f;
  fVar8 = SQRT(local_fc * local_fc + local_100 * local_100);
  fVar3 = bea_fcast<float>((fVar13 + bea_fcast<float10>(*(float *)(iVar9 + 0x7c))));
  fVar1 = bea_fcast<float>((fVar13 + bea_fcast<float10>(*(float *)(iVar9 + 0x80))));
  if (((-0.7853982f < fVar3) && (-0.7853982f < fVar1)) ||
     ((fVar3 < -0.7853982f && (fVar1 < -0.7853982f)))) {
    fVar13 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar3)));
    fVar2 = bea_fcast<float>((fVar13 * bea_fcast<float10>(fVar6)));
    fVar13 = bea_fcast<float10>(fVar7) * bea_fcast<float10>(fVar5);
    fVar13 = fVar13 + fVar13;
    fVar14 = bea_fcast<float10>(fVar2) * bea_fcast<float10>(fVar2) + fVar13;
    if (fVar14 == bea_fcast<float10>(0.0f)) {
LAB_00508bdd:
      local_130 = 0.0f;
    }
    else {
      fVar15 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar3)));
      fVar14 = fVar15 * bea_fcast<float10>(fVar6) * ((SQRT(fVar14) - bea_fcast<float10>(fVar2)) / bea_fcast<float10>(fVar7));
      local_130 = bea_fcast<float>(fVar14);
      if (fVar14 < bea_fcast<float10>(0.0f)) goto LAB_00508bdd;
    }
    fVar14 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar1)));
    fVar3 = bea_fcast<float>((fVar14 * bea_fcast<float10>(fVar6)));
    fVar13 = fVar14 * bea_fcast<float10>(fVar6) * bea_fcast<float10>(fVar3) + fVar13;
    if (fVar13 == bea_fcast<float10>(0.0f)) {
LAB_00508c2d:
      fVar13 = bea_fcast<float10>(0.0f);
    }
    else {
      fVar14 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar1)));
      fVar13 = fVar14 * bea_fcast<float10>(fVar6) * ((SQRT(fVar13) - bea_fcast<float10>(fVar3)) / bea_fcast<float10>(fVar7));
      if (fVar13 < bea_fcast<float10>(0.0f)) goto LAB_00508c2d;
    }
    if (fVar13 < bea_fcast<float10>(local_130)) {
      fVar3 = bea_fcast<float>(fVar13);
      fVar13 = bea_fcast<float10>(local_130);
      local_130 = fVar3;
    }
    goto LAB_00508e06;
  }
  fVar13 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar3)));
  fVar2 = bea_fcast<float>((fVar13 * bea_fcast<float10>(fVar6)));
  fVar13 = bea_fcast<float10>(fVar7) * bea_fcast<float10>(fVar5);
  fVar13 = fVar13 + fVar13;
  fVar14 = bea_fcast<float10>(fVar2) * bea_fcast<float10>(fVar2) + fVar13;
  if (fVar14 <= bea_fcast<float10>(0.0f)) {
LAB_00508cb9:
    local_11c = 0.0f;
  }
  else {
    fVar15 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar3)));
    fVar14 = fVar15 * bea_fcast<float10>(fVar6) * ((SQRT(fVar14) - bea_fcast<float10>(fVar2)) / bea_fcast<float10>(fVar7));
    local_11c = bea_fcast<float>(fVar14);
    if (fVar14 < bea_fcast<float10>(0.0f)) goto LAB_00508cb9;
  }
  fVar14 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar1)));
  fVar14 = fVar14 * bea_fcast<float10>(fVar6);
  fVar15 = fVar14 * fVar14 + fVar13;
  if (fVar15 <= bea_fcast<float10>(0.0f)) {
LAB_00508d0d:
    local_120 = 0.0f;
  }
  else {
    fVar16 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar1)));
    fVar14 = fVar16 * bea_fcast<float10>(fVar6) * ((SQRT(fVar15) - fVar14) / bea_fcast<float10>(fVar7));
    local_120 = bea_fcast<float>(fVar14);
    if (fVar14 < bea_fcast<float10>(0.0f)) goto LAB_00508d0d;
  }
  fVar14 = bea_fcast<float10>(fsin(bea_fcast<float10>(-0.7853981852531433f)));
  local_130 = bea_fcast<float>((fVar14 * bea_fcast<float10>(fVar6)));
  fVar13 = fVar14 * bea_fcast<float10>(fVar6) * bea_fcast<float10>(local_130) + fVar13;
  if (fVar13 <= bea_fcast<float10>(0.0f)) {
LAB_00508d69:
    local_124 = 0.0f;
  }
  else {
    fVar14 = bea_fcast<float10>(fcos(bea_fcast<float10>(-0.7853981852531433f)));
    fVar13 = fVar14 * bea_fcast<float10>(fVar6) * ((SQRT(fVar13) - bea_fcast<float10>(local_130)) / bea_fcast<float10>(fVar7));
    local_124 = bea_fcast<float>(fVar13);
    if (fVar13 < bea_fcast<float10>(0.0f)) goto LAB_00508d69;
  }
  if (local_11c != 0.0f) {
    local_130 = local_11c;
  }
  if (local_120 < local_130) {
    local_130 = local_120;
  }
  if ((local_124 < local_130) && (local_124 != 0.0f)) {
    local_130 = local_124;
  }
  if (local_11c < local_120) {
    local_11c = local_120;
  }
  fVar13 = bea_fcast<float10>(local_11c);
  if (fVar13 < bea_fcast<float10>(local_124)) {
    fVar13 = bea_fcast<float10>(local_124);
  }
LAB_00508e06:
  if ((bea_fcast<float10>(fVar8) <= fVar13) && (local_130 <= fVar8)) {
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005088b0, ap_005088b0));
