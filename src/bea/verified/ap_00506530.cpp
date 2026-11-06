// auto-ported from 00506530_FUN_00506530.c (FUN_00506530, 228 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_008553ec GLOBAL_AT(undefined4*, 0x008553ec)

static undefined4 BEA_THISCALL ap_00506530(int in_ECX)
{
  int iVar1;
  int *piVar2;
  int iVar3;

  int iVar4;
  int iVar5;
  int local_8;
  
  local_8 = (int)(longlong)ROUND(*(float *)(in_ECX + 0x60));
  iVar4 = 0;
  local_8 = local_8 / 100;
  iVar5 = local_8 * 4 + 0xc;
  iVar1 = *(int *)(iVar5 + *(int *)(in_ECX + 0xa4));
  piVar2 = (int *)*DAT_008553ec;
  DAT_008553ec[2] = (int)piVar2;
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  while (iVar3 != 0) {
    if (iVar4 == iVar1) goto joined_r0x005065a6;
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
LAB_005065a8:
  do {
    do {
      local_8 = local_8 + -1;
      iVar5 = iVar5 + -4;
      if (local_8 < 0) {
        return 0;
      }
      iVar4 = 0;
      iVar1 = *(int *)(iVar5 + *(int *)(in_ECX + 0xa4));
      piVar2 = (int *)*DAT_008553ec;
      DAT_008553ec[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar2;
      }
    } while (iVar3 == 0);
    do {
      if (iVar4 == iVar1) goto joined_r0x005065a6;
      iVar4 = iVar4 + 1;
      piVar2 = *(int **)(DAT_008553ec[2] + 4);
      DAT_008553ec[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar2;
      }
    } while (iVar3 != 0);
  } while( true );
joined_r0x005065a6:
  if (iVar3 != 0) {
    return *(undefined4 *)(iVar3 + 0xa8);
  }
  goto LAB_005065a8;
}

// @autoport-registration (verified: 1045 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00506530, ap_00506530));
