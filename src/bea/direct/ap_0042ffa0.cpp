// auto-ported from 0042ffa0_FUN_0042ffa0.c (FUN_0042ffa0, 485 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008553f0 GLOBAL_AT(int, 0x008553f0)
#define s_Gill_M_Breath_00625934 ((char*)0x00625934)
#define s_Stream_Laser_00625944 ((char*)0x00625944)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_CDECL ap_0042ffa0(char *param_1)
{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  undefined1 *puStack_8;
  undefined4 local_4;
  puVar4 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xa8), bea_arg(0xe), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x94e));
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    iVar5 = 0;
    cVar2 = *param_1;
    while (BEA_LOOP_GUARD((cVar2 != '\0'))) {
      iVar1 = iVar5 + 1;
      iVar5 = iVar5 + 1;
      cVar2 = param_1[iVar1];
    }
    uVar6 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar5 + 1), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x1d8));
    puVar4[6] = uVar6;
    iVar5 = 0;
    cVar2 = *param_1;
    while (BEA_LOOP_GUARD((cVar2 != '\0'))) {
      iVar5 = iVar5 + 1;
      *(char *)(puVar4[6] + -1 + iVar5) = cVar2;
      cVar2 = param_1[iVar5];
    }
    pcVar8 = s_Stream_Laser_00625944;
    *(undefined1 *)(puVar4[6] + iVar5) = 0;
    pbVar7 = (byte *)puVar4[6];
    do {
      bVar3 = *pcVar8;
      bVar9 = bVar3 < *pbVar7;
      if (bVar3 != *pbVar7) {
LAB_00430065:
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0043006a;
      }
      if (bVar3 == 0) break;
      bVar3 = pcVar8[1];
      bVar9 = bVar3 < pbVar7[1];
      if (bVar3 != pbVar7[1]) goto LAB_00430065;
      pcVar8 = pcVar8 + 2;
      pbVar7 = pbVar7 + 2;
    } while (BEA_LOOP_GUARD((bVar3 != 0)));
    iVar5 = 0;
LAB_0043006a:
    if (iVar5 == 0) {
      puVar4[0x27] = 1;
    }
    else {
      puVar4[0x27] = 0;
    }
    pbVar7 = (byte *)puVar4[6];
    pcVar8 = s_Gill_M_Breath_00625934;
    do {
      bVar3 = *pcVar8;
      bVar9 = bVar3 < *pbVar7;
      if (bVar3 != *pbVar7) {
LAB_004300ae:
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_004300b3;
      }
      if (bVar3 == 0) break;
      bVar3 = pcVar8[1];
      bVar9 = bVar3 < pbVar7[1];
      if (bVar3 != pbVar7[1]) goto LAB_004300ae;
      pcVar8 = pcVar8 + 2;
      pbVar7 = pbVar7 + 2;
    } while (BEA_LOOP_GUARD((bVar3 != 0)));
    iVar5 = 0;
LAB_004300b3:
    if (iVar5 == 0) {
      puVar4[0x28] = 1;
    }
    else {
      puVar4[0x28] = 0;
    }
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0x10] = 0x3f48f5c3;
    puVar4[0x11] = 0x447a0000;
    puVar4[0xe] = 0;
    puVar4[0x23] = 0;
    puVar4[0x19] = 0;
    puVar4[0x26] = 0;
    puVar4[0xf] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x12] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x1e] = 0;
    puVar4[0x20] = 0;
    puVar4[0x22] = 0;
    puVar4[0x21] = 0;
    puVar4[0x24] = 0x41200000;
    puVar4[0x25] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x18] = 0;
    puVar4[0x29] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
  }
  return FUN_004e5b20(bea_arg(DAT_008553f0), bea_arg(puVar4));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042ffa0, ap_0042ffa0));
