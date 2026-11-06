// auto-ported from 005230e0_FUN_005230e0.c (FUN_005230e0, 60 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)

static int * BEA_THISCALL ap_005230e0(void * this_)
{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = *(undefined4 **)((int)this_ + 0x28);
  *(undefined4 **)((int)this_ + 0x30) = puVar1;
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
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x30) + 4);
    *(undefined4 **)((int)this_ + 0x30) = puVar1;
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
BEA_HOOKS(BEA_HOOK(0x005230e0, ap_005230e0));
