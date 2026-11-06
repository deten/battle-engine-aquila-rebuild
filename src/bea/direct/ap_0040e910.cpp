// auto-ported from 0040e910_vslot80.c (CBattleEngine::vslot80, 42 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBattleEngine;
typedef int (BEA_THISCALL* FUN_00401fd0_t)(uint32_t);
static const bea_guard<FUN_00401fd0_t> FUN_00401fd0 = {(FUN_00401fd0_t)0x00401fd0};

static float10 BEA_THISCALL ap_0040e910(CBattleEngine * this_)
{
  int iVar1;
  
  iVar1 = bea_vcall<uint32_t>(this_, 0x10c);
  if (iVar1 != 0) {
    iVar1 = FUN_00401fd0(bea_arg(this_));
    if (iVar1 == 0) {
      return (float10)5.0f;
    }
  }
  return (float10)0.0f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040e910, ap_0040e910));
