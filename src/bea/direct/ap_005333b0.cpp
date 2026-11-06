// auto-ported from 005333b0_FUN_005333b0.c (FUN_005333b0, 115 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};

static void * BEA_THISCALL ap_005333b0(void * this_, undefined4 param_1, int param_2)
{  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined ***)this_ = ((void*)0x005d92d4);
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x28)));
  *(undefined ***)this_ = ((void*)0x005e4f08);
  *(undefined4 *)((int)this_ + 8) = param_1;
  *(int *)((int)this_ + 0xc) = param_2;
  *(void **)(param_2 + 0x68) = this_;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x10) = param_1;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005333b0, ap_005333b0));
