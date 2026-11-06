// auto-ported from 004c2b70_vslot6.c (CPDShape::vslot6, 194 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x400: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CPDShape;
typedef undefined4 (BEA_THISCALL* FUN_004f57b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f57b0_t> FUN_004f57b0 = {(FUN_004f57b0_t)0x004f57b0};
typedef uint32_t (BEA_THISCALL* FUN_004f5b80_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f5b80_t> FUN_004f5b80 = {(FUN_004f5b80_t)0x004f5b80};

static undefined4 BEA_THISCALL ap_004c2b70(CPDShape * this_, void *param_1)
{
  alignas(16) uint8_t bea_frame_[0x400] = {};   // the original stack frame (emulate_frame)

  undefined4 &local_3f4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x400 - 0x3f4);
  undefined4 &local_3f0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x400 - 0x3f0);
  int &local_3ec = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3ec);
  undefined1 (&local_3e8)[1000] = *reinterpret_cast<undefined1 (*)[1000]>(bea_frame_ + 0x400 - 0x3e8);
  do {
    FUN_004f57b0(bea_arg(param_1), bea_arg(&local_3ec), bea_arg(&local_3f4), bea_arg(&local_3f0), bea_arg(local_3e8));
    switch(local_3ec) {
    case 6:
      FUN_004f5b80(bea_arg(param_1), bea_arg(local_3f0), bea_arg(local_3f4), bea_arg(this_ + 0x6c));
      break;
    case 0x3f:
      *(undefined4 *)(this_ + 0x5c) = local_3f4;
      break;
    case 0x40:
      *(undefined4 *)(this_ + 0x60) = local_3f4;
      break;
    case 0x41:
      *(undefined4 *)(this_ + 100) = local_3f4;
      break;
    case 0x42:
      *(undefined4 *)(this_ + 0x68) = local_3f4;
      break;
    case 0x43:
      *(undefined4 *)(this_ + 0x74) = local_3f4;
      break;
    case 0x44:
      *(undefined4 *)(this_ + 0x78) = local_3f0;
      break;
    case 0x45:
      *(undefined4 *)(this_ + 0x7c) = local_3f0;
      break;
    case 0x46:
      *(undefined4 *)(this_ + 0x80) = local_3f0;
    }
  } while (BEA_LOOP_GUARD((local_3ec != 5)));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c2b70, ap_004c2b70));
