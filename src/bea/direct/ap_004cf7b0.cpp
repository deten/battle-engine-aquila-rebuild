// auto-ported from 004cf7b0_vslot17.c (CEnable32Bit::vslot17, 109 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CEnable32Bit;
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};

static uint32_t BEA_THISCALL ap_004cf7b0(CEnable32Bit * this_, int param_1)
{
  int iVar1;
  iVar1 = bea_vcall<uint32_t>(this_, 0x48);
  if (param_1 != iVar1) {
    if (param_1 == 0) {
      return FUN_00524830(6);
    }
    if (param_1 != 1) {
      return FUN_00524830(5);
    }
    return FUN_00524830(0x1e);
  }
  if (param_1 == 0) {
    return FUN_00524830(0x20);
  }
  if (param_1 != 1) {
    return FUN_00524830(0x1f);
  }
  return FUN_00524830(0x21);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf7b0, ap_004cf7b0));
