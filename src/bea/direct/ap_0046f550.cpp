// auto-ported from 0046f550_FUN_0046f550.c (FUN_0046f550, 655 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_0089c9b0 GLOBAL_AT(int, 0x0089c9b0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008a9d38 GLOBAL_AT(int, 0x008a9d38)
#define DAT_0085530c GLOBAL_AT(int, 0x0085530c)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define s_C__dev_ONSLAUGHT2_game_cpp_0062bba4 ((char*)0x0062bba4)
typedef int (BEA_THISCALL* FUN_00401fa0_t)(uint32_t);
static const bea_guard<FUN_00401fa0_t> FUN_00401fa0 = {(FUN_00401fa0_t)0x00401fa0};
typedef uint32_t (BEA_THISCALL* FUN_00419e00_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00419e00_t> FUN_00419e00 = {(FUN_00419e00_t)0x00419e00};
typedef uint32_t (BEA_THISCALL* FUN_0042e6e0_t)(uint32_t);
static const bea_guard<FUN_0042e6e0_t> FUN_0042e6e0 = {(FUN_0042e6e0_t)0x0042e6e0};
typedef uint32_t (BEA_THISCALL* FUN_0044b2d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b2d0_t> FUN_0044b2d0 = {(FUN_0044b2d0_t)0x0044b2d0};
typedef uint32_t (BEA_THISCALL* FUN_0046f430_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0046f430_t> FUN_0046f430 = {(FUN_0046f430_t)0x0046f430};
typedef uint32_t (BEA_THISCALL* FUN_004705e0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004705e0_t> FUN_004705e0 = {(FUN_004705e0_t)0x004705e0};
typedef uint32_t (BEA_THISCALL* FUN_004b8800_t)(uint32_t);
static const bea_guard<FUN_004b8800_t> FUN_004b8800 = {(FUN_004b8800_t)0x004b8800};
typedef uint32_t (BEA_THISCALL* FUN_00546b10_t)(uint32_t);
static const bea_guard<FUN_00546b10_t> FUN_00546b10 = {(FUN_00546b10_t)0x00546b10};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0046f550(void * this_, int param_1)
{
  void *this_00;
  undefined4 uVar1;
  int iVar2;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x30);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x24);
  void * &local_20 = *reinterpret_cast<void * *>(bea_frame_ + 0x40 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x40 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x4);
  iVar2 = param_1;
  this_00 = *(void **)(*(int *)((int)this_ + param_1 * 4 + 0x2a0) + 0x1c);
  local_1c = *(undefined4 *)((int)this_00 + 0x1c);
  local_18 = *(undefined4 *)((int)this_00 + 0x20);
  local_14 = *(undefined4 *)((int)this_00 + 0x24);
  local_10 = *(undefined4 *)((int)this_00 + 0x28);
  if (*(int *)((int)this_ + param_1 * 4 + 0x9d0) != 0) {
    if (1 < DAT_008a9ac0) {
      *(undefined4 *)((int)this_ + param_1 * 4 + 0x9d0) = 0;
      FUN_004705e0(bea_arg(this_), bea_arg(param_1), bea_arg(*(undefined4 *)((int)this_ + param_1 * 4 + 0x2d4)), bea_arg(1));
      FUN_0042e6e0(bea_arg(*(void **)((int)this_ + iVar2 * 4 + 0x2b4)));
      if (*(int *)((int)this_ + iVar2 * 4 + 0x9e0) == 1) {
        *(undefined4 *)((int)this_ + 0x2c) = 1;
      }
      else {
        *(undefined4 *)((int)this_ + 0x2c) = 0;
      }
    }
    FUN_00546b10(bea_arg(DAT_0089c9b0));
  }
  local_20 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xb0), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_game_cpp_0062bba4), bea_arg(0xb49));
  if (local_20 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    param_1 = 0x40400000;
    local_38 = 0x40c00000;
    local_34 = 0;
    local_30 = 0x3f000000;
    uVar1 = FUN_00419e00(bea_arg(local_20), bea_arg(&local_1c), bea_arg(&local_30), bea_arg(&local_34), bea_arg(&local_38), bea_arg(&param_1));
  }
  FUN_004705e0(bea_arg(this_), bea_arg(iVar2 + -1), bea_arg(uVar1), bea_arg(1));
  if (((DAT_008a9d38 < 0x352) || (899 < DAT_008a9d38)) &&
     (*(void **)((int)this_ + 0x2ec) != (void *)0x0)) {
    FUN_004b8800(bea_arg(*(void **)((int)this_ + 0x2ec)));
  }
  if (DAT_0085530c == 0) {
    iVar2 = FUN_00401fa0(bea_arg(this_00));
    if (iVar2 == 0) {
      uVar1 = 0x33e2e5e;
    }
    else {
      uVar1 = 0x36a7c43;
    }
    FUN_0046f430(bea_arg(this_), bea_arg(uVar1), bea_arg(1));
  }
  else if (DAT_0085530c == 1) {
    if (iVar2 == 1) {
      local_20 = (void *)0x40a00000;
      FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&local_20), bea_arg(0x7d3), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
      return;
    }
    if (iVar2 == 2) {
      local_24 = 0x40a00000;
      FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&local_24), bea_arg(0x7d4), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
      return;
    }
  }
  else if (DAT_0085530c == 2) {
    if (iVar2 == 1) {
      local_28 = 0x40a00000;
      FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&local_28), bea_arg(0x7d3), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
      return;
    }
    if (iVar2 == 2) {
      local_2c = 0x40a00000;
      FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&local_2c), bea_arg(0x7d4), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
      return;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046f550, ap_0046f550));
