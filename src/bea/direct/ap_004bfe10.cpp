// auto-ported from 004bfe10_FUN_004bfe10.c (FUN_004bfe10, 89 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004013d0_t)(uint32_t);
static const bea_guard<FUN_004013d0_t> FUN_004013d0 = {(FUN_004013d0_t)0x004013d0};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};

static uint32_t BEA_THISCALL ap_004bfe10(void * this_)
{
  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_0055db0a(bea_arg((int)this_ + 0xec), bea_arg(8), bea_arg(4), bea_arg(((void*)0x004cb050)));
  return FUN_004013d0(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bfe10, ap_004bfe10));
