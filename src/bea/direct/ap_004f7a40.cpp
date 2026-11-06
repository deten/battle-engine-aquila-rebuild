// auto-ported from 004f7a40_FUN_004f7a40.c (FUN_004f7a40, 105 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_STDCALL* FUN_00512cc0_t)(uint32_t);
static const bea_guard<FUN_00512cc0_t> FUN_00512cc0 = {(FUN_00512cc0_t)0x00512cc0};
typedef uint32_t (BEA_THISCALL* FUN_00512d50_t)(uint32_t);
static const bea_guard<FUN_00512d50_t> FUN_00512d50 = {(FUN_00512d50_t)0x00512d50};

static uint32_t BEA_THISCALL ap_004f7a40(void * this_)
{
  int *piVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005df908);
  FUN_00512cc0(bea_arg(this_));
  piVar1 = *(int **)((int)this_ + 8);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
    *(undefined4 *)((int)this_ + 8) = 0;
  }
  return FUN_00512d50(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f7a40, ap_004f7a40));
