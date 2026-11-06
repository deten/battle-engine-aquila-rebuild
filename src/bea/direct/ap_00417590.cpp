// auto-ported from 00417590_FUN_00417590.c (FUN_00417590, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004f84e0_t)(uint32_t);
static const bea_guard<FUN_004f84e0_t> FUN_004f84e0 = {(FUN_004f84e0_t)0x004f84e0};

static void BEA_THISCALL ap_00417590(void * this_)
{
  *(undefined ***)this_ = ((void*)0x005d8eb4);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005d8e3c);
  FUN_004f84e0(bea_arg(this_));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00417590, ap_00417590));
