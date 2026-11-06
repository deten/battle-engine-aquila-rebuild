// auto-ported from 0042ede0_vslot1.c (CUnitStatement::vslot1, 172 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CUnitStatement;
#define DAT_008553fc GLOBAL_AT(undefined4*, 0x008553fc)
typedef uint32_t (BEA_CDECL* FUN_0042ee90_t)(uint32_t);
static const bea_guard<FUN_0042ee90_t> FUN_0042ee90 = {(FUN_0042ee90_t)0x0042ee90};
typedef uint32_t (BEA_THISCALL* FUN_00430fa0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00430fa0_t> FUN_00430fa0 = {(FUN_00430fa0_t)0x00430fa0};

static void BEA_THISCALL ap_0042ede0(CUnitStatement * this_)
{
  CUnitStatement *pCVar1;
  CUnitStatement CVar2;
  int *piVar3;
  void *this_00;
  CUnitStatement *pCVar4;
  int iVar5;
  CUnitStatement *pCVar6;
  int iVar7;
  bool bVar8;
  
  pCVar1 = this_ + 0xc;
  FUN_0042ee90(bea_arg(pCVar1));
  if (pCVar1 != (CUnitStatement *)0x0) {
    piVar3 = (int *)*DAT_008553fc;
    DAT_008553fc[2] = (int)piVar3;
    if (piVar3 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar3;
    }
    while (BEA_LOOP_GUARD((iVar7 != 0))) {
      pCVar6 = *(CUnitStatement **)(iVar7 + 0xb0);
      pCVar4 = pCVar1;
      do {
        CVar2 = *pCVar4;
        bVar8 = (byte)CVar2 < (byte)*pCVar6;
        if (CVar2 != *pCVar6) {
LAB_0042ee3d:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0042ee42;
        }
        if (CVar2 == (CUnitStatement)0x0) break;
        CVar2 = pCVar4[1];
        bVar8 = (byte)CVar2 < (byte)pCVar6[1];
        if (CVar2 != pCVar6[1]) goto LAB_0042ee3d;
        pCVar4 = pCVar4 + 2;
        pCVar6 = pCVar6 + 2;
      } while (BEA_LOOP_GUARD((CVar2 != (CUnitStatement)0x0)));
      iVar5 = 0;
LAB_0042ee42:
      if (iVar5 == 0) goto LAB_0042ee67;
      piVar3 = *(int **)(DAT_008553fc[2] + 4);
      DAT_008553fc[2] = (int)piVar3;
      if (piVar3 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *piVar3;
      }
    }
  }
  iVar7 = 0;
LAB_0042ee67:
  iVar5 = *(int *)(this_ + 0x10c);
  piVar3 = *(int **)(iVar5 + 4);
  if (piVar3 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar3, 0x4, iVar7);
  }
  this_00 = *(void **)(iVar5 + 8);
  if (this_00 != (void *)0x0) {
    FUN_00430fa0(bea_arg(this_00), bea_arg(iVar7));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042ede0, ap_0042ede0));
