// auto-ported from 004c0510_FUN_004c0510.c (FUN_004c0510, 70 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
typedef uint32_t (BEA_THISCALL* FUN_004cdba0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cdba0_t> FUN_004cdba0 = {(FUN_004cdba0_t)0x004cdba0};

static void BEA_THISCALL ap_004c0510(void * this_, undefined4 *param_1)
{
  if (*(int *)((int)this_ + 0x54) == 0) {
    FUN_004cdba0(bea_arg(&DAT_0082b400), bea_arg(this_));
    *(undefined4 **)((int)this_ + 0x50) = param_1;
    *(undefined4 **)((int)this_ + 0x54) = param_1;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *(undefined4 **)(*(int *)((int)this_ + 0x50) + 4) = param_1;
  *param_1 = *(undefined4 *)((int)this_ + 0x50);
  *(undefined4 **)((int)this_ + 0x50) = param_1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c0510, ap_004c0510));
