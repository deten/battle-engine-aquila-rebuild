// auto-ported from 004013d0_FUN_004013d0.c (FUN_004013d0, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004f3f00_t)(uint32_t);
static const bea_guard<FUN_004f3f00_t> FUN_004f3f00 = {(FUN_004f3f00_t)0x004f3f00};

static void BEA_THISCALL ap_004013d0(void * this_)
{
  *(undefined ***)this_ = ((void*)0x005d844c);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005d83d4);
  FUN_004f3f00(bea_arg(this_));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004013d0, ap_004013d0));
