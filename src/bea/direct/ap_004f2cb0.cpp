// auto-ported from 004f2cb0_FUN_004f2cb0.c (FUN_004f2cb0, 11 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00488700_t)(uint32_t);
static const bea_guard<FUN_00488700_t> FUN_00488700 = {(FUN_00488700_t)0x00488700};

static void BEA_THISCALL ap_004f2cb0(void * this_)
{
  *(undefined ***)this_ = ((void*)0x005df518);
  FUN_00488700(bea_arg(this_));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f2cb0, ap_004f2cb0));
