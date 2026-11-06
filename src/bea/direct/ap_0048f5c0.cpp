// auto-ported from 0048f5c0_FUN_0048f5c0.c (FUN_0048f5c0, 96 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};

static uint32_t BEA_THISCALL ap_0048f5c0(void * this_)
{
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005dc208);
  if (*(int *)((int)this_ + 0x10) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x10) + 8)));
    *(undefined4 *)((int)this_ + 0x10) = 0;
  }
  return FUN_004bac40(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048f5c0, ap_0048f5c0));
