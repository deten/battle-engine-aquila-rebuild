// auto-ported from 00444000_FUN_00444000.c (FUN_00444000, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00444000(void * this_)
{
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 4)));
  if (*(int **)((int)this_ + 0xc) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0xc), 0x4, 1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00444000, ap_00444000));
