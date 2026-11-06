// auto-ported from 004cf300_vslot17.c (CVideoDeviceSelect::vslot17, 91 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_008889f0 GLOBAL_AT(int, 0x008889f0)
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};

static uint32_t BEA_STDCALL ap_004cf300(int param_1)
{
  if (param_1 == -1) {
    return FUN_004f7bf0(bea_arg(DAT_008889f0 * 0x516c + 0x855db4));
  }
  return FUN_004f7bf0(bea_arg(param_1 * 0x516c + 0x855db4));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf300, ap_004cf300));
