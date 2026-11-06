// auto-ported from 004d4f00_FUN_004d4f00.c (FUN_004d4f00, 452 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0082b69c GLOBAL_AT(int, 0x0082b69c)

static undefined4 BEA_THISCALL ap_004d4f00(void * this_)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  
  if (*(int *)((int)this_ + 0x60) != 0) {
LAB_004d4f0f:
    while(BEA_LOOP_GUARD(( true ))) {
      while (BEA_LOOP_GUARD((iVar3 = *(int *)((int)this_ + 0x94), iVar3 != 0))) {
        if (((int)*(short *)(iVar3 + 6) != *(int *)((int)this_ + 0x9c)) &&
           ((*(uint *)((int)this_ + 0x8c) & *(uint *)(iVar3 + 8)) != 0)) {
          *(undefined2 *)(*(int *)((int)this_ + 0x94) + 6) = *(undefined2 *)((int)this_ + 0x9c);
          uVar2 = *(undefined4 *)((int)this_ + 0x94);
          DAT_0082b69c = DAT_0082b69c + 1;
          if (DAT_0082b69c < (*(int **)((int)this_ + 0x90))[2]) {
            sVar4 = *(short *)(**(int **)((int)this_ + 0x90) + DAT_0082b69c * 2);
          }
          else {
            sVar4 = -1;
          }
          if (sVar4 == -1) {
            *(undefined4 *)((int)this_ + 0x94) = 0;
            return uVar2;
          }
          *(int *)((int)this_ + 0x94) = *(int *)((int)this_ + 100) + sVar4 * 0xc;
          return uVar2;
        }
        DAT_0082b69c = DAT_0082b69c + 1;
        if (DAT_0082b69c < (*(int **)((int)this_ + 0x90))[2]) {
          sVar4 = *(short *)(**(int **)((int)this_ + 0x90) + DAT_0082b69c * 2);
        }
        else {
          sVar4 = -1;
        }
        iVar3 = (int)sVar4;
        if (iVar3 != -1) goto LAB_004d4f6b;
        *(undefined4 *)((int)this_ + 0x94) = 0;
      }
      if (*(int *)((int)this_ + 0xa8) <= *(int *)((int)this_ + 0xb0)) break;
      iVar3 = *(int *)((int)this_ + 0xb0) + 1;
      *(int *)((int)this_ + 0xb0) = iVar3;
      puVar1 = *(undefined4 **)
                (*(int *)((int)this_ + 0x60) +
                (*(int *)((int)this_ + 0xb4) * *(int *)((int)this_ + 0x68) + iVar3) * 4);
      *(undefined4 **)((int)this_ + 0x90) = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        if ((int)puVar1[2] < 1) {
          sVar4 = -1;
        }
        else {
          DAT_0082b69c = 0;
          sVar4 = *(short *)*puVar1;
        }
        if (sVar4 == -1) {
          *(undefined4 *)((int)this_ + 0x94) = 0;
        }
        else {
          *(int *)((int)this_ + 0x94) = *(int *)((int)this_ + 100) + sVar4 * 0xc;
        }
      }
    }
    if (*(int *)((int)this_ + 0xb4) < *(int *)((int)this_ + 0xac)) goto code_r0x004d5003;
  }
  return 0;
code_r0x004d5003:
  iVar3 = *(int *)((int)this_ + 0xb4) + 1;
  *(int *)((int)this_ + 0xb4) = iVar3;
  *(int *)((int)this_ + 0xb0) = *(int *)((int)this_ + 0xa0);
  puVar1 = *(undefined4 **)
            (*(int *)((int)this_ + 0x60) +
            (*(int *)((int)this_ + 0x68) * iVar3 + *(int *)((int)this_ + 0xa0)) * 4);
  *(undefined4 **)((int)this_ + 0x90) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    if ((int)puVar1[2] < 1) {
      sVar4 = -1;
    }
    else {
      DAT_0082b69c = 0;
      sVar4 = *(short *)*puVar1;
    }
    iVar3 = (int)sVar4;
    if (iVar3 == -1) {
      *(undefined4 *)((int)this_ + 0x94) = 0;
    }
    else {
LAB_004d4f6b:
      *(int *)((int)this_ + 0x94) = *(int *)((int)this_ + 100) + iVar3 * 0xc;
    }
  }
  goto LAB_004d4f0f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d4f00, ap_004d4f00));
