// auto-ported from 0042db10_FUN_0042db10.c (FUN_0042db10, 38 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008892d8 GLOBAL_AT(undefined1, 0x008892d8)
#define DAT_008892dc GLOBAL_AT(int, 0x008892dc)

static undefined1 * BEA_CDECL ap_0042db10(int param_1)
{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = &DAT_008892d8;
  iVar1 = DAT_008892dc;
  while(BEA_LOOP_GUARD(( true ))) {
    if (iVar1 == -1) {
      return (undefined1 *)0x0;
    }
    if (iVar1 == param_1) break;
    iVar1 = *(int *)(puVar2 + 0x24);
    puVar2 = puVar2 + 0x20;
  }
  return puVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042db10, ap_0042db10));
