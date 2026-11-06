// auto-ported from 0051f6d0_vslot4.c (CFEPOptions::vslot4, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_004679e0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004679e0_t> FUN_004679e0 = {(FUN_004679e0_t)0x004679e0};

static uint32_t BEA_STDCALL ap_0051f6d0(undefined4 param_1, int param_2)
{
  if ((param_2 == 0x12) || (param_2 == 0x13)) {
    param_1 = 0x3f800000;
  }
  return FUN_004679e0(bea_arg(param_1), bea_arg(0x3fffffff), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051f6d0, ap_0051f6d0));
