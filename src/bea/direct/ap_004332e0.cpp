// auto-ported from 004332e0_vslot1.c (CUnitBasedOn::vslot1, 164 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnitBasedOn;
#define DAT_008553fc GLOBAL_AT(undefined4*, 0x008553fc)
typedef uint32_t (BEA_THISCALL* FUN_00433390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00433390_t> FUN_00433390 = {(FUN_00433390_t)0x00433390};

static uint32_t BEA_THISCALL ap_004332e0(CUnitBasedOn * this_, void *param_1)
{
  CUnitBasedOn CVar1;
  int *piVar2;
  CUnitBasedOn *pCVar3;
  int iVar4;
  int iVar5;
  CUnitBasedOn *pCVar6;
  bool bVar7;
  if (this_ + 8 != (CUnitBasedOn *)0x0) {
    piVar2 = (int *)*DAT_008553fc;
    DAT_008553fc[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    while (BEA_LOOP_GUARD((iVar5 != 0))) {
      pCVar6 = *(CUnitBasedOn **)(iVar5 + 0xb0);
      pCVar3 = this_ + 8;
      do {
        CVar1 = *pCVar3;
        bVar7 = (byte)CVar1 < (byte)*pCVar6;
        if (CVar1 != *pCVar6) {
LAB_00433336:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0043333b;
        }
        if (CVar1 == (CUnitBasedOn)0x0) break;
        CVar1 = pCVar3[1];
        bVar7 = (byte)CVar1 < (byte)pCVar6[1];
        if (CVar1 != pCVar6[1]) goto LAB_00433336;
        pCVar3 = pCVar3 + 2;
        pCVar6 = pCVar6 + 2;
      } while (BEA_LOOP_GUARD((CVar1 != (CUnitBasedOn)0x0)));
      iVar4 = 0;
LAB_0043333b:
      if (iVar4 == 0) {
        return FUN_00433390(bea_arg(param_1), bea_arg(iVar5));
      }
      piVar2 = *(int **)(DAT_008553fc[2] + 4);
      DAT_008553fc[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar2;
      }
    }
  }
  return FUN_00433390(bea_arg(param_1), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004332e0, ap_004332e0));
