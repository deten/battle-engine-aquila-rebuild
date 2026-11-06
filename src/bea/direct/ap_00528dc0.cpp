// auto-ported from 00528dc0_FUN_00528dc0.c (FUN_00528dc0, 11 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00528dc0(void * this_)
{
  return ReleaseMutex(*(HANDLE *)((int)this_ + 8));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00528dc0, ap_00528dc0));
