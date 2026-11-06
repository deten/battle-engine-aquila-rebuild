// auto-ported from 00456650_FUN_00456650.c (FUN_00456650, 55 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008892d8 GLOBAL_AT(char, 0x008892d8)
#define DAT_008892dc GLOBAL_AT(int, 0x008892dc)

static uint BEA_CDECL ap_00456650(int param_1)
{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_008892d8;
  iVar1 = DAT_008892dc;
  while(BEA_LOOP_GUARD(( true ))) {
    if (iVar1 == -1) {
      return CONCAT31((int3)((uint)pcVar2 >> 8),1);
    }
    if ((*pcVar2 != '\0') && (*(int *)(pcVar2 + param_1 * 0xc + 8) == -1)) break;
    iVar1 = *(int *)(pcVar2 + 0x24);
    pcVar2 = pcVar2 + 0x20;
  }
  return (uint)pcVar2 & 0xffffff00;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00456650, ap_00456650));
