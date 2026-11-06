// auto-ported from 0044b5c0_FUN_0044b5c0.c (FUN_0044b5c0, 64 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0044b640_t)(uint32_t);
static const bea_guard<FUN_0044b640_t> FUN_0044b640 = {(FUN_0044b640_t)0x0044b640};

static uint32_t BEA_THISCALL ap_0044b5c0(void * this_)
{
  uint uVar1;
  uVar1 = *(int *)((int)this_ + 0x14) + 1;
  *(uint *)((int)this_ + 0x14) = uVar1;
  *(int *)((int)this_ + 0x1c) = *(int *)((int)this_ + 0x10);
  *(float *)((int)this_ + 8) = (float)uVar1 * 0.05f;
  *(int *)((int)this_ + 0x10) = (*(int *)((int)this_ + 0x10) + 1) % 200;
  return FUN_0044b640(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044b5c0, ap_0044b5c0));
