// auto-ported from 004e8730_FUN_004e8730.c (FUN_004e8730, 508 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28 check_fild: piVar8[1], piVar8[2] are floats (fld [esi+4], fld [esi+8] at 0x4e8876/0x4e8879) -> bea_fcast<float> instead of (float)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_004e83b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e83b0_t> FUN_004e83b0 = {(FUN_004e83b0_t)0x004e83b0};
typedef undefined4 (BEA_THISCALL* FUN_004e84e0_t)(uint32_t);
static const bea_guard<FUN_004e84e0_t> FUN_004e84e0 = {(FUN_004e84e0_t)0x004e84e0};
typedef float10 (BEA_CDECL* FUN_0055eb3d_t)(double);
static const bea_guard<FUN_0055eb3d_t> FUN_0055eb3d = {(FUN_0055eb3d_t)0x0055eb3d};

static void BEA_THISCALL ap_004e8730(void * this_)
{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  float10 fVar11;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  uint &local_28 = *reinterpret_cast<uint *>(bea_frame_ + 0x30 - 0x28);
  undefined8 &local_20 = *reinterpret_cast<undefined8 *>(bea_frame_ + 0x30 - 0x20);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x14);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x8);
  FUN_004e83b0(bea_arg(this_), bea_arg(0));
  if (*(float *)((int)this_ + 0x104) != 0.0f) {
    iVar7 = 0;
    fVar11 = (float10)FUN_0055eb3d(SQRT((double)*(int *)((int)this_ + 0xb4)));
    local_20 = (longlong)ROUND(fVar11);
    local_28 = (uint)local_20;
    fVar1 = 0.0f;
    if ((int)(uint)local_20 < 1) {
      local_28 = 1;
    }
    uVar4 = local_28 & 0x80000001;
    bVar10 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar10 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar10) {
      fVar1 = *(float *)((int)this_ + 0x104);
    }
    piVar8 = *(int **)((int)this_ + 0xa4);
    if (piVar8 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *piVar8;
    }
    while (BEA_LOOP_GUARD((iVar9 != 0))) {
      iVar5 = iVar7 / (int)local_28;
      (*(uint32_t*)((char*)&local_20 + 4)) = (undefined4)((ulonglong)local_20 >> 0x20);
      local_20 = CONCAT44((*(uint32_t*)((char*)&local_20 + 4)),iVar5);
      uVar4 = iVar7 - iVar5 * local_28;
      uVar6 = uVar4 & 0x80000001;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
      }
      if (uVar6 == 1) {
        uVar4 = -uVar4 - 1;
      }
      iVar7 = iVar7 + 1;
      *(float *)(iVar9 + 4) = (float)(int)uVar4 * *(float *)((int)this_ + 0x104) + fVar1;
      *(float *)(iVar9 + 8) = (float)iVar5 * *(float *)((int)this_ + 0x104) * -2.0f;
      piVar8 = (int *)piVar8[1];
      if (piVar8 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar8;
      }
    }
    *(undefined4 *)((int)this_ + 0xbc) = 1;
  }
  iVar7 = FUN_004e84e0(bea_arg(this_));
  while (BEA_LOOP_GUARD((iVar7 == 0))) {
    iVar7 = FUN_004e84e0(bea_arg(this_));
  }
  puVar3 = *(undefined4 **)((int)this_ + 0xa4);
  if (puVar3 == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)*puVar3;
  }
  while (BEA_LOOP_GUARD((piVar8 != (int *)0x0))) {
    if (*piVar8 != 0) {
      iVar7 = piVar8[4];
      fVar1 = bea_fcast<float>(piVar8[1]);
      fVar2 = bea_fcast<float>(piVar8[2]);
      FUN_00401ec0(bea_arg(&local_10), bea_arg(fVar1 * *(float *)(iVar7 + 0x3c) + fVar2 * *(float *)(iVar7 + 0x40)), bea_arg(fVar2 * *(float *)(iVar7 + 0x50) + fVar1 * *(float *)(iVar7 + 0x4c)), bea_arg(fVar2 * *(float *)(iVar7 + 0x60) + fVar1 * *(float *)(iVar7 + 0x5c)));
      iVar7 = piVar8[4];
      FUN_00401ec0(bea_arg(&local_20), bea_arg(local_10 + *(float *)(iVar7 + 0x1c)), bea_arg(local_c + *(float *)(iVar7 + 0x20)), bea_arg(local_8 + *(float *)(iVar7 + 0x24)));
      bea_vcall<uint32_t>(*piVar8, 0xf4, (uint)local_20,(*(uint32_t*)((char*)&local_20 + 4)),local_18,local_14,0);
    }
    puVar3 = (undefined4 *)puVar3[1];
    if (puVar3 == (undefined4 *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)*puVar3;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e8730, ap_004e8730));
