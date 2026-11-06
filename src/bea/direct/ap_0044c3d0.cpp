// auto-ported from 0044c3d0_FUN_0044c3d0.c (FUN_0044c3d0, 79 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0044c440_t)(uint32_t);
static const bea_guard<FUN_0044c440_t> FUN_0044c440 = {(FUN_0044c440_t)0x0044c440};

static void * BEA_THISCALL ap_0044c3d0(void * this_, undefined4 param_1)
{  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined ***)this_ = ((void*)0x005db2a4);
  *(undefined4 *)((int)this_ + 0x8008) = param_1;
  FUN_0044c440(bea_arg(this_));
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044c3d0, ap_0044c3d0));
