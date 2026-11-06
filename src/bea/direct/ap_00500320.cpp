// auto-ported from 00500320_FUN_00500320.c (FUN_00500320, 49 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define _DAT_009c73d4 GLOBAL_AT(int, 0x009c73d4)
#define DAT_009c741c GLOBAL_AT(char, 0x009c741c)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static uint32_t BEA_THISCALL ap_00500320(void * this_, undefined4 param_1)
{
  _DAT_009c73d4 = *(undefined4 *)((int)this_ + 0x18);
  DAT_009c741c = 1;
  return bea_vcall<uint32_t>(DAT_00888a50, 0x190, DAT_00888a50,param_1,*(undefined4 *)((int)this_ + 8),0,*(undefined4 *)((int)this_ + 0x1c));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500320, ap_00500320));
