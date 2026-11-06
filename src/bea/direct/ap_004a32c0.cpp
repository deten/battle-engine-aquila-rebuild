// auto-ported from 004a32c0_FUN_004a32c0.c (FUN_004a32c0, 350 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef uint32_t (BEA_THISCALL* FUN_004659a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004659a0_t> FUN_004659a0 = {(FUN_004659a0_t)0x004659a0};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};

static uint32_t BEA_THISCALL ap_004a32c0(void * this_, float param_1, float param_2, float param_3, uint32_t param_4_bits, undefined4 param_5)
{
float param_4_f = __builtin_bit_cast(float, param_4_bits);   // @autoport-float-param: the slot holds a pointer first, a float later

  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int (&local_8)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x10 - 0x8);
  uVar1 = (uint)param_4_bits;
  uVar5 = *(uint *)((int)this_ + 0x14);
  if (*(int *)((int)this_ + 0xc) != 0) {
    uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(*(int *)((int)this_ + 0xc)));
    piVar11 = local_8;
    uVar8 = uVar2;
    pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    FUN_00540680(bea_arg(pvVar3), bea_arg(uVar8), bea_arg(piVar11));
    uVar12 = 0x3f800000;
    uVar10 = 0x3f800000;
    uVar9 = 0;
    uVar8 = 0;
    uVar4 = (uint)param_4_bits & 0xff2f5f7f;
    fVar6 = param_1 - (float)(local_8[0] / 2);
    fVar7 = param_2;
    pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    FUN_004659a0(bea_arg(pvVar3), bea_arg(fVar6), bea_arg(fVar7), bea_arg(uVar4), bea_arg(uVar2), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar12));
    param_2 = param_2 + 20.0f;
  }
  if (param_3 != 0.0) {
    uVar5 = 0xffffcc00;
  }
  if (*(int *)((int)this_ + 0x10) == 0) {
    uVar5 = 0x50505050;
  }
  piVar11 = local_8;
  uVar8 = param_5;
  pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  FUN_00540680(bea_arg(pvVar3), bea_arg(uVar8), bea_arg(piVar11));
  param_3 = 1.0;
  param_4_f = param_1 - (float)(local_8[0] / 2);
  if (param_4_f < 5.0f) {
    param_4_f = 5.0f;
    param_3 = (param_1 - 5.0f) / (float)(local_8[0] / 2);
  }
  uVar9 = 0x3f800000;
  uVar2 = 0;
  uVar8 = 0;
  uVar5 = uVar5 & uVar1;
  pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  return FUN_004659a0(bea_arg(pvVar3), bea_arg(param_4_f), bea_arg(param_2), bea_arg(uVar5), bea_arg(param_5), bea_arg(uVar8), bea_arg(uVar2), bea_arg(param_3), bea_arg(uVar9));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a32c0, ap_004a32c0));
