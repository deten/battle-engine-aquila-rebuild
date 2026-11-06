// auto-ported from 004c4c70_vslot7.c (CPDMesh::vslot7, 124 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CPDMesh;
typedef uint32_t (BEA_STDCALL* FUN_004f5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5c90_t> FUN_004f5c90 = {(FUN_004f5c90_t)0x004f5c90};
typedef uint32_t (BEA_STDCALL* FUN_004f5cd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5cd0_t> FUN_004f5cd0 = {(FUN_004f5cd0_t)0x004f5cd0};
typedef uint32_t (BEA_STDCALL* FUN_004f5d10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5d10_t> FUN_004f5d10 = {(FUN_004f5d10_t)0x004f5d10};
typedef uint32_t (BEA_STDCALL* FUN_004f5d50_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5d50_t> FUN_004f5d50 = {(FUN_004f5d50_t)0x004f5d50};

static uint32_t BEA_THISCALL ap_004c4c70(CPDMesh * this_, undefined4 param_1)
{
  if (*(int *)(this_ + 0x5c) != 0) {
    FUN_004f5d10(bea_arg(0x65), bea_arg(*(int *)(this_ + 0x5c) + 0x24));
  }
  FUN_004f5c90(bea_arg(8), bea_arg(*(undefined4 *)(this_ + 0x60)));
  FUN_004f5c90(bea_arg(0x1b), bea_arg(*(undefined4 *)(this_ + 100)));
  FUN_004f5c90(bea_arg(9), bea_arg(*(undefined4 *)(this_ + 0x68)));
  FUN_004f5cd0(bea_arg(0x66), bea_arg(*(undefined4 *)(this_ + 0x70)));
  FUN_004f5d50(bea_arg(0x67), bea_arg(*(undefined4 *)(this_ + 0x78)));
  FUN_004f5c90(bea_arg(0x22), bea_arg(*(undefined4 *)(this_ + 0x6c)));
  return FUN_004f5c90(bea_arg(0x68), bea_arg(*(undefined4 *)(this_ + 0x74)));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004c4c70.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
