// auto-ported from 004fff00_FUN_004fff00.c (FUN_004fff00, 81 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_00512ca0_t)(uint32_t);
static const bea_guard<FUN_00512ca0_t> FUN_00512ca0 = {(FUN_00512ca0_t)0x00512ca0};

static void * BEA_THISCALL ap_004fff00(void * this_)
{  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005dfb8c);
  *(undefined4 *)((int)this_ + 8) = 0;
  FUN_00512ca0(bea_arg(this_));
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined1 *)((int)this_ + 0x28) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fff00, ap_004fff00));
