// auto-ported from 0049c3e0_FUN_0049c3e0.c (FUN_0049c3e0, 27 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMotionController;
typedef CMotionController* (BEA_THISCALL* FUN_004bae30_t)(uint32_t);
static const bea_guard<FUN_004bae30_t> FUN_004bae30 = {(FUN_004bae30_t)0x004bae30};

static void * BEA_THISCALL ap_0049c3e0(void * this_, undefined4 param_1)
{
  FUN_004bae30(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005dc3f4);
  *(undefined4 *)((int)this_ + 8) = param_1;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049c3e0, ap_0049c3e0));
