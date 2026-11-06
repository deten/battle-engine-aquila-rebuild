// auto-ported from 004eacc0_FUN_004eacc0.c (FUN_004eacc0, 132 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef void * (BEA_THISCALL* FUN_004f3e10_t)(uint32_t);
static const bea_guard<FUN_004f3e10_t> FUN_004f3e10 = {(FUN_004f3e10_t)0x004f3e10};

static void * BEA_THISCALL ap_004eacc0(void * this_)
{  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_004f3e10(bea_arg(this_));
  *(undefined4 *)((int)this_ + 0x7c) = 0;
  FUN_0048dcf0(bea_arg((undefined4 *)((int)this_ + 0x84)));
  *(undefined4 *)((int)this_ + 0x440) = 0;
  *(undefined4 *)((int)this_ + 0x84) = ((void*)0x005dcad4);
  *(undefined4 *)((int)this_ + 0x444) = 0;
  *(undefined4 *)((int)this_ + 0x448) = 0;
  *(undefined ***)this_ = ((void*)0x005df2ec);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005df274);
  FUN_00401000(bea_arg((undefined4 *)((int)this_ + 0x7c)), bea_arg(0));
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004eacc0, ap_004eacc0));
