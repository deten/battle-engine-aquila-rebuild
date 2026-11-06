// auto-ported from 004661f0_FUN_004661f0.c (FUN_004661f0, 8 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00528bf0_t)(uint32_t);
static const bea_guard<FUN_00528bf0_t> FUN_00528bf0 = {(FUN_00528bf0_t)0x00528bf0};

static void BEA_THISCALL ap_004661f0(void * this_)
{
  FUN_00528bf0(bea_arg((void *)((int)this_ + 0xc)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004661f0, ap_004661f0));
