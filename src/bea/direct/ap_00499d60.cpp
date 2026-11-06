// auto-ported from 00499d60_FUN_00499d60.c (FUN_00499d60, 198 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00499d60(void * this_, float *param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this_ + 0xa8)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)((int)this_ + 0x14);
      if (iVar1 != 0) {
        *(float *)(iVar2 + iVar1) = *(float *)(iVar2 + iVar1) + *param_1;
        *(float *)(iVar2 + 4 + iVar1) = param_1[1] + *(float *)(iVar2 + 4 + iVar1);
        *(float *)(iVar2 + 8 + iVar1) = param_1[2] + *(float *)(iVar2 + 8 + iVar1);
      }
      iVar1 = *(int *)((int)this_ + 0x24);
      if (iVar1 != 0) {
        *(float *)(iVar2 + iVar1) = *(float *)(iVar2 + iVar1) + *param_1;
        *(float *)(iVar2 + 4 + iVar1) = param_1[1] + *(float *)(iVar2 + 4 + iVar1);
        *(float *)(iVar2 + 8 + iVar1) = param_1[2] + *(float *)(iVar2 + 8 + iVar1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)this_ + 0xa8))));
  }
  if ((*(int *)((int)this_ + 0xe8) != 0) &&
     (iVar3 = 0, 0 < *(int *)(*(int *)((int)this_ + 0xe8) + 0x15c))) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)((int)this_ + 0x34);
      if (iVar1 != 0) {
        *(float *)(iVar2 + iVar1) = *(float *)(iVar2 + iVar1) + *param_1;
        *(float *)(iVar2 + 4 + iVar1) = param_1[1] + *(float *)(iVar2 + 4 + iVar1);
        *(float *)(iVar2 + 8 + iVar1) = param_1[2] + *(float *)(iVar2 + 8 + iVar1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (BEA_LOOP_GUARD((iVar3 < *(int *)(*(int *)((int)this_ + 0xe8) + 0x15c))));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00499d60, ap_00499d60));
