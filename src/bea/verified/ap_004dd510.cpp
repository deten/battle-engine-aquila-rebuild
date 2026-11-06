// auto-ported from 004dd510_vslot19.c (CRTMesh::vslot19, 36 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_004dd510(int in_ECX, int param_1)
{
  int iVar1;

  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x28)) {
    piVar2 = *(int **)(in_ECX + 0x3c);
    do {
      if (*piVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x28));
  }
  return -1;
}

// @autoport-registration (verified: 524458 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004dd510, ap_004dd510));
