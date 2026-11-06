// auto-ported from 004f78c0_FUN_004f78c0.c (FUN_004f78c0, 126 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static short * BEA_THISCALL ap_004f78c0(int in_ECX, short param_1, short param_2)
{
  short sVar1;
  short *psVar2;

  int iVar3;
  
  psVar2 = *(short **)(in_ECX + 4);
  iVar3 = *(int *)(in_ECX + 0xc);
  while( true ) {
    if (iVar3 == 0) {
      return (short *)0x0;
    }
    if ((*psVar2 == param_1) && (psVar2[1] == param_2)) {
      return psVar2;
    }
    if ((psVar2[1] == param_1) && (psVar2[2] == param_2)) {
      sVar1 = *psVar2;
      *psVar2 = psVar2[1];
      psVar2[1] = psVar2[2];
      psVar2[2] = sVar1;
      return psVar2;
    }
    if ((psVar2[2] == param_1) && (*psVar2 == param_2)) break;
    psVar2 = psVar2 + 3;
    iVar3 = iVar3 + -1;
  }
  sVar1 = *psVar2;
  *psVar2 = psVar2[2];
  psVar2[2] = psVar2[1];
  psVar2[1] = sVar1;
  return psVar2;
}

// @autoport-registration (verified: 9414 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004f78c0, ap_004f78c0));
