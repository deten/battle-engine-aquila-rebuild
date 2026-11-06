// auto-ported from 00511900_FUN_00511900.c (FUN_00511900, 214 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00855400 GLOBAL_AT(undefined4*, 0x00855400)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798 ((char*)0x0063d798)
#define s_Component___s__not_found_0063dac8 ((char*)0x0063dac8)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_00511900(void * this_, int param_1, byte *param_2)
{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  piVar3 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_0063d798), bea_arg(0x2c3));
  piVar3[1] = param_1;
  if (param_2 != (byte *)0x0) {
    iVar7 = 0;
    piVar2 = (int *)*DAT_00855400;
    DAT_00855400[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    while (BEA_LOOP_GUARD((iVar5 != 0))) {
      pbVar6 = *(byte **)(iVar5 + 0xb0);
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00511979:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0051197e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00511979;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar5 = 0;
LAB_0051197e:
      if (iVar5 == 0) goto LAB_005119a3;
      iVar7 = iVar7 + 1;
      piVar2 = *(int **)(DAT_00855400[2] + 4);
      DAT_00855400[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar2;
      }
    }
  }
  iVar7 = -1;
LAB_005119a3:
  *piVar3 = iVar7;
  if (iVar7 == -1) {
    FUN_00441740(&DAT_0066f580,s_Component___s__not_found_0063dac8,(char *)param_2);
  }
  return FUN_004e5b20(bea_arg((void *)((int)this_ + 0x5c)), bea_arg(piVar3));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00511900, ap_00511900));
