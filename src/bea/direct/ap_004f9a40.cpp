// auto-ported from 004f9a40_FUN_004f9a40.c (FUN_004f9a40, 24 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_00444370_t)(uint32_t);
static const bea_guard<FUN_00444370_t> FUN_00444370 = {(FUN_00444370_t)0x00444370};

static float10 BEA_THISCALL ap_004f9a40(void * this_)
{
  float10 fVar1;
  
  if (*(void **)((int)this_ + 0x178) == (void *)0x0) {
    return (float10)*(float *)((int)this_ + 0xf8);
  }
  fVar1 = (float10)FUN_00444370(bea_arg(*(void **)((int)this_ + 0x178)));
  return fVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f9a40, ap_004f9a40));
