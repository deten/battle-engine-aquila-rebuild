// auto-ported from 004ff330_vslot0.c (CUnitAI::vslot0, 422 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100000000: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnitAI;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static void BEA_THISCALL ap_004ff330(CUnitAI * this_, int param_1)
{
  alignas(16) uint8_t bea_frame_[0x100000000] = {};   // the original stack frame (emulate_frame)

  undefined4 &local_fffffff8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x100000000 - 0xfffffff8);
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float fStack00000008;
  undefined4 &uStack_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x100000000 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x100000000 - 0x4);
  bVar2 = true;
  iVar1 = (*(int **)(this_ + 8))[0x91];
  if ((iVar1 == 1) || (iVar1 == 2)) {
    bVar2 = false;
  }
  iVar3 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0xd4);
  iVar1 = param_1;
  if (iVar3 == 4) {
    bea_vcall<uint32_t>(this_, 0xc);
  }
  else if (bVar2) {
    switch(*(undefined2 *)(param_1 + 4)) {
    case 3000:
      iVar3 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0xd4);
      if ((iVar3 == 0) && (*(int *)(*(int *)(this_ + 8) + 0x214) != 0)) {
        bea_vcall<uint32_t>(this_, 0x24, iVar1);
        return;
      }
      break;
    case 0xbb9:
      if (*(int *)(*(int *)(this_ + 8) + 0x214) != 0) {
        bea_vcall<uint32_t>(this_, 0x20, param_1);
        return;
      }
      break;
    case 0xbba:
      bea_vcall<uint32_t>(this_, 0x28, param_1);
      return;
    case 0xbbb:
      iVar3 = *(int *)(this_ + 0x20);
      if (iVar3 == 1) {
        param_1 = 0xbf800000;
        FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(iVar1));
        return;
      }
      if (iVar3 != 0) {
        if (iVar3 != 2) {
          return;
        }
        uStack_4 = 0xbf800000;
        FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xbba), bea_arg(this_), bea_arg(&uStack_4), bea_arg(0), bea_arg(0), bea_arg(param_1));
        return;
      }
      uStack_8 = 0xbf800000;
      FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xbb9), bea_arg(this_), bea_arg(&uStack_8), bea_arg(0), bea_arg(0), bea_arg(param_1));
      return;
    }
  }
  uVar4 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar4 = uVar4 & 0x8000ffff;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffff0000) + 1;
  }
  fStack00000008 = (float)(int)uVar4 * 3.0517578e-05f + 2.0f + DAT_00672fd0;
  FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xbbb), bea_arg(this_), bea_arg(&local_fffffff8), bea_arg(0), bea_arg(0), bea_arg(iVar1));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ff330, ap_004ff330));
