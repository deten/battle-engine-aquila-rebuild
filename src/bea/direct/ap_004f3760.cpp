// auto-ported from 004f3760_vslot14.c (CThing::vslot14, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CThing;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

static undefined4 BEA_THISCALL ap_004f3760(CThing * this_)
{
  ushort uVar1;
  uint32_t eax_in = 0;
  undefined4 uVar2;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x4);
  uVar1 = *(ushort *)(this_ + 0x2c);
  uVar2 = CONCAT22((short)((uint)eax_in >> 0x10),uVar1);
  if ((uVar1 & 1) == 0) {
    *(ushort *)(this_ + 0x2c) = (ushort)CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar1) | 1;
    local_4 = 0xbf800000;
    uVar2 = FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(2000), bea_arg(this_), bea_arg(&local_4), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3760, ap_004f3760));
