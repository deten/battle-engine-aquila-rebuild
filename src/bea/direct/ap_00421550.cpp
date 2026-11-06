// auto-ported from 00421550_FUN_00421550.c (FUN_00421550, 16 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00662b20 GLOBAL_AT(int, 0x00662b20)

static undefined4 BEA_CDECL ap_00421550(void)
{
  undefined4 uVar1;
  
  uVar1 = DAT_00662b20;
  DAT_00662b20 = 0;
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00421550, ap_00421550));
