// auto-ported from 0040dc60_vslot103.c (CBattleEngine::vslot103, 37 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBattleEngine;
typedef uint32_t (BEA_THISCALL* FUN_00412830_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00412830_t> FUN_00412830 = {(FUN_00412830_t)0x00412830};
typedef uint32_t (BEA_THISCALL* FUN_00414a40_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00414a40_t> FUN_00414a40 = {(FUN_00414a40_t)0x00414a40};

static uint32_t BEA_THISCALL ap_0040dc60(CBattleEngine * this_, undefined4 param_1)
{
  FUN_00414a40(bea_arg(*(void **)(this_ + 0x578)), bea_arg(param_1));
  return FUN_00412830(bea_arg(*(void **)(this_ + 0x57c)), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040dc60, ap_0040dc60));
