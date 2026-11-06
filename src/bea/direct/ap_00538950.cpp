// auto-ported from 00538950_FUN_00538950.c (FUN_00538950, 11 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};

static void BEA_THISCALL ap_00538950(void * this_)
{
  *(undefined ***)this_ = ((void*)0x005e4f44);
  FUN_004bac40(bea_arg(this_));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00538950, ap_00538950));
