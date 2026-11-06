// auto-ported from 00550680_vslot0.c (CLandscapeIB::vslot0, 88 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CLandscapeIB;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00488290_t)(uint32_t);
static const bea_guard<FUN_00488290_t> FUN_00488290 = {(FUN_00488290_t)0x00488290};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};

static CLandscapeIB * BEA_THISCALL ap_00550680(CLandscapeIB * this_, uint param_1)
{
  if ((param_1 & 2) != 0) {
    FUN_0055db0a(bea_arg(this_), bea_arg(0x34), bea_arg(*(undefined4 *)(this_ + -4)), bea_arg(((void*)0x00488290)));
    if ((param_1 & 1) != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_ + -4));
    }
    return (CLandscapeIB *)(this_ + -4);
  }
  FUN_00488290(bea_arg(this_));
  if ((param_1 & 1) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_));
  }
  return (CLandscapeIB *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00550680, ap_00550680));
