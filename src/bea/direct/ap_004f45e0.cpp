// auto-ported from 004f45e0_vslot62.c (CComplexThing::vslot62, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_Warning__Uknown_var___s__in_call_006331ec ((char*)0x006331ec)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static uint32_t BEA_STDCALL ap_004f45e0(int *param_1, undefined4 param_2)
{
  char *v0;
  v0 = (char *)bea_vcall<uint32_t>(param_1, 0x38);
  return FUN_00441740(&DAT_0066f580,s_Warning__Uknown_var___s__in_call_006331ec,v0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f45e0, ap_004f45e0));
