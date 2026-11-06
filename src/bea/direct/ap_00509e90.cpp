// auto-ported from 00509e90_FUN_00509e90.c (FUN_00509e90, 222 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008553ec GLOBAL_AT(undefined4*, 0x008553ec)

static int BEA_THISCALL ap_00509e90(void * this_)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  local_8 = (int)(longlong)ROUND(*(float *)((int)this_ + 0x60));
  iVar4 = 0;
  local_8 = local_8 / 100;
  iVar5 = local_8 * 4 + 0xc;
  iVar1 = *(int *)(iVar5 + *(int *)((int)this_ + 0xa4));
  piVar2 = (int *)*DAT_008553ec;
  DAT_008553ec[2] = (int)piVar2;
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  do {
    if (iVar3 == 0) {
LAB_00509f08:
      do {
        local_8 = local_8 + -1;
        iVar5 = iVar5 + -4;
        if (local_8 < 0) {
          return 0;
        }
        iVar4 = 0;
        iVar1 = *(int *)(iVar5 + *(int *)((int)this_ + 0xa4));
        piVar2 = (int *)*DAT_008553ec;
        DAT_008553ec[2] = (int)piVar2;
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        while (BEA_LOOP_GUARD((iVar3 != 0))) {
          if (iVar4 == iVar1) {
            if (iVar3 != 0) {
              return iVar3;
            }
            break;
          }
          iVar4 = iVar4 + 1;
          piVar2 = *(int **)(DAT_008553ec[2] + 4);
          DAT_008553ec[2] = (int)piVar2;
          if (piVar2 == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *piVar2;
          }
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
    if (iVar4 == iVar1) {
      if (iVar3 != 0) {
        return iVar3;
      }
      goto LAB_00509f08;
    }
    iVar4 = iVar4 + 1;
    piVar2 = *(int **)(DAT_008553ec[2] + 4);
    DAT_008553ec[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00509e90, ap_00509e90));
