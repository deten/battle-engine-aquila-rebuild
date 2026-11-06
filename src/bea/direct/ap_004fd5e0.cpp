// auto-ported from 004fd5e0_vslot26_t8.c (CUnit::vslot26_t8, 184 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef float10 (BEA_THISCALL* FUN_004442d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004442d0_t> FUN_004442d0 = {(FUN_004442d0_t)0x004442d0};
typedef float10 (BEA_THISCALL* FUN_00444300_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00444300_t> FUN_00444300 = {(FUN_00444300_t)0x00444300};

static int BEA_THISCALL ap_004fd5e0(CUnit * this_, undefined4 param_1)
{
  int iVar1;
  float10 fVar2;
  
  if (*(void **)(this_ + 0x170) == (void *)0x0) {
    return *(int *)(this_ + 0x210);
  }
  fVar2 = (float10)FUN_004442d0(bea_arg(*(void **)(this_ + 0x170)), bea_arg(param_1));
  if ((float10)DAT_00672fd0 - fVar2 < (float10)1.0f) {
    fVar2 = (float10)FUN_00444300(bea_arg(*(void **)(this_ + 0x170)), bea_arg(param_1));
    bea_vcall<uint32_t>(this_ + -8, 0x1ac, (float)fVar2);
    *(undefined4 *)(this_ + 0x214) = 10;
    fVar2 = (float10)FUN_004442d0(bea_arg(*(void **)(this_ + 0x170)), bea_arg(param_1));
    iVar1 = *(int *)(this_ + 0x210) -
            (int)(longlong)ROUND(((float10)DAT_00672fd0 - fVar2) * (float10)20.0f) *
            *(int *)(this_ + 0x214);
    if (-1 < iVar1) {
      if (iVar1 < 0x65) {
        return iVar1;
      }
      return 100;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fd5e0, ap_004fd5e0));
