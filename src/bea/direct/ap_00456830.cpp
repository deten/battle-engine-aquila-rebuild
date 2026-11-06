// auto-ported from 00456830_FUN_00456830.c (FUN_00456830, 19 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};

static void * BEA_THISCALL ap_00456830(void * this_)
{
  *(undefined4 *)((int)this_ + 4) = 0;
  FUN_004cb040(bea_arg(this_));
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00456830, ap_00456830));
