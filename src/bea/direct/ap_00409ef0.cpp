// auto-ported from 00409ef0_FUN_00409ef0.c (FUN_00409ef0, 39 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00411bf0_t)(uint32_t);
static const bea_guard<FUN_00411bf0_t> FUN_00411bf0 = {(FUN_00411bf0_t)0x00411bf0};
typedef uint32_t (BEA_THISCALL* FUN_00413cf0_t)(uint32_t);
static const bea_guard<FUN_00413cf0_t> FUN_00413cf0 = {(FUN_00413cf0_t)0x00413cf0};

static void BEA_THISCALL ap_00409ef0(void * this_)
{
  if (*(int *)((int)this_ + 0x260) == 2) {
    FUN_00413cf0(bea_arg(*(void **)((int)this_ + 0x578)));
    return;
  }
  if (*(int *)((int)this_ + 0x260) == 3) {
    FUN_00411bf0(bea_arg(*(void **)((int)this_ + 0x57c)));
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00409ef0, ap_00409ef0));
