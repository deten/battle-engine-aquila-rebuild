// auto-ported from 0048f2f0_FUN_0048f2f0.c (FUN_0048f2f0, 36 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0048f210_t)(uint32_t);
static const bea_guard<FUN_0048f210_t> FUN_0048f210 = {(FUN_0048f210_t)0x0048f210};

static uint32_t BEA_THISCALL ap_0048f2f0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  *(undefined4 *)((int)this_ + 0x4c) = param_4;
  *(undefined4 *)((int)this_ + 0x2c) = param_1;
  *(undefined4 *)((int)this_ + 0x30) = param_2;
  *(undefined4 *)((int)this_ + 0x34) = param_3;
  return FUN_0048f210(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048f2f0, ap_0048f2f0));
