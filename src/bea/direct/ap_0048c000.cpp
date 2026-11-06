// auto-ported from 0048c000_FUN_0048c000.c (FUN_0048c000, 284 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0067a748 GLOBAL_AT(int, 0x0067a748)
#define s_C__dev_ONSLAUGHT2_InfluenceMap_c_0062d61c ((char*)0x0062d61c)
typedef uint32_t (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_0048c000(void * this_, float param_1, float param_2, undefined4 param_3, undefined4 param_4)
{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  float10 fVar9;
  float local_1c;
  undefined1 *puStack_8;
  undefined4 local_4;
  puVar5 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x20), bea_arg(s_C__dev_ONSLAUGHT2_InfluenceMap_c_0062d61c), bea_arg(0x1a6));
  iVar4 = DAT_0067a748;
  piVar7 = (int *)0x0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_1c = 999999.0;
    puVar3 = *(undefined4 **)(DAT_0067a748 + 8);
    *(undefined4 **)(DAT_0067a748 + 0x10) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)*puVar3;
    }
    while (((piVar8 = piVar7, piVar6 != (int *)0x0))) {
      fVar1 = bea_fcast<float>(piVar6[0x23]);
      fVar2 = bea_fcast<float>(piVar6[0x24]);
      fVar9 = bea_fcast<float10>(bea_vcall<float10>(piVar6, 0x40));
      fVar9 = bea_fcast<float10>((ABS(param_2 - fVar2) + ABS(param_1 - fVar1))) - fVar9;
      piVar8 = piVar6;
      if (fVar9 < bea_fcast<float10>(0.0f)) break;
      if (fVar9 < bea_fcast<float10>(local_1c)) {
        local_1c = bea_fcast<float>(fVar9);
        piVar7 = piVar6;
      }
      puVar3 = *(undefined4 **)(*(int *)(iVar4 + 0x10) + 4);
      *(undefined4 **)(iVar4 + 0x10) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)*puVar3;
      }
    }
    *puVar5 = piVar8;
    puVar5[2] = param_4;
    puVar5[1] = param_3;
  }
  return FUN_004e5a80(bea_arg((void *)((int)this_ + 0x18)), bea_arg(puVar5));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048c000, ap_0048c000));
