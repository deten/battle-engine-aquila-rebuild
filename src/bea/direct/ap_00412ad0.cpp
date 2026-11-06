// auto-ported from 00412ad0_FUN_00412ad0.c (FUN_00412ad0, 231 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char fStack_10;
typedef char fStack_1c;
typedef char fStack_c;

static void BEA_THISCALL ap_00412ad0(void * this_)
{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x38);
  float (&local_30)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x40 - 0x30);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x1c);
  float &fStack_10 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0xc);
  *(undefined4 *)((int)this_ + 0x28) = *(undefined4 *)((int)this_ + 0x24);
  piVar1 = *(int **)((int)this_ + 0x20);
  pfVar5 = (float *)(piVar1 + 0xf);
  pfVar6 = local_30;
  for (iVar4 = 0xc; BEA_LOOP_GUARD((fVar3 = local_30[1], iVar4 != 0)); iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 1;
  }
  local_30[1] = local_20;
  bea_vcall<uint32_t>(piVar1, 0x6c, &local_40);
  // class 19: the asm's order (2 sums)
  fVar2 = fStack_10 * fStack_38 + local_30[1] * fStack_3c + local_30[0] * local_40;
  fVar3 = fStack_c * fStack_38 + fStack_1c * fStack_3c + local_40 * fVar3;
  if (ABS(fVar2) <= ABS(fVar3)) {
    fVar2 = fVar3 * 3.0f;
  }
  else {
    fVar2 = fVar2 * 2.5f;
  }
  *(float *)((int)this_ + 0x24) = fVar2 + *(float *)((int)this_ + 0x24);
  if (3.1415927f < *(float *)((int)this_ + 0x24)) {
    *(float *)((int)this_ + 0x24) = *(float *)((int)this_ + 0x24) - 6.2831855f;
  }
  if (*(float *)((int)this_ + 0x24) < -3.1415927f) {
    *(float *)((int)this_ + 0x24) = *(float *)((int)this_ + 0x24) + 6.2831855f;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00412ad0, ap_00412ad0));
