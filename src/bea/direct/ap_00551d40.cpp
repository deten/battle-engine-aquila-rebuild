// auto-ported from 00551d40_FUN_00551d40.c (FUN_00551d40, 41 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00501310_t)(uint32_t);
static const bea_guard<FUN_00501310_t> FUN_00501310 = {(FUN_00501310_t)0x00501310};

static void BEA_THISCALL ap_00551d40(void * this_)
{
  if (*(void **)this_ != (void *)0x0) {
    FUN_00501310(bea_arg(*(void **)this_));
    *(undefined4 *)this_ = 0;
  }
  if (*(void **)((int)this_ + 4) != (void *)0x0) {
    FUN_00501310(bea_arg(*(void **)((int)this_ + 4)));
    *(undefined4 *)((int)this_ + 4) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00551d40, ap_00551d40));
