// auto-ported from 004a1c30_FUN_004a1c30.c (FUN_004a1c30, 10 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_004a1c30(void * this_)
{
  return ReleaseMutex(*(HANDLE *)this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a1c30, ap_004a1c30));
