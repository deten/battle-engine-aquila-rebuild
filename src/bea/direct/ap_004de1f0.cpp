// auto-ported from 004de1f0_FUN_004de1f0.c (FUN_004de1f0, 56 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};

static uint32_t BEA_THISCALL ap_004de1f0(void * this_, undefined4 param_1, undefined4 *param_2, undefined4 param_3, undefined4 param_4)
{
  *(undefined2 *)((int)this_ + 4) = (undefined2)param_1;
  *(undefined4 *)((int)this_ + 0x10) = *param_2;
  FUN_00401000(bea_arg(this_), bea_arg(param_3));
  *(undefined2 *)((int)this_ + 8) = 0;
  return FUN_00401000(bea_arg((void *)((int)this_ + 0xc)), bea_arg(param_4));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004de1f0, ap_004de1f0));
