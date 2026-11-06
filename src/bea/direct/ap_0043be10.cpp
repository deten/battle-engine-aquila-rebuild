// auto-ported from 0043be10_vslot1.c (CFeatureMesh::vslot1, 240 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00855404 GLOBAL_AT(undefined4*, 0x00855404)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_0043be10(int this_, byte *param_1)
{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  uint32_t eax_in = 0;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int iVar8;

  byte *pbVar9;
  bool bVar10;
  
  if (param_1 != (byte *)0x0) {
    puVar4 = (undefined4 *)*DAT_00855404;
    DAT_00855404[2] = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)*puVar4;
    }
    eax_in = 0;
    if (piVar7 != (int *)0x0) {
      do {
        pbVar9 = (byte *)piVar7[8];
        pbVar5 = param_1;
        do {
          bVar2 = *pbVar5;
          bVar10 = bVar2 < *pbVar9;
          if (bVar2 != *pbVar9) {
LAB_0043be68:
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_0043be6d;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar10 = bVar2 < pbVar9[1];
          if (bVar2 != pbVar9[1]) goto LAB_0043be68;
          pbVar5 = pbVar5 + 2;
          pbVar9 = pbVar9 + 2;
        } while (BEA_LOOP_GUARD((bVar2 != 0)));
        iVar6 = 0;
LAB_0043be6d:
        if (iVar6 == 0) {
          if (piVar7 == (int *)0x0) {
            return 0;
          }
          pcVar1 = (char *)(this_ + 8);
          if (pcVar1 == (char *)0x0) {
            return 0;
          }
          FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*piVar7));
          *piVar7 = 0;
          iVar6 = 0;
          cVar3 = *pcVar1;
          while (BEA_LOOP_GUARD((cVar3 != '\0'))) {
            iVar8 = iVar6 + 1;
            iVar6 = iVar6 + 1;
            cVar3 = pcVar1[iVar8];
          }
          iVar6 = iVar6 + 1;
          iVar8 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar6), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x139));
          *piVar7 = iVar8;
          iVar8 = 0;
          if (iVar6 < 1) {
            return 0;
          }
          do {
            *(char *)(*piVar7 + iVar8) = pcVar1[iVar8];
            iVar8 = iVar8 + 1;
          } while (BEA_LOOP_GUARD((iVar8 < iVar6)));
          return iVar8;
        }
        puVar4 = *(undefined4 **)(DAT_00855404[2] + 4);
        DAT_00855404[2] = puVar4;
        if (puVar4 == (undefined4 *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)*puVar4;
        }
        if (piVar7 == (int *)0x0) {
          return 0;
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043be10, ap_0043be10));
