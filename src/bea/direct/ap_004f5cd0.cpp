// auto-ported from 004f5cd0_FUN_004f5cd0.c (FUN_004f5cd0, 54 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s__s__f_00633a30 ((char*)0x00633a30)
typedef char * (BEA_CDECL* FUN_004f52b0_t)(uint32_t);
static const bea_guard<FUN_004f52b0_t> FUN_004f52b0 = {(FUN_004f52b0_t)0x004f52b0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_STDCALL ap_004f5cd0(undefined4 param_1, float param_2)
{
  undefined4 uVar1;
  double dVar2;
  undefined1 local_190 [400];
  dVar2 = (double)param_2;
  uVar1 = FUN_004f52b0(bea_arg(param_1));
  return FUN_0055de9b(local_190,s__s__f_00633a30,uVar1,dVar2);
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004f5cd0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
