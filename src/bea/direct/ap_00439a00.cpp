// auto-ported from 00439a00_vslot1.c (CRoundTreeCollision::vslot1, 156 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008553f0 GLOBAL_AT(undefined4*, 0x008553f0)

static undefined4 BEA_THISCALL ap_00439a00(int this_, byte *param_1)
{
  byte bVar1;
  int *piVar2;
  uint32_t eax_in = 0;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;

  byte *pbVar7;
  bool bVar8;
  
  if (param_1 != (byte *)0x0) {
    piVar2 = (int *)*DAT_008553f0;
    DAT_008553f0[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    eax_in = 0;
    if (iVar5 != 0) {
      do {
        pbVar7 = *(byte **)(iVar5 + 0x18);
        pbVar3 = param_1;
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00439a54:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00439a59;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00439a54;
          pbVar3 = pbVar3 + 2;
          pbVar7 = pbVar7 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar4 = 0;
LAB_00439a59:
        if (iVar4 == 0) {
          if (iVar5 == 0) {
            return 0;
          }
          uVar6 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x4);
          *(undefined4 *)(iVar5 + 0xa4) = uVar6;
          return uVar6;
        }
        piVar2 = *(int **)(DAT_008553f0[2] + 4);
        DAT_008553f0[2] = (int)piVar2;
        if (piVar2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar2;
        }
        if (iVar5 == 0) {
          return 0;
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00439a00, ap_00439a00));
