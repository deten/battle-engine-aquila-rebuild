// auto-ported from 00492c90_FUN_00492c90.c (FUN_00492c90, 4 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_00492c90(void * this_)
{
  return (int)this_ + -0xc;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00492c90, ap_00492c90));
