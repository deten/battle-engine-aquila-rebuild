// auto-ported from 00510e60_FUN_00510e60.c (FUN_00510e60, 66 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00510e60(void * this_)
{
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)this_));
  *(undefined4 *)this_ = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x20)));
  *(undefined4 *)((int)this_ + 0x20) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0xc)));
  *(undefined4 *)((int)this_ + 0xc) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00510e60, ap_00510e60));
