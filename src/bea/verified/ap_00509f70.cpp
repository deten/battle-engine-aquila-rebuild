// auto-ported from 00509f70_FUN_00509f70.c (FUN_00509f70, 271 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_008553ec GLOBAL_AT(undefined4*, 0x008553ec)

static undefined4 BEA_THISCALL ap_00509f70(int in_ECX)
{
  int iVar1;
  int *piVar2;
  int iVar3;

  int iVar4;
  int iVar5;
  int local_8;
  
  if (*(int *)(in_ECX + 0xa0) != 0) {
    if (DAT_00672fd0 <= *(float *)(in_ECX + 100)) {
      return 0;
    }
    return 1;
  }
  local_8 = (int)(longlong)ROUND(*(float *)(in_ECX + 0x60));
  iVar4 = 0;
  local_8 = local_8 / 100;
  iVar1 = *(int *)(*(int *)(in_ECX + 0xa4) + 0xc + local_8 * 4);
  iVar5 = local_8 * 4 + 0xc;
  piVar2 = (int *)*DAT_008553ec;
  DAT_008553ec[2] = (int)piVar2;
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  while (iVar3 != 0) {
    if (iVar4 == iVar1) goto joined_r0x0050a012;
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
LAB_0050a014:
  do {
    local_8 = local_8 + -1;
    iVar5 = iVar5 + -4;
    if (local_8 < 0) {
      return 0;
    }
    iVar4 = 0;
    iVar1 = *(int *)(*(int *)(in_ECX + 0xa4) + iVar5);
    piVar2 = (int *)*DAT_008553ec;
    DAT_008553ec[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
    while (iVar3 != 0) {
      if (iVar4 == iVar1) goto joined_r0x0050a012;
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
  } while( true );
joined_r0x0050a012:
  if (iVar3 != 0) {
    return 1;
  }
  goto LAB_0050a014;
}

// @autoport-registration (verified: 37723 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00509f70, ap_00509f70));
