// auto-ported from 0042f700_vslot2.c (CWeaponStatement::vslot2, 76 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CWeaponStatement;
typedef int (BEA_THISCALL* FUN_0042f750_t)(uint32_t);
static const bea_guard<FUN_0042f750_t> FUN_0042f750 = {(FUN_0042f750_t)0x0042f750};

static int BEA_THISCALL ap_0042f700(CWeaponStatement * this_)
{
  CWeaponStatement *pCVar1;
  CWeaponStatement CVar2;
  int *piVar3;
  void *this_00;
  CWeaponStatement *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pCVar4 = this_ + 0xc;
  iVar6 = 1;
  CVar2 = this_[0xc];
  while (BEA_LOOP_GUARD((CVar2 != (CWeaponStatement)0x0))) {
    pCVar1 = pCVar4 + 1;
    iVar6 = iVar6 + 1;
    pCVar4 = pCVar4 + 1;
    CVar2 = *pCVar1;
  }
  iVar5 = *(int *)(this_ + 0x10c);
  iVar7 = 8;
  piVar3 = *(int **)(iVar5 + 4);
  if (piVar3 != (int *)0x0) {
    iVar7 = bea_vcall<uint32_t>(piVar3, 0x8);
    iVar7 = iVar7 + 8;
  }
  this_00 = *(void **)(iVar5 + 8);
  if (this_00 != (void *)0x0) {
    iVar5 = FUN_0042f750(bea_arg(this_00));
    iVar7 = iVar7 + iVar5;
  }
  return iVar7 + iVar6;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042f700, ap_0042f700));
