// auto-ported from 004589f0_FUN_004589f0.c (FUN_004589f0, 19 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00458710_t)(uint32_t);
static const bea_guard<FUN_00458710_t> FUN_00458710 = {(FUN_00458710_t)0x00458710};
typedef uint32_t (BEA_THISCALL* FUN_00458ce0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00458ce0_t> FUN_00458ce0 = {(FUN_00458ce0_t)0x00458ce0};

static uint32_t BEA_THISCALL ap_004589f0(void * this_)
{
  FUN_00458ce0(bea_arg(this_), bea_arg(0));
  return FUN_00458710(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004589f0, ap_004589f0));
