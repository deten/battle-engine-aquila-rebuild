// auto-ported from 004331e0_vslot2.c (CComponentUseSpawner::vslot2, 51 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CComponentUseSpawner;

static int BEA_THISCALL ap_004331e0(CComponentUseSpawner * this_)
{
  CComponentUseSpawner *pCVar1;
  CComponentUseSpawner CVar2;
  int iVar3;
  CComponentUseSpawner *pCVar4;
  
  pCVar4 = this_ + 0x108;
  iVar3 = 1;
  CVar2 = *pCVar4;
  while (BEA_LOOP_GUARD((CVar2 != (CComponentUseSpawner)0x0))) {
    pCVar1 = pCVar4 + 1;
    iVar3 = iVar3 + 1;
    pCVar4 = pCVar4 + 1;
    CVar2 = *pCVar1;
  }
  pCVar4 = this_ + 8;
  CVar2 = this_[8];
  while (BEA_LOOP_GUARD((CVar2 != (CComponentUseSpawner)0x0))) {
    pCVar1 = pCVar4 + 1;
    pCVar4 = pCVar4 + 1;
    iVar3 = iVar3 + 1;
    CVar2 = *pCVar1;
  }
  return iVar3 + 5;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004331e0, ap_004331e0));
