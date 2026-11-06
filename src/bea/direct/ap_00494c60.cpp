// auto-ported from 00494c60_FUN_00494c60.c (FUN_00494c60, 51 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMotionController;
typedef CMotionController* (BEA_THISCALL* FUN_004bae30_t)(uint32_t);
static const bea_guard<FUN_004bae30_t> FUN_004bae30 = {(FUN_004bae30_t)0x004bae30};

static void * BEA_THISCALL ap_00494c60(void * this_, int param_1)
{
  FUN_004bae30(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005dc27c);
  *(int *)((int)this_ + 0xc) = param_1;
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)((int)this_ + 8) = *(int *)(param_1 + 0x10) + 8;
    return this_;
  }
  *(undefined4 *)((int)this_ + 8) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00494c60, ap_00494c60));
