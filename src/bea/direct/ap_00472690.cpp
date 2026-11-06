// auto-ported from 00472690_FUN_00472690.c (FUN_00472690, 26 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_00472690(void * this_)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this_ + 0x9c);
  iVar3 = 10;
  do {
    if (*piVar2 != 0) {
      iVar1 = iVar1 + 1;
    }
    piVar2 = piVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (BEA_LOOP_GUARD((iVar3 != 0)));
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00472690, ap_00472690));
