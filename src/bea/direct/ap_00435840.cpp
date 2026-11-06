// auto-ported from 00435840_vslot1.c (CWeaponBasedOn::vslot1, 378 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008553e8 GLOBAL_AT(undefined4*, 0x008553e8)

static undefined4 BEA_THISCALL ap_00435840(int this_, byte *param_1)
{
  byte bVar1;
  undefined4 uVar2;
  uint32_t eax_in = 0;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;

  byte *pbVar8;
  bool bVar9;
  
  if (param_1 != (byte *)0x0) {
    puVar5 = (undefined4 *)*DAT_008553e8;
    DAT_008553e8[2] = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
    eax_in = 0;
    if (puVar5 != (undefined4 *)0x0) {
      do {
        pbVar8 = (byte *)*puVar5;
        pbVar3 = param_1;
        do {
          bVar1 = *pbVar3;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_00435898:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0043589d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_00435898;
          pbVar3 = pbVar3 + 2;
          pbVar8 = pbVar8 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar4 = 0;
LAB_0043589d:
        if (iVar4 == 0) {
          if (puVar5 == (undefined4 *)0x0) {
            return 0;
          }
          if ((byte *)(this_ + 8) == (byte *)0x0) {
            return 0;
          }
          puVar6 = (undefined4 *)*DAT_008553e8;
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
          do {
            pbVar8 = (byte *)*puVar6;
            pbVar3 = (byte *)(this_ + 8);
            do {
              bVar1 = *pbVar3;
              bVar9 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_00435921:
                iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_00435926;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar9 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_00435921;
              pbVar3 = pbVar3 + 2;
              pbVar8 = pbVar8 + 2;
            } while (BEA_LOOP_GUARD((bVar1 != 0)));
            iVar4 = 0;
LAB_00435926:
            if (iVar4 == 0) {
              if (puVar6 == (undefined4 *)0x0) {
                return 0;
              }
              puVar5[9] = puVar6[9];
              puVar5[8] = puVar6[8];
              puVar5[2] = puVar6[2];
              puVar5[10] = puVar6[10];
              puVar5[0xd] = puVar6[0xd];
              puVar5[0xb] = puVar6[0xb];
              puVar5[0xe] = puVar6[0xe];
              puVar5[0xc] = puVar6[0xc];
              puVar5[0xf] = puVar6[0xf];
              puVar7 = puVar5 + 3;
              iVar4 = 5;
              do {
                *puVar7 = *(undefined4 *)(((int)puVar6 - (int)puVar5) + (int)puVar7);
                puVar7 = puVar7 + 1;
                iVar4 = iVar4 + -1;
              } while (BEA_LOOP_GUARD((iVar4 != 0)));
              puVar5[0x10] = puVar6[0x10];
              puVar5[0x11] = puVar6[0x11];
              uVar2 = puVar6[0x12];
              puVar5[0x12] = uVar2;
              return uVar2;
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
        puVar5 = *(undefined4 **)(DAT_008553e8[2] + 4);
        DAT_008553e8[2] = puVar5;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = (undefined4 *)*puVar5;
        }
        if (puVar5 == (undefined4 *)0x0) {
          return 0;
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00435840, ap_00435840));
