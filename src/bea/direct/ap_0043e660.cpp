// auto-ported from 0043e660_vslot1.c (CWeaponLanguageName::vslot1, 344 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008553e8 GLOBAL_AT(undefined4*, 0x008553e8)

static undefined4 BEA_THISCALL ap_0043e660(int this_, byte *param_1)
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
LAB_0043e6b7:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_0043e6bc;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_0043e6b7;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar3 = 0;
LAB_0043e6bc:
        if (iVar3 == 0) {
          if (puVar4 == (undefined4 *)0x0) {
            return 0;
          }
          iVar3 = *(int *)(this_ + 8) + -1;
          switch(iVar3) {
          case 0:
            puVar4[0xf] = 0xfe0572;
            return iVar3;
          case 1:
            puVar4[0xf] = 0xffe389;
            return iVar3;
          case 2:
            puVar4[0xf] = 0x101c1a0;
            return iVar3;
          case 3:
            puVar4[0xf] = 0x1039fb7;
            return iVar3;
          case 4:
            puVar4[0xf] = 0x1057dce;
            return iVar3;
          case 5:
            puVar4[0xf] = 0x1075be5;
            return iVar3;
          case 6:
            puVar4[0xf] = 0x10939fc;
            return iVar3;
          case 7:
            puVar4[0xf] = 0x10b1813;
            return iVar3;
          case 8:
            puVar4[0xf] = 0x10cf62a;
            return iVar3;
          case 9:
            puVar4[0xf] = 0x1b1d4bb;
            return iVar3;
          case 10:
            puVar4[0xf] = 0x1b590e8;
            return iVar3;
          case 0xb:
            puVar4[0xf] = 0x1b94d15;
            return iVar3;
          case 0xc:
            puVar4[0xf] = 0x1bd0942;
            return iVar3;
          default:
            return iVar3;
          }
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
BEA_HOOKS(BEA_HOOK(0x0043e660, ap_0043e660));
