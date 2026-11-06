// auto-ported from 00500360_FUN_00500360.c (FUN_00500360, 34 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static uint32_t BEA_THISCALL ap_00500360(void * this_, undefined4 param_1)
{
  return bea_vcall<uint32_t>(DAT_00888a50, 0x190, DAT_00888a50,param_1,*(undefined4 *)((int)this_ + 8),0,*(undefined4 *)((int)this_ + 0x1c));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500360, ap_00500360));
