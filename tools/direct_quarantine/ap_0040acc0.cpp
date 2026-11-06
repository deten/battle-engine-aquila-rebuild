// auto-ported from 0040acc0_FUN_0040acc0.c (FUN_0040acc0, 1081 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x1a0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char Mat34;
typedef char Vec3;
typedef char fStack_100;
typedef char fStack_108;
typedef char fStack_10c;
typedef char fStack_110;
typedef char fStack_118;
typedef char fStack_11c;
typedef char fStack_58;
typedef char fStack_68;
typedef char fStack_78;
typedef char fStack_f8;
typedef char fStack_fc;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_004098e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004098e0_t> FUN_004098e0 = {(FUN_004098e0_t)0x004098e0};
typedef uint32_t (BEA_THISCALL* FUN_0040b100_t)(uint32_t);
static const bea_guard<FUN_0040b100_t> FUN_0040b100 = {(FUN_0040b100_t)0x0040b100};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_004d2a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d2a70_t> FUN_004d2a70 = {(FUN_004d2a70_t)0x004d2a70};
typedef undefined4 * (BEA_THISCALL* FUN_004d2ae0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d2ae0_t> FUN_004d2ae0 = {(FUN_004d2ae0_t)0x004d2ae0};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef float10 (BEA_THISCALL* FUN_004f99f0_t)(uint32_t);
static const bea_guard<FUN_004f99f0_t> FUN_004f99f0 = {(FUN_004f99f0_t)0x004f99f0};
typedef float10 (BEA_THISCALL* FUN_00509c80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00509c80_t> FUN_00509c80 = {(FUN_00509c80_t)0x00509c80};
typedef undefined4 (BEA_STDCALL* FUN_0050b030_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0050b030_t> FUN_0050b030 = {(FUN_0050b030_t)0x0050b030};

static undefined4 BEA_THISCALL ap_0040acc0(void * this_, int param_1, int param_2, int param_3)
{
  void *pvVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;

  alignas(16) uint8_t bea_frame_[0x1a0] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_194 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x194);
  undefined4 &local_190 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x190);
  undefined4 &local_18c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x18c);
  undefined4 &local_188 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x188);
  undefined4 &local_184 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x184);
  undefined4 &local_180 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x180);
  undefined4 &local_17c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x17c);
  undefined4 &local_178 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x178);
  undefined4 &local_174 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x174);
  undefined4 &local_170 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x170);
  undefined4 &local_16c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x16c);
  undefined4 &local_168 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x168);
  undefined4 &local_164 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x164);
  undefined4 *puVar10;
  undefined4 uVar11;
  float &local_130 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x130);
  undefined4 &local_12c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x12c);
  undefined1 * &puStack_124 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x1a0 - 0x124);
  float &local_120 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x120);
  float &fStack_11c = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x11c);
  float &fStack_118 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x118);
  float &fStack_110 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x110);
  float &fStack_10c = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x10c);
  float &fStack_108 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x108);
  float &fStack_100 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x100);
  float &fStack_fc = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xfc);
  float &fStack_f8 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xf8);
  float &fStack_f0 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xf0);
  float &fStack_ec = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xec);
  float &fStack_e8 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xe8);
  undefined4 &uStack_e4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0xe4);
  undefined4 &uStack_e0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0xe0);
  undefined4 &uStack_dc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0xdc);
  undefined4 &uStack_d8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0xd8);
  undefined4 &uStack_d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0xd4);
  undefined4 &uStack_d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0xd0);
  undefined4 &uStack_cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0xcc);
  undefined4 &uStack_c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0xc8);
  undefined4 &uStack_c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0xc4);
  float &fStack_c0 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xc0);
  float &fStack_bc = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xbc);
  float &fStack_b8 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0xb8);
  undefined ** (&appuStack_b0)[5] = *reinterpret_cast<undefined ** (*)[5]>(bea_frame_ + 0x1a0 - 0xb0);
  float &fStack_9c = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x9c);
  float &fStack_98 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x98);
  float &fStack_94 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x94);
  undefined4 &uStack_90 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x90);
  undefined4 &uStack_8c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x8c);
  undefined4 &uStack_88 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x88);
  undefined4 &uStack_84 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x84);
  undefined4 &uStack_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x80);
  undefined1 (&auStack_7c)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x1a0 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x78);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x68);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x58);
  undefined1 (&auStack_4c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1a0 - 0x4c);
  undefined1 (&auStack_3c)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x1a0 - 0x3c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x1a0 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1a0 - 0x4);
  local_12c = 0;
  if (*(int *)((int)this_ + 0x574) != 0) {
    if (param_3 != 0) {
      FUN_00401000(bea_arg((void *)((int)this_ + 0x4c8)), bea_arg(0));
      FUN_00401000(bea_arg((void *)((int)this_ + 0x4cc)), bea_arg(0));
    }
    FUN_004062d0(bea_arg(&local_120), bea_arg(*(undefined4 *)((int)this_ + 0x4e8)), bea_arg(*(undefined4 *)((int)this_ + 0x4f4)), bea_arg(0))
    ;
    pvVar1 = (void *)bea_vcall<uint32_t>(this_, 0x1d4);
    fVar9 = (float10)FUN_00509c80(bea_arg(pvVar1), bea_arg(*(undefined4 *)((int)this_ + 0x1c)), bea_arg(*(undefined4 *)((int)this_ + 0x20)), bea_arg(*(undefined4 *)((int)this_ + 0x24)), bea_arg(*(undefined4 *)((int)this_ + 0x28)));
    local_130 = (float)fVar9;
    if (fVar9 <= (float10)0.0f) {
      local_130 = 1000.0f;
    }
    FUN_004d2a70(bea_arg(*(void **)((int)this_ + 0x574)), bea_arg(&fStack_f0));
    pfVar2 = (float *)FUN_004d2ae0(bea_arg(*(void **)((int)this_ + 0x574)), bea_arg(auStack_3c));
    uVar3 = FUN_00401ec0(bea_arg(&fStack_c0), bea_arg(fStack_110 * pfVar2[9] + fStack_100 * pfVar2[10] + local_120 * pfVar2[8]), bea_arg(fStack_10c * pfVar2[9] + fStack_fc * pfVar2[10] + fStack_11c * pfVar2[8]), bea_arg(fStack_108 * pfVar2[9] + fStack_f8 * pfVar2[10] + fStack_118 * pfVar2[8]));
    uVar4 = FUN_00401ec0(bea_arg(&uStack_e0), bea_arg(fStack_110 * pfVar2[5] + fStack_100 * pfVar2[6] + local_120 * pfVar2[4]), bea_arg(fStack_10c * pfVar2[5] + fStack_fc * pfVar2[6] + fStack_11c * pfVar2[4]), bea_arg(fStack_108 * pfVar2[5] + fStack_f8 * pfVar2[6] + fStack_118 * pfVar2[4]));
    uVar5 = FUN_00401ec0(bea_arg(auStack_4c), bea_arg(local_120 * *pfVar2 + fStack_110 * pfVar2[1] + fStack_100 * pfVar2[2]), bea_arg(fStack_11c * *pfVar2 + fStack_10c * pfVar2[1] + fStack_fc * pfVar2[2]), bea_arg(fStack_118 * *pfVar2 + fStack_108 * pfVar2[1] + fStack_f8 * pfVar2[2]));
    FUN_00401f10(bea_arg(auStack_7c), bea_arg(uVar5), bea_arg(uVar4), bea_arg(uVar3));
    FUN_00401ec0(bea_arg(&fStack_c0), bea_arg(fStack_78 * 1000.0f), bea_arg(fStack_68 * 1000.0f), bea_arg(fStack_58 * 1000.0f));
    FUN_00401ec0(bea_arg(&uStack_e0), bea_arg(fStack_c0 + fStack_f0), bea_arg(fStack_ec + fStack_bc), bea_arg(fStack_e8 + fStack_b8));
    FUN_0040b100(bea_arg(appuStack_b0));
    fStack_9c = fStack_f0;
    fStack_98 = fStack_ec;
    fStack_94 = fStack_e8;
    uStack_90 = uStack_e4;
    uStack_8c = uStack_e0;
    uStack_88 = uStack_dc;
    uStack_84 = uStack_d8;
    uStack_80 = uStack_d4;
    appuStack_b0[0] = ((void*)0x005d8bfc);
    uStack_d0 = 0;
    uVar6 = -(uint)(param_2 != 0) & 2;
    puVar8 = (undefined4 *)((int)this_ + 0x4d0);
    if (param_3 == 0) {
      puVar8 = &uStack_d0;
    }
    uVar11 = 0xffffffff;
    uVar5 = 1;
    uVar4 = 0x2000004;
    uVar3 = 0;
    puStack_124 = (undefined1*)&local_194;
    pvVar1 = this_;
    puVar10 = puVar8;
    FUN_004098e0(bea_arg(&local_194), bea_arg(appuStack_b0));
    iVar7 = FUN_0050b030(bea_arg(local_194), bea_arg(local_190), bea_arg(local_18c), bea_arg(local_188), bea_arg(local_184), bea_arg(local_180), bea_arg(local_17c), bea_arg(local_178), bea_arg(local_174), bea_arg(local_170), bea_arg(local_16c), bea_arg(local_168), bea_arg(local_164), bea_arg(pvVar1), bea_arg(puVar10), bea_arg(uVar3), bea_arg(param_2), bea_arg(uVar6), bea_arg(uVar4), bea_arg(uVar5), bea_arg(uVar11));
    if (((iVar7 == 3) && (pvVar1 = (void *)*puVar8, (*(byte *)((int)pvVar1 + 0x34) & 0x10) != 0)) &&
       (((*(uint *)((int)pvVar1 + 0x34) & 0x100) == 0 ||
        (fVar9 = (float10)FUN_004f99f0(bea_arg(pvVar1)), (float10)0.0f < fVar9)))) {
      if ((float)puVar8[3] < local_130) {
        local_12c = *puVar8;
      }
      if (param_3 != 0) {
        FUN_00401000(bea_arg((void *)((int)this_ + 0x4cc)), bea_arg(*puVar8));
      }
    }
  }
  if (param_1 != 0) {
    uVar6 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar6 = uVar6 & 0x8000ffff;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffff0000) + 1;
    }
    puStack_124 = (undefined1 *)(uintptr_t)bea_piece32(((float)(int)uVar6 * 3.0517579e-06f + DAT_00672fd0 + 0.1f));
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x1772), bea_arg(this_), bea_arg(&puStack_124), bea_arg(0), bea_arg(0), bea_arg(param_1));
  }
  return local_12c;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040acc0, ap_0040acc0));
