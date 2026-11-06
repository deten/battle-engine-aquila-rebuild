// auto-ported from 004a45c0_FUN_004a45c0.c (FUN_004a45c0, 66 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};

static void * BEA_THISCALL ap_004a45c0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  *(undefined4 *)((int)this_ + 4) = param_1;
  FUN_004e5840(bea_arg((void *)((int)this_ + 8)));
  *(undefined4 *)((int)this_ + 0x1c) = param_2;
  *(undefined4 *)((int)this_ + 0x20) = param_3;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x28) = param_4;
  *(undefined4 *)((int)this_ + 0x2c) = param_5;
  *(undefined ***)this_ = ((void*)0x005dc650);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a45c0, ap_004a45c0));
