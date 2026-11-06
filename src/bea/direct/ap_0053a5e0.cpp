// auto-ported from 0053a5e0_FUN_0053a5e0.c (FUN_0053a5e0, 841 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
// @autoport-repair: 2 float/pointer cast(s) made bit copies (compiler-located, tools/repair_fcasts.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0089c840 GLOBAL_AT(int, 0x0089c840)
#define DAT_0089c844 GLOBAL_AT(int, 0x0089c844)
#define DAT_0089c838 GLOBAL_AT(int, 0x0089c838)
#define DAT_0089c83c GLOBAL_AT(int, 0x0089c83c)
#define _DAT_0089c830 GLOBAL_AT(float, 0x0089c830)
#define _DAT_0089c834 GLOBAL_AT(float, 0x0089c834)
#define _DAT_0089c850 GLOBAL_AT(float, 0x0089c850)
#define _DAT_0089c854 GLOBAL_AT(float, 0x0089c854)
#define DAT_0067a748 GLOBAL_AT(int, 0x0067a748)
#define s_C__dev_ONSLAUGHT2_DXBattleLine_c_00650324 ((char*)0x00650324)
typedef void * (BEA_THISCALL* FUN_0047ef20_t)(uint32_t);
static const bea_guard<FUN_0047ef20_t> FUN_0047ef20 = {(FUN_0047ef20_t)0x0047ef20};
typedef void * (BEA_THISCALL* FUN_00488210_t)(uint32_t);
static const bea_guard<FUN_00488210_t> FUN_00488210 = {(FUN_00488210_t)0x00488210};
typedef int (BEA_THISCALL* FUN_00488380_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00488380_t> FUN_00488380 = {(FUN_00488380_t)0x00488380};
typedef int (BEA_THISCALL* FUN_004883f0_t)(uint32_t);
static const bea_guard<FUN_004883f0_t> FUN_004883f0 = {(FUN_004883f0_t)0x004883f0};
typedef undefined4 (BEA_THISCALL* FUN_00488580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00488580_t> FUN_00488580 = {(FUN_00488580_t)0x00488580};
typedef void * (BEA_THISCALL* FUN_004f7170_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f7170_t> FUN_004f7170 = {(FUN_004f7170_t)0x004f7170};
typedef uint32_t (BEA_THISCALL* FUN_004f7460_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f7460_t> FUN_004f7460 = {(FUN_004f7460_t)0x004f7460};
typedef uint32_t (BEA_THISCALL* FUN_004f7940_t)(uint32_t);
static const bea_guard<FUN_004f7940_t> FUN_004f7940 = {(FUN_004f7940_t)0x004f7940};
typedef void * (BEA_THISCALL* FUN_004fff00_t)(uint32_t);
static const bea_guard<FUN_004fff00_t> FUN_004fff00 = {(FUN_004fff00_t)0x004fff00};
typedef bool (BEA_THISCALL* FUN_00500080_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500080_t> FUN_00500080 = {(FUN_00500080_t)0x00500080};
typedef uint32_t (BEA_THISCALL* FUN_0053a390_t)(uint32_t);
static const bea_guard<FUN_0053a390_t> FUN_0053a390 = {(FUN_0053a390_t)0x0053a390};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_0053a5e0(void * this_)
{
  undefined2 *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  undefined2 * &local_30 = *reinterpret_cast<undefined2 * *>(bea_frame_ + 0x30 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x28);
  void * &local_24 = *reinterpret_cast<void * *>(bea_frame_ + 0x30 - 0x24);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x1c);
  void * &local_18 = *reinterpret_cast<void * *>(bea_frame_ + 0x30 - 0x18);
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x14);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x30 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x4);
  piVar8 = (int *)FUN_0047ef20(bea_arg(&DAT_006fadc8));
  FUN_0053a390(bea_arg(this_));
  fVar3 = ((float)piVar8[3] + (float)piVar8[1]) * 0.5f;
  fVar5 = ((float)piVar8[2] + (float)*piVar8) * 0.5f;
  fVar4 = ((float)piVar8[3] - (float)piVar8[1]) * 0.5f;
  fVar6 = ((float)piVar8[2] - (float)*piVar8) * 0.5f;
  if (fVar6 < fVar4) {
    fVar6 = fVar4;
  }
  fVar6 = fVar6 * 1.21f;
  local_2c = fVar5 - fVar6;
  local_24 = (void *)(uintptr_t)bea_piece32((fVar6 + fVar5));
  local_28 = fVar3 - fVar6;
  local_1c = (fVar6 + fVar3) - local_28;
  local_18 = (void *)(uintptr_t)bea_piece32((__builtin_bit_cast(float, (uint32_t)(uintptr_t)(local_24)) - local_2c));
  local_24 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x18), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_DXBattleLine_c_00650324), bea_arg(0x145));
  if (local_24 == (void *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_004f7170(bea_arg(local_24), bea_arg(0x400), bea_arg(DAT_0089c840), bea_arg(DAT_0089c844), bea_arg(DAT_0089c838), bea_arg(DAT_0089c83c), bea_arg(1));
  }
  *(undefined4 *)this_ = uVar9;
  *(float *)((int)this_ + 0x48) = _DAT_0089c830 / __builtin_bit_cast(float, (uint32_t)(uintptr_t)(local_18));
  *(float *)((int)this_ + 0x4c) = _DAT_0089c834 / local_1c;
  *(float *)((int)this_ + 0x50) = _DAT_0089c850 - local_2c * *(float *)((int)this_ + 0x48);
  *(float *)((int)this_ + 0x54) = _DAT_0089c854 - local_28 * *(float *)((int)this_ + 0x48);
  if (DAT_0067a748 != 0) {
    piVar8 = (int *)(DAT_0067a748 + 0x10);
    piVar2 = *(int **)(DAT_0067a748 + 8);
    *piVar8 = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *piVar2;
    }
    while (BEA_LOOP_GUARD((iVar13 != 0))) {
      local_14 = *(float *)(iVar13 + 0x8c) * *(float *)((int)this_ + 0x48) +
                 *(float *)((int)this_ + 0x50);
      local_10 = *(float *)(iVar13 + 0x90) * *(float *)((int)this_ + 0x4c) +
                 *(float *)((int)this_ + 0x54);
      FUN_004f7460(bea_arg(*(void **)this_), bea_arg(&local_14));
      piVar2 = *(int **)(*piVar8 + 4);
      *piVar8 = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *piVar2;
      }
    }
  }
  FUN_004f7940(bea_arg(*(void **)this_));
  *(undefined4 *)((int)this_ + 0x1c) = *(undefined4 *)(*(int *)this_ + 0xc);
  *(undefined4 *)((int)this_ + 0x20) = *(undefined4 *)(*(int *)this_ + 8);
  if (*(int *)((int)this_ + 0x70) == 0) {
    local_18 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c), bea_arg(0x2c), bea_arg(s_C__dev_ONSLAUGHT2_DXBattleLine_c_00650324), bea_arg(0x161));
    if (local_18 == (void *)0x0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = (void *)FUN_004fff00(bea_arg(local_18));
    }
    *(void **)((int)this_ + 0x70) = pvVar10;
    FUN_00500080(bea_arg(pvVar10), bea_arg(*(undefined4 *)((int)this_ + 0x20)), bea_arg(0x20), bea_arg(0x204));
  }
  iVar13 = *(int *)((int)this_ + 0x20);
  puVar11 = (undefined4 *)
            FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar13 * 8), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_DXBattleLine_c_00650324), bea_arg(0x165));
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    local_18 = (void *)(iVar13 + -1);
  }
  iVar13 = *(int *)((int)this_ + 0x20);
  *(undefined4 **)((int)this_ + 0x18) = puVar11;
  puVar7 = (undefined4 *)**(undefined4 **)this_;
  for (; BEA_LOOP_GUARD((iVar13 != 0)); iVar13 = iVar13 + -1) {
    *puVar11 = *puVar7;
    puVar11[1] = puVar7[1];
    puVar11 = puVar11 + 2;
    puVar7 = puVar7 + 2;
  }
  local_18 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x24), bea_arg(0x2f), bea_arg(s_C__dev_ONSLAUGHT2_DXBattleLine_c_00650324), bea_arg(0x170));
  if (local_18 == (void *)0x0) {
    pvVar10 = (void *)0x0;
  }
  else {
    pvVar10 = (void *)FUN_00488210(bea_arg(local_18));
  }
  *(void **)((int)this_ + 0x74) = pvVar10;
  FUN_00488380(bea_arg(pvVar10), bea_arg(*(int *)((int)this_ + 0x1c) * 3));
  FUN_00488580(bea_arg(*(void **)((int)this_ + 0x74)), bea_arg(&local_30));
  puVar12 = *(undefined2 **)(*(int *)this_ + 4);
  for (iVar13 = *(int *)((int)this_ + 0x1c); BEA_LOOP_GUARD((iVar13 != 0)); iVar13 = iVar13 + -1) {
    *local_30 = *puVar12;
    local_30[1] = puVar12[2];
    puVar1 = puVar12 + 1;
    puVar12 = puVar12 + 3;
    local_30[2] = *puVar1;
    local_30 = local_30 + 3;
  }
  return FUN_004883f0(bea_arg(*(void **)((int)this_ + 0x74)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053a5e0, ap_0053a5e0));
