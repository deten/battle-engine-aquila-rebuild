// auto-ported from 004e6ff0_vslot68.c (CNormalSquad::vslot68, 74 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CNormalSquad;
typedef undefined4 (BEA_THISCALL* FUN_004fd380_t)(uint32_t);
static const bea_guard<FUN_004fd380_t> FUN_004fd380 = {(FUN_004fd380_t)0x004fd380};

static void BEA_THISCALL ap_004e6ff0(CNormalSquad * this_, int *param_1)
{
  undefined4 uVar1;
  float10 fVar2;
  
  if (param_1 != (int *)0x0) {
    fVar2 = (float10)bea_vcall<float10>(param_1, 0x44);
    *(float *)(this_ + 0x104) = (float)fVar2;
    uVar1 = FUN_004fd380(bea_arg(param_1));
    *(undefined4 *)(this_ + 0xd0) = uVar1;
    fVar2 = (float10)bea_vcall<float10>(param_1, 0x1bc);
    *(float *)(this_ + 0x10c) = (float)(fVar2 * (float10)0.060000002f);
    *(int *)(this_ + 0xc0) = param_1[0xd];
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e6ff0, ap_004e6ff0));
