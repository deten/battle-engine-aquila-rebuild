// auto-ported from 0049dcd0_FUN_0049dcd0.c (FUN_0049dcd0, 2005 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x1a0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char Mat34;
typedef char Vec3;
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d120_t> FUN_0040d120 = {(FUN_0040d120_t)0x0040d120};
typedef Vec3* (BEA_THISCALL* FUN_0040d150_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d150_t> FUN_0040d150 = {(FUN_0040d150_t)0x0040d150};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef uint32_t (BEA_THISCALL* FUN_0041ad10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041ad10_t> FUN_0041ad10 = {(FUN_0041ad10_t)0x0041ad10};
typedef uint32_t (BEA_THISCALL* FUN_0049bbb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0049bbb0_t> FUN_0049bbb0 = {(FUN_0049bbb0_t)0x0049bbb0};
typedef uint32_t (BEA_THISCALL* FUN_0049bc10_t)(uint32_t);
static const bea_guard<FUN_0049bc10_t> FUN_0049bc10 = {(FUN_0049bc10_t)0x0049bc10};
typedef float10 (BEA_THISCALL* FUN_0049bc40_t)(uint32_t);
static const bea_guard<FUN_0049bc40_t> FUN_0049bc40 = {(FUN_0049bc40_t)0x0049bc40};
typedef uint32_t (BEA_THISCALL* FUN_0049bc80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0049bc80_t> FUN_0049bc80 = {(FUN_0049bc80_t)0x0049bc80};
typedef uint32_t (BEA_THISCALL* FUN_0049cc40_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0049cc40_t> FUN_0049cc40 = {(FUN_0049cc40_t)0x0049cc40};
typedef int (BEA_CDECL* FUN_0049dc90_t)(uint32_t);
static const bea_guard<FUN_0049dc90_t> FUN_0049dc90 = {(FUN_0049dc90_t)0x0049dc90};
typedef float10 (BEA_CDECL* FUN_0049dcb0_t)(float, int, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_0049dcb0_t> FUN_0049dcb0 = {(FUN_0049dcb0_t)0x0049dcb0};
typedef uint32_t (BEA_THISCALL* FUN_0049e4b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0049e4b0_t> FUN_0049e4b0 = {(FUN_0049e4b0_t)0x0049e4b0};
typedef uint32_t (BEA_THISCALL* FUN_004b0fb0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b0fb0_t> FUN_004b0fb0 = {(FUN_004b0fb0_t)0x004b0fb0};
typedef uint32_t (BEA_THISCALL* FUN_004f0ba0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f0ba0_t> FUN_004f0ba0 = {(FUN_004f0ba0_t)0x004f0ba0};
typedef uint32_t (BEA_THISCALL* FUN_004f0c50_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f0c50_t> FUN_004f0c50 = {(FUN_004f0c50_t)0x004f0c50};

static uint32_t BEA_THISCALL ap_0049dcd0(void * this_, undefined4 param_1)
{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  void *this_00;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  float10 fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  alignas(16) uint8_t bea_frame_[0x1a0] = {};   // the original stack frame (emulate_frame)
  float &local_1a0 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x1a0);
  float &local_19c = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x19c);
  float &local_198 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x198);
  float &local_194 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x194);
  float &local_190 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x190);
  float &local_18c = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x18c);
  float &local_188 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x188);
  float &local_184 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x184);
  float &local_180 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x180);
  float &local_17c = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x17c);
  float &local_178 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x178);
  float &local_174 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x174);
  float &local_170 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x170);
  float * &local_16c = *reinterpret_cast<float * *>(bea_frame_ + 0x1a0 - 0x16c);
  float &local_168 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x168);
  int &local_164 = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x164);
  int &local_160 = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x160);
  int &local_15c = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x15c);
  int &local_158 = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x158);
  float (&local_154)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x1a0 - 0x154);
  float &local_144 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x144);
  float &local_140 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x140);
  float &local_13c = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x13c);
  float &local_134 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x134);
  float &local_130 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x130);
  float &local_12c = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x12c);
  float (&local_124)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x1a0 - 0x124);
  float &local_114 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x114);
  float &local_110 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x110);
  float &local_10c = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x10c);
  float &local_104 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x104);
  float &local_100 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x100);
  float &local_fc = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xfc);
  float &local_f4 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xf4);
  float (&local_f0)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x1a0 - 0xf0);
  float &local_e0 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xe0);
  float &local_dc = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xdc);
  float &local_d8 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xd8);
  float &local_d0 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xd0);
  float &local_cc = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xcc);
  float &local_c8 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xc8);
  undefined1 (&local_c0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1a0 - 0xc0);
  undefined1 (&local_b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1a0 - 0xb0);
  undefined1 (&local_a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1a0 - 0xa0);
  float (&local_90)[12] = *reinterpret_cast<float (*)[12]>(bea_frame_ + 0x1a0 - 0x90);
  undefined1 (&local_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1a0 - 0x60);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1a0 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1a0 - 0x40);
  float (&local_30)[12] = *reinterpret_cast<float (*)[12]>(bea_frame_ + 0x1a0 - 0x30);
  if (*(int *)((int)this_ + 0x2c) == 0) {
    FUN_0049cc40(bea_arg(this_), bea_arg(param_1));
  }
  FUN_004011b0(bea_arg(local_154), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
  FUN_004b0fb0(bea_arg(*(void **)((int)this_ + 0xa0)), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 8)), bea_arg(local_154), bea_arg(&local_1a0), bea_arg(0), bea_arg(0), bea_arg(0));
  local_17c = local_19c;
  iVar8 = *(int *)((int)this_ + 8);
  local_180 = local_1a0;
  local_178 = local_198;
  local_174 = local_194;
  pfVar5 = local_154;
  pfVar9 = local_90;
  for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
    *pfVar9 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar9 = pfVar9 + 1;
  }
  if (iVar8 == 0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)(iVar8 + -8);
  }
  FUN_004f0ba0(bea_arg(this_00), bea_arg((int)this_ + 0x40));
  pfVar5 = (float *)((int)this_ + 0x50);
  FUN_004f0c50(bea_arg(this_00), bea_arg(pfVar5));
  FUN_004b0fb0(bea_arg(*(void **)((int)this_ + 0xa8)), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 8)), bea_arg(local_154), bea_arg(&local_1a0), bea_arg(0), bea_arg(0), bea_arg(0));
  local_190 = local_1a0 - local_180;
  local_18c = local_19c - local_17c;
  local_188 = local_198 - local_178;
  FUN_0049bc80(bea_arg(local_90), bea_arg(local_124));
  FUN_0049bc10(bea_arg(local_124));
  fVar13 = (float10)FUN_0049bc40(bea_arg(local_90));
  FUN_0049bbb0(bea_arg(local_124), bea_arg((float)fVar13));
  // class 19: the asm's order (3 sums)
  FUN_00401ec0(bea_arg(&local_180), bea_arg(local_124[0] * local_190 + local_124[2] * local_188 + local_124[1] * local_18c), bea_arg(local_10c * local_188 + local_110 * local_18c + local_114 * local_190), bea_arg(local_fc * local_188 + local_100 * local_18c + local_104 * local_190));
  local_1a0 = local_180;
  local_19c = local_17c;
  local_194 = local_174;
  local_198 = local_178;
  FUN_0049bc80(bea_arg(local_90), bea_arg(local_124));
  FUN_0049bc10(bea_arg(local_124));
  fVar13 = (float10)FUN_0049bc40(bea_arg(local_90));
  FUN_0049bbb0(bea_arg(local_124), bea_arg((float)fVar13));
  pfVar9 = local_124;
  pfVar11 = local_f0;
  for (iVar8 = 0xc; BEA_LOOP_GUARD((iVar8 != 0)); iVar8 = iVar8 + -1) {
    *pfVar11 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar11 = pfVar11 + 1;
  }
  // class 19: the asm's order (all 9 sums)
  uVar2 = FUN_00401ec0(bea_arg(&local_180), bea_arg(local_124[0] * local_134 + local_114 * local_130 + local_104 * local_12c), bea_arg(local_124[1] * local_134 + local_110 * local_130 + local_100 * local_12c), bea_arg(local_124[2] * local_134 + local_10c * local_130 + local_fc * local_12c));
  uVar3 = FUN_00401ec0(bea_arg(&local_190), bea_arg(local_144 * local_f0[0] + local_13c * local_d0 + local_140 * local_e0), bea_arg(local_13c * local_cc + local_140 * local_dc + local_144 * local_f0[1]), bea_arg(local_13c * local_c8 + local_140 * local_d8 + local_144 * local_f0[2]));
  uVar4 = FUN_00401ec0(bea_arg(local_c0), bea_arg(local_f0[0] * local_154[0] +
                                local_154[2] * local_d0 + local_154[1] * local_e0), bea_arg(local_f0[1] * local_154[0] +
                       local_154[2] * local_cc + local_154[1] * local_dc), bea_arg(local_f0[2] * local_154[0] +
                       local_154[2] * local_c8 + local_154[1] * local_d8));
  FUN_00401f10(bea_arg(local_30), bea_arg(uVar4), bea_arg(uVar3), bea_arg(uVar2));
  fVar14 = *(float *)((int)this_ + 0x78);
  fVar1 = *(float *)((int)this_ + 0x74);
  pfVar9 = local_30;
  pfVar11 = local_154;
  for (iVar8 = 0xc; BEA_LOOP_GUARD((iVar8 != 0)); iVar8 = iVar8 + -1) {
    *pfVar11 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar11 = pfVar11 + 1;
  }
  // class 19: the asm's order (3 sums)
  FUN_00401ec0(bea_arg(&local_190), bea_arg(local_198 * *(float *)((int)this_ + 0x58) +
               local_19c * *(float *)((int)this_ + 0x54) + local_1a0 * *pfVar5), bea_arg(local_198 * *(float *)((int)this_ + 0x68) +
               local_19c * *(float *)((int)this_ + 100) + local_1a0 * *(float *)((int)this_ + 0x60)), bea_arg(local_198 * fVar14 + local_19c * fVar1 + local_1a0 * *(float *)((int)this_ + 0x70)));
  FUN_00401ec0(bea_arg(&local_180), bea_arg(local_190 + *(float *)((int)this_ + 0x40)), bea_arg(local_18c + *(float *)((int)this_ + 0x44)), bea_arg(local_188 + *(float *)((int)this_ + 0x48)));
  local_19c = local_17c;
  local_1a0 = local_180;
  local_198 = local_178;
  local_194 = local_174;
  pfVar5 = (float *)FUN_0040d320(bea_arg(local_154), bea_arg(local_30), bea_arg(pfVar5));
  pfVar9 = local_154;
  for (iVar8 = 0xc; BEA_LOOP_GUARD((iVar8 != 0)); iVar8 = iVar8 + -1) {
    *pfVar9 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar9 = pfVar9 + 1;
  }
  *(float *)((int)this_ + 0x90) = local_1a0;
  *(float *)((int)this_ + 0x94) = local_19c;
  *(float *)((int)this_ + 0x98) = local_198;
  *(float *)((int)this_ + 0x9c) = local_194;
  iVar8 = *(int *)((int)this_ + 0xe8);
  local_164 = 0;
  if (0 < iVar8) {
    local_160 = 0;
    local_158 = 0;
    do {
      local_16c = &local_180;
      local_180 = (float)local_164 / (float)(iVar8 + -1);
      local_190 = 0.0;
      local_18c = 0.0;
      local_188 = 0.0;
      local_17c = 0.0;
      local_178 = 0.0;
      local_15c = 0;
      uVar10 = 3;
      local_174 = 1.0f - local_180;
      local_168 = local_180;
      local_f4 = local_174;
      do {
        iVar7 = 1;
        iVar8 = 2;
        do {
          iVar7 = iVar7 * iVar8;
          iVar8 = iVar8 + 1;
        } while (BEA_LOOP_GUARD((iVar8 < 4)));
        iVar12 = 1;
        iVar8 = 2;
        if ((int)uVar10 < 2) {
          do {
            iVar12 = iVar12 * iVar8;
            iVar8 = iVar8 + 1;
          } while (BEA_LOOP_GUARD((iVar8 <= local_15c)));
        }
        uVar16 = uVar10;
        iVar8 = FUN_0049dc90(bea_arg(uVar10));
        local_170 = (float)(iVar7 / (iVar8 * iVar12));
        fVar14 = local_f4;
        uVar15 = uVar10;
        fVar13 = (float10)FUN_0049dcb0(local_f4,uVar10,uVar16,0,0);
        iVar8 = local_15c;
        local_170 = (float)(fVar13 * (float10)local_170);
        fVar13 = (float10)FUN_0049dcb0(local_168,local_15c,fVar14,uVar15,uVar16);
        local_15c = iVar8 + 1;
        uVar10 = uVar10 - 1;
        *local_16c = (float)(fVar13 * (float10)local_170);
        local_16c = local_16c + 1;
      } while (BEA_LOOP_GUARD((uVar10 < 0x80000000)));
      uVar2 = FUN_0040d150(bea_arg((void *)((int)this_ + 0x40)), bea_arg(local_c0), bea_arg(local_174));
      FUN_0041ad10(bea_arg(&local_190), bea_arg(uVar2));
      uVar2 = FUN_0040d150(bea_arg((void *)((int)this_ + 0x90)), bea_arg(local_60), bea_arg(local_178));
      FUN_0041ad10(bea_arg(&local_190), bea_arg(uVar2));
      uVar2 = FUN_0040d150(bea_arg((void *)((int)this_ + 0x80)), bea_arg(local_40), bea_arg(local_17c));
      FUN_0041ad10(bea_arg(&local_190), bea_arg(uVar2));
      uVar2 = FUN_0040d150(bea_arg((void *)((int)this_ + 0x30)), bea_arg(local_50), bea_arg(local_180));
      FUN_0041ad10(bea_arg(&local_190), bea_arg(uVar2));
      iVar7 = local_158;
      pfVar5 = (float *)(local_158 + *(int *)((int)this_ + 0xdc));
      *pfVar5 = local_190;
      pfVar5[1] = local_18c;
      pfVar5[2] = local_188;
      pfVar5[3] = local_184;
      if (local_158 != 0) {
        iVar8 = local_158 + *(int *)((int)this_ + 0xdc);
        puVar6 = (undefined4 *)FUN_00401ec0(bea_arg(local_b0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0));
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        uVar4 = puVar6[2];
        uVar17 = puVar6[3];
        puVar6 = (undefined4 *)FUN_0040d120(bea_arg((void *)(iVar8 + -0x10)), bea_arg(local_a0), bea_arg(iVar8));
        FUN_0049e4b0(bea_arg((void *)(*(int *)((int)this_ + 0xe0) + -0x30 + local_160)), bea_arg(*puVar6), bea_arg(puVar6[1]), bea_arg(puVar6[2]), bea_arg(puVar6[3]), bea_arg(uVar2), bea_arg(uVar3), bea_arg(uVar4), bea_arg(uVar17));
      }
      iVar8 = *(int *)((int)this_ + 0xe8);
      local_158 = iVar7 + 0x10;
      local_164 = local_164 + 1;
      local_160 = local_160 + 0x30;
    } while (BEA_LOOP_GUARD((local_164 < iVar8)));
  }
  puVar6 = (undefined4 *)FUN_00401ec0(bea_arg(local_a0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0));
  uVar2 = *puVar6;
  uVar3 = puVar6[1];
  uVar4 = puVar6[2];
  uVar17 = puVar6[3];
  puVar6 = (undefined4 *)FUN_0040d120(bea_arg((void *)((int)this_ + 0x90)), bea_arg(local_b0), bea_arg((int)this_ + 0x40));
  return FUN_0049e4b0(bea_arg((void *)(*(int *)((int)this_ + 0xe8) * 0x30 + -0x30 + *(int *)((int)this_ + 0xe0))), bea_arg(*puVar6), bea_arg(puVar6[1]), bea_arg(puVar6[2]), bea_arg(puVar6[3]), bea_arg(uVar2), bea_arg(uVar3), bea_arg(uVar4), bea_arg(uVar17));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049dcd0, ap_0049dcd0));
