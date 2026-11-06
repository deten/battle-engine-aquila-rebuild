// auto-ported from 004457d0_vslot8.c (CDiveBomberAI::vslot8, 295 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
// @hand-fixed 2026-10-28 compile: label LAB_0044586e placed before the tail vcall 0x18 whose EAX is returned (0x44586e-0x445879); distance test kept as fcomp/test ah,1 (taken when below or unordered, 0x445806)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDiveBomberAI;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef uint (BEA_THISCALL* FUN_004fb5a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb5a0_t> FUN_004fb5a0 = {(FUN_004fb5a0_t)0x004fb5a0};

static uint32_t BEA_THISCALL ap_004457d0(CDiveBomberAI * this_, undefined4 param_1)
{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  CDiveBomberAI * &pCStack_4 = *reinterpret_cast<CDiveBomberAI * *>(bea_frame_ + 0x10 - 0x4);
  iVar3 = *(int *)(this_ + 0x24);
  pCStack_4 = this_;
  if (iVar3 != 0) {
    fVar1 = *(float *)(iVar3 + 0x1c) - *(float *)(*(int *)(this_ + 8) + 0x1c);
    fVar2 = *(float *)(iVar3 + 0x20) - *(float *)(*(int *)(this_ + 8) + 0x20);
    if ((!(SQRT(fVar2 * fVar2 + fVar1 * fVar1) >= 4.0f)) && (*(int *)(iVar3 + 0x3c) != iVar3)) {
      FUN_00401000(bea_arg(this_ + 0x24), bea_arg(*(int *)(iVar3 + 0x3c)));
    }
    iVar3 = *(int *)(this_ + 0x24);
    if (iVar3 == 0) {
      bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x100);
      bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x148);
      return bea_vcall<uint32_t>(this_, 0x18);
    }
    bea_vcall<uint32_t>(*(int **)(this_ + 8), 0xf4, *(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x20),
               *(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x28),0);
    bea_vcall<uint32_t>(this_, 0x10);
    if (*(int *)(this_ + 0xc) != 0) {
      iVar3 = FUN_004fb5a0(bea_arg(*(void **)(this_ + 8)), bea_arg(*(int *)(this_ + 0xc)));
      if (iVar3 != 0) goto LAB_0044586e;
    }
    uVar4 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar4 = uVar4 & 0x8000ffff;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffff0000) + 1;
    }
    pCStack_4 = (CDiveBomberAI *)(uintptr_t)bea_piece32(((float)(int)uVar4 * 1.5258789e-06f + 0.1f + DAT_00672fd0));
    return FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xbb9), bea_arg(this_), bea_arg(&pCStack_4), bea_arg(0), bea_arg(0), bea_arg(param_1));
  }
LAB_0044586e:
  return bea_vcall<uint32_t>(this_, 0x18);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004457d0, ap_004457d0));
