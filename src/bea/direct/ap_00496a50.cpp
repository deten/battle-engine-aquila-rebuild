// auto-ported from 00496a50_FUN_00496a50.c (FUN_00496a50, 38 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMotionController;
typedef CMotionController* (BEA_THISCALL* FUN_004bae30_t)(uint32_t);
static const bea_guard<FUN_004bae30_t> FUN_004bae30 = {(FUN_004bae30_t)0x004bae30};

static void * BEA_THISCALL ap_00496a50(void * this_, undefined4 param_1)
{
  FUN_004bae30(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005dc35c);
  *(undefined4 *)((int)this_ + 8) = param_1;
  *(undefined4 *)((int)this_ + 0xc) = 0xc479c000;
  *(undefined4 *)((int)this_ + 0x10) = 0xc479c000;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00496a50, ap_00496a50));
