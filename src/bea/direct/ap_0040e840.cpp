// auto-ported from 0040e840_FUN_0040e840.c (FUN_0040e840, 30 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_0040e840(void * this_)
{
  int iVar1;
  
  iVar1 = *(int *)((int)this_ + 0x528);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 300) = (uint)(*(int *)(iVar1 + 300) == 0);
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040e840, ap_0040e840));
