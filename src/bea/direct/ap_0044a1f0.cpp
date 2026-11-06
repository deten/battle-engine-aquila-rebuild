// auto-ported from 0044a1f0_FUN_0044a1f0.c (FUN_0044a1f0, 162 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_004914b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004914b0_t> FUN_004914b0 = {(FUN_004914b0_t)0x004914b0};
typedef uint32_t (BEA_THISCALL* FUN_004915d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004915d0_t> FUN_004915d0 = {(FUN_004915d0_t)0x004915d0};

static uint32_t BEA_THISCALL ap_0044a1f0(void * this_, undefined4 param_1)
{
  FUN_004914b0(bea_arg(*(void **)((int)this_ + 0x49c)), bea_arg(param_1), bea_arg(6), bea_arg(0x100));
  FUN_004915d0(bea_arg((void *)(*(int *)((int)this_ + 0x49c) + 0x4c)), bea_arg(*(int *)((int)this_ + 0x49c)));
  FUN_004915d0(bea_arg((void *)(*(int *)((int)this_ + 0x49c) + 0x98)), bea_arg(*(int *)((int)this_ + 0x49c) + 0x4c));
  FUN_004915d0(bea_arg((void *)(*(int *)((int)this_ + 0x49c) + 0xe4)), bea_arg(*(int *)((int)this_ + 0x49c) + 0x98));
  FUN_004915d0(bea_arg((void *)(*(int *)((int)this_ + 0x49c) + 0x130)), bea_arg(*(int *)((int)this_ + 0x49c) + 0xe4));
  FUN_004915d0(bea_arg((void *)(*(int *)((int)this_ + 0x49c) + 0x17c)), bea_arg(*(int *)((int)this_ + 0x49c) + 0x130));
  return FUN_004915d0(bea_arg((void *)(*(int *)((int)this_ + 0x49c) + 0x1c8)), bea_arg(*(int *)((int)this_ + 0x49c) + 0x17c));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044a1f0, ap_0044a1f0));
