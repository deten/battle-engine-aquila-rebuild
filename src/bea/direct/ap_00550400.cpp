// auto-ported from 00550400_FUN_00550400.c (FUN_00550400, 43 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_00550400(void * this_, undefined4 param_1)
{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this_;
  iVar2 = *(int *)((int)this_ + 4);
  while(BEA_LOOP_GUARD(( true ))) {
    if (iVar2 == 0) {
      return 0;
    }
    if (*(short *)(iVar1 + 0x3c) == -1) break;
    iVar1 = iVar1 + 0x50;
    iVar2 = iVar2 + -1;
  }
  *(undefined2 *)(iVar1 + 0x3c) = (undefined2)param_1;
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00550400, ap_00550400));
