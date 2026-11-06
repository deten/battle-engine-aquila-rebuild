// auto-ported from 00451c90_vslot4.c (CFEPBriefing::vslot4, 191 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
// Hand-fixed 2026-10-27: integer tags stored in float slots were compared with
// denormal double literals (never equal in double); compared by bits now.
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_004530b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004530b0_t> FUN_004530b0 = {(FUN_004530b0_t)0x004530b0};

static uint32_t BEA_STDCALL ap_00451c90(float param_1, float param_2)
{
  float fVar1;
  float10 fVar2;
  undefined4 local_8;
  if ((bea_piece32(param_2) == 7u) || (bea_piece32(param_2) == 0x14u)) {
    fVar1 = (param_1 - 0.25f) * 1.3333334f;
    if (0.0f <= fVar1) {
      if (1.0f < fVar1) {
        fVar1 = 1.0f;
      }
    }
    else {
      fVar1 = 0.0f;
    }
    local_8 = (undefined4)(longlong)ROUND(fVar1 * 255.0f);
    fVar1 = param_1 * 0.25f;
    param_1 = -200.0;
    param_2 = fVar1 + 1.0f;
  }
  else {
    local_8 = 0xff;
    param_2 = 1.25;
    fVar2 = (float10)fcos((float10)param_1 * (float10)3.1415927f);
    param_1 = (float)(fVar2 * (float10)100.0f - (float10)100.0f);
  }
  return FUN_004530b0(bea_arg(param_1), bea_arg(0), bea_arg(param_2), bea_arg(local_8));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00451c90, ap_00451c90));
