// auto-ported from 0040c380_vslot117.c (CBattleEngine::vslot117, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBattleEngine;
typedef int (BEA_THISCALL* FUN_00412610_t)(uint32_t);
static const bea_guard<FUN_00412610_t> FUN_00412610 = {(FUN_00412610_t)0x00412610};
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};

static void BEA_THISCALL ap_0040c380(CBattleEngine * this_)
{
  if (*(int *)(this_ + 0x260) != 3) {
    FUN_00414030(bea_arg(*(void **)(this_ + 0x578)));
    return;
  }
  FUN_00412610(bea_arg(*(void **)(this_ + 0x57c)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040c380, ap_0040c380));
