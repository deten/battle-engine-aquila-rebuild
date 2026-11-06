// auto-ported from 0050dc20_FUN_0050dc20.c (FUN_0050dc20, 129 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00855358 GLOBAL_AT(undefined4*, 0x00855358)
#define DAT_00855360 GLOBAL_AT(undefined4*, 0x00855360)

static void BEA_CDECL ap_0050dc20(byte *param_1)
{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (DAT_00855358 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*DAT_00855358;
  }
  DAT_00855360 = DAT_00855358;
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  do {
    pbVar2 = (byte *)*puVar4;
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0050dc6d:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0050dc72;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0050dc6d;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar3 = 0;
LAB_0050dc72:
    if (iVar3 == 0) {
      puVar4[1] = 1;
      return;
    }
    DAT_00855360 = (undefined4 *)DAT_00855360[1];
    if (DAT_00855360 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)*DAT_00855360;
    }
    if (puVar4 == (undefined4 *)0x0) {
      return;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050dc20, ap_0050dc20));
