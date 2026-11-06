// auto-ported from 004c35d0_FUN_004c35d0.c (FUN_004c35d0, 209 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef bool (BEA_THISCALL* FUN_004caed0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004caed0_t> FUN_004caed0 = {(FUN_004caed0_t)0x004caed0};

static void BEA_THISCALL ap_004c35d0(void * this_, void *param_1)
{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_8;
  
  if (*(int *)((int)this_ + 0x90) == 0) {
    *(undefined4 *)((int)param_1 + 0x80) = *(undefined4 *)((int)this_ + 0x68);
  }
  else {
    pfVar1 = *(float **)((int)param_1 + 0x58);
    if (pfVar1 == (float *)0x0) {
      return;
    }
    if (*(int *)((int)this_ + 0xa0) == 0) {
      *(undefined4 *)((int)param_1 + 0x80) = *(undefined4 *)((int)this_ + 0x68);
    }
    else {
      local_8 = (int)(longlong)
                     ROUND(SQRT((pfVar1[1] - pfVar1[0x25]) * (pfVar1[1] - pfVar1[0x25]) +
                                (pfVar1[2] - pfVar1[0x26]) * (pfVar1[2] - pfVar1[0x26]) +
                                (*pfVar1 - pfVar1[0x24]) * (*pfVar1 - pfVar1[0x24])) /
                           *(float *)((int)this_ + 0xa4));
      *(int *)((int)param_1 + 0x80) = local_8 + 3;
    }
  }
  FUN_004caed0(bea_arg(param_1), bea_arg(*(int *)((int)param_1 + 0x80) * 0x28));
  iVar3 = 0;
  if (0 < *(int *)((int)param_1 + 0x80)) {
    puVar2 = (undefined4 *)(*(int *)((int)param_1 + 0x88) + 0x20);
    do {
      puVar2[1] = 0;
      *puVar2 = 0x3e4ccccd;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 10;
    } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)param_1 + 0x80))));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c35d0, ap_004c35d0));
