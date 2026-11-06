// auto-ported from 0044f530_FUN_0044f530.c (FUN_0044f530, 758 bytes) by tools/autoport.py
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
#define DAT_008553e8 GLOBAL_AT(undefined4*, 0x008553e8)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define s_Unknown_Weapon_00628ec0 ((char*)0x00628ec0)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};

static undefined4 BEA_CDECL ap_0044f530(int param_1, int param_2)
{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;
  
  DAT_0089da3c = DAT_0089da34;
  if (DAT_0089da34 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*DAT_0089da34;
  }
  if (piVar2 != (int *)0x0) {
    while (BEA_LOOP_GUARD((DAT_0089d94c != *piVar2))) {
      DAT_0089da3c = (undefined4 *)DAT_0089da3c[1];
      if (DAT_0089da3c == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)*DAT_0089da3c;
      }
      if (piVar2 == (int *)0x0) {
        uVar3 = FUN_004f7bf0(bea_arg(s_Unknown_Weapon_00628ec0));
        return uVar3;
      }
    }
    if ((piVar2 != (int *)0x0) &&
       (piVar2 = (int *)FUN_00406d20(bea_arg(&DAT_0089da34)), piVar2 != (int *)0x0)) {
      while (BEA_LOOP_GUARD((DAT_0089d94c != *piVar2))) {
        piVar2 = (int *)FUN_00406d30(bea_arg(&DAT_0089da34));
        if (piVar2 == (int *)0x0) {
          uVar3 = FUN_004f7bf0(bea_arg(s_Unknown_Weapon_00628ec0));
          return uVar3;
        }
      }
      if (piVar2 != (int *)0x0) {
        iVar8 = 0;
        puVar4 = (undefined4 *)FUN_00406d20(bea_arg(piVar2 + 5));
        if (puVar4 != (undefined4 *)0x0) {
          while (BEA_LOOP_GUARD((iVar8 != param_1))) {
            iVar8 = iVar8 + 1;
            puVar4 = (undefined4 *)FUN_00406d30(bea_arg(piVar2 + 5));
            if (puVar4 == (undefined4 *)0x0) {
              uVar3 = FUN_004f7bf0(bea_arg(s_Unknown_Weapon_00628ec0));
              return uVar3;
            }
          }
          if ((byte *)*puVar4 != (byte *)0x0) {
            _DAT_006602a8 = DAT_006602a0;
            if (DAT_006602a0 == (int *)0x0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *DAT_006602a0;
            }
            if (iVar8 != 0) {
              do {
                pbVar5 = *(byte **)(iVar8 + 0xa8);
                pbVar9 = (byte *)*puVar4;
                do {
                  bVar1 = *pbVar5;
                  bVar10 = bVar1 < *pbVar9;
                  if (bVar1 != *pbVar9) {
LAB_0044f664:
                    iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                    goto LAB_0044f669;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar5[1];
                  bVar10 = bVar1 < pbVar9[1];
                  if (bVar1 != pbVar9[1]) goto LAB_0044f664;
                  pbVar5 = pbVar5 + 2;
                  pbVar9 = pbVar9 + 2;
                } while (BEA_LOOP_GUARD((bVar1 != 0)));
                iVar6 = 0;
LAB_0044f669:
                if (iVar6 == 0) {
                  if (iVar8 == 0) break;
                  pbVar5 = *(byte **)(iVar8 + 0x60);
                  if (pbVar5 != (byte *)0x0) {
                    if (param_2 == 0) {
                      if (pbVar5 == (byte *)0x0) break;
                      puVar4 = (undefined4 *)*DAT_008553e8;
                      DAT_008553e8[2] = puVar4;
                      if (puVar4 == (undefined4 *)0x0) {
                        puVar4 = (undefined4 *)0x0;
                      }
                      else {
                        puVar4 = (undefined4 *)*puVar4;
                      }
                      if (puVar4 != (undefined4 *)0x0) goto LAB_0044f6df;
                      break;
                    }
                    param_2 = param_2 + -1;
                  }
                  puVar4 = *(undefined4 **)(iVar8 + 0x40);
                  iVar6 = 0;
                  *(undefined4 **)(iVar8 + 0x48) = puVar4;
                  if (puVar4 == (undefined4 *)0x0) {
                    puVar4 = (undefined4 *)0x0;
                  }
                  else {
                    puVar4 = (undefined4 *)*puVar4;
                  }
                  if (puVar4 != (undefined4 *)0x0) goto LAB_0044f76d;
                  break;
                }
                _DAT_006602a8 = (int *)_DAT_006602a8[1];
                if (_DAT_006602a8 == (int *)0x0) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = *_DAT_006602a8;
                }
                if (iVar8 == 0) {
                  uVar3 = FUN_004f7bf0(bea_arg(s_Unknown_Weapon_00628ec0));
                  return uVar3;
                }
              } while(BEA_LOOP_GUARD(( true )));
            }
          }
        }
      }
    }
  }
  goto LAB_0044f814;
LAB_0044f6df:
  pbVar9 = (byte *)*puVar4;
  pbVar7 = pbVar5;
  do {
    bVar1 = *pbVar7;
    bVar10 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_0044f70b:
      iVar8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0044f710;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar10 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_0044f70b;
    pbVar7 = pbVar7 + 2;
    pbVar9 = pbVar9 + 2;
  } while (BEA_LOOP_GUARD((bVar1 != 0)));
  iVar8 = 0;
LAB_0044f710:
  if (iVar8 == 0) goto LAB_0044f737;
  puVar4 = (undefined4 *)FUN_00406d30(bea_arg(DAT_008553e8));
  if (puVar4 == (undefined4 *)0x0) {
    uVar3 = FUN_004f7bf0(bea_arg(s_Unknown_Weapon_00628ec0));
    return uVar3;
  }
  goto LAB_0044f6df;
LAB_0044f737:
  if (puVar4 != (undefined4 *)0x0) {
    uVar3 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(puVar4[0xf]));
    return uVar3;
  }
  goto LAB_0044f814;
LAB_0044f76d:
  while (BEA_LOOP_GUARD((iVar6 != param_2))) {
    iVar6 = iVar6 + 1;
    puVar4 = *(undefined4 **)(*(int *)(iVar8 + 0x48) + 4);
    *(undefined4 **)(iVar8 + 0x48) = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
    if (puVar4 == (undefined4 *)0x0) {
      uVar3 = FUN_004f7bf0(bea_arg(s_Unknown_Weapon_00628ec0));
      return uVar3;
    }
  }
  pbVar5 = (byte *)*puVar4;
  if (pbVar5 != (byte *)0x0) {
    puVar4 = (undefined4 *)*DAT_008553e8;
    DAT_008553e8[2] = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
    while (BEA_LOOP_GUARD((puVar4 != (undefined4 *)0x0))) {
      pbVar9 = (byte *)*puVar4;
      pbVar7 = pbVar5;
      do {
        bVar1 = *pbVar7;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_0044f7e8:
          iVar8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0044f7ed;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_0044f7e8;
        pbVar7 = pbVar7 + 2;
        pbVar9 = pbVar9 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar8 = 0;
LAB_0044f7ed:
      if (iVar8 == 0) goto LAB_0044f737;
      puVar4 = *(undefined4 **)(DAT_008553e8[2] + 4);
      DAT_008553e8[2] = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)*puVar4;
      }
    }
  }
LAB_0044f814:
  uVar3 = FUN_004f7bf0(bea_arg(s_Unknown_Weapon_00628ec0));
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044f530, ap_0044f530));
