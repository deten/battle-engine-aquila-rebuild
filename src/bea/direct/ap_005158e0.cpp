// auto-ported from 005158e0_FUN_005158e0.c (FUN_005158e0, 15 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static uint32_t BEA_CDECL ap_005158e0(void)
{
  return bea_vcall<uint32_t>(DAT_00888a50, 0xa8, DAT_00888a50);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005158e0, ap_005158e0));
