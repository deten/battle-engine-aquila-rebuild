// auto-ported from 0042fa40_vslot1.c (CWeaponModeStatement::vslot1, 51 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CWeaponModeStatement;
typedef uint32_t (BEA_CDECL* FUN_0042fa80_t)(uint32_t);
static const bea_guard<FUN_0042fa80_t> FUN_0042fa80 = {(FUN_0042fa80_t)0x0042fa80};
typedef uint32_t (BEA_THISCALL* FUN_00430fa0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00430fa0_t> FUN_00430fa0 = {(FUN_00430fa0_t)0x00430fa0};

static void BEA_THISCALL ap_0042fa40(CWeaponModeStatement * this_)
{
  CWeaponModeStatement *a1;
  int iVar1;
  int *piVar2;
  void *this_00;
  
  a1 = this_ + 0xc;
  FUN_0042fa80(bea_arg(a1));
  iVar1 = *(int *)(this_ + 0x10c);
  piVar2 = *(int **)(iVar1 + 4);
  if (piVar2 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar2, 0x4, a1);
  }
  this_00 = *(void **)(iVar1 + 8);
  if (this_00 != (void *)0x0) {
    FUN_00430fa0(bea_arg(this_00), bea_arg(a1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042fa40, ap_0042fa40));
