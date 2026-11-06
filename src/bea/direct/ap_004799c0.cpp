// auto-ported from 004799c0_vslot9.c (CGillM::vslot9, 139 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CGillM;
typedef char CMech;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef int (BEA_THISCALL* CMech__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CMech__vslot9_t> CMech__vslot9 = {(CMech__vslot9_t)0x0049f820};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static void BEA_THISCALL ap_004799c0(CGillM * this_, int param_1)
{
  float10 fVar1;
  
  *(undefined4 *)(this_ + 0x26c) = 0;
  *(undefined4 *)(this_ + 0x270) = DAT_00672fd0;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0xa100000;
  CMech__vslot9(bea_arg((CMech *)this_), bea_arg(param_1));
  fVar1 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(this_ + 0x1c));
  *(undefined4 *)(this_ + 0x274) = 1;
  *(float *)(this_ + 0x24) = (float)(fVar1 + (float10)30.0f);
  *(float *)(this_ + 0x94) = (float)(fVar1 + (float10)30.0f);
  *(undefined4 *)(this_ + 0x278) = *(undefined4 *)(this_ + 0x1c);
  *(undefined4 *)(this_ + 0x27c) = *(undefined4 *)(this_ + 0x20);
  *(undefined4 *)(this_ + 0x280) = *(undefined4 *)(this_ + 0x24);
  *(undefined4 *)(this_ + 0x284) = *(undefined4 *)(this_ + 0x28);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004799c0, ap_004799c0));
