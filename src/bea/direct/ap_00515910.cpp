// auto-ported from 00515910_FUN_00515910.c (FUN_00515910, 35 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static uint32_t BEA_STDCALL ap_00515910(undefined4 param_1)
{
  return bea_vcall<uint32_t>(DAT_00888a50, 0xac, DAT_00888a50,0,0,3,param_1,0x3f800000,0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00515910, ap_00515910));
