// auto-ported from 00430e20_vslot1.c (CComponentStatement::vslot1, 51 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CComponentStatement;
typedef uint32_t (BEA_CDECL* FUN_00430e60_t)(uint32_t);
static const bea_guard<FUN_00430e60_t> FUN_00430e60 = {(FUN_00430e60_t)0x00430e60};
typedef uint32_t (BEA_THISCALL* FUN_00430fa0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00430fa0_t> FUN_00430fa0 = {(FUN_00430fa0_t)0x00430fa0};

static void BEA_THISCALL ap_00430e20(CComponentStatement * this_)
{
  CComponentStatement *pCVar1;
  int iVar2;
  int *piVar3;
  void *this_00;
  
  pCVar1 = this_ + 0xc;
  FUN_00430e60(bea_arg(pCVar1));
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
BEA_HOOKS(BEA_HOOK(0x00430e20, ap_00430e20));
