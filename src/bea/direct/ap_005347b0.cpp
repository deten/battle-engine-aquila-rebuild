// auto-ported from 005347b0_FUN_005347b0.c (FUN_005347b0, 265 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa40 ((char*)0x0064fa40)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_STDCALL ap_005347b0(undefined4 *param_1, undefined4 param_2, undefined4 *param_3)
{
  int *piVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)param_1[1];
  fVar3 = (float10)bea_vcall<float10>(*param_1, 0x34);
  fVar4 = (float10)bea_vcall<float10>(piVar1, 0x34);
  if (fVar4 <= (float10)(float)fVar3) {
    piVar1 = (int *)param_1[2];
    fVar3 = (float10)bea_vcall<float10>(*param_1, 0x34);
    fVar4 = (float10)bea_vcall<float10>(piVar1, 0x34);
    if ((float10)(float)fVar3 <= fVar4) {
      uVar5 = 0x2a4;
      goto LAB_00534842;
    }
  }
  piVar1 = (int *)param_1[1];
  fVar3 = (float10)bea_vcall<float10>(*param_1, 0x34);
  fVar4 = (float10)bea_vcall<float10>(piVar1, 0x34);
  if ((float10)(float)fVar3 <= fVar4) {
    piVar1 = (int *)param_1[2];
    fVar3 = (float10)bea_vcall<float10>(*param_1, 0x34);
    fVar4 = (float10)bea_vcall<float10>(piVar1, 0x34);
    if (fVar4 <= (float10)(float)fVar3) {
      uVar5 = 0x2ab;
LAB_00534842:
      puVar2 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(uVar5));
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = ((void*)0x005e4d50);
        *(undefined1 *)(puVar2 + 1) = 1;
        *param_3 = puVar2;
        return puVar2;
      }
      *param_3 = 0;
      return (undefined4 *)0;
    }
  }
  puVar2 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x2af));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = ((void*)0x005e4d50);
    *(undefined1 *)(puVar2 + 1) = 0;
    *param_3 = puVar2;
    return puVar2;
  }
  *param_3 = 0;
  return (undefined4 *)0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005347b0, ap_005347b0));
