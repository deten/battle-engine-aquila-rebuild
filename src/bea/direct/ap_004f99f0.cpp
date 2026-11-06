// auto-ported from 004f99f0_FUN_004f99f0.c (FUN_004f99f0, 24 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_00444330_t)(uint32_t);
static const bea_guard<FUN_00444330_t> FUN_00444330 = {(FUN_00444330_t)0x00444330};

static float10 BEA_THISCALL ap_004f99f0(void * this_)
{
  float10 fVar1;
  
  if (*(void **)((int)this_ + 0x178) != (void *)0x0) {
    fVar1 = (float10)FUN_00444330(bea_arg(*(void **)((int)this_ + 0x178)));
    return fVar1;
  }
  return (float10)*(float *)((int)this_ + 0xf8);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f99f0, ap_004f99f0));
