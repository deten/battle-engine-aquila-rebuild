// auto-ported from 0040c460_FUN_0040c460.c (FUN_0040c460, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00412240_t)(uint32_t);
static const bea_guard<FUN_00412240_t> FUN_00412240 = {(FUN_00412240_t)0x00412240};
typedef undefined4 (BEA_THISCALL* FUN_00414470_t)(uint32_t);
static const bea_guard<FUN_00414470_t> FUN_00414470 = {(FUN_00414470_t)0x00414470};

static void BEA_THISCALL ap_0040c460(void * this_)
{
  if (*(int *)((int)this_ + 0x260) != 3) {
    FUN_00414470(bea_arg(*(void **)((int)this_ + 0x578)));
    return;
  }
  FUN_00412240(bea_arg(*(void **)((int)this_ + 0x57c)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040c460, ap_0040c460));
