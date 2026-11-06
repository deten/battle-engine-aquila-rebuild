// auto-ported from 0044b2d0_FUN_0044b2d0.c (FUN_0044b2d0, 51 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
// @autoport-repair: 1 float/pointer cast(s) made bit copies (compiler-located, tools/repair_fcasts.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

static uint32_t BEA_THISCALL ap_0044b2d0(void * this_, float *param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  param_1 = (float *)(uintptr_t)bea_piece32((*(float *)((int)this_ + 8) + *param_1));
  return FUN_0044b370(bea_arg(this_), bea_arg(param_2), bea_arg(param_3), bea_arg(&param_1), bea_arg(param_4), bea_arg(param_5), bea_arg(param_6));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044b2d0, ap_0044b2d0));
