// auto-ported from 004b6cd0_FUN_004b6cd0.c (FUN_004b6cd0, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00524600_t)(uint32_t);
static const bea_guard<FUN_00524600_t> FUN_00524600 = {(FUN_00524600_t)0x00524600};
typedef uint32_t (BEA_THISCALL* FUN_00528bf0_t)(uint32_t);
static const bea_guard<FUN_00528bf0_t> FUN_00528bf0 = {(FUN_00528bf0_t)0x00528bf0};

static uint32_t BEA_THISCALL ap_004b6cd0(void * this_)
{
  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_00524600(bea_arg((void *)(-(uint)(this_ != (void *)0x20) & (uint)this_)));
  return FUN_00528bf0(bea_arg((void *)((int)this_ + -0x20)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b6cd0, ap_004b6cd0));
