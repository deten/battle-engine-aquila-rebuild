// auto-ported from 0040c550_FUN_0040c550.c (FUN_0040c550, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00412420_t)(uint32_t);
static const bea_guard<FUN_00412420_t> FUN_00412420 = {(FUN_00412420_t)0x00412420};
typedef undefined4 (BEA_THISCALL* FUN_004145a0_t)(uint32_t);
static const bea_guard<FUN_004145a0_t> FUN_004145a0 = {(FUN_004145a0_t)0x004145a0};

static void BEA_THISCALL ap_0040c550(void * this_)
{
  if (*(int *)((int)this_ + 0x260) != 3) {
    FUN_004145a0(bea_arg(*(void **)((int)this_ + 0x578)));
    return;
  }
  FUN_00412420(bea_arg(*(void **)((int)this_ + 0x57c)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040c550, ap_0040c550));
