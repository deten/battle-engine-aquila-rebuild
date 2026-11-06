// auto-ported from 00435b50_vslot1.c (CWeaponLaunchAngle::vslot1, 313 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CWeaponLaunchAngle;
#define DAT_008553ec GLOBAL_AT(undefined4*, 0x008553ec)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 BEA_THISCALL ap_00435b50(CWeaponLaunchAngle * this_, byte *param_1)
{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint32_t eax_in = 0;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  bool bVar11;
  int local_8;
  
  if (param_1 != (byte *)0x0) {
    piVar2 = (int *)*DAT_008553ec;
    DAT_008553ec[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    eax_in = 0;
    if (iVar7 != 0) {
      do {
        pbVar10 = *(byte **)(iVar7 + 0x30);
        pbVar5 = param_1;
        do {
          bVar1 = *pbVar5;
          bVar11 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_00435bae:
            iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00435bb3;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar11 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_00435bae;
          pbVar5 = pbVar5 + 2;
          pbVar10 = pbVar10 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar6 = 0;
LAB_00435bb3:
        if (iVar6 == 0) {
          if (iVar7 == 0) {
            return 0;
          }
          uVar3 = *(undefined4 *)(this_ + 0x10);
          uVar4 = *(undefined4 *)(this_ + 0xc);
          local_8 = (int)(longlong)ROUND(*(float *)(this_ + 8));
          if (*(int *)(iVar7 + 0x68) < local_8) {
            do {
              puVar8 = (undefined4 *)
                       FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x405));
              *puVar8 = 0;
              puVar8[1] = 0;
              FUN_004e5b20(bea_arg((void *)(iVar7 + 0x5c)), bea_arg(puVar8));
            } while (BEA_LOOP_GUARD((*(int *)(iVar7 + 0x68) < local_8)));
          }
          puVar8 = *(undefined4 **)(iVar7 + 0x5c);
          iVar7 = 0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            puVar9 = (undefined4 *)*puVar8;
          }
          if (puVar9 == (undefined4 *)0x0) {
            return puVar8;
          }
          do {
            if (iVar7 == local_8 + -1) {
              *puVar9 = uVar4;
              puVar9[1] = uVar3;
              return uVar4;
            }
            puVar8 = (undefined4 *)puVar8[1];
            iVar7 = iVar7 + 1;
            if (puVar8 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              puVar9 = (undefined4 *)*puVar8;
            }
          } while (BEA_LOOP_GUARD((puVar9 != (undefined4 *)0x0)));
          return puVar8;
        }
        piVar2 = *(int **)(DAT_008553ec[2] + 4);
        DAT_008553ec[2] = (int)piVar2;
        if (piVar2 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar2;
        }
        if (iVar7 == 0) {
          return 0;
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00435b50, ap_00435b50));
