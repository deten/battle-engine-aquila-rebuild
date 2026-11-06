// auto-ported from 00434e70_vslot1.c (CWeaponAllowMovement::vslot1, 169 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008553e8 GLOBAL_AT(undefined4*, 0x008553e8)

static undefined4 BEA_THISCALL ap_00434e70(int this_, byte *param_1)
{
  byte bVar1;
  uint32_t eax_in = 0;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;

  byte *pbVar5;
  bool bVar6;
  
  if (param_1 != (byte *)0x0) {
    puVar4 = (undefined4 *)*DAT_008553e8;
    DAT_008553e8[2] = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
    eax_in = 0;
    if (puVar4 != (undefined4 *)0x0) {
      do {
        pbVar5 = (byte *)*puVar4;
        pbVar2 = param_1;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00434ec3:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00434ec8;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00434ec3;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar3 = 0;
LAB_00434ec8:
        if (iVar3 == 0) {
          if (puVar4 == (undefined4 *)0x0) {
            return 0;
          }
          iVar3 = *(int *)(this_ + 8);
          if (iVar3 == 0) {
            puVar4[0xb] = 0;
            return 0;
          }
          puVar4[0xb] = 1;
          return iVar3;
        }
        puVar4 = *(undefined4 **)(DAT_008553e8[2] + 4);
        DAT_008553e8[2] = puVar4;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = (undefined4 *)*puVar4;
        }
        if (puVar4 == (undefined4 *)0x0) {
          return 0;
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00434e70, ap_00434e70));
