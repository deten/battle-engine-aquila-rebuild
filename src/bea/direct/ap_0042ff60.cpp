// auto-ported from 0042ff60_vslot1.c (CRoundStatement::vslot1, 51 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CRoundStatement;
typedef uint32_t (BEA_CDECL* FUN_0042ffa0_t)(uint32_t);
static const bea_guard<FUN_0042ffa0_t> FUN_0042ffa0 = {(FUN_0042ffa0_t)0x0042ffa0};
typedef uint32_t (BEA_THISCALL* FUN_00430fa0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00430fa0_t> FUN_00430fa0 = {(FUN_00430fa0_t)0x00430fa0};

static void BEA_THISCALL ap_0042ff60(CRoundStatement * this_)
{
  CRoundStatement *pCVar1;
  int iVar2;
  int *piVar3;
  void *this_00;
  
  pCVar1 = this_ + 0xc;
  FUN_0042ffa0(bea_arg(pCVar1));
  iVar2 = *(int *)(this_ + 0x10c);
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar3, 0x4, pCVar1);
  }
  this_00 = *(void **)(iVar2 + 8);
  if (this_00 != (void *)0x0) {
    FUN_00430fa0(bea_arg(this_00), bea_arg(pCVar1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042ff60, ap_0042ff60));
