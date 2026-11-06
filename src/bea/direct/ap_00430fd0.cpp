// auto-ported from 00430fd0_vslot2.c (CComponentStatement::vslot2, 75 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComponentStatement;
typedef int (BEA_THISCALL* FUN_00431020_t)(uint32_t);
static const bea_guard<FUN_00431020_t> FUN_00431020 = {(FUN_00431020_t)0x00431020};

static int BEA_THISCALL ap_00430fd0(CComponentStatement * this_)
{
  CComponentStatement *pCVar1;
  CComponentStatement CVar2;
  void *this_00;
  CComponentStatement *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pCVar3 = this_ + 0xc;
  iVar6 = 1;
  CVar2 = this_[0xc];
  while (BEA_LOOP_GUARD((CVar2 != (CComponentStatement)0x0))) {
    pCVar1 = pCVar3 + 1;
    iVar6 = iVar6 + 1;
    pCVar3 = pCVar3 + 1;
    CVar2 = *pCVar1;
  }
  iVar5 = *(int *)(this_ + 0x10c);
  iVar4 = bea_vcall<uint32_t>(*(int **)(iVar5 + 4), 0x8);
  this_00 = *(void **)(iVar5 + 8);
  if (this_00 == (void *)0x0) {
    return iVar4 + 0xc + iVar6;
  }
  iVar5 = FUN_00431020(bea_arg(this_00));
  return iVar4 + 0xc + iVar5 + iVar6;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00430fd0, ap_00430fd0));
