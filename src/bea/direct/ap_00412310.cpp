// auto-ported from 00412310_FUN_00412310.c (FUN_00412310, 82 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_00412310(void * this_)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)this_;
  iVar3 = 0;
  *(int **)((int)this_ + 8) = piVar1;
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar2 != 0) {
    do {
      if (iVar3 == *(int *)((int)this_ + 0x10)) {
        if (iVar2 == 0) {
          return 0;
        }
        return *(undefined4 *)
                (*(int *)((int)this_ + 0x18) + 0x544 + *(int *)(*(int *)(iVar2 + 0xa4) + 0x24) * 4);
      }
      iVar3 = iVar3 + 1;
      piVar1 = *(int **)(*(int *)((int)this_ + 8) + 4);
      *(int **)((int)this_ + 8) = piVar1;
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
    } while (BEA_LOOP_GUARD((iVar2 != 0)));
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00412310, ap_00412310));
