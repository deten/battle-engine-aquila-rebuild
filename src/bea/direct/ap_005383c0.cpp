// auto-ported from 005383c0_FUN_005383c0.c (FUN_005383c0, 176 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00855190 GLOBAL_AT(int, 0x00855190)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_0089c590 GLOBAL_AT(int, 0x0089c590)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa40 ((char*)0x0064fa40)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_STDCALL ap_005383c0(undefined4 *param_1, undefined4 param_2, undefined4 param_3)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  local_4 = 0xffffffff;
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x8b6));
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar2 = bea_vcall<uint32_t>(*param_1, 0x48);
    puVar1[1] = 0;
    local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
    puVar1[2] = uVar2;
    *puVar1 = ((void*)0x005e4f34);
    FUN_004e5a80(bea_arg(&DAT_00855190), bea_arg(puVar1));
  }
  local_4 = 0xffffffff;
  param_1 = (undefined4 *)0xbf800000;
  return FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(2000), bea_arg(&DAT_0089c590), bea_arg(&param_1), bea_arg(0), bea_arg(puVar1), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005383c0, ap_005383c0));
