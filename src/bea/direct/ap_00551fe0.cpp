// auto-ported from 00551fe0_FUN_00551fe0.c (FUN_00551fe0, 118 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00512d50_t)(uint32_t);
static const bea_guard<FUN_00512d50_t> FUN_00512d50 = {(FUN_00512d50_t)0x00512d50};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};

static uint32_t BEA_THISCALL ap_00551fe0(void * this_)
{
  undefined1 *puStack_8;
  uint local_4;
  *(undefined ***)this_ = ((void*)0x005e512c);
  local_4 = 1;
  FUN_0055db0a(bea_arg((int)this_ + 0x10c), bea_arg(0x20), bea_arg(0x20), bea_arg(((void*)0x0044b1d0)));
  local_4 = local_4 & 0xffffff00;
  FUN_0055db0a(bea_arg((int)this_ + 0xc), bea_arg(8), bea_arg(0x20), bea_arg(((void*)0x0044b1d0)));
  local_4 = 0xffffffff;
  return FUN_00512d50(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00551fe0, ap_00551fe0));
