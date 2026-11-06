// auto-ported from 00443780_vslot3.c (CDestroyableSwapSegment::vslot3, 142 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDestroyableSwapSegment;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
typedef uint32_t (BEA_THISCALL* FUN_004429a0_t)(uint32_t);
static const bea_guard<FUN_004429a0_t> FUN_004429a0 = {(FUN_004429a0_t)0x004429a0};

static void BEA_THISCALL ap_00443780(CDestroyableSwapSegment * this_, float param_1, undefined4 param_2)
{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = bea_vcall<uint32_t>(this_, 0x10);
  if (*(int *)(this_ + 0x1c) != 0) {
    fVar1 = *(float *)(this_ + 0xc);
    *(float *)(this_ + 0xc) = fVar1 - param_1;
    uVar2 = DAT_00672fd0;
    *(float *)(this_ + 0x18) = param_1;
    *(undefined4 *)(this_ + 0x14) = uVar2;
    if (fVar1 - param_1 < 0.0f) {
      *(undefined4 *)(this_ + 0xc) = 0;
    }
  }
  iVar4 = bea_vcall<uint32_t>(this_, 0x10);
  if (iVar3 != iVar4) {
    bea_vcall<uint32_t>(this_, 0x28);
    if (iVar3 == 0) {
      FUN_004429a0(bea_arg(this_));
    }
    *(float *)(this_ + 0x34) = *(float *)(this_ + 0x34) * 0.5f;
    **(undefined4 **)(this_ + 0x3c) = 1;
  }
  if (*(float *)(this_ + 0xc) == 0.0f) {
    bea_vcall<uint32_t>(this_, 0x20);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00443780, ap_00443780));
