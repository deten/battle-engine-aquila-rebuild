// auto-ported from 0048ff90_FUN_0048ff90.c (FUN_0048ff90, 15 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_0048ff90(void * this_)
{
  *(undefined4 *)((int)this_ + 8) = 1;
  *(undefined4 *)((int)this_ + 0xc) = 0x3dcccccd;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048ff90, ap_0048ff90));
