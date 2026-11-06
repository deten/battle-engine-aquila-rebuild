// auto-ported from 00457f20_vslot12.c (CFEPDemoMain::vslot12, 55 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};

static uint32_t BEA_STDCALL ap_00457f20(int param_1)
{
  if (param_1 == 0) {
    return FUN_0046a2a0(0,0);
  }
  if (param_1 != 1) {
    return FUN_0046a2a0(8,0);
  }
  return FUN_0046a2a0(6,0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00457f20, ap_00457f20));
