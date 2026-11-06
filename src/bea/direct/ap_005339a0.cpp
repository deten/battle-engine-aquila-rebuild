// auto-ported from 005339a0_FUN_005339a0.c (FUN_005339a0, 147 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa40 ((char*)0x0064fa40)
typedef bool (BEA_THISCALL* FUN_0046d410_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046d410_t> FUN_0046d410 = {(FUN_0046d410_t)0x0046d410};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_STDCALL ap_005339a0(undefined4 *param_1, undefined4 param_2, undefined4 *param_3)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puStack_8;
  undefined4 local_4;
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x17d));
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = bea_vcall<uint32_t>(*param_1, 0x30);
    iVar3 = FUN_0046d410(bea_arg(&DAT_008a9a98), bea_arg(uVar2));
    *(bool *)(puVar1 + 1) = iVar3 != 0;
    *puVar1 = ((void*)0x005e4d50);
    *param_3 = puVar1;
    return param_3;
  }
  *param_3 = 0;
  return (undefined4 *)0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005339a0, ap_005339a0));
