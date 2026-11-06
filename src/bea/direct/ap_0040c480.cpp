// auto-ported from 0040c480_FUN_0040c480.c (FUN_0040c480, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_004122b0_t)(uint32_t);
static const bea_guard<FUN_004122b0_t> FUN_004122b0 = {(FUN_004122b0_t)0x004122b0};
typedef undefined4 (BEA_THISCALL* FUN_004144c0_t)(uint32_t);
static const bea_guard<FUN_004144c0_t> FUN_004144c0 = {(FUN_004144c0_t)0x004144c0};

static void BEA_THISCALL ap_0040c480(void * this_)
{
  if (*(int *)((int)this_ + 0x260) != 3) {
    FUN_004144c0(bea_arg(*(void **)((int)this_ + 0x578)));
    return;
  }
  FUN_004122b0(bea_arg(*(void **)((int)this_ + 0x57c)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040c480, ap_0040c480));
