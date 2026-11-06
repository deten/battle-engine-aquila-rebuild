// auto-ported from 00540f70_vslot6.c (CDXFrontEnd::vslot6, 61 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CDXFrontEnd;
#define DAT_0083d248 GLOBAL_AT(int, 0x0083d248)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
typedef undefined4 (BEA_CDECL* CFrontEnd__vslot6_t)(void);
static const bea_guard<CFrontEnd__vslot6_t> CFrontEnd__vslot6 = {(CFrontEnd__vslot6_t)0x004685f0};
typedef uint32_t (BEA_THISCALL* FUN_004eb1e0_t)(uint32_t);
static const bea_guard<FUN_004eb1e0_t> FUN_004eb1e0 = {(FUN_004eb1e0_t)0x004eb1e0};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_STDCALL* FUN_00515910_t)(uint32_t);
static const bea_guard<FUN_00515910_t> FUN_00515910 = {(FUN_00515910_t)0x00515910};
typedef uint32_t (BEA_THISCALL* FUN_005508e0_t)(uint32_t);
static const bea_guard<FUN_005508e0_t> FUN_005508e0 = {(FUN_005508e0_t)0x005508e0};

static uint32_t BEA_THISCALL ap_00540f70(CDXFrontEnd * this_)
{
  FUN_004eb1e0(bea_arg(&DAT_0083d248));
  FUN_005508e0(bea_arg(&DAT_009c65c0));
  FUN_00515910(bea_arg(0x1f1f3f));
  FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
  return CFrontEnd__vslot6();
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00540f70, ap_00540f70));
