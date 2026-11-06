// auto-ported from 0048ddd0_FUN_0048ddd0.c (FUN_0048ddd0, 19 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00547ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00547ec0_t> FUN_00547ec0 = {(FUN_00547ec0_t)0x00547ec0};

static uint32_t BEA_THISCALL ap_0048ddd0(void * this_, undefined4 param_1)
{
  return FUN_00547ec0(bea_arg(this_), bea_arg(param_1), bea_arg(0x11), bea_arg(1), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048ddd0, ap_0048ddd0));
