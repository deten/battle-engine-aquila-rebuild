// auto-ported from 00496520_FUN_00496520.c (FUN_00496520, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004bae50_t)(uint32_t);
static const bea_guard<FUN_004bae50_t> FUN_004bae50 = {(FUN_004bae50_t)0x004bae50};

static void BEA_THISCALL ap_00496520(void * this_)
{
  *(undefined ***)this_ = ((void*)0x005dc330);
  *(undefined4 *)((int)this_ + 8) = 0;
  FUN_004bae50(bea_arg(this_));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00496520, ap_00496520));
