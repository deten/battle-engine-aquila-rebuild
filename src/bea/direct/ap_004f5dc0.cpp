// auto-ported from 004f5dc0_FUN_004f5dc0.c (FUN_004f5dc0, 125 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s__s__f_NONE_00633a4c ((char*)0x00633a4c)
#define s__s__f__s_00633a5c ((char*)0x00633a5c)
typedef char * (BEA_CDECL* FUN_004f52b0_t)(uint32_t);
static const bea_guard<FUN_004f52b0_t> FUN_004f52b0 = {(FUN_004f52b0_t)0x004f52b0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_STDCALL ap_004f5dc0(undefined4 param_1, float *param_2)
{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  undefined1 local_190 [400];
  if (param_2[1] != 0.0) {
    iVar1 = (int)param_2[1] + 4;
    dVar3 = (double)*param_2;
    uVar2 = FUN_004f52b0(bea_arg(param_1));
    return FUN_0055de9b(local_190,s__s__f__s_00633a5c,uVar2,dVar3,iVar1);
  }
  dVar3 = (double)*param_2;
  uVar2 = FUN_004f52b0(bea_arg(param_1));
  return FUN_0055de9b(local_190,s__s__f_NONE_00633a4c,uVar2,dVar3);
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004f5dc0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
