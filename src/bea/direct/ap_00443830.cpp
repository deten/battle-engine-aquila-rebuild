// auto-ported from 00443830_vslot4.c (CDestroyableSwapSegment::vslot4, 82 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CDestroyableSwapSegment;
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static int BEA_THISCALL ap_00443830(CDestroyableSwapSegment * this_)
{
  float10 fVar1;
  int local_8;
  
  if (*(float *)(this_ + 0x10) != 0.0f) {
    fVar1 = (float10)FUN_0055dfe7((double)(((*(float *)(this_ + 0x10) - *(float *)(this_ + 0xc)) /
                                           *(float *)(this_ + 0x10)) * (float)*(int *)(this_ + 0x40) +
                                          0.5f));
    local_8 = (int)(longlong)ROUND(fVar1);
    if (*(int *)(this_ + 0x40) < local_8) {
      local_8 = *(int *)(this_ + 0x40);
    }
    if (-1 < local_8) {
      return local_8;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00443830, ap_00443830));
