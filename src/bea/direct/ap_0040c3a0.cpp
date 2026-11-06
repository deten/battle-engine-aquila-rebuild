// auto-ported from 0040c3a0_FUN_0040c3a0.c (FUN_0040c3a0, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00412310_t)(uint32_t);
static const bea_guard<FUN_00412310_t> FUN_00412310 = {(FUN_00412310_t)0x00412310};
typedef undefined4 (BEA_THISCALL* FUN_004144f0_t)(uint32_t);
static const bea_guard<FUN_004144f0_t> FUN_004144f0 = {(FUN_004144f0_t)0x004144f0};

static void BEA_THISCALL ap_0040c3a0(void * this_)
{
  if (*(int *)((int)this_ + 0x260) != 3) {
    FUN_004144f0(bea_arg(*(void **)((int)this_ + 0x578)));
    return;
  }
  FUN_00412310(bea_arg(*(void **)((int)this_ + 0x57c)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040c3a0, ap_0040c3a0));
