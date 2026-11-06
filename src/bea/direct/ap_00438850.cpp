// auto-ported from 00438850_vslot1.c (CRoundBeam::vslot1, 153 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008553f0 GLOBAL_AT(undefined4*, 0x008553f0)

static undefined4 BEA_STDCALL ap_00438850(byte *param_1)
{
  byte bVar1;
  int *piVar2;
  uint32_t eax_in = 0;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
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
        pbVar6 = *(byte **)(iVar5 + 0x18);
        pbVar3 = param_1;
        do {
          bVar1 = *pbVar3;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_004388a8:
            iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_004388ad;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_004388a8;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar4 = 0;
LAB_004388ad:
        if (iVar4 == 0) {
          if (iVar5 == 0) {
            return 0;
          }
          *(undefined4 *)(iVar5 + 0x50) = 1;
          return 0;
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
BEA_HOOKS(BEA_HOOK(0x00438850, ap_00438850));
