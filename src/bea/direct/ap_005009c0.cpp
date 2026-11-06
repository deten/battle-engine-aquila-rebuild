// auto-ported from 005009c0_FUN_005009c0.c (FUN_005009c0, 35 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_005001e0_t)(uint32_t);
static const bea_guard<FUN_005001e0_t> FUN_005001e0 = {(FUN_005001e0_t)0x005001e0};

static void BEA_THISCALL ap_005009c0(void * this_)
{
  if (*(char *)((int)this_ + 0x10) != '\0') {
    FUN_005001e0(bea_arg(*(void **)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40)));
    *(undefined4 *)((int)this_ + 0x38) = 0;
    *(undefined1 *)((int)this_ + 0x10) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005009c0, ap_005009c0));
