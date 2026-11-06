// auto-ported from 0040c3c0_FUN_0040c3c0.c (FUN_0040c3c0, 153 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define s_Racer_006234f4 ((char*)0x006234f4)
typedef float10 (BEA_THISCALL* FUN_004121b0_t)(uint32_t);
static const bea_guard<FUN_004121b0_t> FUN_004121b0 = {(FUN_004121b0_t)0x004121b0};
typedef float10 (BEA_THISCALL* FUN_00414410_t)(uint32_t);
static const bea_guard<FUN_00414410_t> FUN_00414410 = {(FUN_00414410_t)0x00414410};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static float10 BEA_THISCALL ap_0040c3c0(void * this_)
{
  int iVar1;
  float *pfVar2;
  float10 fVar3;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x10 - 0x10);
  iVar1 = FUN_00568390(bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x4b0) + 0xa8)), bea_arg(s_Racer_006234f4));
  if (iVar1 == 0) {
    pfVar2 = (float *)bea_vcall<uint32_t>(this_, 0x6c, local_10);
    fVar3 = SQRT((float10)*pfVar2 * (float10)*pfVar2 + (float10)pfVar2[1] * (float10)pfVar2[1] + (float10)pfVar2[2] * (float10)pfVar2[2]) *
            (float10)0.6666667f;
    if ((float10)1.0f < fVar3) {
      return (float10)1.0f;
    }
  }
  else {
    if (*(int *)((int)this_ + 0x260) != 3) {
      fVar3 = (float10)FUN_00414410(bea_arg(*(void **)((int)this_ + 0x578)));
      return fVar3;
    }
    fVar3 = (float10)FUN_004121b0(bea_arg(*(void **)((int)this_ + 0x57c)));
  }
  return fVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040c3c0, ap_0040c3c0));
