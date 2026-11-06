// auto-ported from 00541260_FUN_00541260.c (FUN_00541260, 17 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00541650_t)(uint32_t);
static const bea_guard<FUN_00541650_t> FUN_00541650 = {(FUN_00541650_t)0x00541650};

static void BEA_THISCALL ap_00541260(void * this_)
{
  FUN_00541650(bea_arg(this_));
  *(undefined4 *)((int)this_ + 8) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00541260, ap_00541260));
