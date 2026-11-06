// auto-ported from 0044eb30_FUN_0044eb30.c (FUN_0044eb30, 421 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0089da3c GLOBAL_AT(undefined4*, 0x0089da3c)
#define DAT_0089da34 GLOBAL_AT(undefined4*, 0x0089da34)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)
#define _DAT_006602a8 GLOBAL_AT(undefined4*, 0x006602a8)
#define DAT_006602a0 GLOBAL_AT(undefined4*, 0x006602a0)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define s_Unknown_Configuration_00628ea8 ((char*)0x00628ea8)
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};

static undefined4 BEA_CDECL ap_0044eb30(int param_1)
{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  
  DAT_0089da3c = DAT_0089da34;
  if (DAT_0089da34 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)*DAT_0089da34;
  }
  while (BEA_LOOP_GUARD((piVar6 != (int *)0x0))) {
    if (DAT_0089d94c == *piVar6) {
      if (piVar6 != (int *)0x0) {
        puVar3 = (undefined4 *)piVar6[5];
        iVar7 = 0;
        piVar6[7] = (int)puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)*puVar3;
        }
        if (puVar3 != (undefined4 *)0x0) goto LAB_0044eb9c;
      }
      break;
    }
    DAT_0089da3c = (undefined4 *)DAT_0089da3c[1];
    if (DAT_0089da3c == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)*DAT_0089da3c;
    }
  }
  goto switchD_0044ec6a_default;
LAB_0044eb9c:
  while (BEA_LOOP_GUARD((iVar7 != param_1))) {
    iVar7 = iVar7 + 1;
    puVar3 = *(undefined4 **)(piVar6[7] + 4);
    piVar6[7] = (int)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)*puVar3;
    }
    if (puVar3 == (undefined4 *)0x0) {
      uVar2 = FUN_004f7bf0(bea_arg(s_Unknown_Configuration_00628ea8));
      return uVar2;
    }
  }
  if ((byte *)*puVar3 != (byte *)0x0) {
    _DAT_006602a8 = DAT_006602a0;
    if (DAT_006602a0 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *DAT_006602a0;
    }
    if (iVar7 != 0) {
      do {
        pbVar4 = *(byte **)(iVar7 + 0xa8);
        pbVar8 = (byte *)*puVar3;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_0044ec1d:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0044ec22;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_0044ec1d;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar5 = 0;
LAB_0044ec22:
        if (iVar5 == 0) {
          if (iVar7 != 0) {
            switch(*(undefined4 *)(iVar7 + 0xa4)) {
            case 1:
              uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x97d47d6b));
              return uVar2;
            case 2:
              uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xe3fcbf7c));
              return uVar2;
            case 3:
              uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3025018d));
              return uVar2;
            case 4:
              uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x7c4d439e));
              return uVar2;
            case 5:
              uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xc87585af));
              return uVar2;
            }
          }
          break;
        }
        _DAT_006602a8 = (int *)_DAT_006602a8[1];
        if (_DAT_006602a8 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *_DAT_006602a8;
        }
        if (iVar7 == 0) {
          uVar2 = FUN_004f7bf0(bea_arg(s_Unknown_Configuration_00628ea8));
          return uVar2;
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
  }
switchD_0044ec6a_default:
  uVar2 = FUN_004f7bf0(bea_arg(s_Unknown_Configuration_00628ea8));
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044eb30, ap_0044eb30));
