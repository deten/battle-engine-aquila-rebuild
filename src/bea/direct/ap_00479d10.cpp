// auto-ported from 00479d10_vslot66.c (CGillM::vslot66, 128 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CGillM;
typedef char CMech;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef uint32_t (BEA_THISCALL* CMech__vslot66_t)(uint32_t);
static const bea_guard<CMech__vslot66_t> CMech__vslot66 = {(CMech__vslot66_t)0x0049fc10};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static uint32_t BEA_THISCALL ap_00479d10(CGillM * this_)
{
  undefined4 uVar1;
  float10 fVar2;
  uVar1 = DAT_00672fd0;
  if (*(int *)(this_ + 0x274) != 1) {
    if (*(int *)(this_ + 0x244) == 2) {
      *(undefined4 *)(this_ + 0x84) = 0x3df5c28f;
      *(undefined4 *)(this_ + 0xcc) = uVar1;
    }
    return CMech__vslot66(bea_arg((CMech *)this_));
  }
  *(undefined4 *)(this_ + 0xcc) = DAT_00672fd0;
  fVar2 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(this_ + 0x1c));
  if ((float10)*(float *)(this_ + 0x24) <= fVar2) {
    *(undefined4 *)(this_ + 0x274) = 0;
    *(undefined4 *)(this_ + 0x84) = 0;
    return CMech__vslot66(bea_arg((CMech *)this_));
  }
  *(undefined4 *)(this_ + 0x84) = 0xbda3d70a;
  return CMech__vslot66(bea_arg((CMech *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00479d10, ap_00479d10));
