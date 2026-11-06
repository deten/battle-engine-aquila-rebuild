// auto-ported from 004cfd70_vslot17.c (CnVidia::vslot17, 50 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define DAT_0082b4a4 GLOBAL_AT(int, 0x0082b4a4)
#define DAT_00888b20 GLOBAL_AT(int, 0x00888b20)
typedef uint32_t (BEA_STDCALL* CBOOLMenuItem__vslot17_t)(uint32_t);
static const bea_guard<CBOOLMenuItem__vslot17_t> CBOOLMenuItem__vslot17 = {(CBOOLMenuItem__vslot17_t)0x004a4220};
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};

static uint32_t BEA_STDCALL ap_004cfd70(undefined4 param_1)
{
  if ((DAT_0082b4a4 != 0) && (0xffff01ff < DAT_00888b20)) {
    return CBOOLMenuItem__vslot17(bea_arg(param_1));
  }
  return FUN_00524830(0xf8);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cfd70, ap_004cfd70));
