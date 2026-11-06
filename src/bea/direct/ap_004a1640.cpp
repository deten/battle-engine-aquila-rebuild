// auto-ported from 004a1640_FUN_004a1640.c (FUN_004a1640, 358 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static BOOL BEA_THISCALL ap_004a1640(void * this_, undefined4 param_1)
{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  
  if ((char)param_1 != '\0') {
    WaitForSingleObject((HANDLE)((int)this_ + 0x8bc),0xffffffff);
  }
  puVar9 = (undefined4 *)((int)this_ + 0xc);
  for (iVar4 = 0x10; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)((int)this_ + 0x4c) = 0;
  uVar2 = *(uint *)((int)this_ + 4);
  do {
    *(undefined4 *)(uVar2 + 0xc) = 0;
    if ((~*(uint *)(uVar2 + 4) & 1) != 0) {
      uVar8 = *(uint *)(uVar2 + 4);
      uVar7 = uVar8 & 0xfffffff0;
      if (uVar7 + 0x10 + uVar2 < (uint)(*(int *)((int)this_ + 4) + *(int *)((int)this_ + 8))) {
        do {
          uVar8 = *(uint *)((uVar8 & 0xfffffff0) + 0x14 + uVar2);
          if ((~uVar8 & 1) == 0) break;
          *(uint *)(uVar2 + 4) = (uVar8 & 0xfffffff0) + 0x10 + uVar7;
          *(int *)((int)this_ + 0x66c) = *(int *)((int)this_ + 0x66c) + -1;
          uVar8 = *(uint *)(uVar2 + 4);
          uVar7 = uVar8 & 0xfffffff0;
        } while (BEA_LOOP_GUARD((uVar7 + 0x10 + uVar2 < (uint)(*(int *)((int)this_ + 4) + *(int *)((int)this_ + 8)))));
      }
      uVar8 = *(uint *)(uVar2 + 4) & 0xfffffff0;
      if ((uVar8 < 0x100) && (*(int *)((int)this_ + 0x8b8) != 0)) {
        uVar8 = *(uint *)((int)this_ + (*(uint *)(uVar2 + 4) >> 4) * 4 + 0xc);
        uVar7 = 0;
        if (uVar8 != 0) {
          do {
            uVar5 = uVar8;
            if (uVar5 < uVar2) break;
            uVar8 = *(uint *)(uVar5 + 0xc);
            uVar7 = uVar5;
          } while (BEA_LOOP_GUARD((*(uint *)(uVar5 + 0xc) != 0)));
          if (uVar7 != 0) {
            *(undefined4 *)(uVar2 + 0xc) = *(undefined4 *)(uVar7 + 0xc);
            *(uint *)(uVar7 + 0xc) = uVar2;
            goto LAB_004a1766;
          }
        }
        uVar8 = *(uint *)(uVar2 + 4) >> 4;
        *(undefined4 *)(uVar2 + 0xc) = *(undefined4 *)((int)this_ + uVar8 * 4 + 0xc);
        *(uint *)((int)this_ + uVar8 * 4 + 0xc) = uVar2;
      }
      else {
        iVar4 = *(int *)((int)this_ + 0x4c);
        iVar1 = iVar4;
        iVar10 = 0;
        if (iVar4 != 0) {
          do {
            iVar6 = iVar1;
            if (uVar8 <= (*(uint *)(iVar6 + 4) & 0xfffffff0)) break;
            iVar1 = *(int *)(iVar6 + 0xc);
            iVar10 = iVar6;
          } while (BEA_LOOP_GUARD((*(int *)(iVar6 + 0xc) != 0)));
          if (iVar10 != 0) {
            *(undefined4 *)(uVar2 + 0xc) = *(undefined4 *)(iVar10 + 0xc);
            *(uint *)(iVar10 + 0xc) = uVar2;
            goto LAB_004a1766;
          }
        }
        *(int *)(uVar2 + 0xc) = iVar4;
        *(uint *)((int)this_ + 0x4c) = uVar2;
      }
    }
LAB_004a1766:
    if ((uint)(*(int *)((int)this_ + 4) + *(int *)((int)this_ + 8)) <=
        (*(uint *)(uVar2 + 4) & 0xfffffff0) + 0x10 + uVar2) {
      BVar3 = CONCAT31((int3)(uVar2 >> 8),(char)param_1);
      if ((char)param_1 != '\0') {
        BVar3 = ReleaseMutex((HANDLE)((int)this_ + 0x8bc));
      }
      return BVar3;
    }
    uVar2 = uVar2 + 0x10 + (*(uint *)(uVar2 + 4) & 0xfffffff0);
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a1640, ap_004a1640));
