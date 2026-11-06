// auto-ported from 004e8d00_vslot74.c (CNormalSquad::vslot74, 77 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CNormalSquad;

static int BEA_THISCALL ap_004e8d00(CNormalSquad * this_)
{
  float fVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  fVar1 = 99999.0f;
  puVar2 = *(undefined4 **)(this_ + 0xa4);
  iVar4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)*puVar2;
  }
  while (BEA_LOOP_GUARD((piVar3 != (int *)0x0))) {
    if ((*piVar3 != 0) && (bea_fcast<float>(piVar3[2]) < fVar1)) {
      fVar1 = bea_fcast<float>(piVar3[2]);
      iVar4 = *piVar3;
    }
    puVar2 = (undefined4 *)puVar2[1];
    if (puVar2 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)*puVar2;
    }
  }
  return iVar4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e8d00, ap_004e8d00));
