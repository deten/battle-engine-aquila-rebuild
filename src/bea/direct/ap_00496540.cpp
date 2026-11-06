// auto-ported from 00496540_vslot4.c (CMCGroundAttack::vslot4, 850 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x1b0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMCGroundAttack;
typedef char Mat34;
typedef char Vec3;
#define DAT_0062dd20 GLOBAL_AT(byte, 0x0062dd20)
#define DAT_008a9e44 GLOBAL_AT(int, 0x008a9e44)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_00406d50_t)(uint32_t);
static const bea_guard<FUN_00406d50_t> FUN_00406d50 = {(FUN_00406d50_t)0x00406d50};
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d120_t> FUN_0040d120 = {(FUN_0040d120_t)0x0040d120};
typedef Vec3* (BEA_THISCALL* FUN_0040d150_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d150_t> FUN_0040d150 = {(FUN_0040d150_t)0x0040d150};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef Vec3* (BEA_THISCALL* FUN_00411a60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00411a60_t> FUN_00411a60 = {(FUN_00411a60_t)0x00411a60};

static void BEA_THISCALL ap_00496540(CMCGroundAttack * this_, int param_1, int param_2, float *param_3, undefined4 param_4)
{
  byte bVar1;
  float fVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  byte *pbVar11;
  bool bVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;

  alignas(16) uint8_t bea_frame_[0x1b0] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_1b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x1b0);
  undefined1 (&local_1a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x1a0);
  float &local_190 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x190);
  float &local_18c = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x18c);
  float &local_188 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x188);
  undefined1 (&local_180)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x180);
  undefined1 (&local_170)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x170);
  float &local_160 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x160);
  float &local_15c = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x15c);
  float &local_158 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x158);
  float &local_150 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x150);
  float &local_14c = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x14c);
  float &local_148 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x148);
  undefined1 (&local_140)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x140);
  undefined1 (&local_130)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x130);
  undefined1 (&local_120)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x120);
  undefined1 (&local_110)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x110);
  undefined1 (&local_100)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x100);
  float &local_f0 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0xf0);
  float &local_ec = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0xec);
  float &local_e8 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0xe8);
  undefined1 (&local_e0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xe0);
  undefined1 (&local_d0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xd0);
  undefined1 (&local_c0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xc0);
  float &local_b0 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0xb0);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0xac);
  float &local_a8 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0xa8);
  undefined1 (&local_a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xa0);
  undefined1 (&local_90)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x90);
  undefined1 (&local_80)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x80);
  undefined1 (&local_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x70);
  undefined1 (&local_60)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x1b0 - 0x60);
  undefined1 (&local_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x1b0 - 0x30);
  if (*(int *)(this_ + 8) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(this_ + 8) + -8;
  }
  pbVar11 = &DAT_0062dd20;
  pbVar3 = (byte *)(param_1 + 0xdc);
  do {
    bVar1 = *pbVar3;
    bVar12 = bVar1 < *pbVar11;
    if (bVar1 != *pbVar11) {
LAB_00496597:
      iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_0049659c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar12 = bVar1 < pbVar11[1];
    if (bVar1 != pbVar11[1]) goto LAB_00496597;
    pbVar3 = pbVar3 + 2;
    pbVar11 = pbVar11 + 2;
  } while (((bVar1 != 0)));
  iVar4 = 0;
LAB_0049659c:
  if (iVar4 == 0) {
    FUN_004062d0(bea_arg(local_1b0), bea_arg(*(undefined4 *)(iVar10 + 0xe4)), bea_arg(0), bea_arg(0));
    FUN_004062d0(bea_arg(local_d0), bea_arg(*(undefined4 *)(iVar10 + 0xe0)), bea_arg(0), bea_arg(0));
    fVar2 = bea_fcast<float>(DAT_008a9e44);
    FUN_00401ec0(bea_arg(local_120), bea_arg(local_b0 - local_190), bea_arg(local_ac - local_18c), bea_arg(local_a8 - local_188));
    puVar14 = local_120;
    uVar5 = FUN_0040d120(bea_arg(local_c0), bea_arg(local_90), bea_arg(local_1a0));
    uVar6 = FUN_0040d120(bea_arg(local_d0), bea_arg(local_70), bea_arg(local_1b0));
    FUN_00401f10(bea_arg(local_170), bea_arg(uVar6), bea_arg(uVar5), bea_arg(puVar14));
    FUN_00401ec0(bea_arg(local_e0), bea_arg(local_150 * fVar2), bea_arg(local_14c * fVar2), bea_arg(local_148 * fVar2));
    FUN_00401ec0(bea_arg(local_130), bea_arg(local_160 * fVar2), bea_arg(local_15c * fVar2), bea_arg(local_158 * fVar2));
    puVar14 = local_e0;
    puVar13 = local_130;
    uVar5 = FUN_0040d150(bea_arg(local_170), bea_arg(local_a0), bea_arg(fVar2));
    FUN_00401f10(bea_arg(local_110), bea_arg(uVar5), bea_arg(puVar13), bea_arg(puVar14));
    FUN_00401ec0(bea_arg(local_140), bea_arg(local_f0 + local_190), bea_arg(local_ec + local_18c), bea_arg(local_e8 + local_188));
    puVar14 = local_140;
    uVar5 = FUN_00401ee0(bea_arg(local_1a0), bea_arg(local_80), bea_arg(local_100));
    uVar6 = FUN_00401ee0(bea_arg(local_1b0), bea_arg(local_180), bea_arg(local_110));
    FUN_00401f10(bea_arg(local_60), bea_arg(uVar6), bea_arg(uVar5), bea_arg(puVar14));
    pfVar7 = (float *)FUN_0040d320(bea_arg(param_3), bea_arg(local_30), bea_arg(local_60));
    pfVar9 = param_3;
    for (iVar4 = 0xc; ((iVar4 != 0)); iVar4 = iVar4 + -1) {
      *pfVar9 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
    }
    fVar2 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2]);
    if (fVar2 != 0.0f) {
      fVar2 = 1.0f / fVar2;
      *param_3 = fVar2 * *param_3;
      param_3[1] = fVar2 * param_3[1];
      param_3[2] = fVar2 * param_3[2];
    }
    pfVar7 = param_3 + 4;
    FUN_00406d50(bea_arg(pfVar7));
    pfVar9 = param_3 + 8;
    pfVar8 = (float *)FUN_00411a60(bea_arg(param_3), bea_arg(local_180), bea_arg(pfVar7));
    *pfVar9 = *pfVar8;
    param_3[9] = pfVar8[1];
    param_3[10] = pfVar8[2];
    param_3[0xb] = pfVar8[3];
    FUN_00406d50(bea_arg(pfVar9));
    pfVar9 = (float *)FUN_00411a60(bea_arg(pfVar9), bea_arg(local_180), bea_arg(param_3));
    *pfVar7 = *pfVar9;
    param_3[5] = pfVar9[1];
    param_3[6] = pfVar9[2];
    param_3[7] = pfVar9[3];
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) - *(float *)(iVar10 + 0x284);
  }
  *(undefined4 *)(this_ + 0xc) = *(undefined4 *)(iVar10 + 0xe0);
  *(undefined4 *)(this_ + 0x10) = *(undefined4 *)(iVar10 + 0x284);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00496540, ap_00496540));
