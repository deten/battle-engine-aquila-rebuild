// auto-ported from 00511070_FUN_00511070.c (FUN_00511070, 128 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00511070(void * this_)
{
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x30)));
  *(undefined4 *)((int)this_ + 0x30) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x18)));
  *(undefined4 *)((int)this_ + 0x18) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x1c)));
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x20)));
  *(undefined4 *)((int)this_ + 0x20) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x24)));
  *(undefined4 *)((int)this_ + 0x24) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x28)));
  *(undefined4 *)((int)this_ + 0x28) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x2c)));
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00511070, ap_00511070));
