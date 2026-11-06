// auto-ported from 00528d70_FUN_00528d70.c (FUN_00528d70, 19 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00528d70(void * this_)
{
  bea_vcall<uint32_t>(this_, 0x0);
  return ReleaseMutex(*(HANDLE *)((int)this_ + 8));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00528d70, ap_00528d70));
