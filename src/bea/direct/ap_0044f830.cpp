// auto-ported from 0044f830_FUN_0044f830.c (FUN_0044f830, 607 bytes) by tools/autoport.py
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

static undefined4 BEA_CDECL ap_0044f830(int param_1, int param_2)
{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  
  DAT_0089da3c = DAT_0089da34;
  if (DAT_0089da34 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*DAT_0089da34;
  }
  while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
    if (DAT_0089d94c == *piVar2) {
      if ((piVar2 != (int *)0x0) &&
         (piVar2 = (int *)FUN_00406d20(bea_arg(&DAT_0089da34)), piVar2 != (int *)0x0)) goto LAB_0044f893;
      break;
    }
    DAT_0089da3c = (undefined4 *)DAT_0089da3c[1];
    if (DAT_0089da3c == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*DAT_0089da3c;
    }
  }
  goto LAB_0044f86f;
LAB_0044f893:
  while (BEA_LOOP_GUARD((DAT_0089d94c != *piVar2))) {
    piVar2 = (int *)FUN_00406d30(bea_arg(&DAT_0089da34));
    if (piVar2 == (int *)0x0) {
      uVar3 = FUN_004f7bf0(bea_arg(s_Unknown_Weapon_00628ec0));
      return uVar3;
    }
  }
  if (piVar2 != (int *)0x0) {
    iVar9 = 0;
    puVar4 = (undefined4 *)FUN_00406d20(bea_arg(piVar2 + 5));
    if (puVar4 != (undefined4 *)0x0) {
      while (BEA_LOOP_GUARD((iVar9 != param_1))) {
        iVar9 = iVar9 + 1;
        puVar4 = *(undefined4 **)(piVar2[7] + 4);
        piVar2[7] = (int)puVar4;
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
      if ((byte *)*puVar4 != (byte *)0x0) {
        _DAT_006602a8 = DAT_006602a0;
        if (DAT_006602a0 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *DAT_006602a0;
        }
        if (iVar9 != 0) {
LAB_0044f930:
          pbVar5 = *(byte **)(iVar9 + 0xa8);
          pbVar8 = (byte *)*puVar4;
          do {
            bVar1 = *pbVar5;
            bVar10 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_0044f95c:
              iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_0044f961;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar10 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_0044f95c;
            pbVar5 = pbVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (BEA_LOOP_GUARD((bVar1 != 0)));
          iVar6 = 0;
LAB_0044f961:
          if (iVar6 != 0) {
            _DAT_006602a8 = (int *)_DAT_006602a8[1];
            if (_DAT_006602a8 == (int *)0x0) {
              iVar9 = 0;
            }
            else {
              iVar9 = *_DAT_006602a8;
            }
            if (iVar9 == 0) {
              uVar3 = FUN_004f7bf0(bea_arg(s_Unknown_Weapon_00628ec0));
              return uVar3;
            }
            goto LAB_0044f930;
          }
          if (iVar9 == 0) goto LAB_0044f86f;
          puVar4 = *(undefined4 **)(iVar9 + 0x50);
          iVar6 = 0;
          *(undefined4 **)(iVar9 + 0x58) = puVar4;
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = (undefined4 *)*puVar4;
          }
          if (puVar4 == (undefined4 *)0x0) goto LAB_0044f86f;
          while (BEA_LOOP_GUARD((iVar6 != param_2))) {
            iVar6 = iVar6 + 1;
            puVar4 = *(undefined4 **)(*(int *)(iVar9 + 0x58) + 4);
            *(undefined4 **)(iVar9 + 0x58) = puVar4;
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
            if (puVar4 != (undefined4 *)0x0) {
              do {
                pbVar8 = (byte *)*puVar4;
                pbVar7 = pbVar5;
                do {
                  bVar1 = *pbVar7;
                  bVar10 = bVar1 < *pbVar8;
                  if (bVar1 != *pbVar8) {
LAB_0044fa3a:
                    iVar9 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                    goto LAB_0044fa3f;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar10 = bVar1 < pbVar8[1];
                  if (bVar1 != pbVar8[1]) goto LAB_0044fa3a;
                  pbVar7 = pbVar7 + 2;
                  pbVar8 = pbVar8 + 2;
                } while (BEA_LOOP_GUARD((bVar1 != 0)));
                iVar9 = 0;
LAB_0044fa3f:
                if (iVar9 == 0) {
                  if (puVar4 != (undefined4 *)0x0) {
                    uVar3 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(puVar4[0xf]));
                    return uVar3;
                  }
                  break;
                }
                puVar4 = *(undefined4 **)(DAT_008553e8[2] + 4);
                DAT_008553e8[2] = puVar4;
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
              } while(BEA_LOOP_GUARD(( true )));
            }
          }
        }
      }
    }
  }
LAB_0044f86f:
  uVar3 = FUN_004f7bf0(bea_arg(s_Unknown_Weapon_00628ec0));
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044f830, ap_0044f830));
