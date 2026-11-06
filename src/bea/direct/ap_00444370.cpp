// auto-ported from 00444370_FUN_00444370.c (FUN_00444370, 63 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_00442900_t)(uint32_t);
static const bea_guard<FUN_00442900_t> FUN_00442900 = {(FUN_00442900_t)0x00442900};

static float10 BEA_THISCALL ap_00444370(void * this_)
{
  bool bVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = *(int *)((int)this_ + 8);
  bVar1 = true;
  if (0 < iVar3) {
    piVar2 = *(int **)((int)this_ + 4);
    do {
      if ((*piVar2 != 0) && (*(int *)(*piVar2 + 0x1c) == 1)) {
        bVar1 = false;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
    if (!bVar1) {
      fVar4 = (float10)FUN_00442900(bea_arg(*(void **)((int)this_ + 0xc)));
      return fVar4;
    }
  }
  return (float10)1.0f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00444370, ap_00444370));
