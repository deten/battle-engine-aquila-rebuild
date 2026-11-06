// auto-ported from 004124d0_FUN_004124d0.c (FUN_004124d0, 72 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_004124d0(void * this_)
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
        return *(undefined4 *)(*(int *)(iVar2 + 0xa4) + 4);
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

// @autoport-registration (verified: 711 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004124d0, ap_004124d0));
