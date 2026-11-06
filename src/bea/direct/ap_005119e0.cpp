// auto-ported from 005119e0_FUN_005119e0.c (FUN_005119e0, 230 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008553e8 GLOBAL_AT(undefined4*, 0x008553e8)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_Weapon___s__not_found_0063dae4 ((char*)0x0063dae4)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798 ((char*)0x0063d798)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_CDECL* FUN_005115b0_t)(uint32_t);
static const bea_guard<FUN_005115b0_t> FUN_005115b0 = {(FUN_005115b0_t)0x005115b0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_005119e0(void * this_, byte *param_1, undefined4 param_2, int param_3)
{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  piVar2 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x2d4));
  if (param_1 != (byte *)0x0) {
    iVar7 = 0;
    puVar5 = (undefined4 *)*DAT_008553e8;
    DAT_008553e8[2] = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
    while (BEA_LOOP_GUARD((puVar5 != (undefined4 *)0x0))) {
      pbVar6 = (byte *)*puVar5;
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00511a4e:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00511a53;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00511a4e;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar4 = 0;
LAB_00511a53:
      if (iVar4 == 0) goto LAB_00511a78;
      iVar7 = iVar7 + 1;
      puVar5 = *(undefined4 **)(DAT_008553e8[2] + 4);
      DAT_008553e8[2] = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)*puVar5;
      }
    }
  }
  iVar7 = -1;
LAB_00511a78:
  *piVar2 = iVar7;
  piVar2[1] = param_3;
  iVar7 = FUN_005115b0(bea_arg(param_2));
  piVar2[2] = iVar7;
  if (*piVar2 == -1) {
    FUN_00441740(&DAT_0066f580,s_Weapon___s__not_found_0063dae4,(char *)param_1);
  }
  return FUN_004e5b20(bea_arg((void *)((int)this_ + 0x3c)), bea_arg(piVar2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005119e0, ap_005119e0));
