// auto-ported from 0042d3b0_FUN_0042d3b0.c (FUN_0042d3b0, 108 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066e950 GLOBAL_AT(undefined4*, 0x0066e950)
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_0089bda4 GLOBAL_AT(int, 0x0089bda4)
#define DAT_0089bda8 GLOBAL_AT(int, 0x0089bda8)
typedef uint32_t (BEA_CDECL* FUN_005234d0_t)(uint32_t);
static const bea_guard<FUN_005234d0_t> FUN_005234d0 = {(FUN_005234d0_t)0x005234d0};
typedef uint32_t (BEA_CDECL* FUN_00523db0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_00523db0_t> FUN_00523db0 = {(FUN_00523db0_t)0x00523db0};

static undefined4 BEA_CDECL ap_0042d3b0(void)
{
  BOOL BVar1;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  LONG &local_8 = *reinterpret_cast<LONG *>(bea_frame_ + 0x10 - 0x8);
  LONG &local_4 = *reinterpret_cast<LONG *>(bea_frame_ + 0x10 - 0x4);
  if (DAT_0066e950 != (int *)0x0) {
    bea_vcall<uint32_t>(DAT_0066e950, 0x20, DAT_0066e950);
    FUN_005234d0(bea_arg(0));
    if (DAT_0066e950 != (int *)0x0) {
      bea_vcall<uint32_t>(DAT_0066e950, 0x8, DAT_0066e950);
      DAT_0066e950 = (int *)0x0;
    }
  }
  if (DAT_00662df4 == 0) {
    BVar1 = GetCursorPos((LPPOINT)&local_8);
    if (BVar1 != 0) {
      DAT_0089bda4 = local_4;
      DAT_0089bda8 = local_8;
    }
  }
  FUN_00523db0(local_8,local_4);
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042d3b0, ap_0042d3b0));
