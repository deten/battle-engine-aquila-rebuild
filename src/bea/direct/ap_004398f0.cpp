// auto-ported from 004398f0_vslot2.c (CComponentBasedOn::vslot2, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CComponentBasedOn;

static int BEA_THISCALL ap_004398f0(CComponentBasedOn * this_)
{
  CComponentBasedOn *pCVar1;
  CComponentBasedOn CVar2;
  int iVar3;
  CComponentBasedOn *pCVar4;
  
  pCVar4 = this_ + 8;
  iVar3 = 1;
  CVar2 = this_[8];
  while (BEA_LOOP_GUARD((CVar2 != (CComponentBasedOn)0x0))) {
    pCVar1 = pCVar4 + 1;
    iVar3 = iVar3 + 1;
    pCVar4 = pCVar4 + 1;
    CVar2 = *pCVar1;
  }
  return iVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004398f0, ap_004398f0));
