// auto-ported from 004c0a50_vslot15.c (CPDSimpleSprite::vslot15, 81 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CPDSimpleSprite;
typedef float10 (BEA_STDCALL* FUN_004cba90_t)(uint32_t);
static const bea_guard<FUN_004cba90_t> FUN_004cba90 = {(FUN_004cba90_t)0x004cba90};

static void BEA_THISCALL ap_004c0a50(CPDSimpleSprite * this_, int param_1)
{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    fVar1 = (float10)FUN_004cba90(bea_arg(param_1));
    if (((((float10)*(float *)(this_ + 0x5c) * (float10)*(float *)(this_ + 0x5c)) / fVar1) *
         (float10)102400.0f < (float10)0.5f) && (*(int *)(this_ + 0xa0) == 0)) {
      bea_vcall<uint32_t>(this_, 0x54, param_1);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c0a50, ap_004c0a50));
