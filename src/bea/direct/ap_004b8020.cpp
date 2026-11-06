// auto-ported from 004b8020_FUN_004b8020.c (FUN_004b8020, 418 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef uint32_t (BEA_THISCALL* FUN_0044b2d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b2d0_t> FUN_0044b2d0 = {(FUN_0044b2d0_t)0x0044b2d0};
typedef uint32_t (BEA_THISCALL* FUN_004b8800_t)(uint32_t);
static const bea_guard<FUN_004b8800_t> FUN_004b8800 = {(FUN_004b8800_t)0x004b8800};
typedef int (BEA_CDECL* FUN_0055e607_t)(uint32_t);
static const bea_guard<FUN_0055e607_t> FUN_0055e607 = {(FUN_0055e607_t)0x0055e607};

static uint32_t BEA_THISCALL ap_004b8020(void * this_)
{
  int iVar1;
  int iVar2;
  int iVar3;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  void * &local_4 = *reinterpret_cast<void * *>(bea_frame_ + 0x10 - 0x4);
  iVar1 = *(int *)((int)this_ + 8);
  local_4 = this_;
  if ((*(int *)(iVar1 + 0x38) != 0) &&
     ((*(int *)(iVar1 + 0x30) == 0 || ((*(byte *)(*(int *)(iVar1 + 0x30) + 0x2c) & 4) != 0)))) {
    *(undefined4 *)((int)this_ + 0x20) = 0x3f800000;
    iVar2 = FUN_0055e607(bea_arg(*(undefined4 *)(iVar1 + 0xc)));
    if (*(int *)(iVar1 + 0x1c) < iVar2) {
      FUN_004b8800(bea_arg(this_));
      *(int *)(*(int *)((int)this_ + 8) + 0x34) = *(int *)(*(int *)((int)this_ + 8) + 0x34) + 1;
      if (*(int *)(*(int *)((int)this_ + 8) + 0x34) < 5) {
        local_4 = (void *)0x3d1ba5e3;
        return FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&local_4), bea_arg(3000), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
      }
      *(undefined4 *)((int)this_ + 0x24) = 1;
      local_4 = (void *)0x402ccccd;
      return FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&local_4), bea_arg(0xbba), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
    }
    *(undefined4 *)((int)this_ + 0x24) = 1;
  }
  iVar1 = *(int *)((int)this_ + 8);
  iVar2 = *(int *)(iVar1 + 0x1c);
  iVar3 = FUN_0055e607(bea_arg(*(undefined4 *)(iVar1 + 0xc)));
  if (iVar2 < iVar3) {
    *(int *)(iVar1 + 0x1c) = iVar2 + 1;
  }
  iVar2 = *(int *)(iVar1 + 0x1c);
  iVar3 = FUN_0055e607(bea_arg(*(undefined4 *)(iVar1 + 0xc)));
  if (iVar2 < iVar3) {
    *(int *)(iVar1 + 0x1c) = iVar2 + 1;
  }
  if (DAT_00672fd0 < *(float *)(*(int *)((int)this_ + 8) + 0x14) + *(float *)((int)this_ + 0x1c) + 0.2f
     ) {
    local_4 = (void *)0x3d1ba5e3;
    return FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&local_4), bea_arg(3000), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  if ((*(int *)(*(int *)((int)this_ + 8) + 8) != 1) &&
     (DAT_00672fd0 - *(float *)((int)this_ + 0x1c) <= 12.0f)) {
    local_4 = (void *)0x3d1ba5e3;
    return FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&local_4), bea_arg(3000), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  *(undefined4 *)((int)this_ + 0x20) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x24) = 1;
  local_4 = (void *)0x3e99999a;
  return FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&local_4), bea_arg(0xbba), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b8020, ap_004b8020));
