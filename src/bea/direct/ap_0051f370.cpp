// auto-ported from 0051f370_FUN_0051f370.c (FUN_0051f370, 5 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_0051f370(void * this_)
{
  return (int)*(char *)((int)this_ + 5);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051f370, ap_0051f370));
