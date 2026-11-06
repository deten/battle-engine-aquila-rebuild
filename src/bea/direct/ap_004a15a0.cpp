// auto-ported from 004a15a0_FUN_004a15a0.c (FUN_004a15a0, 149 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define s_C__dev_ONSLAUGHT2_MemoryManager__0062f590 ((char*)0x0062f590)
typedef undefined4 * (BEA_THISCALL* FUN_004a1810_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a1810_t> FUN_004a1810 = {(FUN_004a1810_t)0x004a1810};
typedef void * (BEA_CDECL* FUN_0055ed50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055ed50_t> FUN_0055ed50 = {(FUN_0055ed50_t)0x0055ed50};

static undefined4 BEA_THISCALL ap_004a15a0(void * this_, undefined4 *param_1, uint param_2, int *param_3)
{
  int iVar1;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x4);
  if (((param_1 != (undefined4 *)0x0) && (*(undefined4 **)((int)this_ + 0x8c0) <= param_1)) &&
     (param_1 < *(undefined4 **)((int)this_ + 0x8c8))) {
    local_10 = *param_1;
    local_c = param_1[1];
    local_8 = param_1[2];
    local_4 = param_1[3];
    *param_1 = *(undefined4 *)((int)this_ + 0x8c4);
    *(undefined4 **)((int)this_ + 0x8c4) = param_1;
    iVar1 = FUN_004a1810(bea_arg(this_), bea_arg(param_2), bea_arg(0), bea_arg(s_C__dev_ONSLAUGHT2_MemoryManager__0062f590), bea_arg(0x1cf));
    if (iVar1 != 0) {
      if (0xf < param_2) {
        param_2 = 0x10;
      }
      FUN_0055ed50(bea_arg(iVar1), bea_arg(&local_10), bea_arg(param_2));
    }
    *param_3 = iVar1;
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a15a0, ap_004a15a0));
