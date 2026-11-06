// auto-ported from 0044a6b0_FUN_0044a6b0.c (FUN_0044a6b0, 36 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_005473b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005473b0_t> FUN_005473b0 = {(FUN_005473b0_t)0x005473b0};

static uint32_t BEA_THISCALL ap_0044a6b0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  return FUN_005473b0(bea_arg(*(void **)((int)this_ + 0x10)), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4), bea_arg(param_5));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044a6b0, ap_0044a6b0));
