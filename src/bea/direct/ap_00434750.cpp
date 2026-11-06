// auto-ported from 00434750_vslot2.c (CWeaponChargeLevel::vslot2, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CWeaponChargeLevel;

static int BEA_THISCALL ap_00434750(CWeaponChargeLevel * this_)
{
  CWeaponChargeLevel *pCVar1;
  CWeaponChargeLevel CVar2;
  int iVar3;
  CWeaponChargeLevel *pCVar4;
  
  pCVar4 = this_ + 8;
  iVar3 = 5;
  CVar2 = this_[8];
  while (BEA_LOOP_GUARD((CVar2 != (CWeaponChargeLevel)0x0))) {
    pCVar1 = pCVar4 + 1;
    iVar3 = iVar3 + 1;
    pCVar4 = pCVar4 + 1;
    CVar2 = *pCVar1;
  }
  return iVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00434750, ap_00434750));
