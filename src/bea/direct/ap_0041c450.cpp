// auto-ported from 0041c450_FUN_0041c450.c (FUN_0041c450, 26 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_0041c450(void * this_)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this_ + 0x1f44);
  iVar3 = 300;
  do {
    if (1 < *piVar2) {
      iVar1 = iVar1 + 1;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (BEA_LOOP_GUARD((iVar3 != 0)));
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041c450, ap_0041c450));
