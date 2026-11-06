// auto-ported from 0046f2d0_FUN_0046f2d0.c (FUN_0046f2d0, 20 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004705e0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004705e0_t> FUN_004705e0 = {(FUN_004705e0_t)0x004705e0};

static uint32_t BEA_THISCALL ap_0046f2d0(void * this_, undefined4 param_1, undefined4 param_2)
{
  return FUN_004705e0(bea_arg(this_), bea_arg(param_1), bea_arg(param_2), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046f2d0, ap_0046f2d0));
