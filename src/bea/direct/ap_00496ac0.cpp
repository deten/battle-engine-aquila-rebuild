// auto-ported from 00496ac0_vslot4.c (CMCGroundVehicle::vslot4, 1179 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x210: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CMCGroundVehicle;
typedef char Mat34;
typedef char Vec3;
#define DAT_0062dd20 GLOBAL_AT(byte, 0x0062dd20)
#define s_barrel_0062dd18 ((char*)0x0062dd18)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef float10 (BEA_THISCALL* FUN_00401b50_t)(uint32_t);
static const bea_guard<FUN_00401b50_t> FUN_00401b50 = {(FUN_00401b50_t)0x00401b50};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d120_t> FUN_0040d120 = {(FUN_0040d120_t)0x0040d120};
typedef Vec3* (BEA_THISCALL* FUN_0040d150_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d150_t> FUN_0040d150 = {(FUN_0040d150_t)0x0040d150};
typedef float10 (BEA_THISCALL* FUN_0040d1a0_t)(uint32_t);
static const bea_guard<FUN_0040d1a0_t> FUN_0040d1a0 = {(FUN_0040d1a0_t)0x0040d1a0};
typedef uint32_t (BEA_THISCALL* FUN_0040d1f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d1f0_t> FUN_0040d1f0 = {(FUN_0040d1f0_t)0x0040d1f0};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef uint32_t (BEA_THISCALL* FUN_00425760_t)(uint32_t);
static const bea_guard<FUN_00425760_t> FUN_00425760 = {(FUN_00425760_t)0x00425760};
typedef uint32_t (BEA_THISCALL* FUN_004956a0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004956a0_t> FUN_004956a0 = {(FUN_004956a0_t)0x004956a0};
typedef uint32_t (BEA_THISCALL* FUN_00495e00_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00495e00_t> FUN_00495e00 = {(FUN_00495e00_t)0x00495e00};
typedef uint32_t (BEA_THISCALL* FUN_00495ed0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00495ed0_t> FUN_00495ed0 = {(FUN_00495ed0_t)0x00495ed0};
typedef int (BEA_CDECL* _strncmp_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<_strncmp_t> _strncmp = {(_strncmp_t)0x0055e560};

static int BEA_THISCALL ap_00496ac0(CMCGroundVehicle * this_, int param_1, int param_2, float *param_3, undefined4 param_4)
{
  float fVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *this_00;
  float *pfVar8;
  void *this_01;
  byte *pbVar9;
  float *pfVar10;
  bool bVar11;
  float10 fVar12;
  undefined1 *puVar13;
  float fVar14;

  alignas(16) uint8_t bea_frame_[0x210] = {};   // the original stack frame (emulate_frame)
  float &local_210 = *reinterpret_cast<float *>(bea_frame_ + 0x210 - 0x210);
  float &local_20c = *reinterpret_cast<float *>(bea_frame_ + 0x210 - 0x20c);
  float &local_208 = *reinterpret_cast<float *>(bea_frame_ + 0x210 - 0x208);
  float &local_200 = *reinterpret_cast<float *>(bea_frame_ + 0x210 - 0x200);
  float &local_1fc = *reinterpret_cast<float *>(bea_frame_ + 0x210 - 0x1fc);
  float &local_1f8 = *reinterpret_cast<float *>(bea_frame_ + 0x210 - 0x1f8);
  float &local_1f0 = *reinterpret_cast<float *>(bea_frame_ + 0x210 - 0x1f0);
  float &local_1ec = *reinterpret_cast<float *>(bea_frame_ + 0x210 - 0x1ec);
  float &local_1e8 = *reinterpret_cast<float *>(bea_frame_ + 0x210 - 0x1e8);
  undefined1 (&local_1e0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x1e0);
  undefined1 (&local_1d0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x1d0);
  undefined1 (&local_1c0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x1c0);
  undefined1 (&local_1b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x1b0);
  undefined1 (&local_1a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x1a0);
  undefined1 (&local_190)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x190);
  undefined1 (&local_180)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x180);
  undefined1 (&local_170)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x170);
  undefined1 (&local_160)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x160);
  undefined1 (&local_150)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x150);
  undefined1 (&local_140)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x140);
  undefined1 (&local_130)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x130);
  undefined1 (&local_120)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x120);
  undefined1 (&local_110)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x110);
  float (&local_100)[12] = *reinterpret_cast<float (*)[12]>(bea_frame_ + 0x210 - 0x100);
  undefined1 (&local_d0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0xd0);
  undefined1 (&local_c0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0xc0);
  undefined1 (&local_b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0xb0);
  undefined1 (&local_a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0xa0);
  undefined1 (&local_90)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x90);
  undefined1 (&local_80)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x80);
  undefined1 (&local_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x70);
  undefined1 (&local_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x60);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x210 - 0x40);
  undefined1 (&local_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x210 - 0x30);
  if (*(int *)(this_ + 8) == 0) {
    this_01 = (void *)0x0;
  }
  else {
    this_01 = (void *)(*(int *)(this_ + 8) + -8);
  }
  fVar12 = bea_fcast<float10>(FUN_00401b50(bea_arg(this_01)));
  pbVar9 = &DAT_0062dd20;
  fVar1 = bea_fcast<float>(fVar12);
  pbVar3 = (byte *)(param_1 + 0xdc);
  do {
    bVar2 = *pbVar3;
    bVar11 = bVar2 < *pbVar9;
    if (bVar2 != *pbVar9) {
LAB_00496b21:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00496b26;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar11 = bVar2 < pbVar9[1];
    if (bVar2 != pbVar9[1]) goto LAB_00496b21;
    pbVar3 = pbVar3 + 2;
    pbVar9 = pbVar9 + 2;
  } while (BEA_LOOP_GUARD((bVar2 != 0)));
  iVar4 = 0;
LAB_00496b26:
  if (iVar4 == 0) {
    uVar5 = *(undefined4 *)((int)this_01 + 0xe4);
    FUN_004011b0(bea_arg(local_1d0), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    FUN_004062d0(bea_arg(local_1d0), bea_arg(uVar5), bea_arg(0), bea_arg(0));
    uVar5 = *(undefined4 *)((int)this_01 + 0xe0);
    FUN_004011b0(bea_arg(local_170), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    FUN_004062d0(bea_arg(local_170), bea_arg(uVar5), bea_arg(0), bea_arg(0));
    uVar5 = FUN_0040d120(bea_arg(local_150), bea_arg(local_1e0), bea_arg(local_1b0));
    uVar6 = FUN_0040d120(bea_arg(local_160), bea_arg(local_70), bea_arg(local_1c0));
    uVar7 = FUN_0040d120(bea_arg(local_170), bea_arg(local_60), bea_arg(local_1d0));
    FUN_00401f10(bea_arg(local_130), bea_arg(uVar7), bea_arg(uVar6), bea_arg(uVar5));
    uVar5 = FUN_0040d150(bea_arg(local_110), bea_arg(local_80), bea_arg(fVar1));
    uVar6 = FUN_0040d150(bea_arg(local_120), bea_arg(local_c0), bea_arg(fVar1));
    uVar7 = FUN_0040d150(bea_arg(local_130), bea_arg(local_b0), bea_arg(fVar1));
    FUN_00401f10(bea_arg(local_1a0), bea_arg(uVar7), bea_arg(uVar6), bea_arg(uVar5));
    uVar5 = FUN_00401ee0(bea_arg(local_1b0), bea_arg(local_90), bea_arg(local_180));
    uVar6 = FUN_00401ee0(bea_arg(local_1c0), bea_arg(local_d0), bea_arg(local_190));
    uVar7 = FUN_00401ee0(bea_arg(local_1d0), bea_arg(local_50), bea_arg(local_1a0));
    FUN_00401f10(bea_arg(&local_210), bea_arg(uVar7), bea_arg(uVar6), bea_arg(uVar5));
    // class 19: the asm's order (all 9 sums)
    uVar5 = FUN_00401ec0(bea_arg(local_40), bea_arg(local_210 * param_3[8] +
                                  local_1f0 * param_3[10] + local_200 * param_3[9]), bea_arg(local_20c * param_3[8] + local_1ec * param_3[10] + local_1fc * param_3[9]), bea_arg(local_208 * param_3[8] + local_1e8 * param_3[10] + local_1f8 * param_3[9]));
    uVar6 = FUN_00401ec0(bea_arg(local_a0), bea_arg(local_210 * param_3[4] +
                                  local_1f0 * param_3[6] + local_200 * param_3[5]), bea_arg(local_20c * param_3[4] + local_1ec * param_3[6] + local_1fc * param_3[5]), bea_arg(local_208 * param_3[4] + local_1e8 * param_3[6] + local_1f8 * param_3[5]));
    uVar7 = FUN_00401ec0(bea_arg(local_140), bea_arg(local_210 * *param_3 + local_1f0 * param_3[2] + local_200 * param_3[1]), bea_arg(local_20c * *param_3 + local_1ec * param_3[2] + local_1fc * param_3[1]), bea_arg(local_208 * *param_3 + local_1e8 * param_3[2] + local_1f8 * param_3[1]));
    FUN_00401f10(bea_arg(local_100), bea_arg(uVar7), bea_arg(uVar6), bea_arg(uVar5));
    pfVar8 = local_100;
  }
  else {
    iVar4 = _strncmp(bea_arg((char *)(param_1 + 0xdc)), bea_arg(s_barrel_0062dd18), bea_arg(6));
    if (iVar4 != 0) goto LAB_00496f08;
    uVar5 = FUN_0040d1f0(bea_arg(local_170), bea_arg(*(undefined4 *)((int)this_01 + 0xe4)), bea_arg(0), bea_arg(0));
    FUN_0040d320(bea_arg((void *)((int)this_01 + 0x3c)), bea_arg(local_100), bea_arg(uVar5));
    uVar5 = FUN_00401ec0(bea_arg(local_140), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
    FUN_0040d2c0(bea_arg(local_100), bea_arg(local_1e0), bea_arg(uVar5));
    fVar12 = bea_fcast<float10>(FUN_0040d1a0(bea_arg(local_1e0)));
    FUN_0040d1f0(bea_arg(local_1a0), bea_arg(0), bea_arg((*(float *)((int)this_01 + 0xf0) - *(float *)((int)this_01 + 0xf4)) - bea_fcast<float>(fVar12)), bea_arg(0));
    FUN_0040d1f0(bea_arg(local_130), bea_arg(0), bea_arg((*(float *)((int)this_01 + 0xe8) - *(float *)((int)this_01 + 0xf4)) - bea_fcast<float>(fVar12)), bea_arg(0));
    puVar13 = local_170;
    fVar14 = fVar1;
    this_00 = (void *)FUN_00495e00(bea_arg(local_130), bea_arg(local_1d0), bea_arg(local_1a0));
    uVar5 = FUN_00495ed0(bea_arg(this_00), bea_arg(puVar13), bea_arg(fVar14));
    uVar5 = FUN_004956a0(bea_arg(local_1a0), bea_arg(&local_210), bea_arg(uVar5));
    pfVar8 = (float *)FUN_0040d320(bea_arg(param_3), bea_arg(local_30), bea_arg(uVar5));
  }
  pfVar10 = param_3;
  for (iVar4 = 0xc; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *pfVar10 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar10 = pfVar10 + 1;
  }
  FUN_00425760(bea_arg(param_3));
LAB_00496f08:
  if (*(int *)(param_1 + 0x88) == 0) {
    *(float *)(param_2 + 8) =
         *(float *)(param_2 + 8) -
         ((*(float *)((int)this_01 + 0x250) - *(float *)((int)this_01 + 0x254)) * fVar1 +
         *(float *)((int)this_01 + 0x254));
    param_1 = param_2;
  }
  *(undefined4 *)(this_ + 0xc) = *(undefined4 *)((int)this_01 + 0xe0);
  *(undefined4 *)(this_ + 0x10) = *(undefined4 *)((int)this_01 + 0xe8);
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00496ac0, ap_00496ac0));
