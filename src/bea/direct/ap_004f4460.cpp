// auto-ported from 004f4460_vslot21.c (CComplexThing::vslot21, 21 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CComplexThing;

static void BEA_THISCALL ap_004f4460(CComplexThing * this_, undefined4 *param_1)
{
  int iVar1;
  CComplexThing *pCVar2;
  
  pCVar2 = this_ + 0x3c;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *param_1;
    param_1 = param_1 + 1;
    pCVar2 = pCVar2 + 4;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f4460, ap_004f4460));
