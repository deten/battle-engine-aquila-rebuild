// auto-ported from 00477ba0_FUN_00477ba0.c (FUN_00477ba0, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00477ba0(void * this_)
{
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00477ba0, ap_00477ba0));
