// auto-ported from 005057b0_vslot9.c (CWaypoint::vslot9, 94 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CThing;
typedef char CWaypoint;
#define DAT_00855120 GLOBAL_AT(int, 0x00855120)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef uint32_t (BEA_THISCALL* CThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CThing__vslot9_t> CThing__vslot9 = {(CThing__vslot9_t)0x004f34a0};
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};

static uint32_t BEA_THISCALL ap_005057b0(CWaypoint * this_, int param_1)
{
  float10 fVar1;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  CThing__vslot9(bea_arg((CThing *)this_), bea_arg(param_1));
  FUN_004e5b20(bea_arg(&DAT_00855120), bea_arg(this_));
  fVar1 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(this_ + 0x1c));
  if (fVar1 < (float10)*(float *)(this_ + 0x24)) {
    fVar1 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(this_ + 0x1c));
    *(float *)(this_ + 0x24) = (float)fVar1;
  }
  return FUN_00401000(bea_arg(this_ + 0x3c), bea_arg(*(undefined4 *)(param_1 + 0xa4)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005057b0, ap_005057b0));
