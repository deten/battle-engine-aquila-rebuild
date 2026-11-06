// auto-ported from 00413760_FUN_00413760.c (FUN_00413760, 772 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char Vec3;
typedef char fStack_2c;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_006236bc GLOBAL_AT(int, 0x006236bc)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef int (BEA_THISCALL* FUN_00401fd0_t)(uint32_t);
static const bea_guard<FUN_00401fd0_t> FUN_00401fd0 = {(FUN_00401fd0_t)0x00401fd0};
typedef undefined4 (BEA_THISCALL* FUN_00408120_t)(uint32_t);
static const bea_guard<FUN_00408120_t> FUN_00408120 = {(FUN_00408120_t)0x00408120};
typedef float10 (BEA_THISCALL* FUN_0040d1a0_t)(uint32_t);
static const bea_guard<FUN_0040d1a0_t> FUN_0040d1a0 = {(FUN_0040d1a0_t)0x0040d1a0};
typedef uint32_t (BEA_THISCALL* FUN_00412ad0_t)(uint32_t);
static const bea_guard<FUN_00412ad0_t> FUN_00412ad0 = {(FUN_00412ad0_t)0x00412ad0};
typedef undefined4 (BEA_THISCALL* FUN_00413a70_t)(uint32_t);
static const bea_guard<FUN_00413a70_t> FUN_00413a70 = {(FUN_00413a70_t)0x00413a70};
typedef uint32_t (BEA_THISCALL* FUN_00413b90_t)(uint32_t);
static const bea_guard<FUN_00413b90_t> FUN_00413b90 = {(FUN_00413b90_t)0x00413b90};
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};
typedef float * (BEA_FASTCALL* FUN_0047ec60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ec60_t> FUN_0047ec60 = {(FUN_0047ec60_t)0x0047ec60};
typedef uint32_t (BEA_THISCALL* FUN_005078f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005078f0_t> FUN_005078f0 = {(FUN_005078f0_t)0x005078f0};

static void BEA_THISCALL ap_00413760(void * this_)
{
  int *piVar1;
  byte *pbVar2;
  float fVar3;
  undefined4 *puVar4;
  float fVar5;
  int iVar6;
  void *this_00;
  float *pfVar7;
  float10 fVar8;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x2c);
  undefined4 &uStack_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x28);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x18);
  undefined1 (&auStack_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x30 - 0x10);
  *(undefined4 *)(*(int *)((int)this_ + 0x20) + 0x630) = 2;
  iVar6 = FUN_00414030(bea_arg(this_));
  if (iVar6 == 0) {
    *(undefined4 *)((int)this_ + 0x10) = 0;
  }
  iVar6 = *(int *)(*(int *)((int)this_ + 0x20) + 0x574);
  if (iVar6 != 0) {
    piVar1 = (int *)(iVar6 + 0x44);
    *piVar1 = *piVar1 + 1;
  }
  puVar4 = *(undefined4 **)this_;
  *(undefined4 **)((int)this_ + 8) = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*puVar4;
  }
  while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
    FUN_005078f0(bea_arg(this_00), bea_arg(0));
    puVar4 = *(undefined4 **)(*(int *)((int)this_ + 8) + 4);
    *(undefined4 **)((int)this_ + 8) = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*puVar4;
    }
  }
  iVar6 = *(int *)((int)this_ + 0x20);
  if (((DAT_00672fd0 - *(float *)(iVar6 + 0xcc) < 0.3f) && (*(int *)(iVar6 + 0x160) == 0)) &&
     (*(int *)(iVar6 + 0x4ac) == 0)) {
    fVar3 = *(float *)(*(int *)(iVar6 + 0x4b0) + 0x28);
    if (*(int *)((int)this_ + 0x14) == 0) {
      fVar3 = fVar3 * 0.5f;
    }
    *(float *)(iVar6 + 0xfc) = fVar3 + *(float *)(iVar6 + 0xfc);
    iVar6 = *(int *)((int)this_ + 0x20);
    if (*(float *)(*(int *)(iVar6 + 0x4b0) + 0x20) < *(float *)(iVar6 + 0xfc)) {
      *(undefined4 *)(iVar6 + 0xfc) = *(undefined4 *)(*(int *)(iVar6 + 0x4b0) + 0x20);
    }
  }
  *(undefined4 *)((int)this_ + 0x14) = 1;
  *(undefined4 *)(*(int *)((int)this_ + 0x20) + 0x100) =
       *(undefined4 *)(*(int *)((int)this_ + 0x20) + 0xfc);
  iVar6 = FUN_00413a70(bea_arg(this_));
  if (iVar6 == 0) {
    iVar6 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x10c);
    if (((iVar6 != 0) || ((*(byte *)(*(int *)((int)this_ + 0x20) + 0x2c) & 0x80) != 0)) &&
       (iVar6 = FUN_00401fd0(bea_arg(*(void **)((int)this_ + 0x20))), iVar6 == 0)) {
      iVar6 = *(int *)((int)this_ + 0x20);
      FUN_00401ec0(bea_arg(&fStack_20), bea_arg(*(float *)(iVar6 + 0x7c) + *(float *)(iVar6 + 0x1c)), bea_arg(*(float *)(iVar6 + 0x80) + *(float *)(iVar6 + 0x20)), bea_arg(*(float *)(iVar6 + 0x84) + *(float *)(iVar6 + 0x24)));
      FUN_0047ec60(bea_arg(&DAT_006fadc8), bea_arg(&local_30), bea_arg(&fStack_20));
      fVar8 = bea_fcast<float10>(FUN_0040d1a0(bea_arg(&local_30)));
      if (bea_fcast<float10>(0.69813174f) < fVar8 + bea_fcast<float10>(1.5707964f)) {
        pbVar2 = (byte *)(*(int *)((int)this_ + 0x20) + 0x2c);
        *pbVar2 = *pbVar2 | 0x80;
        FUN_00413b90(bea_arg(this_));
        goto LAB_00413924;
      }
    }
    pbVar2 = (byte *)(*(int *)((int)this_ + 0x20) + 0x2c);
    *pbVar2 = *pbVar2 & 0x7f;
  }
  else {
    iVar6 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x6c, &local_30);
    fStack_18 = *(float *)(iVar6 + 8);
    fStack_20 = 0.0f;
    fStack_1c = 0.0f;
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x70, &fStack_20);
  }
LAB_00413924:
  iVar6 = FUN_00413a70(bea_arg(this_));
  if ((iVar6 == 0) &&
     ((iVar6 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x10c), iVar6 != 0 ||
      (*(int *)((int)this_ + 0x44) != 0)))) {
    fVar3 = *(float *)((*(int **)((int)this_ + 0x20))[300] + 0x30);
    pfVar7 = (float *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x6c, auStack_10);
    fStack_18 = fVar3 * pfVar7[2];
    fStack_1c = fVar3 * pfVar7[1];
    fStack_20 = fVar3 * *pfVar7;
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x70, &fStack_20);
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x6c, &local_30);
    uStack_28 = 0;
    fVar5 = SQRT(local_30 * local_30 + fStack_2c * fStack_2c);
    fVar3 = *(float *)((*(int **)((int)this_ + 0x20))[300] + 0x34);
    if ((fVar3 < fVar5) && (*(int *)((int)this_ + 0x44) < DAT_006236bc)) {
      fVar3 = fVar3 / fVar5;
      uStack_28 = 0;
      fStack_18 = 0.0f;
      local_30 = fVar3 * local_30;
      fStack_2c = fVar3 * fStack_2c;
      fStack_20 = local_30;
      fStack_1c = fStack_2c;
      iVar6 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x6c, auStack_10);
      fStack_18 = *(float *)(iVar6 + 8);
      bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x70, &fStack_20);
    }
  }
  if (0 < *(int *)((int)this_ + 0x44)) {
    *(int *)((int)this_ + 0x44) = *(int *)((int)this_ + 0x44) + -1;
  }
  iVar6 = FUN_00408120(bea_arg(*(void **)((int)this_ + 0x20)));
  if (iVar6 != 0) {
    FUN_00412ad0(bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00413760, ap_00413760));
