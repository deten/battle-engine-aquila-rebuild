// auto-ported from 004cf690_vslot15.c (CLandscapeRes::vslot15, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008aa96c GLOBAL_AT(int, 0x008aa96c)
#define DAT_008aa95c GLOBAL_AT(int, 0x008aa95c)

static int BEA_CDECL ap_004cf690(void)
{
  int iVar1;
  
  iVar1 = DAT_008aa96c;
  if (DAT_008aa95c <= DAT_008aa96c) {
    if (DAT_008aa95c == 1) {
      return 0;
    }
    if (DAT_008aa95c == 3) {
      return 1;
    }
    iVar1 = (DAT_008aa95c != 4) + 2;
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf690, ap_004cf690));
