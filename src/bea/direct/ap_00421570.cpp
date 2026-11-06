// auto-ported from 00421570_FUN_00421570.c (FUN_00421570, 859 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00624184 GLOBAL_AT(int, 0x00624184)
#define DAT_00660634 GLOBAL_AT(int, 0x00660634)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00660624 GLOBAL_AT(undefined, 0x00660624)
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
#define s_WARNING__Could_not_find_career_n_006241b4 ((char*)0x006241b4)
#define iRam00000004 GLOBAL_AT(int, 0x00000004)
typedef int (BEA_THISCALL* FUN_0041b8f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041b8f0_t> FUN_0041b8f0 = {(FUN_0041b8f0_t)0x0041b8f0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static uint32_t BEA_STDCALL ap_00421570(undefined4 param_1)
{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  switch(param_1) {
  case 0:
  case 1:
    return true;
  case 2:
    iVar1 = 0;
    if (0 < DAT_00624184) {
      piVar3 = &DAT_00660634;
      do {
        if (*piVar3 == 0x6e) {
          return *(int *)(iVar1 * 0x40 + 0x660628) == 1;
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x10;
      } while (BEA_LOOP_GUARD((iVar1 < DAT_00624184)));
    }
    FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,0x6e);
    return iRam00000004 == 1;
  case 3:
    iVar1 = 0;
    if (0 < DAT_00624184) {
      piVar3 = &DAT_00660634;
      do {
        if (*piVar3 == 0xe7) {
          puVar2 = &DAT_00660624 + iVar1 * 0x40;
          goto LAB_0042162a;
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x10;
      } while (BEA_LOOP_GUARD((iVar1 < DAT_00624184)));
    }
    FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,0xe7);
    puVar2 = (undefined *)0x0;
LAB_0042162a:
    if (*(int *)(puVar2 + 4) == 1) {
      return true;
    }
    iVar1 = 0;
    if (0 < DAT_00624184) {
      piVar3 = &DAT_00660634;
      do {
        if (*piVar3 == 0xe8) goto LAB_0042167d;
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x10;
      } while (BEA_LOOP_GUARD((iVar1 < DAT_00624184)));
    }
    FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,0xe8);
    puVar2 = (undefined *)0x0;
    break;
  case 4:
    iVar1 = 0;
    if (0 < DAT_00624184) {
      piVar3 = &DAT_00660634;
      do {
        if (*piVar3 == 0x14b) {
          puVar2 = &DAT_00660624 + iVar1 * 0x40;
          goto LAB_004216ca;
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x10;
      } while (BEA_LOOP_GUARD((iVar1 < DAT_00624184)));
    }
    FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,0x14b);
    puVar2 = (undefined *)0x0;
LAB_004216ca:
    if (*(int *)(puVar2 + 4) == 1) {
      return true;
    }
    iVar1 = 0;
    if (0 < DAT_00624184) {
      piVar3 = &DAT_00660634;
      do {
        if (*piVar3 == 0x14c) goto LAB_0042167d;
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x10;
      } while (BEA_LOOP_GUARD((iVar1 < DAT_00624184)));
    }
    FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,0x14c);
    puVar2 = (undefined *)0x0;
    break;
  case 5:
    iVar1 = 0;
    if (0 < DAT_00624184) {
      piVar3 = &DAT_00660634;
      do {
        if (*piVar3 == 0x1af) {
          puVar2 = &DAT_00660624 + iVar1 * 0x40;
          goto LAB_0042175d;
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x10;
      } while (BEA_LOOP_GUARD((iVar1 < DAT_00624184)));
    }
    FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,0x1af);
    puVar2 = (undefined *)0x0;
LAB_0042175d:
    if (*(int *)(puVar2 + 4) == 1) {
      return true;
    }
    iVar1 = 0;
    if (0 < DAT_00624184) {
      piVar3 = &DAT_00660634;
      do {
        if (*piVar3 == 0x1b0) goto LAB_0042167d;
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x10;
      } while (BEA_LOOP_GUARD((iVar1 < DAT_00624184)));
    }
    FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,0x1b0);
    puVar2 = (undefined *)0x0;
    break;
  case 6:
    iVar1 = 0;
    if (0 < DAT_00624184) {
      piVar3 = &DAT_00660634;
      do {
        if (*piVar3 == 0x209) {
          puVar2 = &DAT_00660624 + iVar1 * 0x40;
          goto LAB_004217f4;
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x10;
      } while (BEA_LOOP_GUARD((iVar1 < DAT_00624184)));
    }
    FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,0x209);
    puVar2 = (undefined *)0x0;
LAB_004217f4:
    if (*(int *)(puVar2 + 4) == 1) {
      return true;
    }
    iVar1 = 0;
    if (0 < DAT_00624184) {
      piVar3 = &DAT_00660634;
      do {
        if (*piVar3 == 0x20a) {
          puVar2 = &DAT_00660624 + iVar1 * 0x40;
          goto LAB_0042184e;
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x10;
      } while (BEA_LOOP_GUARD((iVar1 < DAT_00624184)));
    }
    FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,0x20a);
    puVar2 = (undefined *)0x0;
LAB_0042184e:
    if (*(int *)(puVar2 + 4) == 1) {
      return true;
    }
    iVar1 = FUN_0041b8f0(bea_arg(&DAT_00660620), bea_arg(0x20b));
    if (*(int *)(iVar1 + 4) == 1) {
      return true;
    }
    uVar4 = 0x20c;
    goto LAB_004218b0;
  case 7:
    iVar1 = FUN_0041b8f0(bea_arg(&DAT_00660620), bea_arg(0x26d));
    if (*(int *)(iVar1 + 4) == 1) {
      return true;
    }
    uVar4 = 0x26e;
    goto LAB_004218b0;
  case 8:
    iVar1 = FUN_0041b8f0(bea_arg(&DAT_00660620), bea_arg(0x2e5));
    if (*(int *)(iVar1 + 4) == 1) {
      return true;
    }
    uVar4 = 0x2e6;
LAB_004218b0:
    puVar2 = (undefined *)FUN_0041b8f0(bea_arg(&DAT_00660620), bea_arg(uVar4));
    break;
  default:
    goto switchD_0042157e_default;
  }
LAB_004218ba:
  if (*(int *)(puVar2 + 4) == 1) {
    return true;
  }
switchD_0042157e_default:
  return false;
LAB_0042167d:
  puVar2 = &DAT_00660624 + iVar1 * 0x40;
  goto LAB_004218ba;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00421570, ap_00421570));
