// auto-ported from 0053f0f0_FUN_0053f0f0.c (FUN_0053f0f0, 76 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00541200_t)(uint32_t);
static const bea_guard<FUN_00541200_t> FUN_00541200 = {(FUN_00541200_t)0x00541200};

static void * BEA_THISCALL ap_0053f0f0(void * this_)
{  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined ***)this_ = ((void*)0x005e5018);
  FUN_00541200(bea_arg((void *)((int)this_ + 0x10)));
  *(undefined ***)this_ = ((void*)0x005e4fe4);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053f0f0, ap_0053f0f0));
