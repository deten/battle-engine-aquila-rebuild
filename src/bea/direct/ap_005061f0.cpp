// auto-ported from 005061f0_FUN_005061f0.c (FUN_005061f0, 343 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008553ec GLOBAL_AT(undefined4*, 0x008553ec)

static uint32_t BEA_THISCALL ap_005061f0(int this_, int param_1)
{
  int iVar1;
  int *piVar2;
  int iVar3;

  int iVar4;
  int iVar5;
  int local_8;
  
  if (*(int *)(param_1 + 0x214) == 0) {
    return false;
  }
  iVar5 = *(int *)(param_1 + 0x164);
  if (((iVar5 == 0) || (*(int *)(iVar5 + 300) == 0)) && (*(int *)(param_1 + 0x228) != 0)) {
    return false;
  }
  if (*(int *)(param_1 + 0x22c) != 0) {
    return false;
  }
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x114) == 0)) {
    return false;
  }
  local_8 = (int)(longlong)ROUND(*(float *)(this_ + 0x60));
  iVar4 = 0;
  local_8 = local_8 / 100;
  iVar5 = local_8 * 4 + 0xc;
  iVar1 = *(int *)(iVar5 + *(int *)(this_ + 0xa4));
  piVar2 = (int *)*DAT_008553ec;
  DAT_008553ec[2] = (int)piVar2;
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  while(BEA_LOOP_GUARD(( true ))) {
    if (iVar3 == 0) goto LAB_005062d0;
    if (iVar4 == iVar1) break;
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
joined_r0x005062ce:
  if (iVar3 == 0) {
LAB_005062d0:
    while(BEA_LOOP_GUARD(( true ))) {
      local_8 = local_8 + -1;
      iVar5 = iVar5 + -4;
      if (local_8 < 0) break;
      iVar4 = 0;
      iVar1 = *(int *)(iVar5 + *(int *)(this_ + 0xa4));
      piVar2 = (int *)*DAT_008553ec;
      DAT_008553ec[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar2;
      }
      while (BEA_LOOP_GUARD((iVar3 != 0))) {
        if (iVar4 == iVar1) goto joined_r0x005062ce;
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
    }
    iVar3 = 0;
  }
  return (*(uint *)(iVar3 + 0xa4) & *(uint *)(param_1 + 0x34)) != 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005061f0, ap_005061f0));
