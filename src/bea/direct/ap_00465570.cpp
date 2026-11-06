// auto-ported from 00465570_FUN_00465570.c (FUN_00465570, 14 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_00465570(void * this_)
{
  return FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00465570, ap_00465570));
