// auto-ported from 00500c50_FUN_00500c50.c (FUN_00500c50, 81 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_00500c50(int in_ECX)
{
  int iVar1;

  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 0x50);
  iVar2 = *(int *)(in_ECX + 0x34) >> 1;
  if (iVar1 == 1) {
    return iVar2;
  }
  if (iVar1 == 2) {
    return iVar2 - (*(int *)(in_ECX + 0x34) >> 0x1f) >> 1;
  }
  if (iVar1 == 3) {
    return iVar2 + -1;
  }
  if (iVar1 == 4) {
    return iVar2 / 3;
  }
  if (iVar1 == 5) {
    return iVar2 + -2;
  }
  if (iVar1 == 6) {
    return iVar2 + -2;
  }
  return 0;
}

// @autoport-registration (verified: 34637 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00500c50, ap_00500c50));
