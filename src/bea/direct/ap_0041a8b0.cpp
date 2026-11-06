// auto-ported from 0041a8b0_FUN_0041a8b0.c (FUN_0041a8b0, 69 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};

static void BEA_THISCALL ap_0041a8b0(void * this_)
{
  void *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  this_00 = (void *)0x0;
  if (this_ != (void *)0x0) {
    this_00 = (void *)((int)this_ + 4);
  }
  FUN_004bac40(bea_arg(this_00));
  *(undefined ***)this_ = ((void*)0x005d9260);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041a8b0, ap_0041a8b0));
