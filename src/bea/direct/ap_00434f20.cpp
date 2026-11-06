// auto-ported from 00434f20_vslot1.c (CWeaponIconName::vslot1, 240 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008553e8 GLOBAL_AT(undefined4*, 0x008553e8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_00434f20(int this_, byte *param_1)
{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  uint32_t eax_in = 0;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;

  byte *pbVar9;
  bool bVar10;
  
  if (param_1 != (byte *)0x0) {
    puVar6 = (undefined4 *)*DAT_008553e8;
    DAT_008553e8[2] = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)*puVar6;
    }
    eax_in = 0;
    if (puVar6 != (undefined4 *)0x0) {
      do {
        pbVar9 = (byte *)*puVar6;
        pbVar4 = param_1;
        do {
          bVar2 = *pbVar4;
          bVar10 = bVar2 < *pbVar9;
          if (bVar2 != *pbVar9) {
LAB_00434f78:
            iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00434f7d;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar10 = bVar2 < pbVar9[1];
          if (bVar2 != pbVar9[1]) goto LAB_00434f78;
          pbVar4 = pbVar4 + 2;
          pbVar9 = pbVar9 + 2;
        } while (BEA_LOOP_GUARD((bVar2 != 0)));
        iVar5 = 0;
LAB_00434f7d:
        if (iVar5 == 0) {
          if (puVar6 == (undefined4 *)0x0) {
            return 0;
          }
          pcVar1 = (char *)(this_ + 8);
          if (pcVar1 == (char *)0x0) {
            return 0;
          }
          FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar6[1]));
          puVar6[1] = 0;
          iVar5 = 0;
          cVar3 = *pcVar1;
          while (BEA_LOOP_GUARD((cVar3 != '\0'))) {
            iVar8 = iVar5 + 1;
            iVar5 = iVar5 + 1;
            cVar3 = pcVar1[iVar8];
          }
          iVar5 = iVar5 + 1;
          uVar7 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar5), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x4ba));
          puVar6[1] = uVar7;
          iVar8 = 0;
          if (iVar5 < 1) {
            return 0;
          }
          do {
            *(char *)(puVar6[1] + iVar8) = pcVar1[iVar8];
            iVar8 = iVar8 + 1;
          } while (BEA_LOOP_GUARD((iVar8 < iVar5)));
          return iVar8;
        }
        puVar6 = *(undefined4 **)(DAT_008553e8[2] + 4);
        DAT_008553e8[2] = puVar6;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = (undefined4 *)*puVar6;
        }
        if (puVar6 == (undefined4 *)0x0) {
          return 0;
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00434f20, ap_00434f20));
