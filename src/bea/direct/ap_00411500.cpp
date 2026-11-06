// auto-ported from 00411500_FUN_00411500.c (FUN_00411500, 290 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef uint32_t (BEA_THISCALL* FUN_0040dce0_t)(uint32_t);
static const bea_guard<FUN_0040dce0_t> FUN_0040dce0 = {(FUN_0040dce0_t)0x0040dce0};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static void BEA_THISCALL ap_00411500(void * this_)
{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x4);
  fVar2 = DAT_006fbdfc;
  iVar1 = *(int *)((int)this_ + 0x18);
  local_10 = *(undefined4 *)(iVar1 + 0x1c);
  local_c = *(undefined4 *)(iVar1 + 0x20);
  local_8 = *(float *)(iVar1 + 0x24);
  local_4 = *(undefined4 *)(iVar1 + 0x28);
  fVar4 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_10)));
  if ((bea_fcast<float10>(fVar2) < fVar4) && (fVar2 = fVar2 - local_8, fVar2 < 0.5f)) {
    iVar1 = *(int *)((int)this_ + 0x18);
    fVar3 = SQRT(*(float *)(iVar1 + 0x80) * *(float *)(iVar1 + 0x80) +
                 *(float *)(iVar1 + 0x7c) * *(float *)(iVar1 + 0x7c));
    if (0.3f < fVar3) {
      *(float *)(iVar1 + 0x84) = *(float *)(iVar1 + 0x84) - fVar3 * 0.3f;
      *(float *)(*(int *)((int)this_ + 0x18) + 0x280) =
           *(float *)(*(int *)((int)this_ + 0x18) + 0x280) - fVar3 * 0.01f;
      iVar1 = *(int *)((int)this_ + 0x18);
      *(float *)(iVar1 + 0x7c) = *(float *)(iVar1 + 0x7c) * 0.8f;
      *(float *)(iVar1 + 0x80) = *(float *)(iVar1 + 0x80) * 0.8f;
      *(float *)(iVar1 + 0x84) = *(float *)(iVar1 + 0x84) * 0.8f;
      bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0xa0, (0.5f - fVar2) * 20.0f,0,0,0xffffffff);
      FUN_0040dce0(bea_arg(*(void **)((int)this_ + 0x18)));
      return;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00411500, ap_00411500));
