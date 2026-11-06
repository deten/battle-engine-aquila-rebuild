// auto-ported from 004bfd20_FUN_004bfd20.c (FUN_004bfd20, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_004f3e10_t)(uint32_t);
static const bea_guard<FUN_004f3e10_t> FUN_004f3e10 = {(FUN_004f3e10_t)0x004f3e10};

static void * BEA_THISCALL ap_004bfd20(void * this_)
{
  FUN_004f3e10(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005d844c);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005d83d4);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bfd20, ap_004bfd20));
