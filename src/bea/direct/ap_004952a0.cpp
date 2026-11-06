// auto-ported from 004952a0_vslot4.c (CMCCannon::vslot4, 1024 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x1b0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CMCCannon;
typedef char Mat34;
typedef char Vec3;
#define DAT_0062dd20 GLOBAL_AT(byte, 0x0062dd20)
#define s_barrel_0062dd18 ((char*)0x0062dd18)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef float10 (BEA_THISCALL* FUN_00401b50_t)(uint32_t);
static const bea_guard<FUN_00401b50_t> FUN_00401b50 = {(FUN_00401b50_t)0x00401b50};
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
typedef uint32_t (BEA_THISCALL* FUN_00425760_t)(uint32_t);
static const bea_guard<FUN_00425760_t> FUN_00425760 = {(FUN_00425760_t)0x00425760};
typedef uint32_t (BEA_THISCALL* FUN_004956a0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004956a0_t> FUN_004956a0 = {(FUN_004956a0_t)0x004956a0};
typedef int (BEA_CDECL* _strncmp_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<_strncmp_t> _strncmp = {(_strncmp_t)0x0055e560};

static CMCCannon * BEA_THISCALL ap_004952a0(CMCCannon * this_, int param_1, int param_2, undefined4 *param_3, undefined4 param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  void *this_00;
  byte *pbVar13;
  byte *pbVar14;
  bool bVar15;
  float10 fVar16;

  alignas(16) uint8_t bea_frame_[0x1b0] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_1b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x1b0);
  undefined1 (&local_1a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x1a0);
  undefined1 (&local_190)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x190);
  undefined1 (&local_180)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x180);
  undefined1 (&local_170)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x170);
  undefined1 (&local_160)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x160);
  undefined1 (&local_150)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x150);
  undefined1 (&local_140)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x140);
  undefined1 (&local_130)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x130);
  undefined1 (&local_120)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x120);
  undefined1 (&local_110)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x110);
  undefined1 (&local_100)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x100);
  undefined1 (&local_f0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xf0);
  undefined1 (&local_e0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xe0);
  undefined1 (&local_d0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xd0);
  undefined1 (&local_c0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xc0);
  undefined1 (&local_b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xb0);
  undefined1 (&local_a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xa0);
  undefined1 (&local_90)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x1b0 - 0x90);
  undefined1 (&local_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x60);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x40);
  undefined1 (&local_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x1b0 - 0x30);
  if (*(int *)(this_ + 8) == 0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)(*(int *)(this_ + 8) + -8);
  }
  fVar16 = (float10)FUN_00401b50(bea_arg(this_00));
  pbVar14 = &DAT_0062dd20;
  fVar1 = (float)fVar16;
  pbVar13 = (byte *)(param_1 + 0xdc);
  do {
    bVar4 = *pbVar13;
    bVar15 = bVar4 < *pbVar14;
    if (bVar4 != *pbVar14) {
LAB_00495303:
      iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_00495308;
    }
    if (bVar4 == 0) break;
    bVar4 = pbVar13[1];
    bVar15 = bVar4 < pbVar14[1];
    if (bVar4 != pbVar14[1]) goto LAB_00495303;
    pbVar13 = pbVar13 + 2;
    pbVar14 = pbVar14 + 2;
  } while (BEA_LOOP_GUARD((bVar4 != 0)));
  iVar6 = 0;
LAB_00495308:
  if (iVar6 == 0) {
    FUN_004062d0(bea_arg(local_1b0), bea_arg(*(undefined4 *)((int)this_00 + 0xe4)), bea_arg(0), bea_arg(0));
    FUN_004062d0(bea_arg(local_170), bea_arg(*(undefined4 *)((int)this_00 + 0xe0)), bea_arg(0), bea_arg(0));
    uVar7 = FUN_0040d120(bea_arg(local_150), bea_arg(local_50), bea_arg(local_190));
    uVar8 = FUN_0040d120(bea_arg(local_160), bea_arg(local_40), bea_arg(local_1a0));
    uVar9 = FUN_0040d120(bea_arg(local_170), bea_arg(local_60), bea_arg(local_1b0));
    FUN_00401f10(bea_arg(local_c0), bea_arg(uVar9), bea_arg(uVar8), bea_arg(uVar7));
    uVar7 = FUN_0040d150(bea_arg(local_a0), bea_arg(local_f0), bea_arg(fVar1));
    uVar8 = FUN_0040d150(bea_arg(local_b0), bea_arg(local_d0), bea_arg(fVar1));
    uVar9 = FUN_0040d150(bea_arg(local_c0), bea_arg(local_110), bea_arg(fVar1));
    FUN_00401f10(bea_arg(local_140), bea_arg(uVar9), bea_arg(uVar8), bea_arg(uVar7));
    uVar7 = FUN_00401ee0(bea_arg(local_190), bea_arg(local_e0), bea_arg(local_120));
    uVar8 = FUN_00401ee0(bea_arg(local_1a0), bea_arg(local_100), bea_arg(local_130));
    uVar9 = FUN_00401ee0(bea_arg(local_1b0), bea_arg(local_180), bea_arg(local_140));
    FUN_00401f10(bea_arg(local_90), bea_arg(uVar9), bea_arg(uVar8), bea_arg(uVar7));
    puVar10 = (undefined4 *)FUN_0040d320(bea_arg(param_3), bea_arg(local_30), bea_arg(local_90));
    puVar12 = param_3;
    for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    FUN_00406d50(bea_arg(param_3));
    puVar10 = param_3 + 4;
    FUN_00406d50(bea_arg(puVar10));
    puVar12 = param_3 + 8;
    puVar11 = (undefined4 *)FUN_00411a60(bea_arg(param_3), bea_arg(local_180), bea_arg(puVar10));
    *puVar12 = *puVar11;
    param_3[9] = puVar11[1];
    param_3[10] = puVar11[2];
    param_3[0xb] = puVar11[3];
    FUN_00406d50(bea_arg(puVar12));
    puVar12 = (undefined4 *)FUN_00411a60(bea_arg(puVar12), bea_arg(local_180), bea_arg(param_3));
    *puVar10 = *puVar12;
    param_3[5] = puVar12[1];
    param_3[6] = puVar12[2];
    param_3[7] = puVar12[3];
  }
  else {
    iVar6 = _strncmp(bea_arg((char *)(param_1 + 0xdc)), bea_arg(s_barrel_0062dd18), bea_arg(6));
    if (iVar6 == 0) {
      fVar2 = *(float *)((int)this_00 + 0xf0);
      fVar5 = *(float *)((int)this_00 + 0x118);
      fVar3 = *(float *)((int)this_00 + 0xf4);
      FUN_004011b0(bea_arg(local_1b0), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
      FUN_004062d0(bea_arg(local_1b0), bea_arg(0), bea_arg((fVar2 - fVar3) - fVar5), bea_arg(0));
      fVar2 = *(float *)((int)this_00 + 0xe8);
      fVar3 = *(float *)((int)this_00 + 0xf4);
      FUN_004011b0(bea_arg(local_170), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
      FUN_004062d0(bea_arg(local_170), bea_arg(0), bea_arg((fVar2 - fVar3) - fVar5), bea_arg(0));
      uVar7 = FUN_0040d120(bea_arg(local_150), bea_arg(local_180), bea_arg(local_190));
      uVar8 = FUN_0040d120(bea_arg(local_160), bea_arg(local_100), bea_arg(local_1a0));
      uVar9 = FUN_0040d120(bea_arg(local_170), bea_arg(local_e0), bea_arg(local_1b0));
      FUN_00401f10(bea_arg(local_140), bea_arg(uVar9), bea_arg(uVar8), bea_arg(uVar7));
      uVar7 = FUN_0040d150(bea_arg(local_120), bea_arg(local_110), bea_arg(fVar1));
      uVar8 = FUN_0040d150(bea_arg(local_130), bea_arg(local_d0), bea_arg(fVar1));
      uVar9 = FUN_0040d150(bea_arg(local_140), bea_arg(local_f0), bea_arg(fVar1));
      FUN_00401f10(bea_arg(local_90), bea_arg(uVar9), bea_arg(uVar8), bea_arg(uVar7));
      uVar7 = FUN_004956a0(bea_arg(local_1b0), bea_arg(local_30), bea_arg(local_90));
      puVar10 = (undefined4 *)FUN_0040d320(bea_arg(param_3), bea_arg(local_c0), bea_arg(uVar7));
      puVar12 = param_3;
      for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      FUN_00425760(bea_arg(param_3));
    }
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    *(float *)(param_2 + 8) =
         *(float *)(param_2 + 8) -
         ((*(float *)((int)this_00 + 0x250) - *(float *)((int)this_00 + 0x254)) * fVar1 +
         *(float *)((int)this_00 + 0x254));
  }
  *(undefined4 *)(this_ + 0xc) = *(undefined4 *)((int)this_00 + 0xe0);
  *(undefined4 *)(this_ + 0x10) = *(undefined4 *)((int)this_00 + 0xe8);
  return (CMCCannon *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004952a0, ap_004952a0));
