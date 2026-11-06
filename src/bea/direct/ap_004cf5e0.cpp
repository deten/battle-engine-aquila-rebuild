// auto-ported from 004cf5e0_vslot16.c (CLandscapeRes::vslot16, 42 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008aa96c GLOBAL_AT(int, 0x008aa96c)

static undefined4 BEA_CDECL ap_004cf5e0(void)
{
  switch(DAT_008aa96c) {
  case 1:
  case 2:
    return 1;
  case 3:
    return 2;
  case 4:
    return 3;
  default:
    return 4;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf5e0, ap_004cf5e0));
