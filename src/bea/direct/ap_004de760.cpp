// auto-ported from 004de760_FUN_004de760.c (FUN_004de760, 110 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};

static uint32_t BEA_THISCALL ap_004de760(void * this_)
{
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)((int)this_ + -4) = ((void*)0x005dec20);
  *(undefined ***)this_ = ((void*)0x005dec10);
  if (*(undefined4 **)((int)this_ + 0x48) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x48), 0x0, 1);
    *(undefined4 *)((int)this_ + 0x48) = 0;
  }
  return FUN_004bac40(bea_arg((void *)(-(uint)(this_ != (void *)0x4) & (uint)this_)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004de760, ap_004de760));
