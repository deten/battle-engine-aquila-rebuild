// auto-ported from 0040ef20_FUN_0040ef20.c (FUN_0040ef20, 496 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_006fbdfc GLOBAL_AT(int, 0x006fbdfc)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_006601b0 GLOBAL_AT(int, 0x006601b0)
#define DAT_006601b4 GLOBAL_AT(int, 0x006601b4)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_006601e8 GLOBAL_AT(int, 0x006601e8)
#define DAT_006601ec GLOBAL_AT(int, 0x006601ec)
#define DAT_006601f0 GLOBAL_AT(int, 0x006601f0)
#define DAT_006601f4 GLOBAL_AT(int, 0x006601f4)
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};

static void BEA_THISCALL ap_0040ef20(void * this_)
{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  undefined4 uVar9;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_24)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x30 - 0x24);
  undefined4 * &local_20 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x30 - 0x20);
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x14);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x30 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x4);
  fVar7 = bea_fcast<float>(DAT_006fbdfc);
  fVar8 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg((undefined4 *)((int)this_ + 0x1c))));
  fVar1 = bea_fcast<float>(fVar8);
  fVar6 = fVar1;
  if (fVar7 < fVar1) {
    fVar6 = fVar7;
  }
  fVar6 = fVar6 - *(float *)((int)this_ + 0x24);
  if (fVar6 < 10.0f) {
    local_20 = (undefined4 *)0x0;
    FUN_004cb040(bea_arg(local_24));
    uVar2 = *(undefined4 *)((int)this_ + 0x1c);
    uVar3 = *(undefined4 *)((int)this_ + 0x20);
    local_14 = fVar6 * 1.5f + *(float *)((int)this_ + 0x24);
    uVar4 = *(undefined4 *)((int)this_ + 0x28);
    uVar9 = DAT_006601b0;
    if (fVar7 < fVar1) {
      uVar9 = DAT_006601b4;
    }
    FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(uVar9), bea_arg(local_24), bea_arg(DAT_006601e8), bea_arg(DAT_006601ec), bea_arg(DAT_006601f0), bea_arg(DAT_006601f4), bea_arg(0), bea_arg(0));
    if (local_20 != (undefined4 *)0x0) {
      if (local_20[0x12] == 0x461c4000) {
        local_20[0x20] = uVar2;
        local_20[0x21] = uVar3;
        local_20[0x22] = bea_piece32(local_14);
        local_20[0x23] = uVar4;
        local_20[0x10] = local_20[0x20];
        local_20[0x11] = local_20[0x21];
        local_20[0x12] = local_20[0x22];
        local_20[0x13] = local_20[0x23];
        *local_20 = uVar2;
        local_20[1] = uVar3;
        local_20[2] = bea_piece32(local_14);
        iVar5 = local_20[0x2b];
        local_20[3] = uVar4;
      }
      else {
        local_20[0x10] = *local_20;
        local_20[0x11] = local_20[1];
        local_20[0x12] = local_20[2];
        local_20[0x13] = local_20[3];
        *local_20 = uVar2;
        local_20[1] = uVar3;
        local_20[2] = bea_piece32(local_14);
        iVar5 = local_20[0x2b];
        local_20[3] = uVar4;
      }
      if (iVar5 != -0x40800000) {
        local_20[0x2b] = DAT_00672fd0;
      }
    }
    FUN_004cb050(bea_arg(local_24));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040ef20, ap_0040ef20));
