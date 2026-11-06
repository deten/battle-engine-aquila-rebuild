// auto-ported from 0043d670_vslot2.c (CComponentUse::vslot2, 54 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CComponentUse;

static int BEA_THISCALL ap_0043d670(CComponentUse * this_)
{
  CComponentUse *pCVar1;
  CComponentUse CVar2;
  int iVar3;
  CComponentUse *pCVar4;
  
  pCVar4 = this_ + 8;
  iVar3 = 1;
  CVar2 = *pCVar4;
  while (BEA_LOOP_GUARD((CVar2 != (CComponentUse)0x0))) {
    pCVar1 = pCVar4 + 1;
    iVar3 = iVar3 + 1;
    pCVar4 = pCVar4 + 1;
    CVar2 = *pCVar1;
  }
  pCVar4 = this_ + 0x108;
  CVar2 = this_[0x108];
  while (BEA_LOOP_GUARD((CVar2 != (CComponentUse)0x0))) {
    pCVar1 = pCVar4 + 1;
    pCVar4 = pCVar4 + 1;
    iVar3 = iVar3 + 1;
    CVar2 = *pCVar1;
  }
  return iVar3 + 5;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043d670, ap_0043d670));
