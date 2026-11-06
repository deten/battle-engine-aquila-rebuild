// auto-ported from 004584d0_vslot5.c (CFEPDevelopment::vslot5, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPDevelopment;
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_009c68a8 GLOBAL_AT(int, 0x009c68a8)
#define DAT_009c690c GLOBAL_AT(char, 0x009c690c)
typedef uint32_t (BEA_THISCALL* FUN_004583c0_t)(uint32_t);
static const bea_guard<FUN_004583c0_t> FUN_004583c0 = {(FUN_004583c0_t)0x004583c0};
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513af0_t)(uint32_t);
static const bea_guard<FUN_00513af0_t> FUN_00513af0 = {(FUN_00513af0_t)0x00513af0};

static uint32_t BEA_THISCALL ap_004584d0(CFEPDevelopment * this_, undefined4 param_1, undefined4 param_2)
{
  FUN_00513af0(bea_arg(0));
  DAT_009c68ad = 1;
  DAT_009c6910 = 1;
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  DAT_009c68a8 = 0xffffffff;
  DAT_009c690c = 1;
  FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
  return FUN_004583c0(bea_arg(this_));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004584d0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
