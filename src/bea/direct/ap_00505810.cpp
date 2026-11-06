// auto-ported from 00505810_vslot2.c (CWaypoint::vslot2, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CThing;
typedef char CWaypoint;
#define DAT_00855120 GLOBAL_AT(int, 0x00855120)
typedef uint32_t (BEA_THISCALL* CThing__vslot2_t)(uint32_t);
static const bea_guard<CThing__vslot2_t> CThing__vslot2 = {(CThing__vslot2_t)0x004f3600};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static uint32_t BEA_THISCALL ap_00505810(CWaypoint * this_)
{
  FUN_004e5bd0(bea_arg(&DAT_00855120), bea_arg(this_));
  return CThing__vslot2(bea_arg((CThing *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00505810, ap_00505810));
