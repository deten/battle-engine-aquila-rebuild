// auto-ported from 00493020_FUN_00493020.c (FUN_00493020, 87 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMotionController;
typedef CMotionController* (BEA_THISCALL* FUN_004bae30_t)(uint32_t);
static const bea_guard<FUN_004bae30_t> FUN_004bae30 = {(FUN_004bae30_t)0x004bae30};

static void * BEA_THISCALL ap_00493020(void * this_, undefined4 param_1)
{
  FUN_004bae30(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005dc250);
  *(undefined4 *)((int)this_ + 8) = param_1;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x28) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x34) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined4 *)((int)this_ + 0x3c) = 0xbf800000;
  *(undefined4 *)((int)this_ + 0xb0) = 0;
  *(undefined4 *)((int)this_ + 0xb4) = 0;
  *(undefined4 *)((int)this_ + 0xb8) = 0;
  *(undefined4 *)((int)this_ + 0xc0) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00493020, ap_00493020));
