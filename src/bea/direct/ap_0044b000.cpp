// auto-ported from 0044b000_FUN_0044b000.c (FUN_0044b000, 93 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0044b1f0_t)(uint32_t);
static const bea_guard<FUN_0044b1f0_t> FUN_0044b1f0 = {(FUN_0044b1f0_t)0x0044b1f0};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};

static uint32_t BEA_THISCALL ap_0044b000(void * this_)
{
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005db28c);
  FUN_0044b1f0(bea_arg(this_));
  return FUN_0055db0a(bea_arg((int)this_ + 0x30), bea_arg(0x10), bea_arg(600), bea_arg(((void*)0x004e5c60)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044b000, ap_0044b000));
