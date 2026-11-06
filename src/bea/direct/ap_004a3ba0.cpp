// auto-ported from 004a3ba0_FUN_004a3ba0.c (FUN_004a3ba0, 11 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0070486c GLOBAL_AT(int, 0x0070486c)

static void BEA_CDECL ap_004a3ba0(void)
{
  DAT_0070486c = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a3ba0, ap_004a3ba0));
