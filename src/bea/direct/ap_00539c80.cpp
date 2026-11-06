// auto-ported from 00539c80_FUN_00539c80.c (FUN_00539c80, 22 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00528bc0_t)(uint32_t);
static const bea_guard<FUN_00528bc0_t> FUN_00528bc0 = {(FUN_00528bc0_t)0x00528bc0};

static void * BEA_THISCALL ap_00539c80(void * this_)
{
  FUN_00528bc0(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005e4f5c);
  *(undefined1 *)((int)this_ + 0x20) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00539c80, ap_00539c80));
