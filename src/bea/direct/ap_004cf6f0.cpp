// auto-ported from 004cf6f0_vslot15.c (CTrilinear::vslot15, 14 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0082b474 GLOBAL_AT(int, 0x0082b474)

static uint32_t BEA_CDECL ap_004cf6f0(void)
{
  return DAT_0082b474 == 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf6f0, ap_004cf6f0));
