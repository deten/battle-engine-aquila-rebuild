// auto-ported from 004eba30_FUN_004eba30.c (FUN_004eba30, 131 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
#define DAT_00889068 GLOBAL_AT(int, 0x00889068)
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_STDCALL* FUN_00513c20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513c20_t> FUN_00513c20 = {(FUN_00513c20_t)0x00513c20};

static uint32_t BEA_STDCALL ap_004eba30(undefined4 param_1)
{
  undefined4 uVar1;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x4);
  if ((DAT_0089d680 == '\0') || (DAT_00889068 == -0x1234568)) {
    uVar1 = 0;
  }
  else {
    local_4 = bea_piece32(DAT_006fbdfc);
    local_10 = 0;
    local_c = 0;
    local_8 = 0xbf800000;
    bea_vcall<uint32_t>(DAT_00888a50, 0xdc, DAT_00888a50,0,&local_10);
    uVar1 = 1;
  }
  if ((char)param_1 != '\0') {
    return FUN_00513c20(bea_arg(0x98), bea_arg(uVar1));
  }
  return FUN_00513bc0(bea_arg(0x98), bea_arg(uVar1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004eba30, ap_004eba30));
