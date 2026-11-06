// auto-ported from 0040c570_FUN_0040c570.c (FUN_0040c570, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00412480_t)(uint32_t);
static const bea_guard<FUN_00412480_t> FUN_00412480 = {(FUN_00412480_t)0x00412480};
typedef undefined4 (BEA_THISCALL* FUN_004145d0_t)(uint32_t);
static const bea_guard<FUN_004145d0_t> FUN_004145d0 = {(FUN_004145d0_t)0x004145d0};

static void BEA_THISCALL ap_0040c570(void * this_)
{
  if (*(int *)((int)this_ + 0x260) != 3) {
    FUN_004145d0(bea_arg(*(void **)((int)this_ + 0x578)));
    return;
  }
  FUN_00412480(bea_arg(*(void **)((int)this_ + 0x57c)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040c570, ap_0040c570));
