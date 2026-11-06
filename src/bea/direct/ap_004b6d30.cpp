// auto-ported from 004b6d30_FUN_004b6d30.c (FUN_004b6d30, 84 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_005245a0_t)(uint32_t);
static const bea_guard<FUN_005245a0_t> FUN_005245a0 = {(FUN_005245a0_t)0x005245a0};
typedef uint32_t (BEA_THISCALL* FUN_00528bc0_t)(uint32_t);
static const bea_guard<FUN_00528bc0_t> FUN_00528bc0 = {(FUN_00528bc0_t)0x00528bc0};

static void * BEA_THISCALL ap_004b6d30(void * this_)
{  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_00528bc0(bea_arg(this_));
  FUN_005245a0(bea_arg((undefined4 *)((int)this_ + 0x20)));
  *(undefined4 *)((int)this_ + 0x20) = ((void*)0x005dc690);
  *(undefined ***)this_ = ((void*)0x005dc688);
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b6d30, ap_004b6d30));
