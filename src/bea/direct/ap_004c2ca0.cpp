// auto-ported from 004c2ca0_vslot7.c (CPDShape::vslot7, 133 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CPDShape;
typedef uint32_t (BEA_STDCALL* FUN_004f5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5c90_t> FUN_004f5c90 = {(FUN_004f5c90_t)0x004f5c90};
typedef uint32_t (BEA_STDCALL* FUN_004f5cd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5cd0_t> FUN_004f5cd0 = {(FUN_004f5cd0_t)0x004f5cd0};
typedef uint32_t (BEA_STDCALL* FUN_004f5dc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5dc0_t> FUN_004f5dc0 = {(FUN_004f5dc0_t)0x004f5dc0};

static uint32_t BEA_THISCALL ap_004c2ca0(CPDShape * this_, undefined4 param_1)
{
  FUN_004f5c90(bea_arg(0x3f), bea_arg(*(undefined4 *)(this_ + 0x5c)));
  FUN_004f5c90(bea_arg(0x40), bea_arg(*(undefined4 *)(this_ + 0x60)));
  FUN_004f5c90(bea_arg(0x41), bea_arg(*(undefined4 *)(this_ + 100)));
  FUN_004f5c90(bea_arg(0x42), bea_arg(*(undefined4 *)(this_ + 0x68)));
  FUN_004f5dc0(bea_arg(6), bea_arg(this_ + 0x6c));
  FUN_004f5c90(bea_arg(0x43), bea_arg(*(undefined4 *)(this_ + 0x74)));
  FUN_004f5cd0(bea_arg(0x44), bea_arg(*(undefined4 *)(this_ + 0x78)));
  FUN_004f5cd0(bea_arg(0x45), bea_arg(*(undefined4 *)(this_ + 0x7c)));
  return FUN_004f5cd0(bea_arg(0x46), bea_arg(*(undefined4 *)(this_ + 0x80)));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004c2ca0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
