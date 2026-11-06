// auto-ported from 00436fd0_vslot1.c (CWeaponMaxLocks::vslot1, 168 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008553ec GLOBAL_AT(undefined4*, 0x008553ec)

static undefined4 BEA_THISCALL ap_00436fd0(int this_, byte *param_1)
{
  byte bVar1;
  int *piVar2;
  uint32_t eax_in = 0;
  byte *pbVar3;
  int iVar4;
  int iVar5;

  byte *pbVar6;
  bool bVar7;
  undefined4 local_8;
  
  if (param_1 != (byte *)0x0) {
    piVar2 = (int *)*DAT_008553ec;
    DAT_008553ec[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    eax_in = 0;
    if (iVar5 != 0) {
      do {
        pbVar6 = *(byte **)(iVar5 + 0x30);
        pbVar3 = param_1;
        do {
          bVar1 = *pbVar3;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00437027:
            iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_0043702c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00437027;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar4 = 0;
LAB_0043702c:
        if (iVar4 == 0) {
          if (iVar5 == 0) {
            return 0;
          }
          local_8 = (undefined4)(longlong)ROUND(*(float *)(this_ + 8));
          *(undefined4 *)(iVar5 + 0x90) = local_8;
          return 0;
        }
        piVar2 = *(int **)(DAT_008553ec[2] + 4);
        DAT_008553ec[2] = (int)piVar2;
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
BEA_HOOKS(BEA_HOOK(0x00436fd0, ap_00436fd0));
