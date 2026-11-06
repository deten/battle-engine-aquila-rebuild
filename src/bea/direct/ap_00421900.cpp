// auto-ported from 00421900_FUN_00421900.c (FUN_00421900, 15 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_00421900(void * this_)
{
  return (*(uint *)((int)this_ + 0x23f8) >> 0x18) - 0x80;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00421900, ap_00421900));
