// auto-ported from 0042d8c0_FUN_0042d8c0.c (FUN_0042d8c0, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00547ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00547ec0_t> FUN_00547ec0 = {(FUN_00547ec0_t)0x00547ec0};

static uint32_t BEA_THISCALL ap_0042d8c0(void * this_, undefined4 param_1)
{
  *(undefined1 *)((int)this_ + 0x161) = 1;
  return FUN_00547ec0(bea_arg((void *)((int)this_ + 0x2c)), bea_arg(param_1), bea_arg(0x11), bea_arg(1), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042d8c0, ap_0042d8c0));
