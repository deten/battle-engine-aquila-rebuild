// auto-ported from 0047b570_vslot8.c (CGroundAttackAI::vslot8, 348 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGroundAttackAI;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_0047bfa0_t)(uint32_t);
static const bea_guard<FUN_0047bfa0_t> FUN_0047bfa0 = {(FUN_0047bfa0_t)0x0047bfa0};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef uint (BEA_THISCALL* FUN_004fb5a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb5a0_t> FUN_004fb5a0 = {(FUN_004fb5a0_t)0x004fb5a0};

static uint32_t BEA_THISCALL ap_0047b570(CGroundAttackAI * this_, undefined4 param_1)
{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  CGroundAttackAI *pCStack_4;
  iVar3 = *(int *)(this_ + 0x24);
  pCStack_4 = this_;
  if (iVar3 == 0) {
LAB_0047b60e:
    bea_vcall<uint32_t>(this_, 0x18);
  }
  else {
    fVar1 = *(float *)(iVar3 + 0x1c) - *(float *)(*(int *)(this_ + 8) + 0x1c);
    fVar2 = *(float *)(iVar3 + 0x20) - *(float *)(*(int *)(this_ + 8) + 0x20);
    if ((SQRT(fVar1 * fVar1 + fVar2 * fVar2) < 4.0f) && (*(int *)(iVar3 + 0x3c) != iVar3)) {
      FUN_00401000(bea_arg(this_ + 0x24), bea_arg(*(int *)(iVar3 + 0x3c)));
    }
    iVar3 = *(int *)(this_ + 0x24);
    if (iVar3 == 0) {
      bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x100);
      bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x148);
      bea_vcall<uint32_t>(this_, 0x18);
      goto LAB_0047b686;
    }
    bea_vcall<uint32_t>(*(int **)(this_ + 8), 0xf4, *(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x20),
               *(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x28),0);
    bea_vcall<uint32_t>(this_, 0x10);
    if (*(int *)(this_ + 0xc) != 0) {
      iVar3 = FUN_004fb5a0(bea_arg(*(void **)(this_ + 8)), bea_arg(*(int *)(this_ + 0xc)));
      if (iVar3 != 0) goto LAB_0047b60e;
    }
    uVar4 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar4 = uVar4 & 0x8000ffff;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffff0000) + 1;
    }
    pCStack_4 = (CGroundAttackAI *)(uintptr_t)bea_piece32(((float)(int)uVar4 * 1.5258789e-06f + 0.1f + DAT_00672fd0));
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xbb9), bea_arg(this_), bea_arg(&pCStack_4), bea_arg(0), bea_arg(0), bea_arg(param_1));
  }
LAB_0047b686:
  *(undefined4 *)(this_ + 0x60) = 1;
  uVar4 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar4 = uVar4 & 0x8000ffff;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffff0000) + 1;
  }
  *(float *)(this_ + 100) = (float)(int)uVar4 * 3.8146973e-05f + 15.0f;
  return FUN_0047bfa0(bea_arg(*(void **)(this_ + 8)));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_0047b570.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
