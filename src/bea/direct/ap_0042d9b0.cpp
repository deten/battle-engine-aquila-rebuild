// auto-ported from 0042d9b0_FUN_0042d9b0.c (FUN_0042d9b0, 20 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static void BEA_THISCALL ap_0042d9b0(void * this_, undefined4 param_1)
{
  if (*(void **)((int)this_ + 4) != (void *)0x0) {
    FUN_004e5bd0(bea_arg(*(void **)((int)this_ + 4)), bea_arg(param_1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042d9b0, ap_0042d9b0));
