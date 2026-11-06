// auto-ported from 00541120_FUN_00541120.c (FUN_00541120, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00528bc0_t)(uint32_t);
static const bea_guard<FUN_00528bc0_t> FUN_00528bc0 = {(FUN_00528bc0_t)0x00528bc0};

static void * BEA_THISCALL ap_00541120(void * this_)
{
  FUN_00528bc0(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005e5078);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00541120, ap_00541120));
