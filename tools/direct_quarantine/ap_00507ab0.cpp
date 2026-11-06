// auto-ported from 00507ab0_FUN_00507ab0.c (FUN_00507ab0, 3582 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x230: a stack local's address escapes; locals keep the original frame layout
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
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef f80 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_004098e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004098e0_t> FUN_004098e0 = {(FUN_004098e0_t)0x004098e0};
typedef undefined4 (BEA_THISCALL* FUN_0040d0f0_t)(uint32_t);
static const bea_guard<FUN_0040d0f0_t> FUN_0040d0f0 = {(FUN_0040d0f0_t)0x0040d0f0};
typedef uint32_t (BEA_THISCALL* FUN_0040d1f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d1f0_t> FUN_0040d1f0 = {(FUN_0040d1f0_t)0x0040d1f0};
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
typedef uint32_t (BEA_THISCALL* FUN_0050a0e0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0050a0e0_t> FUN_0050a0e0 = {(FUN_0050a0e0_t)0x0050a0e0};
typedef undefined4 (BEA_STDCALL* FUN_0050b030_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0050b030_t> FUN_0050b030 = {(FUN_0050b030_t)0x0050b030};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static undefined4 BEA_THISCALL ap_00507ab0(void * this_, int param_1, int param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  float *pfVar11;
  undefined4 *puVar12;
  uint uVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;

  alignas(16) uint8_t bea_frame_[0x230] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_224 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x224);
  undefined4 &local_220 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x220);
  undefined4 &local_21c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x21c);
  undefined4 &local_218 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x218);
  undefined4 &local_214 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x214);
  undefined4 &local_210 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x210);
  undefined4 &local_20c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x20c);
  undefined4 &local_208 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x208);
  undefined4 &local_204 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x204);
  undefined4 &local_200 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x200);
  undefined4 &local_1fc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x1fc);
  undefined4 &local_1f8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x1f8);
  undefined4 &local_1f4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x1f4);
  int *piVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 *puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iVar26;
  float &local_1b4 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x1b4);
  float &local_1b0 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x1b0);
  float &local_1ac = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x1ac);
  float &local_19c = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x19c);
  float &local_198 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x198);
  float &local_194 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x194);
  undefined4 &local_190 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x190);
  float &local_18c = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x18c);
  float &local_188 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x188);
  float &local_184 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x184);
  undefined4 &local_180 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x180);
  float &local_17c = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x17c);
  float &local_178 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x178);
  float &local_174 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x174);
  undefined4 &local_170 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x170);
  float &local_16c = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x16c);
  float &local_168 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x168);
  float &local_164 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x164);
  int (&local_15c)[4] = *reinterpret_cast<int (*)[4]>(bea_frame_ + 0x230 - 0x15c);
  undefined ** &local_14c = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x230 - 0x14c);
  float (&local_148)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x230 - 0x148);
  float &local_138 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x138);
  undefined4 &local_134 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x134);
  undefined4 &local_130 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x130);
  undefined4 &local_12c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x12c);
  float &local_128 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x128);
  float &local_124 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x124);
  float &local_120 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x120);
  undefined4 &local_11c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x11c);
  undefined1 (&local_118)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x230 - 0x118);
  float &local_114 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x114);
  float &local_104 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x104);
  float &local_f4 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0xf4);
  float &local_e8 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0xe8);
  float &local_e4 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0xe4);
  float &local_e0 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0xe0);
  undefined ** &local_d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x230 - 0xd8);
  undefined4 &local_d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0xd4);
  undefined4 &local_d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0xd0);
  undefined4 &local_cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0xcc);
  undefined4 &local_c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0xc4);
  undefined4 &local_c0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0xc0);
  undefined4 &local_bc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0xbc);
  undefined4 &local_b8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0xb8);
  float &local_b4 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0xb4);
  float &local_b0 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0xb0);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0xac);
  undefined4 &local_a8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0xa8);
  undefined ** &local_a4 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x230 - 0xa4);
  undefined1 (&local_a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x230 - 0xa0);
  undefined4 &local_90 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x90);
  undefined4 &local_8c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x8c);
  undefined4 &local_88 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x88);
  undefined4 &local_84 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x84);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x80);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x78);
  undefined4 &local_74 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x74);
  undefined ** &local_70 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x230 - 0x70);
  undefined1 (&local_6c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x230 - 0x6c);
  undefined4 &local_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x5c);
  undefined4 &local_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x58);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x54);
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x48);
  float &local_44 = *reinterpret_cast<float *>(bea_frame_ + 0x230 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x40);
  undefined1 (&local_3c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x230 - 0x3c);
  undefined1 (&local_2c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x230 - 0x2c);
  undefined1 (&local_1c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x230 - 0x1c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x230 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x230 - 0x4);
  fVar4 = DAT_006fbdfc;
  local_4 = 0xffffffff;
  iVar9 = FUN_0044a850(bea_arg(this_), bea_arg(&local_19c));
  if ((*(float *)(iVar9 + 8) <= fVar4) &&
     ((((((*(int *)((int)this_ + 0xa0) == 0 ||
          (iVar9 = *(int *)(*(int *)((int)this_ + 0xa0) + 0x18), iVar9 == 0)) ||
         (*(int *)(iVar9 + 0x58) == 0)) ||
        ((iVar9 = *(int *)(*(int *)((int)this_ + 8) + 0x138), pvVar10 = DAT_008a9d7c, iVar9 != 0 &&
         (pvVar10 = DAT_008a9d80, iVar9 != 1)))) || (pvVar10 == (void *)0x0)) ||
      (iVar9 = FUN_0044c780(bea_arg(pvVar10), bea_arg(*(undefined4 *)(param_1 + 0x1c)), bea_arg(*(undefined4 *)(param_1 + 0x20)), bea_arg(*(undefined4 *)(param_1 + 0x24)), bea_arg(*(undefined4 *)(param_1 + 0x28))),
      iVar9 != 0)))) {
    fVar4 = *(float *)(*(int *)(*(int *)((int)this_ + 0xa0) + 0x18) + 0x2c);
    iVar9 = FUN_0044a930(bea_arg(this_), bea_arg(&local_14c));
    FUN_00401ec0(bea_arg(&local_e8), bea_arg(fVar4 * *(float *)(iVar9 + 4)), bea_arg(fVar4 * *(float *)(iVar9 + 0x14)), bea_arg(fVar4 * *(float *)(iVar9 + 0x24)));
    if (*(int *)((int)this_ + 0x94) != 0) {
      puVar23 = local_118;
      iVar9 = *(int *)((int)this_ + 8) + 0x3c;
      pvVar10 = (void *)FUN_0040d1f0(bea_arg(&local_14c), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 8) + 0xe0)), bea_arg(0), bea_arg(0))
      ;
      FUN_0040d320(bea_arg(pvVar10), bea_arg(puVar23), bea_arg(iVar9));
      FUN_00401ec0(bea_arg(&local_19c), bea_arg(local_114 * fVar4), bea_arg(local_104 * fVar4), bea_arg(local_f4 * fVar4));
      local_e4 = local_198;
      local_e8 = local_19c;
    }
    fVar16 = bea_fcast<float10>(fpatan(bea_fcast<float10>(local_e8),bea_fcast<float10>(local_e4)));
    fVar1 = bea_fcast<float>(-fVar16);
    if (*(int *)((int)this_ + 0x98) == 0) {
      fVar16 = bea_fcast<float10>(FUN_004026b0(bea_arg(&local_e8)));
      if (fVar16 <= bea_fcast<float10>(0.0f)) {
        local_1b0 = 0.0f;
      }
      else {
        fVar16 = _CIasin(bea_fcast<float10>(bea_fcast<float>((bea_fcast<float10>(local_e0) / fVar16))));
        local_1b0 = bea_fcast<float>(fVar16);
      }
    }
    else {
      local_1b0 = *(float *)(*(int *)((int)this_ + 8) + 0xe8);
    }
    FUN_0050a0e0(bea_arg(this_), bea_arg(&local_17c), bea_arg(param_1));
    pfVar11 = (float *)FUN_0044a850(bea_arg(this_), bea_arg(&local_19c));
    FUN_00401ec0(bea_arg(&local_16c), bea_arg(local_17c - *pfVar11), bea_arg(local_178 - pfVar11[1]), bea_arg(local_174 - pfVar11[2]));
    fVar16 = bea_fcast<float10>(fpatan(bea_fcast<float10>(local_16c),bea_fcast<float10>(local_168)));
    fVar2 = bea_fcast<float>(-fVar16);
    fVar16 = bea_fcast<float10>(FUN_004026b0(bea_arg(&local_16c)));
    if (fVar16 <= bea_fcast<float10>(0.0f)) {
      local_1b4 = 0.0f;
    }
    else {
      fVar16 = _CIasin(bea_fcast<float10>(bea_fcast<float>((bea_fcast<float10>(local_164) / fVar16))));
      local_1b4 = bea_fcast<float>(fVar16);
    }
    if ((-1.5707964f <= fVar2) || (fVar1 < 1.5707964f)) {
      fVar3 = fVar1;
      if ((1.5707964f <= fVar2) && (fVar1 < -1.5707964f)) {
        fVar3 = fVar1 + 6.2831855f;
      }
    }
    else {
      fVar3 = fVar1 - 6.2831855f;
    }
    fVar2 = fVar2 - fVar3;
    if (-3.1415927f <= fVar2) {
      if (3.1415927f <= fVar2) {
        fVar2 = fVar2 - 6.2831855f;
      }
    }
    else {
      fVar2 = fVar2 + 6.2831855f;
    }
    if (ABS(fVar2) < *(float *)(*(int *)((int)this_ + 0xa0) + 0x84)) {
      iVar9 = FUN_0040d0f0(bea_arg(*(void **)(*(int *)((int)this_ + 0xa0) + 0x18)));
      if (iVar9 == 0) {
        iVar9 = *(int *)((int)this_ + 0xa0);
        if (*(int *)(*(int *)(iVar9 + 0x18) + 0x6c) == 0) {
          if (*(int *)((int)this_ + 0x98) == 0) {
            if (*(float *)(iVar9 + 0x7c) <= local_1b4 - local_1b0) {
              return 0;
            }
            if (local_1b4 - local_1b0 <= *(float *)(iVar9 + 0x80)) {
              return 0;
            }
          }
          else {
            if ((-1.5707964f <= local_1b4) || (local_1b0 < 1.5707964f)) {
              if ((1.5707964f <= local_1b4) && (local_1b0 < -1.5707964f)) {
                local_1b0 = local_1b0 + 6.2831855f;
              }
            }
            else {
              local_1b0 = local_1b0 - 6.2831855f;
            }
            local_1b4 = local_1b4 - local_1b0;
            if (-3.1415927f <= local_1b4) {
              if (3.1415927f <= local_1b4) {
                local_1b4 = local_1b4 - 6.2831855f;
              }
            }
            else {
              local_1b4 = local_1b4 + 6.2831855f;
            }
            if (*(float *)(iVar9 + 0x84) < ABS(local_1b4)) {
              return 0;
            }
          }
          if (param_2 == 0) {
            return 1;
          }
          puVar12 = (undefined4 *)FUN_0044a850(bea_arg(this_), bea_arg(local_3c));
          local_c4 = *puVar12;
          local_c0 = puVar12[1];
          local_bc = puVar12[2];
          local_b8 = puVar12[3];
          local_b4 = local_17c;
          local_b0 = local_178;
          local_ac = local_174;
          local_a8 = local_170;
          local_d8 = ((void*)0x005d8bfc);
          local_4 = 3;
          local_15c[0] = 0;
          local_15c[1] = 0xffffffff;
          local_15c[2] = 0;
          local_15c[3] = 0xbf800000;
          uVar13 = (uint)((*(uint *)(param_1 + 0x34) & 0x100) == 0);
          iVar9 = 0;
          if (*(int *)(*(int *)((int)this_ + 8) + 0x24c) != 0) {
            iVar9 = *(int *)((int)this_ + 8);
          }
          uVar22 = 0xffffffff;
          uVar21 = 1;
          uVar20 = 4;
          uVar18 = 1;
          piVar17 = local_15c;
          uVar19 = 0;
          FUN_004098e0(bea_arg(&local_224), bea_arg(&local_d8));
          iVar9 = FUN_0050b030(bea_arg(local_224), bea_arg(local_220), bea_arg(local_21c), bea_arg(local_218), bea_arg(local_214), bea_arg(local_210), bea_arg(local_20c), bea_arg(local_208), bea_arg(local_204), bea_arg(local_200), bea_arg(local_1fc), bea_arg(local_1f8), bea_arg(local_1f4), bea_arg(iVar9), bea_arg(piVar17), bea_arg(uVar19), bea_arg(uVar13), bea_arg(uVar18), bea_arg(uVar20), bea_arg(uVar21), bea_arg(uVar22));
          if ((((iVar9 == 3) && (local_15c[0] != 0)) &&
              ((*(byte *)(local_15c[0] + 0x34) & 0x10) != 0)) &&
             (*(int *)(local_15c[0] + 0x138) == *(int *)(param_1 + 0x138))) {
            return 1;
          }
        }
        else {
          fVar16 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(*(int *)((int)this_ + 8) + 0x1c)));
          if (bea_fcast<float10>(DAT_006fbdfc) < fVar16) {
            return 1;
          }
        }
      }
      else {
        iVar9 = *(int *)((int)this_ + 8);
        fVar2 = local_174 - *(float *)(iVar9 + 0x24);
        iVar26 = *(int *)(*(int *)((int)this_ + 0xa0) + 0x18);
        fVar3 = *(float *)(iVar26 + 0x2c) * 0.05f;
        fVar5 = *(float *)(iVar26 + 0x3c) * 0.025f;
        fVar6 = SQRT(local_16c * local_16c + local_168 * local_168);
        if (*(int *)((int)this_ + 0x98) == 0) {
          iVar26 = iVar9 + 0x3c;
          puVar23 = local_118;
          pvVar10 = (void *)FUN_0040d1f0(bea_arg(&local_14c), bea_arg(*(undefined4 *)(iVar9 + 0xe0)), bea_arg(0), bea_arg(0));
          FUN_0040d320(bea_arg(pvVar10), bea_arg(puVar23), bea_arg(iVar26));
          FUN_00401ec0(bea_arg(&local_19c), bea_arg(local_114 * fVar4), bea_arg(local_104 * fVar4), bea_arg(local_f4 * fVar4));
          fVar16 = bea_fcast<float10>(FUN_004026b0(bea_arg(&local_19c)));
          if (fVar16 <= bea_fcast<float10>(0.0f)) {
            fVar16 = bea_fcast<float10>(0.0f);
          }
          else {
            fVar16 = _CIasin(bea_fcast<float10>(bea_fcast<float>((bea_fcast<float10>(local_194) / fVar16))));
          }
          fVar4 = bea_fcast<float>((fVar16 + bea_fcast<float10>(*(float *)(*(int *)((int)this_ + 0xa0) + 0x7c))));
          fVar1 = bea_fcast<float>((fVar16 + bea_fcast<float10>(*(float *)(*(int *)((int)this_ + 0xa0) + 0x80))));
          if (((-0.7853982f < fVar4) && (-0.7853982f < fVar1)) ||
             ((fVar4 < -0.7853982f && (fVar1 < -0.7853982f)))) {
            fVar16 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar4)));
            fVar7 = fVar5 * fVar2 + fVar5 * fVar2;
            fVar14 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar4)));
            fVar2 = bea_fcast<float>(((fVar14 * (SQRT(fVar16 * fVar16 * bea_fcast<float10>(fVar3) * bea_fcast<float10>(fVar3) -
                                            bea_fcast<float10>(fVar7)) - fVar16 * bea_fcast<float10>(fVar3)) *
                            bea_fcast<float10>(fVar3)) / bea_fcast<float10>(fVar5)));
            fVar16 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar1)));
            fVar14 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar1)));
            fVar16 = ((bea_fcast<float10>(bea_fcast<float>(SQRT(fVar16 * fVar16 * bea_fcast<float10>(fVar3) * bea_fcast<float10>(fVar3) -
                                            bea_fcast<float10>(fVar7)))) - fVar16 * bea_fcast<float10>(fVar3)) * fVar14 *
                     bea_fcast<float10>(fVar3)) / bea_fcast<float10>(fVar5);
            local_1ac = fVar2;
            if (fVar16 < bea_fcast<float10>(fVar2)) {
              local_1ac = bea_fcast<float>(fVar16);
              fVar16 = bea_fcast<float10>(fVar2);
            }
          }
          else {
            fVar16 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar4)));
            fVar7 = fVar5 * fVar2 + fVar5 * fVar2;
            fVar14 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar4)));
            fVar16 = (fVar14 * (SQRT(fVar16 * fVar16 * bea_fcast<float10>(fVar3) * bea_fcast<float10>(fVar3) -
                                     bea_fcast<float10>(fVar7)) - fVar16 * bea_fcast<float10>(fVar3)) * bea_fcast<float10>(fVar3)) /
                     bea_fcast<float10>(fVar5);
            fVar14 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar1)));
            fVar15 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar1)));
            fVar2 = bea_fcast<float>(((fVar15 * (SQRT(fVar14 * fVar14 * bea_fcast<float10>(fVar3) * bea_fcast<float10>(fVar3) -
                                            bea_fcast<float10>(fVar7)) - fVar14 * bea_fcast<float10>(fVar3)) *
                            bea_fcast<float10>(fVar3)) / bea_fcast<float10>(fVar5)));
            fVar14 = bea_fcast<float10>(fsin(bea_fcast<float10>(-0.7853981852531433f)));
            fVar15 = bea_fcast<float10>(fcos(bea_fcast<float10>(-0.7853981852531433f)));
            fVar3 = bea_fcast<float>((((bea_fcast<float10>(bea_fcast<float>(SQRT(fVar14 * fVar14 * bea_fcast<float10>(fVar3) * bea_fcast<float10>(fVar3)
                                                   - bea_fcast<float10>(fVar7)))) - fVar14 * bea_fcast<float10>(fVar3)) *
                             fVar15 * bea_fcast<float10>(fVar3)) / bea_fcast<float10>(fVar5)));
            local_1ac = bea_fcast<float>(fVar16);
            if (bea_fcast<float10>(fVar2) < fVar16) {
              local_1ac = fVar2;
            }
            if (fVar3 < local_1ac) {
              local_1ac = fVar3;
            }
            if (bea_fcast<float>(fVar16) < fVar2) {
              fVar16 = bea_fcast<float10>(fVar2);
            }
            if (fVar16 < bea_fcast<float10>(fVar3)) {
              fVar16 = bea_fcast<float10>(fVar3);
            }
          }
          if ((bea_fcast<float10>(fVar6) <= fVar16) && (local_1ac <= fVar6)) {
            iVar9 = *(int *)((int)this_ + 8);
            uVar19 = *(undefined4 *)(iVar9 + 0x114);
            local_188 = *(float *)(iVar9 + 0x118);
            local_184 = *(float *)(iVar9 + 0x11c);
            FUN_004062d0(bea_arg(local_118), bea_arg(uVar19), bea_arg(fVar4), bea_arg(0));
            FUN_004062d0(bea_arg(&local_14c), bea_arg(uVar19), bea_arg(fVar1), bea_arg(0));
            pfVar11 = (float *)FUN_0044a850(bea_arg(this_), bea_arg(local_1c));
            local_194 = local_f4 * 3.0f + pfVar11[2];
            local_198 = local_104 * 3.0f + pfVar11[1];
            local_19c = local_114 * 3.0f + *pfVar11;
            puVar12 = (undefined4 *)FUN_0044a850(bea_arg(this_), bea_arg(local_2c));
            FUN_00401ec0(bea_arg(local_6c), bea_arg(0), bea_arg(0), bea_arg(0));
            local_5c = *puVar12;
            local_58 = puVar12[1];
            local_54 = puVar12[2];
            local_50 = puVar12[3];
            local_4c = local_19c;
            local_48 = local_198;
            local_44 = local_194;
            local_40 = local_190;
            local_70 = ((void*)0x005d8bfc);
            local_4 = 1;
            pfVar11 = (float *)FUN_0044a850(bea_arg(this_), bea_arg(local_15c));
            local_194 = local_128 * 3.0f + pfVar11[2];
            local_198 = local_138 * 3.0f + pfVar11[1];
            local_19c = local_148[0] * 3.0f + *pfVar11;
            puVar12 = (undefined4 *)FUN_0044a850(bea_arg(this_), bea_arg(local_3c));
            FUN_00401ec0(bea_arg(local_a0), bea_arg(0), bea_arg(0), bea_arg(0));
            local_90 = *puVar12;
            local_8c = puVar12[1];
            local_88 = puVar12[2];
            local_84 = puVar12[3];
            local_80 = local_19c;
            local_7c = local_198;
            local_78 = local_194;
            local_74 = local_190;
            local_a4 = ((void*)0x005d8bfc);
            bVar8 = true;
            uVar25 = 0xffffffff;
            uVar24 = 1;
            uVar22 = 4;
            uVar21 = 1;
            uVar20 = 0;
            local_18c = 0.0f;
            local_184 = 0.0f;
            uVar18 = 0;
            uVar19 = *(undefined4 *)((int)this_ + 8);
            pfVar11 = &local_18c;
            local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),2);
            local_188 = -NAN;
            local_180 = 0xbf800000;
            FUN_004098e0(bea_arg(&local_224), bea_arg(&local_70));
            iVar9 = FUN_0050b030(bea_arg(local_224), bea_arg(local_220), bea_arg(local_21c), bea_arg(local_218), bea_arg(local_214), bea_arg(local_210), bea_arg(local_20c), bea_arg(local_208), bea_arg(local_204), bea_arg(local_200), bea_arg(local_1fc), bea_arg(local_1f8), bea_arg(local_1f4), bea_arg(uVar19), bea_arg(pfVar11), bea_arg(uVar18), bea_arg(uVar20), bea_arg(uVar21), bea_arg(uVar22), bea_arg(uVar24), bea_arg(uVar25));
            if ((iVar9 == 1) || (iVar9 == 2)) {
              bVar8 = false;
            }
            if ((((iVar9 == 3) && (local_18c != 0.0f)) &&
                ((*(byte *)(bea_piece32(local_18c) + 0x34) & 0x10) != 0)) &&
               (*(int *)(bea_piece32(local_18c) + 0x138) != *(int *)(param_1 + 0x138))) {
              bVar8 = false;
            }
            uVar19 = *(undefined4 *)((int)this_ + 8);
            uVar25 = 0xffffffff;
            uVar24 = 1;
            uVar22 = 4;
            uVar21 = 1;
            uVar20 = 0;
            pfVar11 = &local_18c;
            uVar18 = 0;
            FUN_004098e0(bea_arg(&local_224), bea_arg(&local_a4));
            iVar9 = FUN_0050b030(bea_arg(local_224), bea_arg(local_220), bea_arg(local_21c), bea_arg(local_218), bea_arg(local_214), bea_arg(local_210), bea_arg(local_20c), bea_arg(local_208), bea_arg(local_204), bea_arg(local_200), bea_arg(local_1fc), bea_arg(local_1f8), bea_arg(local_1f4), bea_arg(uVar19), bea_arg(pfVar11), bea_arg(uVar18), bea_arg(uVar20), bea_arg(uVar21), bea_arg(uVar22), bea_arg(uVar24), bea_arg(uVar25));
            if ((iVar9 == 1) || (iVar9 == 2)) {
              bVar8 = false;
            }
            if ((((iVar9 != 3) || (local_18c == 0.0f)) ||
                (((*(byte *)(bea_piece32(local_18c) + 0x34) & 0x10) == 0 ||
                 (*(int *)(bea_piece32(local_18c) + 0x138) == *(int *)(param_1 + 0x138))))) && (bVar8)) {
              return 1;
            }
          }
        }
        else {
          fVar16 = bea_fcast<float10>(fcos(bea_fcast<float10>(local_1b0)));
          fVar14 = bea_fcast<float10>(fsin(bea_fcast<float10>(local_1b0)));
          fVar14 = fVar14 * bea_fcast<float10>(fVar3);
          fVar16 = ((SQRT(bea_fcast<float10>(fVar5) * bea_fcast<float10>(fVar2) + bea_fcast<float10>(fVar5) * bea_fcast<float10>(fVar2) +
                          fVar14 * fVar14) - fVar14) / bea_fcast<float10>(fVar5)) * fVar16 * bea_fcast<float10>(fVar3);
          if (fVar16 < bea_fcast<float10>(0.0f)) {
            fVar16 = bea_fcast<float10>(0.0f);
          }
          if (ABS(bea_fcast<float10>(fVar6) - fVar16) < bea_fcast<float10>(12.0f)) {
            FUN_004062d0(bea_arg(local_118), bea_arg(fVar1), bea_arg(local_1b0), bea_arg(0));
            pfVar11 = (float *)FUN_0044a850(bea_arg(this_), bea_arg(local_2c));
            local_184 = local_f4 * 3.0f + pfVar11[2];
            local_188 = local_104 * 3.0f + pfVar11[1];
            local_18c = local_114 * 3.0f + *pfVar11;
            puVar12 = (undefined4 *)FUN_0044a850(bea_arg(this_), bea_arg(local_1c));
            FUN_00401ec0(bea_arg(local_148), bea_arg(0), bea_arg(0), bea_arg(0));
            local_138 = bea_fcast<float>(*puVar12);
            local_134 = puVar12[1];
            local_130 = puVar12[2];
            local_12c = puVar12[3];
            local_128 = local_18c;
            local_124 = local_188;
            local_120 = local_184;
            local_11c = local_180;
            local_14c = ((void*)0x005d8bfc);
            uVar19 = *(undefined4 *)((int)this_ + 8);
            uVar25 = 0xffffffff;
            uVar24 = 1;
            uVar22 = 4;
            uVar21 = 1;
            uVar20 = 0;
            pfVar11 = &local_19c;
            uVar18 = 1;
            local_4 = 0;
            local_19c = 0.0f;
            local_198 = -NAN;
            local_194 = 0.0f;
            local_190 = 0xbf800000;
            FUN_004098e0(bea_arg(&local_224), bea_arg(&local_14c));
            iVar9 = FUN_0050b030(bea_arg(local_224), bea_arg(local_220), bea_arg(local_21c), bea_arg(local_218), bea_arg(local_214), bea_arg(local_210), bea_arg(local_20c), bea_arg(local_208), bea_arg(local_204), bea_arg(local_200), bea_arg(local_1fc), bea_arg(local_1f8), bea_arg(local_1f4), bea_arg(uVar19), bea_arg(pfVar11), bea_arg(uVar18), bea_arg(uVar20), bea_arg(uVar21), bea_arg(uVar22), bea_arg(uVar24), bea_arg(uVar25));
            if (iVar9 == 0) {
              return 1;
            }
            if (iVar9 == 3) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00507ab0, ap_00507ab0));
