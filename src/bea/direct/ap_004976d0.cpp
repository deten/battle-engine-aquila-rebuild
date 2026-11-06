// auto-ported from 004976d0_vslot4.c (CMCHiveBoss::vslot4, 2469 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x1e0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CDestructableSegmentsMotionController;
typedef char CMCHiveBoss;
typedef char Mat34;
typedef char Vec3;
#define DAT_008a9e44 GLOBAL_AT(int, 0x008a9e44)
typedef undefined4 (BEA_THISCALL* CDestructableSegmentsMotionController__vslot4_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<CDestructableSegmentsMotionController__vslot4_t> CDestructableSegmentsMotionController__vslot4 = {(CDestructableSegmentsMotionController__vslot4_t)0x00494ce0};
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
typedef uint32_t (BEA_THISCALL* FUN_00497140_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00497140_t> FUN_00497140 = {(FUN_00497140_t)0x00497140};

static void BEA_THISCALL ap_004976d0(CMCHiveBoss * this_, int param_1, undefined4 param_2, float *param_3, undefined4 param_4)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  void *pvVar8;
  int iVar9;
  undefined1 *puVar10;

  alignas(16) uint8_t bea_frame_[0x1e0] = {};   // the original stack frame (emulate_frame)
  float &local_1e0 = *reinterpret_cast<float *>(bea_frame_ + 0x1e0 - 0x1e0);
  float &local_1dc = *reinterpret_cast<float *>(bea_frame_ + 0x1e0 - 0x1dc);
  float &local_1d8 = *reinterpret_cast<float *>(bea_frame_ + 0x1e0 - 0x1d8);
  float &local_1d0 = *reinterpret_cast<float *>(bea_frame_ + 0x1e0 - 0x1d0);
  float &local_1cc = *reinterpret_cast<float *>(bea_frame_ + 0x1e0 - 0x1cc);
  float &local_1c8 = *reinterpret_cast<float *>(bea_frame_ + 0x1e0 - 0x1c8);
  float &local_1c0 = *reinterpret_cast<float *>(bea_frame_ + 0x1e0 - 0x1c0);
  float &local_1bc = *reinterpret_cast<float *>(bea_frame_ + 0x1e0 - 0x1bc);
  float &local_1b8 = *reinterpret_cast<float *>(bea_frame_ + 0x1e0 - 0x1b8);
  undefined1 (&local_1b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x1b0);
  undefined1 (&local_1a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x1a0);
  undefined1 (&local_190)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x190);
  undefined1 (&local_180)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x180);
  undefined1 (&local_170)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x170);
  undefined1 (&local_160)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x160);
  undefined1 (&local_150)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x150);
  undefined1 (&local_140)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x140);
  undefined1 (&local_130)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x130);
  undefined1 (&local_120)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x120);
  undefined1 (&local_110)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x110);
  undefined1 (&local_100)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x100);
  undefined1 (&local_f0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0xf0);
  float (&local_e0)[12] = *reinterpret_cast<float (*)[12]>(bea_frame_ + 0x1e0 - 0xe0);
  undefined1 (&local_b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0xb0);
  undefined1 (&local_a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0xa0);
  undefined1 (&local_90)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x90);
  undefined1 (&local_80)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x80);
  undefined1 (&local_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x70);
  undefined1 (&local_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x60);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x40);
  undefined1 (&local_30)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x30);
  undefined1 (&local_20)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x20);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1e0 - 0x10);
  if (*(int *)(this_ + 0x14) == 0) {
    FUN_00497140(bea_arg(this_), bea_arg(*(undefined4 *)(param_1 + 0x128)));
  }
  CDestructableSegmentsMotionController__vslot4(bea_arg((CDestructableSegmentsMotionController *)this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4));
  if ((((param_1 == *(int *)(this_ + 0x18)) || (param_1 == *(int *)(this_ + 0x1c))) ||
      (param_1 == *(int *)(this_ + 0x20))) || (param_1 == *(int *)(this_ + 0x24))) {
    uVar4 = *(undefined4 *)(*(int *)(this_ + 0x10) + 0x274);
    uVar1 = *(undefined4 *)(*(int *)(this_ + 0x10) + 600);
    FUN_004011b0(bea_arg(local_1b0), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    FUN_004062d0(bea_arg(local_1b0), bea_arg(uVar4), bea_arg(0), bea_arg(0));
    FUN_004011b0(bea_arg(local_140), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    FUN_004062d0(bea_arg(local_140), bea_arg(uVar1), bea_arg(0), bea_arg(0));
    uVar4 = DAT_008a9e44;
    uVar1 = FUN_0040d120(bea_arg(local_120), bea_arg(local_10), bea_arg(local_190));
    uVar2 = FUN_0040d120(bea_arg(local_130), bea_arg(local_20), bea_arg(local_1a0));
    uVar3 = FUN_0040d120(bea_arg(local_140), bea_arg(local_30), bea_arg(local_1b0));
    FUN_00401f10(bea_arg(local_110), bea_arg(uVar3), bea_arg(uVar2), bea_arg(uVar1));
    uVar1 = FUN_0040d150(bea_arg(local_f0), bea_arg(local_80), bea_arg(uVar4));
    uVar2 = FUN_0040d150(bea_arg(local_100), bea_arg(local_60), bea_arg(uVar4));
    uVar4 = FUN_0040d150(bea_arg(local_110), bea_arg(local_40), bea_arg(uVar4));
    FUN_00401f10(bea_arg(local_180), bea_arg(uVar4), bea_arg(uVar2), bea_arg(uVar1));
    uVar4 = FUN_00401ee0(bea_arg(local_190), bea_arg(local_90), bea_arg(local_160));
    uVar1 = FUN_00401ee0(bea_arg(local_1a0), bea_arg(local_b0), bea_arg(local_170));
    uVar2 = FUN_00401ee0(bea_arg(local_1b0), bea_arg(local_a0), bea_arg(local_180));
    FUN_00401f10(bea_arg(&local_1e0), bea_arg(uVar2), bea_arg(uVar1), bea_arg(uVar4));
    // class 19: the asm's order (all 9 sums)
    uVar4 = FUN_00401ec0(bea_arg(local_50), bea_arg(local_1c0 * param_3[10] +
                                  local_1d0 * param_3[9] + local_1e0 * param_3[8]), bea_arg(local_1bc * param_3[10] + local_1cc * param_3[9] + local_1dc * param_3[8]), bea_arg(local_1b8 * param_3[10] + local_1c8 * param_3[9] + local_1d8 * param_3[8]));
    uVar1 = FUN_00401ec0(bea_arg(local_70), bea_arg(local_1c0 * param_3[6] +
                                  local_1d0 * param_3[5] + local_1e0 * param_3[4]), bea_arg(local_1bc * param_3[6] + local_1cc * param_3[5] + local_1dc * param_3[4]), bea_arg(local_1b8 * param_3[6] + local_1c8 * param_3[5] + local_1d8 * param_3[4]));
    uVar2 = FUN_00401ec0(bea_arg(local_150), bea_arg(local_1e0 * *param_3 + local_1c0 * param_3[2] + local_1d0 * param_3[1]), bea_arg(local_1bc * param_3[2] + local_1cc * param_3[1] + local_1dc * *param_3), bea_arg(local_1b8 * param_3[2] + local_1c8 * param_3[1] + local_1d8 * *param_3));
    FUN_00401f10(bea_arg(local_e0), bea_arg(uVar2), bea_arg(uVar1), bea_arg(uVar4));
    pfVar7 = local_e0;
    pfVar6 = param_3;
    for (iVar9 = 0xc; BEA_LOOP_GUARD((iVar9 != 0)); iVar9 = iVar9 + -1) {
      *pfVar6 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar6 = pfVar6 + 1;
    }
    FUN_00406d50(bea_arg(param_3));
    pfVar7 = param_3 + 4;
    FUN_00406d50(bea_arg(pfVar7));
    pfVar5 = (float *)FUN_00411a60(bea_arg(param_3), bea_arg(local_150), bea_arg(pfVar7));
    pfVar6 = param_3 + 8;
    *pfVar6 = *pfVar5;
    param_3[9] = pfVar5[1];
    param_3[10] = pfVar5[2];
    param_3[0xb] = pfVar5[3];
    FUN_00406d50(bea_arg(pfVar6));
    pfVar6 = (float *)FUN_00411a60(bea_arg(pfVar6), bea_arg(local_150), bea_arg(param_3));
    *pfVar7 = *pfVar6;
    param_3[5] = pfVar6[1];
    param_3[6] = pfVar6[2];
    param_3[7] = pfVar6[3];
  }
  if (((param_1 == *(int *)(this_ + 0x28)) || (param_1 == *(int *)(this_ + 0x2c))) ||
     ((param_1 == *(int *)(this_ + 0x30) || (param_1 == *(int *)(this_ + 0x34))))) {
    uVar4 = *(undefined4 *)(*(int *)(this_ + 0x10) + 0x278);
    uVar1 = *(undefined4 *)(*(int *)(this_ + 0x10) + 0x25c);
    FUN_004011b0(bea_arg(local_1b0), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    FUN_004062d0(bea_arg(local_1b0), bea_arg(uVar4), bea_arg(0), bea_arg(0));
    FUN_004011b0(bea_arg(local_140), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    FUN_004062d0(bea_arg(local_140), bea_arg(uVar1), bea_arg(0), bea_arg(0));
    uVar4 = DAT_008a9e44;
    uVar1 = FUN_0040d120(bea_arg(local_120), bea_arg(local_150), bea_arg(local_190));
    uVar2 = FUN_0040d120(bea_arg(local_130), bea_arg(local_70), bea_arg(local_1a0));
    uVar3 = FUN_0040d120(bea_arg(local_140), bea_arg(local_50), bea_arg(local_1b0));
    FUN_00401f10(bea_arg(local_180), bea_arg(uVar3), bea_arg(uVar2), bea_arg(uVar1));
    uVar1 = FUN_0040d150(bea_arg(local_160), bea_arg(local_a0), bea_arg(uVar4));
    uVar2 = FUN_0040d150(bea_arg(local_170), bea_arg(local_b0), bea_arg(uVar4));
    uVar4 = FUN_0040d150(bea_arg(local_180), bea_arg(local_90), bea_arg(uVar4));
    FUN_00401f10(bea_arg(local_110), bea_arg(uVar4), bea_arg(uVar2), bea_arg(uVar1));
    uVar4 = FUN_00401ee0(bea_arg(local_190), bea_arg(local_40), bea_arg(local_f0));
    uVar1 = FUN_00401ee0(bea_arg(local_1a0), bea_arg(local_60), bea_arg(local_100));
    uVar2 = FUN_00401ee0(bea_arg(local_1b0), bea_arg(local_80), bea_arg(local_110));
    FUN_00401f10(bea_arg(local_e0), bea_arg(uVar2), bea_arg(uVar1), bea_arg(uVar4));
    pfVar7 = (float *)FUN_0040d320(bea_arg(param_3), bea_arg(&local_1e0), bea_arg(local_e0));
    pfVar6 = param_3;
    for (iVar9 = 0xc; BEA_LOOP_GUARD((iVar9 != 0)); iVar9 = iVar9 + -1) {
      *pfVar6 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar6 = pfVar6 + 1;
    }
    FUN_00406d50(bea_arg(param_3));
    pfVar7 = param_3 + 4;
    FUN_00406d50(bea_arg(pfVar7));
    pfVar6 = param_3 + 8;
    pfVar5 = (float *)FUN_00411a60(bea_arg(param_3), bea_arg(local_150), bea_arg(pfVar7));
    *pfVar6 = *pfVar5;
    param_3[9] = pfVar5[1];
    param_3[10] = pfVar5[2];
    param_3[0xb] = pfVar5[3];
    FUN_00406d50(bea_arg(pfVar6));
    pfVar6 = (float *)FUN_00411a60(bea_arg(pfVar6), bea_arg(local_150), bea_arg(param_3));
    *pfVar7 = *pfVar6;
    param_3[5] = pfVar6[1];
    param_3[6] = pfVar6[2];
    param_3[7] = pfVar6[3];
  }
  if (((param_1 == *(int *)(this_ + 0x38)) || (param_1 == *(int *)(this_ + 0x3c))) ||
     ((param_1 == *(int *)(this_ + 0x40) || (param_1 == *(int *)(this_ + 0x44))))) {
    uVar4 = *(undefined4 *)(*(int *)(this_ + 0x10) + 0x26c);
    uVar1 = *(undefined4 *)(*(int *)(this_ + 0x10) + 0x250);
    FUN_004011b0(bea_arg(local_1b0), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    FUN_004062d0(bea_arg(local_1b0), bea_arg(uVar4), bea_arg(0), bea_arg(0));
    FUN_004011b0(bea_arg(local_140), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    FUN_004062d0(bea_arg(local_140), bea_arg(uVar1), bea_arg(0), bea_arg(0));
    uVar4 = DAT_008a9e44;
    uVar1 = FUN_0040d120(bea_arg(local_120), bea_arg(local_150), bea_arg(local_190));
    uVar2 = FUN_0040d120(bea_arg(local_130), bea_arg(local_70), bea_arg(local_1a0));
    uVar3 = FUN_0040d120(bea_arg(local_140), bea_arg(local_50), bea_arg(local_1b0));
    FUN_00401f10(bea_arg(local_180), bea_arg(uVar3), bea_arg(uVar2), bea_arg(uVar1));
    uVar1 = FUN_0040d150(bea_arg(local_160), bea_arg(local_a0), bea_arg(uVar4));
    uVar2 = FUN_0040d150(bea_arg(local_170), bea_arg(local_b0), bea_arg(uVar4));
    uVar4 = FUN_0040d150(bea_arg(local_180), bea_arg(local_90), bea_arg(uVar4));
    FUN_00401f10(bea_arg(local_110), bea_arg(uVar4), bea_arg(uVar2), bea_arg(uVar1));
    uVar4 = FUN_00401ee0(bea_arg(local_190), bea_arg(local_40), bea_arg(local_f0));
    uVar1 = FUN_00401ee0(bea_arg(local_1a0), bea_arg(local_60), bea_arg(local_100));
    uVar2 = FUN_00401ee0(bea_arg(local_1b0), bea_arg(local_80), bea_arg(local_110));
    FUN_00401f10(bea_arg(local_e0), bea_arg(uVar2), bea_arg(uVar1), bea_arg(uVar4));
    pfVar7 = (float *)FUN_0040d320(bea_arg(param_3), bea_arg(&local_1e0), bea_arg(local_e0));
    pfVar6 = param_3;
    for (iVar9 = 0xc; BEA_LOOP_GUARD((iVar9 != 0)); iVar9 = iVar9 + -1) {
      *pfVar6 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar6 = pfVar6 + 1;
    }
    FUN_00425760(bea_arg(param_3));
  }
  if ((((param_1 == *(int *)(this_ + 0x48)) || (param_1 == *(int *)(this_ + 0x4c))) ||
      (param_1 == *(int *)(this_ + 0x50))) || (param_1 == *(int *)(this_ + 0x54))) {
    uVar4 = *(undefined4 *)(*(int *)(this_ + 0x10) + 0x254);
    FUN_0040d1f0(bea_arg(local_180), bea_arg(*(undefined4 *)(*(int *)(this_ + 0x10) + 0x270)), bea_arg(0), bea_arg(0));
    FUN_0040d1f0(bea_arg(local_e0), bea_arg(uVar4), bea_arg(0), bea_arg(0));
    puVar10 = local_110;
    uVar4 = DAT_008a9e44;
    pvVar8 = (void *)FUN_00495e00(bea_arg(local_e0), bea_arg(local_140), bea_arg(local_180));
    uVar4 = FUN_00495ed0(bea_arg(pvVar8), bea_arg(puVar10), bea_arg(uVar4));
    uVar4 = FUN_004956a0(bea_arg(local_180), bea_arg(local_1b0), bea_arg(uVar4));
    pfVar7 = (float *)FUN_0040d320(bea_arg(param_3), bea_arg(&local_1e0), bea_arg(uVar4));
    pfVar6 = param_3;
    for (iVar9 = 0xc; BEA_LOOP_GUARD((iVar9 != 0)); iVar9 = iVar9 + -1) {
      *pfVar6 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar6 = pfVar6 + 1;
    }
    FUN_00425760(bea_arg(param_3));
  }
  if (((param_1 == *(int *)(this_ + 0x58)) || (param_1 == *(int *)(this_ + 0x5c))) ||
     ((param_1 == *(int *)(this_ + 0x60) || (param_1 == *(int *)(this_ + 100))))) {
    uVar4 = *(undefined4 *)(*(int *)(this_ + 0x10) + 0x260);
    FUN_0040d1f0(bea_arg(local_180), bea_arg(*(undefined4 *)(*(int *)(this_ + 0x10) + 0x27c)), bea_arg(0), bea_arg(0));
    FUN_0040d1f0(bea_arg(local_e0), bea_arg(uVar4), bea_arg(0), bea_arg(0));
    puVar10 = local_110;
    uVar4 = DAT_008a9e44;
    pvVar8 = (void *)FUN_00495e00(bea_arg(local_e0), bea_arg(local_140), bea_arg(local_180));
    uVar4 = FUN_00495ed0(bea_arg(pvVar8), bea_arg(puVar10), bea_arg(uVar4));
    uVar4 = FUN_004956a0(bea_arg(local_180), bea_arg(local_1b0), bea_arg(uVar4));
    pfVar7 = (float *)FUN_0040d320(bea_arg(param_3), bea_arg(&local_1e0), bea_arg(uVar4));
    pfVar6 = param_3;
    for (iVar9 = 0xc; BEA_LOOP_GUARD((iVar9 != 0)); iVar9 = iVar9 + -1) {
      *pfVar6 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar6 = pfVar6 + 1;
    }
    FUN_00425760(bea_arg(param_3));
  }
  if (((param_1 == *(int *)(this_ + 0x68)) || (param_1 == *(int *)(this_ + 0x6c))) ||
     ((param_1 == *(int *)(this_ + 0x70) || (param_1 == *(int *)(this_ + 0x74))))) {
    uVar4 = *(undefined4 *)(*(int *)(this_ + 0x10) + 0x264);
    FUN_0040d1f0(bea_arg(local_180), bea_arg(*(undefined4 *)(*(int *)(this_ + 0x10) + 0x280)), bea_arg(0), bea_arg(0));
    FUN_0040d1f0(bea_arg(local_e0), bea_arg(uVar4), bea_arg(0), bea_arg(0));
    puVar10 = local_110;
    uVar4 = DAT_008a9e44;
    pvVar8 = (void *)FUN_00495e00(bea_arg(local_e0), bea_arg(local_140), bea_arg(local_180));
    uVar4 = FUN_00495ed0(bea_arg(pvVar8), bea_arg(puVar10), bea_arg(uVar4));
    uVar4 = FUN_004956a0(bea_arg(local_180), bea_arg(local_1b0), bea_arg(uVar4));
    pfVar7 = (float *)FUN_0040d320(bea_arg(param_3), bea_arg(&local_1e0), bea_arg(uVar4));
    pfVar6 = param_3;
    for (iVar9 = 0xc; BEA_LOOP_GUARD((iVar9 != 0)); iVar9 = iVar9 + -1) {
      *pfVar6 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar6 = pfVar6 + 1;
    }
    FUN_00425760(bea_arg(param_3));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004976d0, ap_004976d0));
