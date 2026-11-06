// auto-ported from 00528d50_FUN_00528d50.c (FUN_00528d50, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00528d50(void * this_)
{
  *(undefined1 *)((int)this_ + 0x15) = 1;
  ReleaseMutex(*(HANDLE *)((int)this_ + 8));
  return SetEvent(*(HANDLE *)((int)this_ + 0xc));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00528d50, ap_00528d50));
