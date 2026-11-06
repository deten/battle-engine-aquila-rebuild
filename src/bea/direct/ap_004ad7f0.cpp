// auto-ported from 004ad7f0_FUN_004ad7f0.c (FUN_004ad7f0, 57 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004ad7f0(void * this_, undefined4 param_1)
{
  if (*(int *)((int)this_ + 0x24) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x24)));
    *(undefined4 *)((int)this_ + 0x24) = 0;
    *(undefined4 *)((int)this_ + 0x14) = param_1;
    return;
  }
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x14) = param_1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ad7f0, ap_004ad7f0));
