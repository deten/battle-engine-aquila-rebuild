// auto-ported from 0049cad0_FUN_0049cad0.c (FUN_0049cad0, 75 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMotionController;
typedef CMotionController* (BEA_THISCALL* FUN_004bae30_t)(uint32_t);
static const bea_guard<FUN_004bae30_t> FUN_004bae30 = {(FUN_004bae30_t)0x004bae30};

static void * BEA_THISCALL ap_0049cad0(void * this_, undefined4 param_1)
{
  FUN_004bae30(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005dc450);
  *(undefined4 *)((int)this_ + 8) = param_1;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0xe4) = 0;
  *(undefined4 *)((int)this_ + 0xe0) = 0;
  *(undefined4 *)((int)this_ + 0xdc) = 0;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x28) = 0xbf800000;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049cad0, ap_0049cad0));
