// auto-ported from 0051ae50_vslot4.c (CFEPDevSelect::vslot4, 28 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_004679e0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004679e0_t> FUN_004679e0 = {(FUN_004679e0_t)0x004679e0};

static uint32_t BEA_STDCALL ap_0051ae50(undefined4 param_1, undefined4 param_2)
{
  return FUN_004679e0(bea_arg(param_1), bea_arg(0x3fffffff), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051ae50, ap_0051ae50));
