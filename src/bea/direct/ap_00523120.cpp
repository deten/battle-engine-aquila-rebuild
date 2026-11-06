// auto-ported from 00523120_FUN_00523120.c (FUN_00523120, 86 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0063fd70 GLOBAL_AT(undefined4, 0x0063fd70)

static undefined4 BEA_CDECL ap_00523120(int param_1, int param_2)
{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_0063fd70 != -1) {
    puVar2 = &DAT_0063fd70;
    iVar1 = DAT_0063fd70;
    do {
      if (iVar1 == param_1) {
        if (param_2 == 1) {
          return *(undefined4 *)(iVar3 * 0x10 + 0x63fd78);
        }
        if (param_2 != 2) {
          return *(undefined4 *)(iVar3 * 0x10 + 0x63fd74);
        }
        return *(undefined4 *)(iVar3 * 0x10 + 0x63fd7c);
      }
      iVar1 = puVar2[4];
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((iVar1 != -1)));
  }
  return 0xffffffff;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00523120, ap_00523120));
