// auto-ported from 00492f10_vslot11.c (CMCBattleEngine::vslot11, 19 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMCBattleEngine;
typedef float10 (BEA_THISCALL* FUN_004063a0_t)(uint32_t);
static const bea_guard<FUN_004063a0_t> FUN_004063a0 = {(FUN_004063a0_t)0x004063a0};

// Hand-fixed 2026-10-27: the original tail-jumps to its callee, so it returns
// that function's x87 result (Ghidra printed it void; same bug as 0x4963a0).
static float10 BEA_THISCALL ap_00492f10(CMCBattleEngine * this_)
{
  void *this_00;
  
  if (*(int *)(this_ + 8) == 0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)(*(int *)(this_ + 8) + -8);
  }
  return FUN_004063a0(bea_arg(this_00));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00492f10, ap_00492f10));
