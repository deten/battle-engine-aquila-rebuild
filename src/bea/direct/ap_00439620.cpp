// auto-ported from 00439620_vslot1.c (CRoundMesh::vslot1, 240 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008553f0 GLOBAL_AT(undefined4*, 0x008553f0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_00439620(int this_, byte *param_1)
{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  uint32_t eax_in = 0;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;

  byte *pbVar10;
  bool bVar11;
  
  if (param_1 != (byte *)0x0) {
    piVar4 = (int *)*DAT_008553f0;
    DAT_008553f0[2] = (int)piVar4;
    if (piVar4 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar4;
    }
    eax_in = 0;
    if (iVar7 != 0) {
      do {
        pbVar10 = *(byte **)(iVar7 + 0x18);
        pbVar5 = param_1;
        do {
          bVar2 = *pbVar5;
          bVar11 = bVar2 < *pbVar10;
          if (bVar2 != *pbVar10) {
LAB_00439678:
            iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_0043967d;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar11 = bVar2 < pbVar10[1];
          if (bVar2 != pbVar10[1]) goto LAB_00439678;
          pbVar5 = pbVar5 + 2;
          pbVar10 = pbVar10 + 2;
        } while (BEA_LOOP_GUARD((bVar2 != 0)));
        iVar6 = 0;
LAB_0043967d:
        if (iVar6 == 0) {
          if (iVar7 == 0) {
            return 0;
          }
          pcVar1 = (char *)(this_ + 8);
          if (pcVar1 == (char *)0x0) {
            return 0;
          }
          FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(iVar7 + 0xc)));
          *(undefined4 *)(iVar7 + 0xc) = 0;
          iVar6 = 0;
          cVar3 = *pcVar1;
          while (BEA_LOOP_GUARD((cVar3 != '\0'))) {
            iVar9 = iVar6 + 1;
            iVar6 = iVar6 + 1;
            cVar3 = pcVar1[iVar9];
          }
          iVar6 = iVar6 + 1;
          uVar8 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar6), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x23c));
          *(undefined4 *)(iVar7 + 0xc) = uVar8;
          iVar9 = 0;
          if (iVar6 < 1) {
            return 0;
          }
          do {
            *(char *)(*(int *)(iVar7 + 0xc) + iVar9) = pcVar1[iVar9];
            iVar9 = iVar9 + 1;
          } while (BEA_LOOP_GUARD((iVar9 < iVar6)));
          return iVar9;
        }
        piVar4 = *(int **)(DAT_008553f0[2] + 4);
        DAT_008553f0[2] = (int)piVar4;
        if (piVar4 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar4;
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
BEA_HOOKS(BEA_HOOK(0x00439620, ap_00439620));
