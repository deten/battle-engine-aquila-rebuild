// auto-ported from 00412cf0_FUN_00412cf0.c (FUN_00412cf0, 132 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};

static uint32_t BEA_THISCALL ap_00412cf0(void * this_)
{
  int *piVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  while(BEA_LOOP_GUARD(( true ))) {
    piVar1 = *(int **)this_;
    *(int **)((int)this_ + 8) = piVar1;
    if ((piVar1 == (int *)0x0) || (piVar1 = (int *)*piVar1, piVar1 == (int *)0x0)) break;
    FUN_004e5bd0(bea_arg(this_), bea_arg(piVar1));
    bea_vcall<uint32_t>(piVar1, 0x4, 1);
  }
  if (*(int **)((int)this_ + 0x18) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x4, 1);
  }
  if (*(int **)((int)this_ + 0x1c) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x1c), 0x4, 1);
  }
  return FUN_004e5c60(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00412cf0, ap_00412cf0));
