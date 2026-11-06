// auto-ported from 004d05c0_FUN_004d05c0.c (FUN_004d05c0, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_004d05c0(void * this_)
{
  if ((*(int *)((int)this_ + 8) != 0) && (*(char *)(*(int *)((int)this_ + 8) + 8) != '\0')) {
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d05c0, ap_004d05c0));
