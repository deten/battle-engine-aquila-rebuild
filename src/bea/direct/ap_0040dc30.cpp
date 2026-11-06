// auto-ported from 0040dc30_vslot102.c (CBattleEngine::vslot102, 37 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBattleEngine;
typedef uint32_t (BEA_THISCALL* FUN_004127a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004127a0_t> FUN_004127a0 = {(FUN_004127a0_t)0x004127a0};
typedef uint32_t (BEA_THISCALL* FUN_00414970_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00414970_t> FUN_00414970 = {(FUN_00414970_t)0x00414970};

static uint32_t BEA_THISCALL ap_0040dc30(CBattleEngine * this_, undefined4 param_1)
{
  FUN_00414970(bea_arg(*(void **)(this_ + 0x578)), bea_arg(param_1));
  return FUN_004127a0(bea_arg(*(void **)(this_ + 0x57c)), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040dc30, ap_0040dc30));
