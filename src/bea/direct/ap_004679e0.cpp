// auto-ported from 004679e0_FUN_004679e0.c (FUN_004679e0, 252 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (5 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_00452ce0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00452ce0_t> FUN_00452ce0 = {(FUN_00452ce0_t)0x00452ce0};

static void BEA_STDCALL ap_004679e0(float param_1, uint param_2, int param_3)
{
  float fVar1;
  int local_8;
  
  if (param_3 == 0) {
    fVar1 = param_1 + param_1;
    if (0.0f <= fVar1) {
      if (1.0f < fVar1) {
        fVar1 = 1.0f;
      }
    }
    else {
      fVar1 = 0.0f;
    }
    local_8 = (int)(longlong)ROUND(fVar1 * 255.0f);
    if (local_8 < 0) {
      local_8 = 0;
      goto LAB_00467a94;
    }
  }
  else {
    fVar1 = (param_1 - 0.5f) + (param_1 - 0.5f);
    if (0.0f <= fVar1) {
      if (1.0f < fVar1) {
        fVar1 = 1.0f;
      }
    }
    else {
      fVar1 = 0.0f;
    }
    local_8 = (int)(longlong)ROUND(fVar1 * 255.0f);
    if (local_8 < 0) {
      local_8 = 0;
      goto LAB_00467a94;
    }
  }
  if (0xff < local_8) {
    local_8 = 0xff;
  }
LAB_00467a94:
  FUN_00452ce0(bea_arg(0x3f800000), bea_arg(((param_2 >> 8 & 0xffff0000) * local_8 ^ param_2) & 0xffffff ^
               (param_2 >> 8 & 0xff0000) * local_8), bea_arg(0xcb18967f), bea_arg(0xcb18967f));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004679e0, ap_004679e0));
