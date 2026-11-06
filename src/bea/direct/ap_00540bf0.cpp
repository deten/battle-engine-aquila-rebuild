// auto-ported from 00540bf0_FUN_00540bf0.c (FUN_00540bf0, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_00465f10_t)(uint32_t);
static const bea_guard<FUN_00465f10_t> FUN_00465f10 = {(FUN_00465f10_t)0x00465f10};

static void * BEA_THISCALL ap_00540bf0(void * this_)
{
  FUN_00465f10(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005e5054);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00540bf0, ap_00540bf0));
