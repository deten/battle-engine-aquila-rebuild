// auto-ported from 004670b0_FUN_004670b0.c (FUN_004670b0, 321 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define DAT_0089d8ec GLOBAL_AT(int, 0x0089d8ec)
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};

static void BEA_STDCALL ap_004670b0(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10)
{
  float fVar1;
  
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(3));
  FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(3));
  fVar1 = (param_4 - param_2) * 0.0625f;
  FUN_005563d0(bea_arg(param_1), bea_arg(param_2), bea_arg(param_7), bea_arg(DAT_0089d8ec), bea_arg(param_9), bea_arg((param_3 - param_1) * 0.0625f), bea_arg(fVar1), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(1));
  FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(1));
  if (param_5 != 0.0f) {
    FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(3));
    FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(3));
    FUN_005563d0(bea_arg(param_1), bea_arg(param_2), bea_arg(param_7), bea_arg(DAT_0089d8ec), bea_arg(param_10), bea_arg((((param_5 / param_6) * (param_3 - param_1) + param_1) - param_1) * 0.0625f), bea_arg(fVar1), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
    FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(1));
    FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(1));
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004670b0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
