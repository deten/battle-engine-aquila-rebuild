// auto-ported from 0052f570_FUN_0052f570.c (FUN_0052f570, 84 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static void BEA_THISCALL ap_0052f570(void * this_)
{
  void *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  if ((*(int *)((int)this_ + 4) != 0) &&
     (this_00 = *(void **)(*(int *)((int)this_ + 4) + 4), this_00 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(this_00), bea_arg((int)this_ + 4));
  }
  *(undefined ***)this_ = ((void*)0x005e4b4c);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052f570, ap_0052f570));
