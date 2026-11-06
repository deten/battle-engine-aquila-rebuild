// auto-ported from 0043db90_vslot1.c (CComponentBasedOn::vslot1, 292 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComponentBasedOn;
#define DAT_00855400 GLOBAL_AT(undefined4*, 0x00855400)
typedef uint32_t (BEA_THISCALL* FUN_00433390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00433390_t> FUN_00433390 = {(FUN_00433390_t)0x00433390};

static undefined4 BEA_THISCALL ap_0043db90(CComponentBasedOn * this_, byte *param_1)
{
  byte bVar1;
  CComponentBasedOn CVar2;
  int *piVar3;
  uint32_t eax_in = 0;
  byte *pbVar4;
  int iVar5;
  void *this_00;
  CComponentBasedOn *pCVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  CComponentBasedOn *pCVar10;
  bool bVar11;
  
  if (param_1 != (byte *)0x0) {
    piVar3 = (int *)*DAT_00855400;
    DAT_00855400[2] = (int)piVar3;
    if (piVar3 == (int *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*piVar3;
    }
    eax_in = 0;
    if (this_00 != (void *)0x0) {
      do {
        pbVar9 = *(byte **)((int)this_00 + 0xb0);
        pbVar4 = param_1;
        do {
          bVar1 = *pbVar4;
          bVar11 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_0043dbed:
            iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_0043dbf2;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar11 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_0043dbed;
          pbVar4 = pbVar4 + 2;
          pbVar9 = pbVar9 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar5 = 0;
LAB_0043dbf2:
        if (iVar5 == 0) {
          if (this_00 == (void *)0x0) {
            return 0;
          }
          if (this_ + 8 != (CComponentBasedOn *)0x0) {
            piVar3 = (int *)*DAT_00855400;
            DAT_00855400[2] = (int)piVar3;
            if (piVar3 == (int *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *piVar3;
            }
            while (BEA_LOOP_GUARD((iVar5 != 0))) {
              pCVar10 = *(CComponentBasedOn **)(iVar5 + 0xb0);
              pCVar6 = this_ + 8;
              do {
                CVar2 = *pCVar6;
                bVar11 = (byte)CVar2 < (byte)*pCVar10;
                if (CVar2 != *pCVar10) {
LAB_0043dc6e:
                  iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_0043dc73;
                }
                if (CVar2 == (CComponentBasedOn)0x0) break;
                CVar2 = pCVar6[1];
                bVar11 = (byte)CVar2 < (byte)pCVar10[1];
                if (CVar2 != pCVar10[1]) goto LAB_0043dc6e;
                pCVar6 = pCVar6 + 2;
                pCVar10 = pCVar10 + 2;
              } while (BEA_LOOP_GUARD((CVar2 != (CComponentBasedOn)0x0)));
              iVar7 = 0;
LAB_0043dc73:
              if (iVar7 == 0) {
                uVar8 = FUN_00433390(bea_arg(this_00), bea_arg(iVar5));
                return uVar8;
              }
              piVar3 = *(int **)(DAT_00855400[2] + 4);
              DAT_00855400[2] = (int)piVar3;
              if (piVar3 == (int *)0x0) {
                iVar5 = 0;
              }
              else {
                iVar5 = *piVar3;
              }
            }
          }
          uVar8 = FUN_00433390(bea_arg(this_00), bea_arg(0));
          return uVar8;
        }
        piVar3 = *(int **)(DAT_00855400[2] + 4);
        DAT_00855400[2] = (int)piVar3;
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
BEA_HOOKS(BEA_HOOK(0x0043db90, ap_0043db90));
