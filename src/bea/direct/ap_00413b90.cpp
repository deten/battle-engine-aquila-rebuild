// auto-ported from 00413b90_FUN_00413b90.c (FUN_00413b90, 298 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char fStack_38;
typedef char fStack_4c;
typedef char fStack_50;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef float * (BEA_FASTCALL* FUN_0047ec60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ec60_t> FUN_0047ec60 = {(FUN_0047ec60_t)0x0047ec60};

static void BEA_THISCALL ap_00413b90(void * this_)
{
  int iVar1;
  float fVar2;
  int iVar3;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x4c);
  undefined4 &uStack_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x48);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x38);
  float &fStack_30 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x28);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x1c);
  float &fStack_10 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x8);
  iVar3 = 0;
  while(BEA_LOOP_GUARD(( true ))) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x6c, &local_40);
    iVar1 = *(int *)((int)this_ + 0x20);
    fStack_28 = fStack_38 + *(float *)(iVar1 + 0x24);
    fStack_2c = fStack_3c + *(float *)(iVar1 + 0x20);
    fStack_30 = local_40 + *(float *)(iVar1 + 0x1c);
    FUN_0047ec60(bea_arg(&DAT_006fadc8), bea_arg(&fStack_50), bea_arg(&fStack_30));
    fVar2 = SQRT(fStack_50 * fStack_50 + fStack_4c * fStack_4c);
    if (fVar2 != 0.0f) {
      fVar2 = 1.0f / fVar2;
      fStack_50 = fVar2 * fStack_50;
      fStack_4c = fStack_4c * fVar2;
    }
    uStack_48 = 0;
    fVar2 = fStack_38 * 0.0f + local_40 * fStack_50 + fStack_4c * fStack_3c;
    if (-1e-05 < fVar2) break;
    fStack_20 = fStack_50 * fVar2;
    fStack_1c = fStack_4c * fVar2;
    fStack_10 = local_40 - fStack_20;
    fStack_c = fStack_3c - fStack_1c;
    fStack_8 = fStack_38 - fVar2 * 0.0f;
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x70, &fStack_10);
    iVar3 = iVar3 + 1;
    if (5 < iVar3) {
      return;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00413b90, ap_00413b90));
