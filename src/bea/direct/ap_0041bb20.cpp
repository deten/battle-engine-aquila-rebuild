// auto-ported from 0041bb20_FUN_0041bb20.c (FUN_0041bb20, 137 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_00624184 GLOBAL_AT(int, 0x00624184)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_WARNING__Could_not_find_career_n_006241b4 ((char*)0x006241b4)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};

static uint32_t BEA_THISCALL ap_0041bb20(void * this_, int param_1, uint param_2)
{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if (iVar1 != 0) {
    return true;
  }
  if (0 < DAT_00624184) {
    piVar2 = (int *)((int)this_ + 0x14);
    iVar1 = 0;
    do {
      if (*piVar2 == param_1) {
        iVar1 = iVar1 * 0x40 + 4 + (int)this_;
        if (iVar1 == 0) {
          return true;
        }
        uVar3 = 1;
        if ((param_2 & 0x1f) != 0) {
          uVar3 = 1 << (sbyte)(param_2 & 0x1f);
        }
        return (*(uint *)(iVar1 + 0x14 + ((int)param_2 >> 5) * 4) & uVar3) != 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x10;
    } while (BEA_LOOP_GUARD((iVar1 < DAT_00624184)));
  }
  FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,param_1);
  return true;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041bb20, ap_0041bb20));
