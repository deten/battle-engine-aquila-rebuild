// auto-ported from 00421430_FUN_00421430.c (FUN_00421430, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008892d8 GLOBAL_AT(char, 0x008892d8)
#define DAT_008892dc GLOBAL_AT(int, 0x008892dc)

static int BEA_CDECL ap_00421430(void)
{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0x24be;
  pcVar2 = &DAT_008892d8;
  if (DAT_008892dc != -1) {
    do {
      if (*pcVar2 != '\0') {
        iVar3 = iVar3 + 0x20;
      }
      piVar1 = (int *)(pcVar2 + 0x24);
      pcVar2 = pcVar2 + 0x20;
    } while (BEA_LOOP_GUARD((*piVar1 != -1)));
    return iVar3 + 0x56;
  }
  return 0x2514;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00421430, ap_00421430));
