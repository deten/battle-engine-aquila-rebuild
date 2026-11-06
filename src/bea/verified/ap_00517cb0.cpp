// auto-ported from 00517cb0_FUN_00517cb0.c (FUN_00517cb0, 79 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00896994 GLOBAL_AT(int, 0x00896994)

static int BEA_THISCALL ap_00517cb0(int in_ECX)
{
  int iVar1;
  byte bVar2;
  int iVar3;

  int *piVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x2cc)) {
    piVar4 = (int *)(in_ECX + 0xc4);
    do {
      bVar2 = 1;
      for (iVar1 = DAT_00896994; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x74)) {
        if (*(int *)(iVar1 + 4) == iVar3) {
          bVar2 = 0;
        }
      }
      if ((bool)(bVar2 & *piVar4 == 0)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x2cc));
  }
  return -1;
}

// @autoport-registration (verified: 473 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00517cb0, ap_00517cb0));
