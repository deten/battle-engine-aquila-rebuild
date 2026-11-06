// auto-ported from 0055a400_FUN_0055a400.c (FUN_0055a400, 21 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_00512cc0_t)(uint32_t);
static const bea_guard<FUN_00512cc0_t> FUN_00512cc0 = {(FUN_00512cc0_t)0x00512cc0};

static uint32_t BEA_THISCALL ap_0055a400(void * this_)
{
  bea_vcall<uint32_t>(this_, 0x10);
  return FUN_00512cc0(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0055a400, ap_0055a400));
