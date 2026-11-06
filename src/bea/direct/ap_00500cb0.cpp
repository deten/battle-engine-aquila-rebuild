// auto-ported from 00500cb0_FUN_00500cb0.c (FUN_00500cb0, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_00500cb0(void * this_)
{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this_ + 0x1c) / *(int *)((int)this_ + 0x54);
  iVar1 = *(int *)((int)this_ + 0x50);
  if (iVar1 == 1) {
    return iVar2;
  }
  if (iVar1 == 2) {
    return iVar2 / 2;
  }
  if (iVar1 == 3) {
    return iVar2 + -1;
  }
  if (iVar1 == 4) {
    return iVar2 / 3;
  }
  if (iVar1 == 5) {
    return iVar2 + -1;
  }
  if (iVar1 == 6) {
    return iVar2 + -2;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500cb0, ap_00500cb0));
