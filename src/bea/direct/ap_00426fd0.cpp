// auto-ported from 00426fd0_FUN_00426fd0.c (FUN_00426fd0, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00662b2c GLOBAL_AT(int, 0x00662b2c)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_CDECL ap_00426fd0(undefined4 param_1)
{
  return FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_1), bea_arg(0), bea_arg(&DAT_00662b2c), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00426fd0, ap_00426fd0));
