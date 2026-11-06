// auto-ported from 00435a00_vslot1.c (CWeaponLaunchSequence::vslot1, 288 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008553ec GLOBAL_AT(undefined4*, 0x008553ec)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 BEA_THISCALL ap_00435a00(int this_, byte *param_1)
{
  byte bVar1;
  uint32_t eax_in = 0;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;

  byte *pbVar7;
  bool bVar8;
  int local_8;
  
  if (param_1 != (byte *)0x0) {
    piVar6 = (int *)*DAT_008553ec;
    DAT_008553ec[2] = (int)piVar6;
    if (piVar6 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar6;
    }
    eax_in = 0;
    if (iVar4 != 0) {
      do {
        pbVar7 = *(byte **)(iVar4 + 0x30);
        pbVar2 = param_1;
        do {
          bVar1 = *pbVar2;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00435a5b:
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00435a60;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00435a5b;
          pbVar2 = pbVar2 + 2;
          pbVar7 = pbVar7 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar3 = 0;
LAB_00435a60:
        if (iVar3 == 0) {
          if (iVar4 == 0) {
            return 0;
          }
          local_8 = (int)(longlong)ROUND(*(float *)(this_ + 0xc));
          iVar3 = local_8;
          local_8 = (int)(longlong)ROUND(*(float *)(this_ + 8));
          if (*(int *)(iVar4 + 0x58) < local_8) {
            do {
              puVar5 = (undefined4 *)
                       FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x3e5));
              *puVar5 = 0;
              FUN_004e5b20(bea_arg((void *)(iVar4 + 0x4c)), bea_arg(puVar5));
            } while (BEA_LOOP_GUARD((*(int *)(iVar4 + 0x58) < local_8)));
          }
          piVar6 = *(int **)(iVar4 + 0x4c);
          iVar4 = 0;
          if (piVar6 == (int *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = (undefined4 *)*piVar6;
          }
          if (puVar5 == (undefined4 *)0x0) {
            return piVar6;
          }
          do {
            if (iVar4 == local_8 + -1) {
              *puVar5 = iVar3;
              return piVar6;
            }
            piVar6 = (int *)piVar6[1];
            iVar4 = iVar4 + 1;
            if (piVar6 == (int *)0x0) {
              puVar5 = (undefined4 *)0x0;
            }
            else {
              puVar5 = (undefined4 *)*piVar6;
            }
          } while (BEA_LOOP_GUARD((puVar5 != (undefined4 *)0x0)));
          return piVar6;
        }
        piVar6 = *(int **)(DAT_008553ec[2] + 4);
        DAT_008553ec[2] = (int)piVar6;
        if (piVar6 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar6;
        }
        if (iVar4 == 0) {
          return 0;
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00435a00, ap_00435a00));
