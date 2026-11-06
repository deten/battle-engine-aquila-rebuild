// auto-ported from 0053f730_FUN_0053f730.c (FUN_0053f730, 50 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00465c10_t)(uint32_t);
static const bea_guard<FUN_00465c10_t> FUN_00465c10 = {(FUN_00465c10_t)0x00465c10};

static void * BEA_THISCALL ap_0053f730(void * this_)
{
  *(undefined4 *)((int)this_ + 0x168) = 0;
  *(undefined4 *)((int)this_ + 0x16c) = 0;
  *(undefined ***)this_ = ((void*)0x005e504c);
  *(undefined4 *)((int)this_ + 0x170) = 0;
  *(undefined4 *)((int)this_ + 0x174) = 0;
  *(undefined4 *)((int)this_ + 0x178) = 0;
  FUN_00465c10(bea_arg(this_));
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053f730, ap_0053f730));
