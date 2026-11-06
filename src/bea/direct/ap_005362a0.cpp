// auto-ported from 005362a0_FUN_005362a0.c (FUN_005362a0, 142 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00855090 GLOBAL_AT(int, 0x00855090)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa40 ((char*)0x0064fa40)
typedef float10 (BEA_THISCALL* FUN_0050d760_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0050d760_t> FUN_0050d760 = {(FUN_0050d760_t)0x0050d760};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_STDCALL ap_005362a0(undefined4 *param_1, undefined4 param_2, undefined4 *param_3)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined1 *puStack_8;
  undefined4 local_4;
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x5d3));
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = bea_vcall<uint32_t>(*param_1, 0x30);
    fVar3 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(uVar2));
    *puVar1 = ((void*)0x005e4ea4);
    puVar1[1] = bea_piece32((float)fVar3);
    *param_3 = puVar1;
    return param_3;
  }
  *param_3 = 0;
  return (undefined4 *)0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005362a0, ap_005362a0));
