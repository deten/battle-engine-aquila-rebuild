// auto-ported from 00422aa0_vslot8.c (CCarverAI::vslot8, 234 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCarverAI;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_004227a0_t)(uint32_t);
static const bea_guard<FUN_004227a0_t> FUN_004227a0 = {(FUN_004227a0_t)0x004227a0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

static uint32_t BEA_THISCALL ap_00422aa0(CCarverAI * this_, undefined4 param_1)
{
  CCarverAI *this_00;
  float fVar1;
  float fVar2;
  int iVar3;
  CCarverAI *pCStack_4;
  this_00 = this_ + 0x24;
  pCStack_4 = this_;
  if (*(int *)(this_ + 0x24) != 0) {
    iVar3 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x130);
    if (iVar3 != 0) {
      iVar3 = *(int *)this_00;
      bea_vcall<uint32_t>(*(int **)(this_ + 8), 0xf4, *(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x20),
                 *(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x28),0);
      iVar3 = *(int *)this_00;
      fVar1 = *(float *)(iVar3 + 0x1c) - *(float *)(*(int *)(this_ + 8) + 0x1c);
      fVar2 = *(float *)(iVar3 + 0x20) - *(float *)(*(int *)(this_ + 8) + 0x20);
      if (SQRT(fVar1 * fVar1 + fVar2 * fVar2) < 4.0f) {
        FUN_00401000(bea_arg(this_00), bea_arg(*(undefined4 *)(iVar3 + 0x3c)));
      }
      bea_vcall<uint32_t>(this_, 0xc);
    }
    pCStack_4 = (CCarverAI *)(uintptr_t)bea_piece32((DAT_00672fd0 + 1.0f));
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xbb9), bea_arg(this_), bea_arg(&pCStack_4), bea_arg(0), bea_arg(0), bea_arg(param_1));
    return FUN_004227a0(bea_arg(*(void **)(this_ + 8)));
  }
  bea_vcall<uint32_t>(this_, 0x18);
  return FUN_004227a0(bea_arg(*(void **)(this_ + 8)));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_00422aa0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
