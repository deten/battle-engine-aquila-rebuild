// auto-ported from 00415b90_vslot8.c (CBoatAI::vslot8, 230 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBoatAI;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
// @autoport-arity: call arity differs from the asm (0 pushes: asm 4 call(s), port 3)

static uint32_t BEA_THISCALL ap_00415b90(CBoatAI * this_, undefined4 param_1)
{
  CBoatAI *this_00;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CBoatAI *pCStack_4;
  this_00 = this_ + 0x24;
  pCStack_4 = this_;
  if (*(int *)(this_ + 0x24) != 0) {
    iVar5 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x130);
    if (iVar5 != 0) {
      iVar5 = *(int *)this_00;
      bea_vcall<uint32_t>(*(int **)(this_ + 8), 0xf4, *(undefined4 *)(iVar5 + 0x1c),*(undefined4 *)(iVar5 + 0x20),
                 *(undefined4 *)(iVar5 + 0x24),*(undefined4 *)(iVar5 + 0x28),0);
      iVar5 = *(int *)(this_ + 8);
      iVar1 = *(int *)this_00;
      fVar2 = *(float *)(iVar1 + 0x1c) - *(float *)(iVar5 + 0x1c);
      fVar3 = *(float *)(iVar1 + 0x20) - *(float *)(iVar5 + 0x20);
      fVar4 = *(float *)(iVar1 + 0x24) - *(float *)(iVar5 + 0x24);
      if (fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 < 16.0f) {
        FUN_00401000(bea_arg(this_00), bea_arg(*(undefined4 *)(iVar1 + 0x3c)));
      }
      bea_vcall<uint32_t>(this_, 0xc);
    }
    pCStack_4 = (CBoatAI *)(uintptr_t)bea_piece32((DAT_00672fd0 + 1.0f));
    return FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xbb9), bea_arg(this_), bea_arg(&pCStack_4), bea_arg(0), bea_arg(0), bea_arg(param_1));
  }
  return bea_vcall<uint32_t>(this_, 0x18);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00415b90, ap_00415b90));
