// auto-ported from 004ef000_FUN_004ef000.c (FUN_004ef000, 77 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_004ef000(void * this_)
{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this_ + 0x250);
  if ((iVar3 == 2) || (iVar3 == 3)) {
    *(undefined4 *)((int)this_ + 0x250) = 1;
    puVar1 = *(undefined4 **)((int)this_ + 0x19c);
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
    while (BEA_LOOP_GUARD((iVar3 = 0, piVar2 != (int *)0x0))) {
      if ((int *)*piVar2 != (int *)0x0) {
        bea_vcall<uint32_t>(*piVar2, 0x5c);
      }
      puVar1 = (undefined4 *)puVar1[1];
      if (puVar1 == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)*puVar1;
      }
    }
  }
  return iVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ef000, ap_004ef000));
