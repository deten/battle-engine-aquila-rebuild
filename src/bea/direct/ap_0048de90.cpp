// auto-ported from 0048de90_FUN_0048de90.c (FUN_0048de90, 13 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0067a7d0 GLOBAL_AT(int, 0x0067a7d0)

static void * BEA_THISCALL ap_0048de90(void * this_)
{
  DAT_0067a7d0 = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048de90, ap_0048de90));
