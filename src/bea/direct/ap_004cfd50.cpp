// auto-ported from 004cfd50_vslot16.c (CnVidia::vslot16, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0082b4a4 GLOBAL_AT(int, 0x0082b4a4)
#define DAT_00888b20 GLOBAL_AT(int, 0x00888b20)

static undefined4 BEA_CDECL ap_004cfd50(void)
{
  undefined4 uVar1;
  
  if ((DAT_0082b4a4 == 0) || (uVar1 = 2, DAT_00888b20 < 0xffff0200)) {
    uVar1 = 1;
  }
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cfd50, ap_004cfd50));
