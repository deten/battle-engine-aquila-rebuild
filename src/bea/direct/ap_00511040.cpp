// auto-ported from 00511040_FUN_00511040.c (FUN_00511040, 45 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00511040(void * this_)
{
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)this_));
  *(undefined4 *)this_ = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 4)));
  *(undefined4 *)((int)this_ + 4) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00511040, ap_00511040));
