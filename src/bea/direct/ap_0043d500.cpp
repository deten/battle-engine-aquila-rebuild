// auto-ported from 0043d500_vslot1.c (CComponentAttackPriority::vslot1, 158 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00855400 GLOBAL_AT(undefined4*, 0x00855400)

static undefined4 BEA_THISCALL ap_0043d500(int this_, byte *param_1)
{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint32_t eax_in = 0;
  byte *pbVar4;
  int iVar5;
  int iVar6;

  byte *pbVar7;
  bool bVar8;
  
  if (param_1 != (byte *)0x0) {
    piVar2 = (int *)*DAT_00855400;
    DAT_00855400[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar2;
    }
    eax_in = 0;
    if (iVar6 != 0) {
      do {
        pbVar7 = *(byte **)(iVar6 + 0xb0);
        pbVar4 = param_1;
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_0043d557:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0043d55c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_0043d557;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar5 = 0;
LAB_0043d55c:
        if (iVar5 == 0) {
          if (iVar6 == 0) {
            return 0;
          }
          uVar3 = *(undefined4 *)(this_ + 8);
          *(undefined4 *)(iVar6 + 0x164 + *(int *)(this_ + 0xc) * 4) = uVar3;
          return uVar3;
        }
        piVar2 = *(int **)(DAT_00855400[2] + 4);
        DAT_00855400[2] = (int)piVar2;
        if (piVar2 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar2;
        }
        if (iVar6 == 0) {
          return 0;
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043d500, ap_0043d500));
