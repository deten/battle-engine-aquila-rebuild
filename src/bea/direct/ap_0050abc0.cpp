// auto-ported from 0050abc0_FUN_0050abc0.c (FUN_0050abc0, 166 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_FATAL_ERROR__Cant_find_script____0063d288 ((char*)0x0063d288)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 * (BEA_THISCALL* FUN_00539040_t)(uint32_t);
static const bea_guard<FUN_00539040_t> FUN_00539040 = {(FUN_00539040_t)0x00539040};

static undefined4 BEA_THISCALL ap_0050abc0(void * this_, byte *param_1)
{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  
  puVar4 = *(undefined4 **)((int)this_ + 0x120);
  *(undefined4 **)((int)this_ + 0x128) = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*puVar4;
  }
  do {
    if (puVar4 == (undefined4 *)0x0) {
      FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__Cant_find_script____0063d288,(char *)param_1);
      return 0;
    }
    pbVar2 = (byte *)bea_vcall<uint32_t>(*puVar4, 0x38);
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0050ac13:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0050ac18;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0050ac13;
      pbVar2 = pbVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar3 = 0;
LAB_0050ac18:
    if (iVar3 == 0) {
      uVar5 = FUN_00539040(bea_arg((void *)puVar4[1]));
      return uVar5;
    }
    puVar4 = *(undefined4 **)(*(int *)((int)this_ + 0x128) + 4);
    *(undefined4 **)((int)this_ + 0x128) = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050abc0, ap_0050abc0));
