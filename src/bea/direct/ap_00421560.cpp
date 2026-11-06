// auto-ported from 00421560_FUN_00421560.c (FUN_00421560, 16 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00662b24 GLOBAL_AT(int, 0x00662b24)

static undefined4 BEA_CDECL ap_00421560(void)
{
  undefined4 uVar1;
  
  uVar1 = DAT_00662b24;
  DAT_00662b24 = 0;
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00421560, ap_00421560));
