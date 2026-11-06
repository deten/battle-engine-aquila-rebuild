// auto-ported from 004cf530_vslot15.c (CVSync::vslot15, 20 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089c07c GLOBAL_AT(int, 0x0089c07c)
#define DAT_0066306c GLOBAL_AT(int, 0x0066306c)

static uint BEA_CDECL ap_004cf530(void)
{
  return ~-(uint)(DAT_0089c07c != 0) & DAT_0066306c;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf530, ap_004cf530));
