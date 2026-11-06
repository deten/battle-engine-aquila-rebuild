// auto-ported from 00544fb0_FUN_00544fb0.c (FUN_00544fb0, 8 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00545070_t)(uint32_t);
static const bea_guard<FUN_00545070_t> FUN_00545070 = {(FUN_00545070_t)0x00545070};

static uint32_t BEA_THISCALL ap_00544fb0(void * this_, undefined4 param_1, undefined4 param_2)
{
  return FUN_00545070(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00544fb0, ap_00544fb0));
