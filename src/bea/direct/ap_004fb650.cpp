// auto-ported from 004fb650_FUN_004fb650.c (FUN_004fb650, 28 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (9 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00509140_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00509140_t> FUN_00509140 = {(FUN_00509140_t)0x00509140};

static void BEA_THISCALL ap_004fb650(void * this_, undefined4 param_1, undefined4 param_2)
{
  if (*(void **)((int)this_ + 0x140) != (void *)0x0) {
    FUN_00509140(bea_arg(*(void **)((int)this_ + 0x140)), bea_arg(param_1), bea_arg(param_2));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fb650, ap_004fb650));
