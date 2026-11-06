// auto-ported from 00430190_vslot2.c (CRoundStatement::vslot2, 75 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRoundStatement;
typedef int (BEA_THISCALL* FUN_004301e0_t)(uint32_t);
static const bea_guard<FUN_004301e0_t> FUN_004301e0 = {(FUN_004301e0_t)0x004301e0};

static int BEA_THISCALL ap_00430190(CRoundStatement * this_)
{
  CRoundStatement *pCVar1;
  CRoundStatement CVar2;
  void *this_00;
  CRoundStatement *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pCVar3 = this_ + 0xc;
  iVar6 = 1;
  CVar2 = this_[0xc];
  while (BEA_LOOP_GUARD((CVar2 != (CRoundStatement)0x0))) {
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
  iVar5 = FUN_004301e0(bea_arg(this_00));
  return iVar4 + 0xc + iVar5 + iVar6;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00430190, ap_00430190));
