// auto-ported from 004d63c0_vslot66.c (CRadar::vslot66, 240 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRadar;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot66_t)(uint32_t);
static const bea_guard<CUnit__vslot66_t> CUnit__vslot66 = {(CUnit__vslot66_t)0x004fa8d0};

static CRadar * BEA_THISCALL ap_004d63c0(CRadar * this_)
{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 local_4 = 0;
  
  CUnit__vslot66(bea_arg((CUnit *)this_));
  fVar1 = *(float *)(this_ + 0x280) + 0.1f;
  *(float *)(this_ + 0x280) = fVar1;
  if (3.1415927f < fVar1) {
    *(float *)(this_ + 0x280) = fVar1 - 6.2831855f;
  }
  fVar2 = (float10)fcos((float10)*(float *)(this_ + 0x280));
  fVar3 = (float10)fsin((float10)*(float *)(this_ + 0x280));
  *(float *)(this_ + 0x250) = (float)fVar2;
  *(float *)(this_ + 0x254) = (float)-fVar3;
  *(undefined4 *)(this_ + 600) = 0;
  *(undefined4 *)(this_ + 0x25c) = local_4;
  *(float *)(this_ + 0x260) = (float)fVar3;
  *(float *)(this_ + 0x264) = (float)fVar2;
  *(undefined4 *)(this_ + 0x268) = 0;
  *(undefined4 *)(this_ + 0x26c) = local_4;
  *(undefined4 *)(this_ + 0x270) = 0;
  *(undefined4 *)(this_ + 0x274) = 0;
  *(undefined4 *)(this_ + 0x278) = 0x3f800000;
  *(undefined4 *)(this_ + 0x27c) = local_4;
  return this_ + 0x270;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004d63c0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
