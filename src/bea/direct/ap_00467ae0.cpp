// auto-ported from 00467ae0_FUN_00467ae0.c (FUN_00467ae0, 240 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define DAT_0089d7b0 GLOBAL_AT(int, 0x0089d7b0)
#define DAT_0089d7ac GLOBAL_AT(int, 0x0089d7ac)
#define DAT_0089d7b4 GLOBAL_AT(int, 0x0089d7b4)
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};

static uint32_t BEA_STDCALL ap_00467ae0(float param_1, float param_2, undefined4 param_3, int param_4, undefined4 param_5, float param_6)
{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(3));
  FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(3));
  iVar4 = 0;
  iVar1 = param_4 + 2;
  fVar2 = param_2 - param_6 * 32.0f;
  param_2 = param_1 - (float)(iVar1 * 0x20) * param_6;
  if (0 < iVar1) {
    do {
      uVar3 = DAT_0089d7b0;
      if (iVar4 == 0) {
        uVar3 = DAT_0089d7ac;
      }
      if (iVar4 == param_4 + 1) {
        uVar3 = DAT_0089d7b4;
      }
      FUN_005563d0(bea_arg(param_2), bea_arg(fVar2), bea_arg(param_3), bea_arg(uVar3), bea_arg(param_5), bea_arg(param_6), bea_arg(param_6), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
      param_2 = param_6 * 64.0f + param_2;
      iVar4 = iVar4 + 1;
    } while (BEA_LOOP_GUARD((iVar4 < iVar1)));
  }
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(1));
  return FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(1));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_00467ae0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
