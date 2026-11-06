// auto-ported from 00505500_FUN_00505500.c (FUN_00505500, 102 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00505500(void * this_)
{  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005dfc4c);
  mmioClose(*(HMMIO *)((int)this_ + 8),0);
  if (*(int *)((int)this_ + 4) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 4)));
    *(undefined4 *)((int)this_ + 4) = 0;
  }
  *(undefined ***)this_ = ((void*)0x005dfc6c);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00505500, ap_00505500));
