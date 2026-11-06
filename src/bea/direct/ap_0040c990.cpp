// auto-ported from 0040c990_vslot75.c (CBattleEngine::vslot75, 1888 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x1f0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CBattleEngine;
typedef char Mat34;
typedef char Vec3;
typedef char fStack_13c;
typedef char fStack_140;
typedef char fStack_144;
typedef char fStack_14c;
typedef char fStack_150;
typedef char fStack_154;
typedef char fStack_15c;
typedef char fStack_160;
typedef char fStack_164;
typedef char fStack_18c;
typedef char fStack_190;
typedef char fStack_19c;
typedef char fStack_1a0;
typedef char fStack_1a4;
typedef char fStack_cc;
typedef char fStack_dc;
typedef char fStack_ec;
#define PTR_DAT_006234fc GLOBAL_AT(void*, 0x006234fc)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef f80 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_0040b100_t)(uint32_t);
static const bea_guard<FUN_0040b100_t> FUN_0040b100 = {(FUN_0040b100_t)0x0040b100};
typedef undefined4 (BEA_THISCALL* FUN_0040d0f0_t)(uint32_t);
static const bea_guard<FUN_0040d0f0_t> FUN_0040d0f0 = {(FUN_0040d0f0_t)0x0040d0f0};
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d120_t> FUN_0040d120 = {(FUN_0040d120_t)0x0040d120};
typedef Vec3* (BEA_THISCALL* FUN_0040d150_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d150_t> FUN_0040d150 = {(FUN_0040d150_t)0x0040d150};
typedef float10 (BEA_THISCALL* FUN_0040d180_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040d180_t> FUN_0040d180 = {(FUN_0040d180_t)0x0040d180};
typedef float10 (BEA_THISCALL* FUN_0040d1a0_t)(uint32_t);
static const bea_guard<FUN_0040d1a0_t> FUN_0040d1a0 = {(FUN_0040d1a0_t)0x0040d1a0};
typedef uint32_t (BEA_THISCALL* FUN_0040d1f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d1f0_t> FUN_0040d1f0 = {(FUN_0040d1f0_t)0x0040d1f0};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef uint32_t (BEA_THISCALL* FUN_0040d470_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d470_t> FUN_0040d470 = {(FUN_0040d470_t)0x0040d470};
typedef uint32_t (BEA_THISCALL* FUN_0044a850_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a850_t> FUN_0044a850 = {(FUN_0044a850_t)0x0044a850};
typedef uint32_t (BEA_THISCALL* FUN_0044a930_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a930_t> FUN_0044a930 = {(FUN_0044a930_t)0x0044a930};
typedef uint32_t (BEA_THISCALL* FUN_004d2a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d2a70_t> FUN_004d2a70 = {(FUN_004d2a70_t)0x004d2a70};
typedef undefined4 * (BEA_THISCALL* FUN_004d2ae0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d2ae0_t> FUN_004d2ae0 = {(FUN_004d2ae0_t)0x004d2ae0};
typedef float10 (BEA_THISCALL* FUN_005094b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005094b0_t> FUN_005094b0 = {(FUN_005094b0_t)0x005094b0};

static void BEA_THISCALL ap_0040c990(CBattleEngine * this_, void *param_1, undefined4 param_2, float *param_3, undefined4 *param_4, int param_5)
{
  float fVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *pvVar9;
  int iVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float10 fVar13;
  float *pfVar14;

  alignas(16) uint8_t bea_frame_[0x1f0] = {};   // the original stack frame (emulate_frame)
  float &fStack_1ec = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1ec);
  float &fStack_1e4 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1e4);
  float &fStack_1e0 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1e0);
  float &fStack_1dc = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1dc);
  undefined4 &uStack_1d8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x1d8);
  float &fStack_1d4 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1d4);
  float &fStack_1d0 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1d0);
  float &fStack_1cc = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1cc);
  undefined4 &uStack_1c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x1c8);
  float &local_1c4 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1c4);
  float &fStack_1c0 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1c0);
  float &fStack_1bc = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1bc);
  float &fStack_1b4 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1b4);
  float &fStack_1b0 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1b0);
  float &fStack_1ac = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1ac);
  undefined4 &uStack_1a8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x1a8);
  float &fStack_1a4 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1a4);
  float &fStack_1a0 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1a0);
  float &fStack_19c = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x19c);
  float &fStack_194 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x194);
  float &fStack_190 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x190);
  float &fStack_18c = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x18c);
  float &fStack_184 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x184);
  float &fStack_180 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x180);
  float &fStack_17c = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x17c);
  float &fStack_174 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x174);
  float &fStack_170 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x170);
  float &fStack_16c = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x16c);
  float &fStack_164 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x164);
  float &fStack_160 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x160);
  float &fStack_15c = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x15c);
  float &fStack_154 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x154);
  float &fStack_150 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x150);
  float &fStack_14c = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x14c);
  float &fStack_144 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x144);
  float &fStack_140 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x140);
  float &fStack_13c = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x13c);
  undefined ** (&appuStack_134)[5] = *reinterpret_cast<undefined ** (*)[5]>(bea_frame_ + 0x1f0 - 0x134);
  float &fStack_120 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x120);
  float &fStack_11c = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x11c);
  float &fStack_118 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x118);
  undefined4 &uStack_114 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x114);
  float &fStack_110 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x110);
  float &fStack_10c = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x10c);
  float &fStack_108 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x108);
  undefined4 &uStack_104 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x104);
  undefined1 (&auStack_100)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x100);
  undefined4 &uStack_f0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xf0);
  float &fStack_ec = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0xec);
  float &fStack_dc = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0xdc);
  float &fStack_cc = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0xcc);
  undefined1 (&auStack_c0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0xc0);
  undefined1 (&auStack_b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0xb0);
  undefined1 (&auStack_a0)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x1f0 - 0xa0);
  undefined1 (&auStack_70)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x1f0 - 0x70);
  undefined1 (&auStack_40)[52] = *reinterpret_cast<undefined1 (*)[52]>(bea_frame_ + 0x1f0 - 0x40);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x1f0 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x4);
  if (*(int **)(this_ + 0x528) != (int *)0x0) {
    piVar3 = (int *)bea_vcall<uint32_t>(*(int **)(this_ + 0x528), 0x10);
    bea_vcall<uint32_t>(piVar3, 0x1c, &PTR_DAT_006234fc,param_2,param_3,param_4,0,1);
  }
  if (((*param_3 == 0.0f) && (param_3[1] == 0.0f)) && (param_3[2] == 0.0f)) {
    pfVar4 = (float *)FUN_0044a850(bea_arg(param_1), bea_arg(&local_1c4));
    *param_3 = *pfVar4;
    param_3[1] = pfVar4[1];
    param_3[2] = pfVar4[2];
    param_3[3] = pfVar4[3];
    puVar5 = (undefined4 *)FUN_0044a930(bea_arg(param_1), bea_arg(&fStack_164));
    puVar11 = param_4;
    for (iVar10 = 0xc; BEA_LOOP_GUARD((iVar10 != 0)); iVar10 = iVar10 + -1) {
      *puVar11 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  if (param_5 != 0) {
    uVar6 = *(undefined4 *)(this_ + 0x4f4);
    uVar7 = *(undefined4 *)(this_ + 0x4e8);
    FUN_004011b0(bea_arg(&fStack_194), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    FUN_004062d0(bea_arg(&fStack_194), bea_arg(uVar7), bea_arg(uVar6), bea_arg(0));
    iVar10 = FUN_0040d0f0(bea_arg(*(void **)(*(int *)((int)param_1 + 0xa0) + 0x18)));
    if (iVar10 == 0) {
      FUN_0044a930(bea_arg(param_1), bea_arg(&uStack_f0));
      uVar6 = FUN_00401ec0(bea_arg(&local_1c4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
      FUN_0040d2c0(bea_arg(&uStack_f0), bea_arg(auStack_100), bea_arg(uVar6));
      uVar6 = FUN_00401ec0(bea_arg(&local_1c4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
      FUN_0040d2c0(bea_arg(param_4), bea_arg(auStack_c0), bea_arg(uVar6));
      fVar12 = (float10)FUN_0040d180(bea_arg(auStack_100), bea_arg(auStack_c0));
      if (fVar12 <= (float10)0.9f) {
        return;
      }
      if (*(int *)(*(int *)((int)param_1 + 0xa4) + 0x28) == 0) {
        return;
      }
      FUN_004d2a70(bea_arg(*(void **)(this_ + 0x574)), bea_arg(&fStack_1d4));
      FUN_004d2ae0(bea_arg(*(void **)(this_ + 0x574)), bea_arg(auStack_a0));
      uVar6 = FUN_00401ec0(bea_arg(&local_1c4), bea_arg(0), bea_arg(0x43480000), bea_arg(0));
      pfVar4 = &fStack_1b4;
      pvVar9 = (void *)FUN_0040d320(bea_arg(auStack_a0), bea_arg(&fStack_164), bea_arg(&fStack_194));
      uVar6 = FUN_0040d2c0(bea_arg(pvVar9), bea_arg(pfVar4), bea_arg(uVar6));
      FUN_00401ee0(bea_arg(&fStack_1d4), bea_arg(&fStack_1a4), bea_arg(uVar6));
      FUN_0040d470(bea_arg(auStack_40), bea_arg(&fStack_1d4), bea_arg(&fStack_1a4));
      if (*(int *)(this_ + 0x4d8) == 0) {
        puVar5 = (undefined4 *)FUN_0040d320(bea_arg(this_ + 0x3c), bea_arg(auStack_70), bea_arg(&fStack_194));
      }
      else {
        FUN_0040d120(bea_arg(&fStack_1a4), bea_arg(&fStack_1b4), bea_arg(&fStack_1d4));
        pfVar4 = &fStack_1d4;
        pfVar14 = &fStack_1e4;
        fVar12 = (float10)FUN_004026b0(bea_arg(&fStack_1b4));
        pvVar9 = (void *)FUN_0040d150(bea_arg(&fStack_1b4), bea_arg(auStack_b0), bea_arg((float)((float10)*(float *)(this_ + 0x4dc) / fVar12)));
        FUN_00401ee0(bea_arg(pvVar9), bea_arg(pfVar14), bea_arg(pfVar4));
        FUN_0040d120(bea_arg(&fStack_1e4), bea_arg(&local_1c4), bea_arg(param_3));
        uVar6 = 0;
        fVar12 = (float10)FUN_0040d1a0(bea_arg(&local_1c4));
        fVar13 = (float10)fpatan((float10)local_1c4,(float10)fStack_1c0);
        puVar5 = (undefined4 *)FUN_0040d1f0(bea_arg(&fStack_164), bea_arg((float)-fVar13), bea_arg((float)fVar12), bea_arg(uVar6));
      }
      iVar10 = 0xc;
    }
    else {
      FUN_004d2a70(bea_arg(*(void **)(this_ + 0x574)), bea_arg(&fStack_1e4));
      FUN_004d2ae0(bea_arg(*(void **)(this_ + 0x574)), bea_arg(&fStack_164));
      // class 19: the asm's order (all 9 sums)
      uVar6 = FUN_00401ec0(bea_arg(auStack_100), bea_arg(fStack_144 * fStack_194 +
                           fStack_13c * fStack_174 + fStack_140 * fStack_184), bea_arg(fStack_13c * fStack_170 +
                           fStack_140 * fStack_180 + fStack_144 * fStack_190), bea_arg(fStack_13c * fStack_16c +
                           fStack_140 * fStack_17c + fStack_144 * fStack_18c));
      uVar7 = FUN_00401ec0(bea_arg(auStack_c0), bea_arg(fStack_154 * fStack_194 +
                           fStack_14c * fStack_174 + fStack_150 * fStack_184), bea_arg(fStack_14c * fStack_170 +
                           fStack_150 * fStack_180 + fStack_154 * fStack_190), bea_arg(fStack_14c * fStack_16c +
                           fStack_150 * fStack_17c + fStack_154 * fStack_18c));
      uVar8 = FUN_00401ec0(bea_arg(&local_1c4), bea_arg(fStack_164 * fStack_194 +
                           fStack_15c * fStack_174 + fStack_160 * fStack_184), bea_arg(fStack_190 * fStack_164 +
                           fStack_15c * fStack_170 + fStack_160 * fStack_180), bea_arg(fStack_18c * fStack_164 +
                           fStack_15c * fStack_16c + fStack_160 * fStack_17c));
      FUN_00401f10(bea_arg(&uStack_f0), bea_arg(uVar8), bea_arg(uVar7), bea_arg(uVar6));
      FUN_00401ec0(bea_arg(&fStack_1d4), bea_arg(fStack_ec * 200.0f), bea_arg(fStack_dc * 200.0f), bea_arg(fStack_cc * 200.0f));
      FUN_00401ec0(bea_arg(&fStack_1b4), bea_arg(fStack_1d4 + fStack_1e4), bea_arg(fStack_1e0 + fStack_1d0), bea_arg(fStack_1dc + fStack_1cc));
      FUN_0040b100(bea_arg(appuStack_134));
      fStack_120 = fStack_1e4;
      fStack_11c = fStack_1e0;
      fStack_118 = fStack_1dc;
      uStack_114 = uStack_1d8;
      fStack_110 = fStack_1b4;
      fStack_10c = fStack_1b0;
      fStack_108 = fStack_1ac;
      uStack_104 = uStack_1a8;
      appuStack_134[0] = ((void*)0x005d8bfc);
      fStack_1ec = -0.7853982;
      if (*(int *)(this_ + 0x4d8) != 0) {
        FUN_00401ec0(bea_arg(&fStack_1a4), bea_arg(fStack_1b4 - fStack_1e4), bea_arg(fStack_1b0 - fStack_1e0), bea_arg(fStack_1ac - fStack_1dc));
        fVar1 = *(float *)(this_ + 0x4dc) /
                SQRT(fStack_19c * fStack_19c + fStack_1a0 * fStack_1a0 + fStack_1a4 * fStack_1a4);   // class 19: the asm's order
        FUN_00401ec0(bea_arg(&local_1c4), bea_arg(fVar1 * fStack_1a4), bea_arg(fStack_1a0 * fVar1), bea_arg(fStack_19c * fVar1));
        FUN_00401ec0(bea_arg(&fStack_1d4), bea_arg(local_1c4 + fStack_1e4), bea_arg(fStack_1c0 + fStack_1e0), bea_arg(fStack_1bc + fStack_1dc));
        if ((*(int *)((int)param_1 + 0xa0) != 0) &&
           (*(int *)(*(int *)((int)param_1 + 0xa0) + 0x18) != 0)) {
          fVar12 = (float10)FUN_005094b0(bea_arg(param_1), bea_arg(fStack_1d4), bea_arg(fStack_1d0), bea_arg(fStack_1cc), bea_arg(uStack_1c8));
          fStack_1ec = (float)fVar12;
        }
      }
      fVar1 = *(float *)(this_ + 0x114);
      fVar2 = *(float *)(this_ + 0x4e8);
      FUN_004011b0(bea_arg(&uStack_f0), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
      FUN_004062d0(bea_arg(&uStack_f0), bea_arg(fVar1 + fVar2), bea_arg(fStack_1ec), bea_arg(0));
      iVar10 = 0xc;
      puVar5 = &uStack_f0;
    }
    for (; BEA_LOOP_GUARD((iVar10 != 0)); iVar10 = iVar10 + -1) {
      *param_4 = *puVar5;
      puVar5 = puVar5 + 1;
      param_4 = param_4 + 1;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040c990, ap_0040c990));
