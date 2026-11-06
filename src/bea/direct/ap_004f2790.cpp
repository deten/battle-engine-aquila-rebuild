// auto-ported from 004f2790_FUN_004f2790.c (FUN_004f2790, 65 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0083d9b0 GLOBAL_AT(int, 0x0083d9b0)

static void BEA_THISCALL ap_004f2790(void * this_)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  for (iVar2 = DAT_0083d9b0; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = *(int *)(iVar2 + 0xa0)) {
    if (this_ == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)this_ + -8;
    }
    iVar3 = DAT_0083d9b0;
    if ((iVar2 == iVar4) && (iVar3 = *(int *)(iVar2 + 0xa0), iVar1 != 0)) {
      *(int *)(iVar1 + 0xa0) = *(int *)(iVar2 + 0xa0);
      iVar3 = DAT_0083d9b0;
    }
    DAT_0083d9b0 = iVar3;
    iVar1 = iVar2;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f2790, ap_004f2790));
