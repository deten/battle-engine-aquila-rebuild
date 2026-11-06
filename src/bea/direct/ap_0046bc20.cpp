// auto-ported from 0046bc20_FUN_0046bc20.c (FUN_0046bc20, 15 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_0046bc20(void * this_)
{
  if (*(int **)((int)this_ + 0x58) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x58), 0x8, 0);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046bc20, ap_0046bc20));
