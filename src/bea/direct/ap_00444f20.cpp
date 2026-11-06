// auto-ported from 00444f20_FUN_00444f20.c (FUN_00444f20, 237 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_00442890_t)(uint32_t);
static const bea_guard<FUN_00442890_t> FUN_00442890 = {(FUN_00442890_t)0x00442890};
typedef undefined4 (BEA_THISCALL* FUN_004433f0_t)(uint32_t);
static const bea_guard<FUN_004433f0_t> FUN_004433f0 = {(FUN_004433f0_t)0x004433f0};

static uint32_t BEA_THISCALL ap_00444f20(void * this_, int param_1)
{
  float fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  
  piVar2 = *(int **)(*(int *)((int)this_ + 4) + param_1 * 4);
  if (piVar2 == (int *)0x0) {
    piVar2 = *(int **)(*(int *)((int)this_ + 0x10) + 0x30);
    if (piVar2 == (int *)0x0) {
      return true;
    }
    iVar3 = bea_vcall<uint32_t>(piVar2, 0x24);
    if ((((iVar3 != 0) && (iVar3 = *(int *)(*(int *)(iVar3 + 0x160) + param_1 * 4), iVar3 != 0)) &&
        (*(int *)(iVar3 + 0x8c) == 5)) &&
       ((*(int *)(iVar3 + 0x98) != 0 &&
        (iVar3 = *(int *)(*(int *)((int)this_ + 4) + *(int *)(*(int *)(iVar3 + 0x98) + 0x88) * 4),
        iVar3 != 0)))) {
      return *(int *)(iVar3 + 0x38) == 0;
    }
    return true;
  }
  if (*(int *)((int)this_ + 0x24) == 0) {
    iVar3 = bea_vcall<uint32_t>(piVar2, 0x14);
    if ((iVar3 == 0) && (piVar2[0x10] == 1)) {
      iVar3 = FUN_004433f0(bea_arg(*(void **)((int)this_ + 0xc)));
      if (iVar3 != 1) {
        fVar1 = *(float *)((int)this_ + 0x18);
        fVar4 = (float10)FUN_00442890(bea_arg(*(void **)((int)this_ + 0xc)));
        if ((float10)(fVar1 * 0.3) <= fVar4) goto LAB_00444ffa;
      }
      return false;
    }
  }
LAB_00444ffa:
  return piVar2[0xe] == 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00444f20, ap_00444f20));
