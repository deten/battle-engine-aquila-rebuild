// auto-ported from 0042f230_vslot2.c (CUnitStatement::vslot2, 76 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnitStatement;
typedef int (BEA_THISCALL* FUN_0042f280_t)(uint32_t);
static const bea_guard<FUN_0042f280_t> FUN_0042f280 = {(FUN_0042f280_t)0x0042f280};

static int BEA_THISCALL ap_0042f230(CUnitStatement * this_)
{
  CUnitStatement *pCVar1;
  CUnitStatement CVar2;
  int *piVar3;
  void *this_00;
  CUnitStatement *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pCVar4 = this_ + 0xc;
  iVar6 = 1;
  CVar2 = this_[0xc];
  while (BEA_LOOP_GUARD((CVar2 != (CUnitStatement)0x0))) {
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
    iVar5 = FUN_0042f280(bea_arg(this_00));
    iVar7 = iVar7 + iVar5;
  }
  return iVar7 + iVar6;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042f230, ap_0042f230));
