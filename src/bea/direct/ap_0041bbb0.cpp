// auto-ported from 0041bbb0_FUN_0041bbb0.c (FUN_0041bbb0, 173 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00624184 GLOBAL_AT(int, 0x00624184)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_WARNING__Could_not_find_career_n_006241b4 ((char*)0x006241b4)
typedef undefined4 (BEA_THISCALL* FUN_0041bc60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0041bc60_t> FUN_0041bc60 = {(FUN_0041bc60_t)0x0041bc60};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static undefined4 BEA_THISCALL ap_0041bbb0(void * this_, int param_1, int param_2)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  if (0 < DAT_00624184) {
    piVar3 = (int *)((int)this_ + 0x14);
    do {
      if (*piVar3 == param_1) {
        iVar1 = iVar1 * 0x40 + 4 + (int)this_;
        goto LAB_0041bbef;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 0x10;
    } while (BEA_LOOP_GUARD((iVar1 < DAT_00624184)));
  }
  FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,param_1);
  iVar1 = 0;
LAB_0041bbef:
  iVar2 = 0;
  if (0 < DAT_00624184) {
    piVar3 = (int *)((int)this_ + 0x14);
    do {
      if (*piVar3 == param_2) {
        iVar2 = iVar2 * 0x40 + 4 + (int)this_;
        goto LAB_0041bc31;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x10;
    } while (BEA_LOOP_GUARD((iVar2 < DAT_00624184)));
  }
  FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,param_2);
  iVar2 = 0;
LAB_0041bc31:
  if ((((iVar1 != 0) && (iVar2 != 0)) && (iVar1 != iVar2)) &&
     (iVar1 = FUN_0041bc60(bea_arg(this_), bea_arg(iVar2), bea_arg(iVar1)), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041bbb0, ap_0041bbb0));
