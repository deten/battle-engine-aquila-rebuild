// auto-ported from 004a1d60_FUN_004a1d60.c (FUN_004a1d60, 305 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004a1d60(void * this_, int param_1)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((*(uint *)(param_1 + 4) & 0xfffffff0) < 0x100) && (*(int *)((int)this_ + 0x8b8) != 0)) {
    piVar1 = (int *)((int)this_ + (*(uint *)(param_1 + 4) >> 4) * 4 + 0xc);
    *(int *)(param_1 + 0xc) = *piVar1;
    *piVar1 = param_1;
    return;
  }
  if (*(int *)((int)this_ + 0x874) != 0) {
    iVar2 = 0;
    for (iVar4 = *(int *)((int)this_ + 0x4c); BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = *(int *)(iVar4 + 0xc)) {
      if ((*(uint *)(iVar4 + 4) & 0xfffffff0) + 0x10 + iVar4 == param_1) {
        if (iVar2 == 0) {
          *(undefined4 *)((int)this_ + 0x4c) = *(undefined4 *)(iVar4 + 0xc);
        }
        else {
          *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
        }
        *(uint *)(iVar4 + 4) =
             (*(uint *)(iVar4 + 4) & 0xfffffff0) + (*(uint *)(param_1 + 4) & 0xfffffff0) + 0x10;
        *(int *)((int)this_ + 0x66c) = *(int *)((int)this_ + 0x66c) + -1;
        param_1 = iVar4;
        break;
      }
      iVar2 = iVar4;
    }
    if (*(int *)((int)this_ + 0x4c) != 0) {
      iVar2 = *(int *)((int)this_ + 0x4c);
      iVar4 = 0;
      do {
        iVar3 = iVar2;
        if ((*(uint *)(param_1 + 4) & 0xfffffff0) + 0x10 + param_1 == iVar3) {
          if (iVar4 == 0) {
            *(undefined4 *)((int)this_ + 0x4c) = *(undefined4 *)(iVar3 + 0xc);
          }
          else {
            *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
          }
          *(uint *)(param_1 + 4) =
               (*(uint *)(iVar3 + 4) & 0xfffffff0) + 0x10 + (*(uint *)(param_1 + 4) & 0xfffffff0);
          *(int *)((int)this_ + 0x66c) = *(int *)((int)this_ + 0x66c) + -1;
          break;
        }
        iVar2 = *(int *)(iVar3 + 0xc);
        iVar4 = iVar3;
      } while (BEA_LOOP_GUARD((*(int *)(iVar3 + 0xc) != 0)));
    }
    if (*(int *)((int)this_ + 0x4c) != 0) {
      iVar2 = *(int *)((int)this_ + 0x4c);
      iVar4 = 0;
      do {
        iVar3 = iVar2;
        if ((*(uint *)(param_1 + 4) & 0xfffffff0) <= (*(uint *)(iVar3 + 4) & 0xfffffff0)) break;
        iVar2 = *(int *)(iVar3 + 0xc);
        iVar4 = iVar3;
      } while (BEA_LOOP_GUARD((*(int *)(iVar3 + 0xc) != 0)));
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
        *(int *)(iVar4 + 0xc) = param_1;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this_ + 0x4c);
  *(int *)((int)this_ + 0x4c) = param_1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a1d60, ap_004a1d60));
