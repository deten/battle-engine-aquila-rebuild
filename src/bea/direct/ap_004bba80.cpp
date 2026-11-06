// auto-ported from 004bba80_vslot2.c (CMusicMenu::vslot2, 238 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char _DAT_00889a74;
#define DAT_00889a50 GLOBAL_AT(char, 0x00889a50)
#define DAT_00889a7c GLOBAL_AT(int, 0x00889a7c)
#define _DAT_00889a74 GLOBAL_AT(int, 0x00889a74)
#define DAT_00889a54 GLOBAL_AT(int, 0x00889a54)
#define DAT_00889a58 GLOBAL_AT(int, 0x00889a58)
#define s__playing__00630a7c ((char*)0x00630a7c)
#define s___Playing__volume__d__set__d____00630a94 ((char*)0x00630a94)
#define s___Stopped___00630a88 ((char*)0x00630a88)
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static undefined4 BEA_STDCALL ap_004bba80(int param_1, char *param_2)
{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (param_1 == 0) {
    if (DAT_00889a50 == '\0') {
      uVar3 = FUN_0055de9b(param_2,s___Stopped___00630a88);
      return uVar3;
    }
    uVar3 = FUN_0055de9b(param_2,s___Playing__volume__d__set__d____00630a94,DAT_00889a7c,
                         (double)((float)_DAT_00889a74 * 0.007874016f));
    return uVar3;
  }
  iVar4 = param_1 + -1;
  pcVar9 = DAT_00889a54;
  if (0 < iVar4) {
    do {
      pcVar9 = *(char **)(pcVar9 + 0x104);
      iVar4 = iVar4 + -1;
    } while (BEA_LOOP_GUARD((iVar4 != 0)));
  }
  cVar2 = *pcVar9;
  pcVar5 = pcVar9;
  pcVar10 = pcVar9;
  while (BEA_LOOP_GUARD((cVar2 != '\0'))) {
    if (cVar2 == '\\') {
      pcVar10 = pcVar5;
    }
    pcVar1 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar1;
  }
  uVar6 = 0xffffffff;
  pcVar5 = pcVar10 + 1;
  do {
    pcVar10 = pcVar5;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar10;
  } while (BEA_LOOP_GUARD((cVar2 != '\0')));
  uVar6 = ~uVar6;
  pcVar5 = pcVar10 + -uVar6;
  pcVar10 = param_2;
  for (uVar7 = uVar6 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar7 = uVar6 & 3; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar10 = pcVar10 + 1;
  }
  if ((DAT_00889a58 == pcVar9) &&
     (uVar6 = CONCAT31((int3)(uVar6 >> 8),DAT_00889a50), DAT_00889a50 != '\0')) {
    uVar7 = 0xffffffff;
    uVar6 = 0;
    pcVar9 = s__playing__00630a7c;
    do {
      pcVar5 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar5 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar5;
    } while (BEA_LOOP_GUARD((cVar2 != '\0')));
    uVar7 = ~uVar7;
    iVar4 = -1;
    do {
      pcVar9 = param_2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = param_2 + 1;
      cVar2 = *param_2;
      param_2 = pcVar9;
    } while (BEA_LOOP_GUARD((cVar2 != '\0')));
    pcVar5 = pcVar5 + -uVar7;
    pcVar9 = pcVar9 + -1;
    for (uVar8 = uVar7 >> 2; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar7 & 3; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  return uVar6;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bba80, ap_004bba80));
