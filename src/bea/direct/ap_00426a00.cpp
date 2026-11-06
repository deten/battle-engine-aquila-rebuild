// auto-ported from 00426a00_vslot5.c (CCSPersistentThing::vslot5, 21 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCSPersistentThing;
typedef uint32_t (BEA_THISCALL* FUN_00481060_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00481060_t> FUN_00481060 = {(FUN_00481060_t)0x00481060};

static uint32_t BEA_THISCALL ap_00426a00(CCSPersistentThing * this_, undefined4 param_1, undefined4 param_2)
{
  return FUN_00481060(bea_arg(this_ + 0x24), bea_arg(param_1), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00426a00, ap_00426a00));
