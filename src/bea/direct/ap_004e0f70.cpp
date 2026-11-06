// auto-ported from 004e0f70_FUN_004e0f70.c (FUN_004e0f70, 63 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_005179b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005179b0_t> FUN_005179b0 = {(FUN_005179b0_t)0x005179b0};

static uint32_t BEA_STDCALL ap_004e0f70(int *param_1, undefined4 param_2)
{
  if ((param_1[0x1f] == 1) && ((int *)*param_1 != (int *)0x0)) {
    bea_vcall<uint32_t>(*param_1, 0x18, param_1);
  }
  if (-1 < param_1[1]) {
    FUN_005179b0(bea_arg(&DAT_00896988), bea_arg(param_1), bea_arg(param_2));
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return FUN_00401000(bea_arg(param_1), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e0f70, ap_004e0f70));
