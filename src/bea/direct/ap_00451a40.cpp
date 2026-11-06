// auto-ported from 00451a40_FUN_00451a40.c (FUN_00451a40, 60 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)

static int * BEA_THISCALL ap_00451a40(void * this_)
{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = *(undefined4 **)((int)this_ + 0x20);
  *(undefined4 **)((int)this_ + 0x28) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*puVar1;
  }
  while(BEA_LOOP_GUARD(( true ))) {
    if (piVar2 == (int *)0x0) {
      return (int *)((int *)0x0);
    }
    if (DAT_0089d94c == *piVar2) break;
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x28) + 4);
    *(undefined4 **)((int)this_ + 0x28) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
  }
  return (int *)(piVar2);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00451a40, ap_00451a40));
