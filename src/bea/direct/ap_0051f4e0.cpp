// auto-ported from 0051f4e0_vslot3.c (CFEPOptions::vslot3, 26 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089bc30 GLOBAL_AT(undefined4*, 0x0089bc30)

static uint32_t BEA_STDCALL ap_0051f4e0(undefined4 param_1, undefined4 param_2)
{
  return bea_vcall<uint32_t>(DAT_0089bc30, 0xc, 0,param_1,param_2);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051f4e0, ap_0051f4e0));
