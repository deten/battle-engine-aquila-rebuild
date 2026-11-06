// auto-ported from 0052f740_FUN_0052f740.c (FUN_0052f740, 79 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0052f740(void * this_)
{  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005e4e4c);
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 4)));
  *(undefined ***)this_ = ((void*)0x005e4b4c);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052f740, ap_0052f740));
