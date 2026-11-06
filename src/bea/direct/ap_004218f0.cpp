// auto-ported from 004218f0_FUN_004218f0.c (FUN_004218f0, 15 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_004218f0(void * this_)
{
  return (*(uint *)((int)this_ + 0x23f4) >> 0x18) - 0x80;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004218f0, ap_004218f0));
