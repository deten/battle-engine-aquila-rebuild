// auto-ported from 004f9a60_FUN_004f9a60.c (FUN_004f9a60, 34 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static void BEA_THISCALL ap_004f9a60(void * this_, int *param_1)
{
  if (param_1 != (int *)0x0) {
    FUN_004e5bd0(bea_arg((void *)((int)this_ + 0x18c)), bea_arg(param_1));
    bea_vcall<uint32_t>(param_1, 0x4, 1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f9a60, ap_004f9a60));
