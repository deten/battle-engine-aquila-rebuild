// auto-ported from 00549290_FUN_00549290.c (FUN_00549290, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c2bc8 GLOBAL_AT(char, 0x009c2bc8)
typedef uint32_t (BEA_THISCALL* FUN_004a2190_t)(uint32_t);
static const bea_guard<FUN_004a2190_t> FUN_004a2190 = {(FUN_004a2190_t)0x004a2190};

static void BEA_THISCALL ap_00549290(void * this_)
{
  if (DAT_009c2bc8 != '\x01') {
    FUN_004a2190(bea_arg((void *)((int)this_ + 0x214)));
    return;
  }
  FUN_004a2190(bea_arg((void *)((int)this_ + 0x13ac)));
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_00549290.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
