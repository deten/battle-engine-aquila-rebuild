// auto-ported from 004c3440_vslot7.c (CPDTrail::vslot7, 358 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CPDTrail;
typedef uint32_t (BEA_STDCALL* FUN_004f5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5c90_t> FUN_004f5c90 = {(FUN_004f5c90_t)0x004f5c90};
typedef uint32_t (BEA_STDCALL* FUN_004f5cd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5cd0_t> FUN_004f5cd0 = {(FUN_004f5cd0_t)0x004f5cd0};
typedef uint32_t (BEA_STDCALL* FUN_004f5d10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5d10_t> FUN_004f5d10 = {(FUN_004f5d10_t)0x004f5d10};
typedef uint32_t (BEA_STDCALL* FUN_004f5d50_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5d50_t> FUN_004f5d50 = {(FUN_004f5d50_t)0x004f5d50};
typedef uint32_t (BEA_STDCALL* FUN_004f5dc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5dc0_t> FUN_004f5dc0 = {(FUN_004f5dc0_t)0x004f5dc0};

static uint32_t BEA_THISCALL ap_004c3440(CPDTrail * this_, undefined4 param_1)
{
  FUN_004f5c90(bea_arg(0xd), bea_arg(*(undefined4 *)(this_ + 100)));
  if (*(int *)(this_ + 0x5c) != 0) {
    FUN_004f5d10(bea_arg(0xb), bea_arg(*(int *)(this_ + 0x5c)));
  }
  FUN_004f5c90(bea_arg(0xe), bea_arg(*(undefined4 *)(this_ + 0x60)));
  FUN_004f5cd0(bea_arg(0x47), bea_arg(*(undefined4 *)(this_ + 0x6c)));
  FUN_004f5cd0(bea_arg(0x49), bea_arg(*(undefined4 *)(this_ + 0x70)));
  FUN_004f5c90(bea_arg(0x48), bea_arg(*(undefined4 *)(this_ + 0x68)));
  FUN_004f5d50(bea_arg(0x10), bea_arg(*(undefined4 *)(this_ + 0x74)));
  FUN_004f5cd0(bea_arg(0x4a), bea_arg(*(undefined4 *)(this_ + 0x78)));
  FUN_004f5cd0(bea_arg(0x4b), bea_arg(*(undefined4 *)(this_ + 0x7c)));
  FUN_004f5c90(bea_arg(8), bea_arg(*(undefined4 *)(this_ + 0x80)));
  FUN_004f5c90(bea_arg(0x1b), bea_arg(*(undefined4 *)(this_ + 0x84)));
  FUN_004f5c90(bea_arg(0x4c), bea_arg(*(undefined4 *)(this_ + 0x88)));
  FUN_004f5c90(bea_arg(0x4d), bea_arg(*(undefined4 *)(this_ + 0x8c)));
  FUN_004f5c90(bea_arg(0x3f), bea_arg(*(undefined4 *)(this_ + 0x90)));
  FUN_004f5d50(bea_arg(0x67), bea_arg(*(undefined4 *)(this_ + 0x94)));
  FUN_004f5c90(bea_arg(0x22), bea_arg(*(undefined4 *)(this_ + 0x98)));
  FUN_004f5c90(bea_arg(0x4e), bea_arg(*(undefined4 *)(this_ + 0x9c)));
  FUN_004f5c90(bea_arg(0x4f), bea_arg(*(undefined4 *)(this_ + 0xa0)));
  FUN_004f5cd0(bea_arg(0x50), bea_arg(*(undefined4 *)(this_ + 0xa4)));
  FUN_004f5c90(bea_arg(0x51), bea_arg(*(undefined4 *)(this_ + 0xa8)));
  FUN_004f5dc0(bea_arg(0x52), bea_arg(this_ + 0xac));
  FUN_004f5dc0(bea_arg(0x53), bea_arg(this_ + 0xb4));
  return FUN_004f5c90(bea_arg(0x54), bea_arg(*(undefined4 *)(this_ + 0xbc)));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004c3440.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
