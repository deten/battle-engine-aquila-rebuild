// auto-ported from 005482c0_FUN_005482c0.c (FUN_005482c0, 12 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_005482c0(void * this_)
{
  return GetFileSize(*(HANDLE *)this_,(LPDWORD)0x0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005482c0, ap_005482c0));
