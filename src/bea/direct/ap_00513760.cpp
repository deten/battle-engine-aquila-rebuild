// auto-ported from 00513760_FUN_00513760.c (FUN_00513760, 16 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef undefined4 (BEA_CDECL* FUN_0055a170_t)(uint32_t);
static const bea_guard<FUN_0055a170_t> FUN_0055a170 = {(FUN_0055a170_t)0x0055a170};

static uint32_t BEA_THISCALL ap_00513760(void * this_)
{
  return FUN_0055a170(bea_arg(*(undefined4 *)((int)this_ + 0x32fd4)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513760, ap_00513760));
