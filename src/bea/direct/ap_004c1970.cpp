// auto-ported from 004c1970_vslot7.c (CPDEmitter::vslot7, 235 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CPDEmitter;
typedef uint32_t (BEA_STDCALL* FUN_004f5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5c90_t> FUN_004f5c90 = {(FUN_004f5c90_t)0x004f5c90};
typedef uint32_t (BEA_STDCALL* FUN_004f5d50_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5d50_t> FUN_004f5d50 = {(FUN_004f5d50_t)0x004f5d50};
typedef uint32_t (BEA_STDCALL* FUN_004f5dc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5dc0_t> FUN_004f5dc0 = {(FUN_004f5dc0_t)0x004f5dc0};

static uint32_t BEA_THISCALL ap_004c1970(CPDEmitter * this_, undefined4 param_1)
{
  FUN_004f5dc0(bea_arg(0x1a), bea_arg(this_ + 0x5c));
  FUN_004f5c90(bea_arg(0x1b), bea_arg(*(undefined4 *)(this_ + 100)));
  FUN_004f5d50(bea_arg(0x1c), bea_arg(*(undefined4 *)(this_ + 0x68)));
  FUN_004f5dc0(bea_arg(0x1d), bea_arg(this_ + 0x6c));
  FUN_004f5dc0(bea_arg(0x1e), bea_arg(this_ + 0x74));
  FUN_004f5dc0(bea_arg(0x1f), bea_arg(this_ + 0x7c));
  FUN_004f5dc0(bea_arg(0x20), bea_arg(this_ + 0x84));
  FUN_004f5c90(bea_arg(0x21), bea_arg(*(undefined4 *)(this_ + 0x8c)));
  FUN_004f5c90(bea_arg(0x22), bea_arg(*(undefined4 *)(this_ + 0x90)));
  FUN_004f5dc0(bea_arg(0x23), bea_arg(this_ + 0x94));
  FUN_004f5c90(bea_arg(0x24), bea_arg(*(undefined4 *)(this_ + 0x9c)));
  FUN_004f5d50(bea_arg(0x25), bea_arg(*(undefined4 *)(this_ + 0xa0)));
  FUN_004f5c90(bea_arg(0x26), bea_arg(*(undefined4 *)(this_ + 0xa4)));
  FUN_004f5dc0(bea_arg(0x27), bea_arg(this_ + 0xa8));
  return FUN_004f5d50(bea_arg(0x28), bea_arg(*(undefined4 *)(this_ + 0xb0)));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004c1970.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
