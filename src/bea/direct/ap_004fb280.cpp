// auto-ported from 004fb280_FUN_004fb280.c (FUN_004fb280, 333 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef float10 (BEA_THISCALL* FUN_005094b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005094b0_t> FUN_005094b0 = {(FUN_005094b0_t)0x005094b0};

static void BEA_THISCALL ap_004fb280(void * this_, undefined4 param_1)
{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float &fStack_14 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x10);
  undefined4 &uStack_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0xc);
  undefined4 &uStack_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  if ((*(int *)((int)this_ + 0x224) != 0) && ((*(byte *)((int)this_ + 0x2c) & 4) == 0)) {
    if ((*(int *)((int)this_ + 0x13c) == 0) ||
       (piVar1 = *(int **)(*(int *)((int)this_ + 0x13c) + 0xc), piVar1 == (int *)0x0)) {
      if (*(float *)((int)this_ + 0x20c) < DAT_00672fd0) {
        *(undefined4 *)((int)this_ + 0xec) = *(undefined4 *)((int)this_ + 0xf4);
      }
    }
    else {
      if (((*(int *)((int)this_ + 0x140) != 0) &&
          (iVar2 = *(int *)(*(int *)((int)this_ + 0x140) + 0xa0), iVar2 != 0)) &&
         (*(int *)(iVar2 + 0x18) != 0)) {
        bea_vcall<uint32_t>(piVar1, 0x168, &local_10);
        fVar4 = (float10)FUN_005094b0(bea_arg(*(void **)((int)this_ + 0x140)), bea_arg(local_10), bea_arg(uStack_c), bea_arg(uStack_8), bea_arg(uStack_4));
        *(float *)((int)this_ + 0xec) = (float)fVar4;
      }
      *(float *)((int)this_ + 0x20c) = DAT_00672fd0 + 10.0f;
    }
    if (*(float *)((int)this_ + 0xec) <= 3.1415927f) {
      if (*(float *)((int)this_ + 0xec) < -1.5707964f) {
        *(undefined4 *)((int)this_ + 0xec) = 0xbfc90fdb;
      }
    }
    else {
      *(undefined4 *)((int)this_ + 0xec) = 0x40490fdb;
    }
    uVar3 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar3 = uVar3 & 0x8000ffff;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffff0000) + 1;
    }
    fStack_14 = (float)(int)uVar3 * 1.5258789e-06f + DAT_00672fd0;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xfa1), bea_arg(this_), bea_arg(&fStack_14), bea_arg(0), bea_arg(0), bea_arg(param_1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fb280, ap_004fb280));
