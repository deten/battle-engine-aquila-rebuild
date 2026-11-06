// auto-ported from 00513370_FUN_00513370.c (FUN_00513370, 291 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_00513370(void * this_, int param_1, undefined4 param_2)
{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if ((param_1 < *(int *)((int)this_ + 0x33448)) &&
     (*(char *)(param_1 + 0x33474 + (int)this_) != '\0')) {
    iVar4 = *(int *)((int)this_ + param_1 * 4 + 0x333e4);
    if ((iVar4 != 0) && (iVar2 = *(int *)((int)this_ + param_1 * 4 + 0x333f4), iVar2 != 0)) {
      if ((char)param_2 != '\0') {
        *(int *)((int)this_ + param_1 * 4 + 0x333e4) = iVar2;
        *(int *)((int)this_ + param_1 * 4 + 0x333f4) = iVar4;
      }
      puVar5 = *(undefined4 **)((int)this_ + param_1 * 4 + 0x333e4);
      for (iVar4 = 0x44; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      piVar3 = *(int **)((int)this_ + param_1 * 4 + 0x33408);
      if (piVar3 != (int *)0x0) {
        iVar4 = bea_vcall<uint32_t>(piVar3, 0x64, piVar3);
        piVar3 = *(int **)((int)this_ + param_1 * 4 + 0x33408);
        if (iVar4 < 0) {
          iVar4 = bea_vcall<uint32_t>(piVar3, 0x1c, piVar3);
          if (iVar4 == -0x7ff8ffe2) {
            do {
              piVar3 = *(int **)((int)this_ + param_1 * 4 + 0x33408);
              iVar4 = bea_vcall<uint32_t>(piVar3, 0x1c, piVar3);
            } while (BEA_LOOP_GUARD((iVar4 == -0x7ff8ffe2)));
            return 0;
          }
        }
        else {
          iVar4 = bea_vcall<uint32_t>(piVar3, 0x24, piVar3,0x110,*(undefined4 *)((int)this_ + param_1 * 4 + 0x333e4));
          if (iVar4 < 0) {
            return iVar4;
          }
          if (*(char *)(param_1 + 0x33444 + (int)this_) != '\0') {
            iVar4 = *(int *)((int)this_ + param_1 * 4 + 0x333e4);
            uVar1 = *(undefined1 *)(iVar4 + 0x30);
            *(undefined1 *)(iVar4 + 0x30) = *(undefined1 *)(iVar4 + 0x31);
            *(undefined1 *)(iVar4 + 0x31) = *(undefined1 *)(iVar4 + 0x32);
            *(undefined1 *)(iVar4 + 0x32) = *(undefined1 *)(iVar4 + 0x33);
            *(undefined1 *)(iVar4 + 0x33) = uVar1;
            return 0;
          }
        }
      }
    }
  }
  else {
    puVar5 = *(undefined4 **)((int)this_ + param_1 * 4 + 0x333f4);
    for (iVar4 = 0x44; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = *(undefined4 **)((int)this_ + param_1 * 4 + 0x333e4);
    for (iVar4 = 0x44; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513370, ap_00513370));
