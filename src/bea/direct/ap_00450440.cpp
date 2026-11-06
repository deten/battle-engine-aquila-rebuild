// auto-ported from 00450440_FUN_00450440.c (FUN_00450440, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_006776f8 GLOBAL_AT(undefined4, 0x006776f8)
#define DAT_009c6994 GLOBAL_AT(undefined4, 0x009c6994)
#define DAT_009c73ea GLOBAL_AT(char, 0x009c73ea)

static void BEA_CDECL ap_00450440(void)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_006776f8;
  puVar3 = &DAT_009c6994;
  for (iVar1 = 0x10; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  DAT_009c73ea = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00450440, ap_00450440));
