// auto-ported from 004fb5a0_FUN_004fb5a0.c (FUN_004fb5a0, 167 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef undefined4 (BEA_THISCALL* FUN_004fb670_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb670_t> FUN_004fb670 = {(FUN_004fb670_t)0x004fb670};
typedef undefined4 (BEA_THISCALL* FUN_005088b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005088b0_t> FUN_005088b0 = {(FUN_005088b0_t)0x005088b0};

static uint BEA_THISCALL ap_004fb5a0(void * this_, int *param_1)
{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  iVar1 = FUN_004fb670(bea_arg(this_), bea_arg(param_1));
  if (iVar1 != 0) {
    return 0;
  }
  if (*(int *)((int)this_ + 0x140) != 0) {
    iVar1 = bea_vcall<uint32_t>(param_1, 0x10c);
    if (iVar1 == 0) {
      fVar3 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(param_1 + 7)));
      if (bea_fcast<float10>(DAT_006fbdfc) < fVar3) {
        fVar3 = bea_fcast<float10>(DAT_006fbdfc);
      }
      fVar3 = fVar3 - bea_fcast<float10>(bea_fcast<float>(param_1[9]));
    }
    else {
      fVar3 = bea_fcast<float10>(0.0f);
    }
    iVar1 = *(int *)((int)*(void **)((int)this_ + 0x140) + 0xa0);
    if ((bea_fcast<float10>(*(float *)(iVar1 + 0x6c)) <= fVar3) && (fVar3 <= bea_fcast<float10>(*(float *)(iVar1 + 0x70)))
       ) {
      uVar2 = FUN_005088b0(bea_arg(*(void **)((int)this_ + 0x140)), bea_arg(param_1));
      return uVar2;
    }
  }
  return (uint)(*(int *)((int)this_ + 0x144) != 0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fb5a0, ap_004fb5a0));
