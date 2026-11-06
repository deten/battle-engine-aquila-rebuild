// auto-ported from 004f9820_vslot0.c (CUnit::vslot0, 376 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CUnit;
#define DAT_008a9a78 GLOBAL_AT(int, 0x008a9a78)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* CActor__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CActor__vslot0_t> CActor__vslot0 = {(CActor__vslot0_t)0x004019e0};
typedef uint32_t (BEA_THISCALL* FUN_0044b2d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b2d0_t> FUN_0044b2d0 = {(FUN_0044b2d0_t)0x0044b2d0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef uint32_t (BEA_THISCALL* FUN_004fb280_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb280_t> FUN_004fb280 = {(FUN_004fb280_t)0x004fb280};
typedef uint32_t (BEA_THISCALL* FUN_004fd230_t)(uint32_t);
static const bea_guard<FUN_004fd230_t> FUN_004fd230 = {(FUN_004fd230_t)0x004fd230};

static undefined4 BEA_THISCALL ap_004f9820(CUnit * this_, float param_1)
{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x10 - 0x10);
  iVar1 = bea_piece32(param_1);
  switch(*(undefined2 *)(bea_piece32(param_1) + 4)) {
  case 0xfa1:
    uVar4 = FUN_004fb280(bea_arg(this_), bea_arg(param_1));
    return uVar4;
  default:
    uVar4 = CActor__vslot0(bea_arg((CActor *)this_), bea_arg(param_1));
    return uVar4;
  case 0xfa3:
    *(undefined4 *)(this_ + 0x110) = 0;
    iVar5 = 0x2c4;
    do {
      if (((*(int *)(&DAT_008a9a78 + iVar5) != 0) &&
          (*(undefined4 **)(&DAT_008a9a98 + iVar5) != (undefined4 *)0x0)) &&
         (pfVar2 = (float *)bea_vcall<uint32_t>(*(undefined4 **)(&DAT_008a9a98 + iVar5), 0x0, local_10),
         (*(float *)(this_ + 0x20) - pfVar2[1]) * (*(float *)(this_ + 0x20) - pfVar2[1]) +
         (*(float *)(this_ + 0x1c) - *pfVar2) * (*(float *)(this_ + 0x1c) - *pfVar2) +
         (*(float *)(this_ + 0x24) - pfVar2[2]) * (*(float *)(this_ + 0x24) - pfVar2[2]) < 2500.0f)) {
        *(undefined4 *)(this_ + 0x110) = 1;
      }
      iVar5 = iVar5 + 4;
    } while (BEA_LOOP_GUARD((iVar5 < 0x2cc)));
    uVar3 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar3 = uVar3 & 0x8000ffff;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffff0000) + 1;
    }
    param_1 = (float)(int)uVar3 * 1.5258789e-05f + 3.0f;
    uVar4 = FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&param_1), bea_arg(0xfa3), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(iVar1));
    return uVar4;
  case 0xfa4:
    FUN_004fd230(bea_arg(this_));
    uVar4 = bea_vcall<uint32_t>(this_, 0x38);
    return uVar4;
  case 0xfa5:
    break;
  }
  iVar5 = *(int *)(this_ + 0x218);
  if (0 < iVar5) {
    *(int *)(this_ + 0x218) = iVar5 - *(int *)(this_ + 0x21c);
    param_1 = -1.0;
    uVar4 = FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xfa5), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(iVar1));
    return uVar4;
  }
  *(undefined4 *)(this_ + 0x218) = 0;
  return iVar5;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f9820, ap_004f9820));
