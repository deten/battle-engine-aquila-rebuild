// auto-ported from 0040dc90_FUN_0040dc90.c (FUN_0040dc90, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_004129a0_t)(uint32_t);
static const bea_guard<FUN_004129a0_t> FUN_004129a0 = {(FUN_004129a0_t)0x004129a0};
typedef int (BEA_THISCALL* FUN_00414b70_t)(uint32_t);
static const bea_guard<FUN_00414b70_t> FUN_00414b70 = {(FUN_00414b70_t)0x00414b70};

static void BEA_THISCALL ap_0040dc90(void * this_)
{
  if (*(int *)((int)this_ + 0x260) == 3) {
    FUN_004129a0(bea_arg(*(void **)((int)this_ + 0x57c)));
    return;
  }
  FUN_00414b70(bea_arg(*(void **)((int)this_ + 0x578)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040dc90, ap_0040dc90));
