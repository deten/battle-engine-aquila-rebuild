// auto-ported from 004c44f0_vslot7.c (CPDMover::vslot7, 104 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CPDMover;
typedef uint32_t (BEA_STDCALL* FUN_004f5cd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5cd0_t> FUN_004f5cd0 = {(FUN_004f5cd0_t)0x004f5cd0};
typedef uint32_t (BEA_STDCALL* FUN_004f5d50_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5d50_t> FUN_004f5d50 = {(FUN_004f5d50_t)0x004f5d50};
typedef uint32_t (BEA_STDCALL* FUN_004f5dc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5dc0_t> FUN_004f5dc0 = {(FUN_004f5dc0_t)0x004f5dc0};

static uint32_t BEA_THISCALL ap_004c44f0(CPDMover * this_, undefined4 param_1)
{
  FUN_004f5dc0(bea_arg(0x55), bea_arg(this_ + 0x5c));
  FUN_004f5cd0(bea_arg(0x56), bea_arg(*(undefined4 *)(this_ + 100)));
  FUN_004f5cd0(bea_arg(0x57), bea_arg(*(undefined4 *)(this_ + 0x68)));
  FUN_004f5cd0(bea_arg(0x58), bea_arg(*(undefined4 *)(this_ + 0x6c)));
  FUN_004f5d50(bea_arg(0x59), bea_arg(*(undefined4 *)(this_ + 0x70)));
  FUN_004f5d50(bea_arg(0x5a), bea_arg(*(undefined4 *)(this_ + 0x74)));
  return FUN_004f5d50(bea_arg(0x5b), bea_arg(*(undefined4 *)(this_ + 0x78)));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004c44f0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
