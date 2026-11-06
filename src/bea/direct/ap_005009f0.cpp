// auto-ported from 005009f0_FUN_005009f0.c (FUN_005009f0, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_004883f0_t)(uint32_t);
static const bea_guard<FUN_004883f0_t> FUN_004883f0 = {(FUN_004883f0_t)0x004883f0};

static void BEA_THISCALL ap_005009f0(void * this_)
{
  if (*(char *)((int)this_ + 0x2c) != '\0') {
    FUN_004883f0(bea_arg(*(void **)((int)this_ + 0x4c)));
    *(undefined4 *)((int)this_ + 0x3c) = 0;
    *(undefined1 *)((int)this_ + 0x2c) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005009f0, ap_005009f0));
