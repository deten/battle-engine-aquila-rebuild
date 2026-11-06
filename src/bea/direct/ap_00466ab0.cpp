// auto-ported from 00466ab0_FUN_00466ab0.c (FUN_00466ab0, 39 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
typedef uint32_t (BEA_THISCALL* FUN_004f2660_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2660_t> FUN_004f2660 = {(FUN_004f2660_t)0x004f2660};
typedef uint32_t (BEA_CDECL* FUN_0051f8e0_t)(void);
static const bea_guard<FUN_0051f8e0_t> FUN_0051f8e0 = {(FUN_0051f8e0_t)0x0051f8e0};

static uint32_t BEA_THISCALL ap_00466ab0(void * this_, int param_1)
{
  FUN_0051f8e0();
  return FUN_004f2660(bea_arg(&DAT_0083d960), bea_arg((void *)((param_1 * 3 + 0xbf4) * 0x10 + (int)this_)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00466ab0, ap_00466ab0));
