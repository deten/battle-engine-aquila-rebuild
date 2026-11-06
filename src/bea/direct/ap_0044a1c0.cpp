// auto-ported from 0044a1c0_FUN_0044a1c0.c (FUN_0044a1c0, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_005453f0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005453f0_t> FUN_005453f0 = {(FUN_005453f0_t)0x005453f0};

static void BEA_THISCALL ap_0044a1c0(void * this_, undefined4 param_1)
{
  if (*(char *)((int)this_ + 0x4a8) != '\0') {
    FUN_005453f0(bea_arg(*(void **)((int)this_ + 0x10)), bea_arg(param_1), bea_arg(*(undefined4 *)((int)this_ + 0x4ac)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044a1c0, ap_0044a1c0));
