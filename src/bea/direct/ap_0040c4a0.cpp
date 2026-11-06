// auto-ported from 0040c4a0_FUN_0040c4a0.c (FUN_0040c4a0, 165 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @hand-fixed 2026-10-21: the out-buffer Ghidra named &stack0x... (depth drift after a
// vtable call, NOTES A1-15 class 18) is the vector the function reads by its own name
// @hand-fixed 2026-10-28: the vector's z ([esp+0xc], 8 bytes into the buffer at [esp+4])
// is what the asm subtracts; the 10-21 fix read y (the buffer + 4)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define s_Racer_006234f4 ((char*)0x006234f4)
typedef float10 (BEA_THISCALL* FUN_00412370_t)(uint32_t);
static const bea_guard<FUN_00412370_t> FUN_00412370 = {(FUN_00412370_t)0x00412370};
typedef float10 (BEA_THISCALL* FUN_00414520_t)(uint32_t);
static const bea_guard<FUN_00414520_t> FUN_00414520 = {(FUN_00414520_t)0x00414520};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static float10 BEA_THISCALL ap_0040c4a0(void * this_)
{
  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)

  int iVar1;
  float10 fVar2;
  undefined1 (&local_10)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x20 - 0x10);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x8);
  iVar1 = FUN_00568390(bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x4b0) + 0xa8)), bea_arg(s_Racer_006234f4));
  if (iVar1 == 0) {
    bea_vcall<uint32_t>(((int)this_ + 8), 0x0, local_10);
    fVar2 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(local_10)));
    if (bea_fcast<float10>(DAT_006fbdfc) < fVar2) {
      fVar2 = bea_fcast<float10>(DAT_006fbdfc);
    }
    fVar2 = ABS(fVar2 - bea_fcast<float10>(fStack_8)) * bea_fcast<float10>(0.2f);
    if (bea_fcast<float10>(1.0f) < fVar2) {
      return bea_fcast<float10>(1.0f);
    }
  }
  else {
    if (*(int *)((int)this_ + 0x260) != 3) {
      fVar2 = bea_fcast<float10>(FUN_00414520(bea_arg(*(void **)((int)this_ + 0x578))));
      return fVar2;
    }
    fVar2 = bea_fcast<float10>(FUN_00412370(bea_arg(*(void **)((int)this_ + 0x57c))));
  }
  return fVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040c4a0, ap_0040c4a0));
