// auto-ported from 00424a20_FUN_00424a20.c (FUN_00424a20, 434 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_00424be0_t)(uint32_t);
static const bea_guard<FUN_00424be0_t> FUN_00424be0 = {(FUN_00424be0_t)0x00424be0};
typedef uint32_t (BEA_THISCALL* FUN_00424ca0_t)(uint32_t);
static const bea_guard<FUN_00424ca0_t> FUN_00424ca0 = {(FUN_00424ca0_t)0x00424ca0};
typedef uint32_t (BEA_THISCALL* FUN_004250f0_t)(uint32_t);
static const bea_guard<FUN_004250f0_t> FUN_004250f0 = {(FUN_004250f0_t)0x004250f0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

static void BEA_THISCALL ap_00424a20(void * this_)
{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  pfVar1 = (float *)((int)this_ + 0xc);
  *(float *)((int)this_ + 0x1c) = *pfVar1;
  *(undefined4 *)((int)this_ + 0x20) = *(undefined4 *)((int)this_ + 0x10);
  *(undefined4 *)((int)this_ + 0x24) = *(undefined4 *)((int)this_ + 0x14);
  *(undefined4 *)((int)this_ + 0x28) = *(undefined4 *)((int)this_ + 0x18);
  iVar2 = *(int *)((int)this_ + 0x110);
  puVar8 = (undefined4 *)((int)this_ + 0x2c);
  puVar9 = (undefined4 *)((int)this_ + 0x5c);
  for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x2c) & 4) == 0)) {
    if (*(int *)(iVar2 + 0x260) == 2) {
      FUN_00424ca0(bea_arg(this_));
    }
    else {
      FUN_004250f0(bea_arg(this_));
    }
    fVar10 = (float10)fcos((float10)*(float *)((int)this_ + 0xa0));
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    *pfVar1 = 0.0;
    *(undefined4 *)((int)this_ + 0x10) = 0;
    *(undefined4 *)((int)this_ + 0x14) = 0;
    *(undefined4 *)((int)this_ + 0x18) = local_4;
    *pfVar1 = (float)(fVar10 * (float10)*(float *)((int)this_ + 0x90) + (float10)*pfVar1);
    *(float *)((int)this_ + 0x10) =
         (float)(fVar10 * (float10)*(float *)((int)this_ + 0x94) +
                (float10)*(float *)((int)this_ + 0x10));
    *(float *)((int)this_ + 0x14) =
         (float)(fVar10 * (float10)*(float *)((int)this_ + 0x98) +
                (float10)*(float *)((int)this_ + 0x14));
    fVar3 = *(float *)((int)this_ + 0x90) * 0.8f;
    *(float *)((int)this_ + 0x90) = fVar3;
    fVar4 = *(float *)((int)this_ + 0x94) * 0.8f;
    *(float *)((int)this_ + 0x94) = fVar4;
    fVar5 = *(float *)((int)this_ + 0x98) * 0.8f;
    fVar6 = *(float *)((int)this_ + 0x9c) * 0.8f;
    *(float *)((int)this_ + 0x98) = fVar5;
    *(float *)((int)this_ + 0x9c) = fVar6;
    if ((((0.001f < ABS(fVar3)) || (0.001f < ABS(fVar4))) || (0.001f < ABS(fVar5))) ||
       (0.001f < ABS(fVar6))) {
      *(float *)((int)this_ + 0xa0) = *(float *)((int)this_ + 0xa0) + 0.8f;
    }
    local_14 = 0xbf800000;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x7d1), bea_arg(this_), bea_arg(&local_14), bea_arg(2), bea_arg(0), bea_arg(0));
    FUN_00424be0(bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00424a20, ap_00424a20));
