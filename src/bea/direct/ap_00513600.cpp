// auto-ported from 00513600_FUN_00513600.c (FUN_00513600, 64 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00855540 GLOBAL_AT(undefined4, 0x00855540)
#define DAT_008557f0 GLOBAL_AT(undefined4, 0x008557f0)
#define DAT_008554d0 GLOBAL_AT(undefined4, 0x008554d0)
#define DAT_00889070 GLOBAL_AT(int, 0x00889070)
#define DAT_0088906c GLOBAL_AT(int, 0x0088906c)
#define DAT_00889068 GLOBAL_AT(int, 0x00889068)

static void BEA_CDECL ap_00513600(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00855540;
  for (iVar1 = 0xac; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0xfedcba98;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_008557f0;
  for (iVar1 = 0xf0; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0xfedcba98;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_008554d0;
  for (iVar1 = 8; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0xfedcba98;
    puVar2 = puVar2 + 1;
  }
  DAT_00889070 = 0xfedcba98;
  DAT_0088906c = 0;
  DAT_00889068 = 0xfedcba98;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513600, ap_00513600));
