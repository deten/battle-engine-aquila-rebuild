// auto-ported from 004cf580_vslot16.c (CVSync::vslot16, 13 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089c07c GLOBAL_AT(int, 0x0089c07c)

static int BEA_CDECL ap_004cf580(void)
{
  return 2 - (uint)(DAT_0089c07c != 0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf580, ap_004cf580));
