// auto-ported from 00540fb0_vslot7.c (CDXFrontEnd::vslot7, 30 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char CDXFrontEnd;
typedef uint32_t (BEA_STDCALL* CFrontEnd__vslot7_t)(uint32_t);
static const bea_guard<CFrontEnd__vslot7_t> CFrontEnd__vslot7 = {(CFrontEnd__vslot7_t)0x00468700};
typedef uint32_t (BEA_CDECL* FUN_00540c30_t)(void);
static const bea_guard<FUN_00540c30_t> FUN_00540c30 = {(FUN_00540c30_t)0x00540c30};

static uint32_t BEA_THISCALL ap_00540fb0(CDXFrontEnd * this_, int param_1)
{
  if (param_1 != 0) {
    FUN_00540c30();
  }
  return CFrontEnd__vslot7(bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00540fb0, ap_00540fb0));
