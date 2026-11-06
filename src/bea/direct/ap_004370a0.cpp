// auto-ported from 004370a0_vslot1.c (CWeaponRound::vslot1, 286 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CWeaponRound;
#define DAT_008553ec GLOBAL_AT(undefined4*, 0x008553ec)
#define DAT_008553f0 GLOBAL_AT(undefined4*, 0x008553f0)
typedef uint32_t (BEA_THISCALL* FUN_005113f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005113f0_t> FUN_005113f0 = {(FUN_005113f0_t)0x005113f0};

static undefined4 BEA_THISCALL ap_004370a0(CWeaponRound * this_, byte *param_1)
{
  byte bVar1;
  CWeaponRound CVar2;
  int *piVar3;
  uint32_t eax_in = 0;
  byte *pbVar4;
  int iVar5;
  void *this_00;
  CWeaponRound *pCVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  CWeaponRound *pCVar10;
  bool bVar11;
  
  if (param_1 != (byte *)0x0) {
    piVar3 = (int *)*DAT_008553ec;
    DAT_008553ec[2] = (int)piVar3;
    if (piVar3 == (int *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*piVar3;
    }
    eax_in = 0;
    if (this_00 != (void *)0x0) {
      do {
        pbVar9 = *(byte **)((int)this_00 + 0x30);
        pbVar4 = param_1;
        do {
          bVar1 = *pbVar4;
          bVar11 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_004370fa:
            iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_004370ff;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar11 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_004370fa;
          pbVar4 = pbVar4 + 2;
          pbVar9 = pbVar9 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar5 = 0;
LAB_004370ff:
        if (iVar5 == 0) {
          if (this_00 == (void *)0x0) {
            return 0;
          }
          if (this_ + 8 != (CWeaponRound *)0x0) {
            iVar5 = 0;
            piVar3 = (int *)*DAT_008553f0;
            DAT_008553f0[2] = (int)piVar3;
            if (piVar3 == (int *)0x0) {
              iVar7 = 0;
            }
            else {
              iVar7 = *piVar3;
            }
            while (BEA_LOOP_GUARD((iVar7 != 0))) {
              pCVar10 = *(CWeaponRound **)(iVar7 + 0x18);
              pCVar6 = this_ + 8;
              do {
                CVar2 = *pCVar6;
                bVar11 = (byte)CVar2 < (byte)*pCVar10;
                if (CVar2 != *pCVar10) {
LAB_00437178:
                  iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_0043717d;
                }
                if (CVar2 == (CWeaponRound)0x0) break;
                CVar2 = pCVar6[1];
                bVar11 = (byte)CVar2 < (byte)pCVar10[1];
                if (CVar2 != pCVar10[1]) goto LAB_00437178;
                pCVar6 = pCVar6 + 2;
                pCVar10 = pCVar10 + 2;
              } while (BEA_LOOP_GUARD((CVar2 != (CWeaponRound)0x0)));
              iVar7 = 0;
LAB_0043717d:
              if (iVar7 == 0) {
                uVar8 = FUN_005113f0(bea_arg(this_00), bea_arg(iVar5));
                return uVar8;
              }
              iVar5 = iVar5 + 1;
              piVar3 = *(int **)(DAT_008553f0[2] + 4);
              DAT_008553f0[2] = (int)piVar3;
              if (piVar3 == (int *)0x0) {
                iVar7 = 0;
              }
              else {
                iVar7 = *piVar3;
              }
            }
          }
          uVar8 = FUN_005113f0(bea_arg(this_00), bea_arg(0xffffffff));
          return uVar8;
        }
        piVar3 = *(int **)(DAT_008553ec[2] + 4);
        DAT_008553ec[2] = (int)piVar3;
        if (piVar3 == (int *)0x0) {
          this_00 = (void *)0x0;
        }
        else {
          this_00 = (void *)*piVar3;
        }
        if (this_00 == (void *)0x0) {
          return 0;
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004370a0, ap_004370a0));
