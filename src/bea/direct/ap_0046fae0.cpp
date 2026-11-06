// auto-ported from 0046fae0_FUN_0046fae0.c (FUN_0046fae0, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004d10b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d10b0_t> FUN_004d10b0 = {(FUN_004d10b0_t)0x004d10b0};

static void BEA_THISCALL ap_0046fae0(void * this_)
{
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  if (*(int *)((int)this_ + 0x9d0) == 0) {
    FUN_004d10b0(bea_arg(*(void **)((int)this_ + 0x2f4)), bea_arg(1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046fae0, ap_0046fae0));
