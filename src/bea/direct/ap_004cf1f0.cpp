// auto-ported from 004cf1f0_vslot17.c (CSoundDeviceSelect::vslot17, 41 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef undefined4 (BEA_CDECL* FUN_00516980_t)(void);
static const bea_guard<FUN_00516980_t> FUN_00516980 = {(FUN_00516980_t)0x00516980};
typedef undefined * (BEA_CDECL* FUN_00516990_t)(uint32_t);
static const bea_guard<FUN_00516990_t> FUN_00516990 = {(FUN_00516990_t)0x00516990};
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};

static uint32_t BEA_STDCALL ap_004cf1f0(undefined4 param_1)
{
  int iVar1;
  iVar1 = FUN_00516980();
  if (iVar1 == 0) {
    return FUN_00524830(0xd7);
  }
  return FUN_00516990(bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf1f0, ap_004cf1f0));
