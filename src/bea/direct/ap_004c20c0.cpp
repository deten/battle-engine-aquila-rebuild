// auto-ported from 004c20c0_vslot6.c (CPDModifier::vslot6, 63 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x400: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_004f57b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f57b0_t> FUN_004f57b0 = {(FUN_004f57b0_t)0x004f57b0};

static undefined4 BEA_STDCALL ap_004c20c0(void *param_1)
{
  alignas(16) uint8_t bea_frame_[0x400] = {};   // the original stack frame (emulate_frame)

  int &local_3f4 = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3f4);
  undefined1 (&local_3f0)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x400 - 0x3f0);
  undefined1 (&local_3ec)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x400 - 0x3ec);
  undefined1 (&local_3e8)[1000] = *reinterpret_cast<undefined1 (*)[1000]>(bea_frame_ + 0x400 - 0x3e8);
  do {
    FUN_004f57b0(bea_arg(param_1), bea_arg(&local_3f4), bea_arg(local_3ec), bea_arg(local_3f0), bea_arg(local_3e8));
  } while (BEA_LOOP_GUARD((local_3f4 != 5)));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c20c0, ap_004c20c0));
