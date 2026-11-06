// auto-ported from 0049efe0_vslot4.c (CMCWarspiteDome::vslot4, 1553 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x1f0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CMCWarspiteDome;
typedef char Mat34;
typedef char Vec3;
#define DAT_0062e0cc GLOBAL_AT(byte, 0x0062e0cc)
#define DAT_008a9e44 GLOBAL_AT(int, 0x008a9e44)
#define s_spinner_0062e0c4 ((char*)0x0062e0c4)
#define s_barrel_0062dd18 ((char*)0x0062dd18)
#define PTR_DAT_0062e0c0 GLOBAL_AT(void*, 0x0062e0c0)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
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
typedef uint32_t (BEA_THISCALL* FUN_0040d1f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d1f0_t> FUN_0040d1f0 = {(FUN_0040d1f0_t)0x0040d1f0};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef Vec3* (BEA_THISCALL* FUN_00411a60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00411a60_t> FUN_00411a60 = {(FUN_00411a60_t)0x00411a60};
typedef uint32_t (BEA_THISCALL* FUN_00425760_t)(uint32_t);
static const bea_guard<FUN_00425760_t> FUN_00425760 = {(FUN_00425760_t)0x00425760};
typedef uint32_t (BEA_THISCALL* FUN_004956a0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004956a0_t> FUN_004956a0 = {(FUN_004956a0_t)0x004956a0};
typedef uint32_t (BEA_THISCALL* FUN_00495e00_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00495e00_t> FUN_00495e00 = {(FUN_00495e00_t)0x00495e00};
typedef uint32_t (BEA_THISCALL* FUN_00495ed0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00495ed0_t> FUN_00495ed0 = {(FUN_00495ed0_t)0x00495ed0};
typedef int (BEA_CDECL* FUN_0055e2a6_t)(uint32_t);
static const bea_guard<FUN_0055e2a6_t> FUN_0055e2a6 = {(FUN_0055e2a6_t)0x0055e2a6};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};
typedef int (BEA_CDECL* _strncmp_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<_strncmp_t> _strncmp = {(_strncmp_t)0x0055e560};

static undefined4 * BEA_THISCALL ap_0049efe0(CMCWarspiteDome * this_, int param_1, undefined4 *param_2, float *param_3, undefined4 param_4)
{
  byte *_Str1;
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  void *pvVar9;
  float *pfVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  undefined1 *puVar15;

  alignas(16) uint8_t bea_frame_[0x1f0] = {};   // the original stack frame (emulate_frame)
  int &local_1e4 = *reinterpret_cast<int *>(bea_frame_ + 0x1f0 - 0x1e4);
  float &local_1e0 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1e0);
  float &local_1dc = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1dc);
  float &local_1d8 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1d8);
  float &local_1d0 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1d0);
  float &local_1cc = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1cc);
  float &local_1c8 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1c8);
  float &local_1c0 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1c0);
  float &local_1bc = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1bc);
  float &local_1b8 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x1b8);
  undefined1 (&local_1b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x1b0);
  undefined1 (&local_1a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x1a0);
  undefined1 (&local_190)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x190);
  undefined1 (&local_180)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x180);
  undefined1 (&local_170)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x170);
  undefined1 (&local_160)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x160);
  undefined1 (&local_150)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x150);
  undefined1 (&local_140)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x140);
  undefined1 (&local_130)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x130);
  undefined1 (&local_120)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x120);
  undefined1 (&local_110)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x110);
  undefined1 (&local_100)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x100);
  undefined1 (&local_f0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0xf0);
  undefined1 (&local_e0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0xe0);
  float (&local_d0)[12] = *reinterpret_cast<float (*)[12]>(bea_frame_ + 0x1f0 - 0xd0);
  undefined1 (&local_a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0xa0);
  undefined1 (&local_90)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x90);
  undefined1 (&local_80)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x80);
  undefined1 (&local_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x70);
  undefined1 (&local_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x60);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x40);
  undefined1 (&local_30)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x30);
  undefined1 (&local_20)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x20);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x10);
  if (*(int *)(this_ + 8) == 0) {
    local_1e4 = 0;
  }
  else {
    local_1e4 = *(int *)(this_ + 8) + -8;
  }
  _Str1 = (byte *)(param_1 + 0xdc);
  pbVar13 = &DAT_0062e0cc;
  pbVar12 = _Str1;
  do {
    bVar1 = *pbVar12;
    bVar14 = bVar1 < *pbVar13;
    if (bVar1 != *pbVar13) {
LAB_0049f042:
      iVar2 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_0049f047;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar12[1];
    bVar14 = bVar1 < pbVar13[1];
    if (bVar1 != pbVar13[1]) goto LAB_0049f042;
    pbVar12 = pbVar12 + 2;
    pbVar13 = pbVar13 + 2;
  } while (((bVar1 != 0)));
  iVar2 = 0;
LAB_0049f047:
  if (iVar2 == 0) {
    uVar6 = *(undefined4 *)(local_1e4 + 0xe4);
    FUN_004011b0(bea_arg(local_160), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    FUN_004062d0(bea_arg(local_160), bea_arg(uVar6), bea_arg(0), bea_arg(0));
    uVar6 = *(undefined4 *)(local_1e4 + 0xe0);
    FUN_004011b0(bea_arg(local_120), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    FUN_004062d0(bea_arg(local_120), bea_arg(uVar6), bea_arg(0), bea_arg(0));
    uVar6 = DAT_008a9e44;
    uVar3 = FUN_0040d120(bea_arg(local_100), bea_arg(local_130), bea_arg(local_140));
    uVar4 = FUN_0040d120(bea_arg(local_110), bea_arg(local_1a0), bea_arg(local_150));
    uVar5 = FUN_0040d120(bea_arg(local_120), bea_arg(local_30), bea_arg(local_160));
    FUN_00401f10(bea_arg(local_80), bea_arg(uVar5), bea_arg(uVar4), bea_arg(uVar3));
    uVar3 = FUN_0040d150(bea_arg(local_60), bea_arg(local_40), bea_arg(uVar6));
    uVar4 = FUN_0040d150(bea_arg(local_70), bea_arg(local_50), bea_arg(uVar6));
    uVar6 = FUN_0040d150(bea_arg(local_80), bea_arg(local_10), bea_arg(uVar6));
    FUN_00401f10(bea_arg(local_190), bea_arg(uVar6), bea_arg(uVar4), bea_arg(uVar3));
    uVar6 = FUN_00401ee0(bea_arg(local_140), bea_arg(local_20), bea_arg(local_170));
    uVar3 = FUN_00401ee0(bea_arg(local_150), bea_arg(local_f0), bea_arg(local_180));
    uVar4 = FUN_00401ee0(bea_arg(local_160), bea_arg(local_a0), bea_arg(local_190));
    FUN_00401f10(bea_arg(&local_1e0), bea_arg(uVar4), bea_arg(uVar3), bea_arg(uVar6));
    pfVar10 = param_3 + 4;
    // class 19: the asm's order (all 9 sums)
    uVar6 = FUN_00401ec0(bea_arg(local_90), bea_arg(local_1e0 * param_3[8] +
                                  local_1c0 * param_3[10] + local_1d0 * param_3[9]), bea_arg(local_1dc * param_3[8] + local_1bc * param_3[10] + local_1cc * param_3[9]), bea_arg(local_1d8 * param_3[8] + local_1b8 * param_3[10] + local_1c8 * param_3[9]));
    uVar3 = FUN_00401ec0(bea_arg(local_e0), bea_arg(local_1e0 * *pfVar10 +
                                  local_1c0 * param_3[6] + local_1d0 * param_3[5]), bea_arg(local_1dc * *pfVar10 + local_1bc * param_3[6] + local_1cc * param_3[5]), bea_arg(local_1d8 * *pfVar10 + local_1b8 * param_3[6] + local_1c8 * param_3[5]));
    uVar4 = FUN_00401ec0(bea_arg(local_1b0), bea_arg(local_1e0 * *param_3 + local_1c0 * param_3[2] + local_1d0 * param_3[1]), bea_arg(local_1dc * *param_3 + local_1bc * param_3[2] + local_1cc * param_3[1]), bea_arg(local_1d8 * *param_3 + local_1b8 * param_3[2] + local_1c8 * param_3[1]));
    FUN_00401f10(bea_arg(local_d0), bea_arg(uVar4), bea_arg(uVar3), bea_arg(uVar6));
    pfVar8 = local_d0;
    pfVar7 = param_3;
    for (iVar2 = 0xc; ((iVar2 != 0)); iVar2 = iVar2 + -1) {
      *pfVar7 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar7 = pfVar7 + 1;
    }
    FUN_00406d50(bea_arg(param_3));
    FUN_00406d50(bea_arg(pfVar10));
    pfVar7 = (float *)FUN_00411a60(bea_arg(param_3), bea_arg(local_1b0), bea_arg(pfVar10));
    pfVar8 = param_3 + 8;
    *pfVar8 = *pfVar7;
    param_3[9] = pfVar7[1];
    param_3[10] = pfVar7[2];
    param_3[0xb] = pfVar7[3];
    FUN_00406d50(bea_arg(pfVar8));
    pfVar8 = (float *)FUN_00411a60(bea_arg(pfVar8), bea_arg(local_1b0), bea_arg(param_3));
    *pfVar10 = *pfVar8;
    param_3[5] = pfVar8[1];
    param_3[6] = pfVar8[2];
    param_3[7] = pfVar8[3];
  }
  else {
    iVar2 = _strncmp(bea_arg((char *)_Str1), bea_arg(s_barrel_0062dd18), bea_arg(6));
    if (iVar2 == 0) {
      uVar6 = *(undefined4 *)(local_1e4 + 0xf0);
      FUN_004011b0(bea_arg(local_190), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
      FUN_004062d0(bea_arg(local_190), bea_arg(0), bea_arg(0), bea_arg(uVar6));
      FUN_0040d1f0(bea_arg(local_d0), bea_arg(0), bea_arg(0), bea_arg(*(undefined4 *)(local_1e4 + 0xe8)));
      puVar15 = local_80;
      uVar6 = DAT_008a9e44;
      pvVar9 = (void *)FUN_00495e00(bea_arg(local_d0), bea_arg(local_120), bea_arg(local_190));
      uVar6 = FUN_00495ed0(bea_arg(pvVar9), bea_arg(puVar15), bea_arg(uVar6));
      uVar6 = FUN_004956a0(bea_arg(local_190), bea_arg(local_160), bea_arg(uVar6));
    }
    else {
      iVar2 = FUN_00568390(bea_arg(_Str1), bea_arg(s_spinner_0062e0c4));
      if (iVar2 != 0) {
        iVar2 = FUN_0056e170(bea_arg(_Str1), bea_arg(&PTR_DAT_0062e0c0), bea_arg(3));
        if (iVar2 == 0) {
          iVar2 = FUN_0055e2a6(bea_arg(param_1 + 0xdf));
          FUN_00401ec0(bea_arg(local_1a0), bea_arg(*(undefined4 *)(local_1e4 + 0x2a0 + (iVar2 + -1) * 4)), bea_arg(0), bea_arg(0));
          FUN_00401ec0(bea_arg(local_130), bea_arg(*(undefined4 *)(local_1e4 + 0x288 + (iVar2 + -1) * 4)), bea_arg(0), bea_arg(0));
          puVar15 = local_1b0;
          uVar6 = DAT_008a9e44;
          pvVar9 = (void *)FUN_0040d120(bea_arg(local_130), bea_arg(local_e0), bea_arg(local_1a0));
          uVar6 = FUN_0040d150(bea_arg(pvVar9), bea_arg(puVar15), bea_arg(uVar6));
          uVar6 = FUN_00401ee0(bea_arg(local_1a0), bea_arg(local_90), bea_arg(uVar6));
          uVar6 = FUN_0040d2c0(bea_arg(param_3), bea_arg(local_a0), bea_arg(uVar6));
          puVar11 = (undefined4 *)FUN_00401ee0(bea_arg(param_2), bea_arg(local_f0), bea_arg(uVar6));
          *param_2 = *puVar11;
          param_2[1] = puVar11[1];
          param_2[2] = puVar11[2];
          param_2[3] = puVar11[3];
        }
        goto LAB_0049f5c0;
      }
      FUN_0040d1f0(bea_arg(local_190), bea_arg(0), bea_arg(*(undefined4 *)(local_1e4 + 0x284)), bea_arg(0));
      FUN_0040d1f0(bea_arg(local_d0), bea_arg(0), bea_arg(*(undefined4 *)(local_1e4 + 0x280)), bea_arg(0));
      puVar15 = local_80;
      uVar6 = DAT_008a9e44;
      pvVar9 = (void *)FUN_00495e00(bea_arg(local_d0), bea_arg(local_120), bea_arg(local_190));
      uVar6 = FUN_00495ed0(bea_arg(pvVar9), bea_arg(puVar15), bea_arg(uVar6));
      uVar6 = FUN_004956a0(bea_arg(local_190), bea_arg(local_160), bea_arg(uVar6));
    }
    pfVar10 = (float *)FUN_0040d320(bea_arg(param_3), bea_arg(&local_1e0), bea_arg(uVar6));
    pfVar8 = param_3;
    for (iVar2 = 0xc; ((iVar2 != 0)); iVar2 = iVar2 + -1) {
      *pfVar8 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_00425760(bea_arg(param_3));
  }
LAB_0049f5c0:
  puVar11 = *(undefined4 **)(param_1 + 0x88);
  if (*(undefined4 **)(param_1 + 0x88) == (undefined4 *)0x0) {
    param_2[2] = bea_piece32(bea_fcast<float>(param_2[2]) - *(float *)(local_1e4 + 0x250));
    puVar11 = param_2;
  }
  return (undefined4 *)(puVar11);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049efe0, ap_0049efe0));
