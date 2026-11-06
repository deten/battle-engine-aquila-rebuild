// auto-ported from 00504b40_FUN_00504b40.c (FUN_00504b40, 241 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef float10 (BEA_THISCALL* FUN_005094b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005094b0_t> FUN_005094b0 = {(FUN_005094b0_t)0x005094b0};

static void BEA_THISCALL ap_00504b40(void * this_)
{
  int *piVar1;
  int iVar2;
  float10 fVar3;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x10);
  undefined4 &uStack_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0xc);
  undefined4 &uStack_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x4);
  if ((*(byte *)((int)this_ + 0x2c) & 4) == 0) {
    if ((*(int *)((int)this_ + 0x13c) == 0) ||
       (piVar1 = *(int **)(*(int *)((int)this_ + 0x13c) + 0xc), piVar1 == (int *)0x0)) {
      if (*(float *)((int)this_ + 0x20c) < DAT_00672fd0) {
        *(undefined4 *)((int)this_ + 0xec) = *(undefined4 *)((int)this_ + 0xf4);
      }
    }
    else {
      if (*(int *)((int)this_ + 0x140) != 0) {
        bea_vcall<uint32_t>(piVar1, 0x168, &local_10);
        iVar2 = *(int *)((int)*(void **)((int)this_ + 0x140) + 0xa0);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
          fVar3 = bea_fcast<float10>(FUN_005094b0(bea_arg(*(void **)((int)this_ + 0x140)), bea_arg(local_10), bea_arg(uStack_c), bea_arg(uStack_8), bea_arg(uStack_4)));
          *(float *)((int)this_ + 0xec) = bea_fcast<float>(fVar3);
        }
      }
      *(float *)((int)this_ + 0x20c) = DAT_00672fd0 + 10.0f;
    }
    if (*(float *)((int)this_ + 0xec) < -1.3089969f) {
      *(undefined4 *)((int)this_ + 0xec) = 0xbfa78d36;
      return;
    }
    if (5.0f < *(float *)((int)this_ + 0xec)) {
      *(undefined4 *)((int)this_ + 0xec) = 0x40a00000;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00504b40, ap_00504b40));
