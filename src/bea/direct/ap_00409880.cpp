// auto-ported from 00409880_FUN_00409880.c (FUN_00409880, 35 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_00409880(void * this_)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  piVar2 = (int *)(*(int *)((int)this_ + 0xa4) + 0xc);
  do {
    if (*piVar2 != -1) {
      iVar1 = iVar3;
    }
    iVar3 = iVar3 + 100;
    piVar2 = piVar2 + 1;
  } while (BEA_LOOP_GUARD((iVar3 < 500)));
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00409880, ap_00409880));
