// auto-ported from 00433290_vslot2.c (CUnitComponent::vslot2, 26 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CUnitComponent;

static int BEA_THISCALL ap_00433290(CUnitComponent * this_)
{
  CUnitComponent *pCVar1;
  CUnitComponent CVar2;
  CUnitComponent *pCVar3;
  int iVar4;
  
  pCVar3 = this_ + 0xc;
  iVar4 = 1;
  CVar2 = *pCVar3;
  while (BEA_LOOP_GUARD((CVar2 != (CUnitComponent)0x0))) {
    pCVar1 = pCVar3 + 1;
    iVar4 = iVar4 + 1;
    pCVar3 = pCVar3 + 1;
    CVar2 = *pCVar1;
  }
  return iVar4 + 4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00433290, ap_00433290));
