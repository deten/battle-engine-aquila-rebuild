// auto-ported from 00550380_FUN_00550380.c (FUN_00550380, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_004fff00_t)(uint32_t);
static const bea_guard<FUN_004fff00_t> FUN_004fff00 = {(FUN_004fff00_t)0x004fff00};

static void * BEA_THISCALL ap_00550380(void * this_)
{
  FUN_004fff00(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005e5114);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00550380, ap_00550380));
