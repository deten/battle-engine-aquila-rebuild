// auto-ported from 00414410_FUN_00414410.c (FUN_00414410, 93 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};

static float10 BEA_THISCALL ap_00414410(void * this_)
{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00414030(bea_arg(this_));
  if (iVar1 == 0) {
    fVar2 = (float10)0.0;
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar1 + 0xa4) + 0x24);
    fVar2 = (float10)*(float *)(*(int *)((int)this_ + 0x20) + 0x52c + iVar1 * 4) /
            (float10)*(float *)(*(int *)(*(int *)((int)this_ + 0x20) + 0x4b0) + 0x88 + iVar1 * 4);
    if ((float10)1.0f < fVar2) {
      return (float10)1.0f;
    }
  }
  return fVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00414410, ap_00414410));
