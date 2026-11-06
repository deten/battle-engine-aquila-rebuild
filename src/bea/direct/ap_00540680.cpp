// auto-ported from 00540680_FUN_00540680.c (FUN_00540680, 433 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @autoport-repair: 5 float/pointer cast(s) made bit copies (compiler-located, tools/repair_fcasts.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00500540_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500540_t> FUN_00500540 = {(FUN_00500540_t)0x00500540};
typedef uint32_t (BEA_THISCALL* FUN_00500590_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500590_t> FUN_00500590 = {(FUN_00500590_t)0x00500590};
typedef int * (BEA_CDECL* FUN_00501280_t)(int, int, ...);
static const bea_guard<FUN_00501280_t> FUN_00501280 = {(FUN_00501280_t)0x00501280};
typedef uint32_t (BEA_THISCALL* FUN_0053f880_t)(uint32_t);
static const bea_guard<FUN_0053f880_t> FUN_0053f880 = {(FUN_0053f880_t)0x0053f880};
typedef uint32_t (BEA_THISCALL* FUN_0053fb00_t)(uint32_t);
static const bea_guard<FUN_0053fb00_t> FUN_0053fb00 = {(FUN_0053fb00_t)0x0053fb00};

static undefined4 BEA_THISCALL ap_00540680(void * this_, short *param_1, undefined4 *param_2)
{
  float fVar1;
  short sVar2;
  float fVar3;
  void *this_00;
  int iVar4;
  short *psVar5;
  undefined4 *a1;
  float local_1c;
  float local_18;
  undefined4 local_8;
  
  psVar5 = param_1;
  if ((param_1 == (short *)0x0) || (param_2 == (undefined4 *)0x0)) {
    return 0;
  }
  if (*(int *)((int)this_ + 0x170) == 0) {
    if (*(char *)((int)this_ + 0x15c) == '\0') {
      FUN_0053f880(bea_arg(this_));
    }
    else {
      FUN_0053fb00(bea_arg(this_));
    }
    this_00 = (void *)FUN_00501280(*(undefined4 *)((int)this_ + 0x170),0);
    *(void **)((int)this_ + 0x174) = this_00;
    FUN_00500540(bea_arg(this_00), bea_arg(0x144), bea_arg(0x208), bea_arg(0x1c), bea_arg(4), bea_arg(0));
    FUN_00500590(bea_arg(*(void **)((int)this_ + 0x174)), bea_arg(0x65), bea_arg(0x208), bea_arg(2), bea_arg(0));
  }
  sVar2 = *param_1;
  fVar3 = (*(float *)((int)this_ + 0x18c) - *(float *)((int)this_ + 0x184)) *
          (float)*(int *)((int)this_ + 0x164);
  param_1 = (short *)0x0;
  local_1c = 0.0;
  a1 = param_2;
  local_18 = fVar3;
  do {
    if (sVar2 == 0) {
      local_8 = (undefined4)(longlong)ROUND(local_1c);
      *param_2 = local_8;
      local_8 = (undefined4)(longlong)ROUND(local_18);
      param_2[1] = local_8;
      return 1;
    }
    sVar2 = *psVar5;
    a1 = (undefined4 *)CONCAT22((short)((uint)a1 >> 0x10),sVar2);
    psVar5 = psVar5 + 1;
    if (sVar2 == 10) {
      local_18 = local_18 + fVar3;
      param_1 = (short *)0x0;
LAB_00540776:
      iVar4 = bea_vcall<uint32_t>(this_, 0x0, a1);
      fVar1 = *(float *)((iVar4 + 0x18) * 0x10 + (int)this_);
      iVar4 = bea_vcall<uint32_t>(this_, 0x0, a1);
      param_1 = (short *)(uintptr_t)bea_piece32(((*(float *)(iVar4 * 0x10 + 0x188 + (int)this_) - fVar1) *
                          (float)*(int *)((int)this_ + 0x160) + __builtin_bit_cast(float, (uint32_t)(uintptr_t)(param_1))));
      if (*(char *)((int)this_ + 0x15c) == '\0') {
        param_1 = (short *)(uintptr_t)bea_piece32((__builtin_bit_cast(float, (uint32_t)(uintptr_t)(param_1)) + 1.0f));
      }
      if (local_1c < __builtin_bit_cast(float, (uint32_t)(uintptr_t)(param_1))) {
        local_1c = __builtin_bit_cast(float, (uint32_t)(uintptr_t)(param_1));
      }
    }
    else if (sVar2 != 0xd) goto LAB_00540776;
    sVar2 = *psVar5;
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00540680, ap_00540680));
