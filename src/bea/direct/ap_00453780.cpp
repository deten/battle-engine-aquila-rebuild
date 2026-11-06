// auto-ported from 00453780_FUN_00453780.c (FUN_00453780, 487 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (7 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00677d70 GLOBAL_AT(int, 0x00677d70)
#define DAT_00677af0 GLOBAL_AT(int, 0x00677af0)
#define DAT_00888ff8 GLOBAL_AT(int, 0x00888ff8)
#define DAT_00889024 GLOBAL_AT(char, 0x00889024)
#define DAT_006778d4 GLOBAL_AT(undefined4, 0x006778d4)
#define DAT_008892dc GLOBAL_AT(undefined4, 0x008892dc)
#define DAT_00889025 GLOBAL_AT(char, 0x00889025)
#define PTR_DAT_006290b0 GLOBAL_AT(void*, 0x006290b0)
typedef undefined1 * (BEA_CDECL* FUN_0042db10_t)(int, ...);
static const bea_guard<FUN_0042db10_t> FUN_0042db10 = {(FUN_0042db10_t)0x0042db10};

static void BEA_CDECL ap_00453780(int param_1)
{
  int *piVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  DAT_00677d70 = param_1;
  if (param_1 == 0) {
    return;
  }
  PTR_DAT_006290b0 = (undefined *)&DAT_00677af0;
  bVar4 = false;
  iVar7 = DAT_00888ff8;
  do {
    if (*(int *)(PTR_DAT_006290b0 + 4) == -1) {
      iVar8 = 0;
      PTR_DAT_006290b0 = (undefined *)&DAT_00677af0;
      if (0 < iVar7) {
        do {
          if ((&DAT_00889024)[iVar8] != '\0') {
            if (DAT_006778d4 != -1) {
              puVar6 = &DAT_006778d4;
              do {
                iVar7 = FUN_0042db10(*puVar6);
                if (iVar7 != 0) {
                  *(int *)(iVar7 + 8) = puVar6[1];
                  *(undefined4 *)(iVar7 + 0xc) = puVar6[2];
                  *(undefined4 *)(iVar7 + 0x10) = puVar6[3];
                  *(int *)(iVar7 + 8) = iVar8;
                }
                piVar1 = puVar6 + 8;
                puVar6 = puVar6 + 8;
                iVar7 = DAT_00888ff8;
              } while (BEA_LOOP_GUARD((*piVar1 != -1)));
            }
            do {
              iVar5 = iVar8 + 1;
              if (iVar7 <= iVar5) {
                if (DAT_008892dc == -1) {
                  return;
                }
                puVar6 = &DAT_008892dc;
                do {
                  puVar6[4] = 0xffffffff;
                  piVar1 = puVar6 + 8;
                  puVar6 = puVar6 + 8;
                } while (BEA_LOOP_GUARD((*piVar1 != -1)));
                return;
              }
              pcVar2 = &DAT_00889025 + iVar8;
              iVar8 = iVar5;
            } while (BEA_LOOP_GUARD((*pcVar2 == '\0')));
            if (DAT_006778d4 == -1) {
              return;
            }
            puVar6 = &DAT_006778d4;
            do {
              iVar7 = FUN_0042db10(*puVar6);
              if (iVar7 != 0) {
                *(int *)(iVar7 + 0x14) = puVar6[1];
                *(undefined4 *)(iVar7 + 0x18) = puVar6[2];
                *(undefined4 *)(iVar7 + 0x1c) = puVar6[3];
                *(int *)(iVar7 + 0x14) = iVar5;
              }
              piVar1 = puVar6 + 8;
              puVar6 = puVar6 + 8;
            } while (BEA_LOOP_GUARD((*piVar1 != -1)));
            return;
          }
          iVar8 = iVar8 + 1;
        } while (BEA_LOOP_GUARD((iVar8 < iVar7)));
      }
    }
    iVar8 = *(int *)(PTR_DAT_006290b0 + 4);
    while (BEA_LOOP_GUARD((iVar8 != -1))) {
      puVar6 = (undefined4 *)FUN_0042db10(iVar8);
      if (puVar6 != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)PTR_DAT_006290b0;
        puVar10 = puVar6;
        for (iVar7 = 8; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        if (puVar6[5] != -1) {
          bVar4 = true;
        }
      }
      iVar8 = *(int *)(PTR_DAT_006290b0 + 0x24);
      iVar7 = DAT_00888ff8;
      PTR_DAT_006290b0 = PTR_DAT_006290b0 + 0x20;
    }
    PTR_DAT_006290b0 = PTR_DAT_006290b0 + 0x20;
    bVar3 = 1 < param_1;
    param_1 = param_1 + -1;
  } while (BEA_LOOP_GUARD((bVar3)));
  if (bVar4) {
    return;
  }
  iVar8 = 0;
  if (iVar7 < 1) {
    return;
  }
  while (BEA_LOOP_GUARD(((&DAT_00889024)[iVar8] == '\0'))) {
    iVar8 = iVar8 + 1;
    if (iVar7 <= iVar8) {
      return;
    }
  }
  if (DAT_006778d4 == -1) {
    return;
  }
  puVar6 = &DAT_006778d4;
  do {
    iVar7 = FUN_0042db10(*puVar6);
    if (iVar7 != 0) {
      *(int *)(iVar7 + 0x14) = puVar6[1];
      *(undefined4 *)(iVar7 + 0x18) = puVar6[2];
      *(undefined4 *)(iVar7 + 0x1c) = puVar6[3];
      *(int *)(iVar7 + 0x14) = iVar8;
    }
    piVar1 = puVar6 + 8;
    puVar6 = puVar6 + 8;
  } while (BEA_LOOP_GUARD((*piVar1 != -1)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00453780, ap_00453780));
