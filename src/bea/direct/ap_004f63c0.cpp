// auto-ported from 004f63c0_FUN_004f63c0.c (FUN_004f63c0, 106 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004f3640_t)(uint32_t);
static const bea_guard<FUN_004f3640_t> FUN_004f3640 = {(FUN_004f3640_t)0x004f3640};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_004f63c0(void * this_)
{
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005dd9d8);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005dd960);
  if (*(int *)((int)this_ + 0x48) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x48)));
    *(undefined4 *)((int)this_ + 0x48) = 0;
  }
  return FUN_004f3640(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f63c0, ap_004f63c0));
