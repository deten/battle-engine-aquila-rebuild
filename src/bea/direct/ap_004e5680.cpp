// auto-ported from 004e5680_vslot23.c (CSphereTrigger::vslot23, 11 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSphereTrigger;
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};

static uint32_t BEA_THISCALL ap_004e5680(CSphereTrigger * this_)
{
  return FUN_004cb0b0(bea_arg(this_ + 0x7c), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e5680, ap_004e5680));
