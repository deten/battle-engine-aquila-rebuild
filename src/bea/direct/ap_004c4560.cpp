// auto-ported from 004c4560_vslot12.c (CPDMover::vslot12, 724 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CPDMover;
#define DAT_009c6400 GLOBAL_AT(int, 0x009c6400)
#define DAT_009c63f8 GLOBAL_AT(float, 0x009c63f8)
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef float10 (BEA_CDECL* FUN_004c0c70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c0c70_t> FUN_004c0c70 = {(FUN_004c0c70_t)0x004c0c70};
typedef float10 (BEA_THISCALL* FUN_004c10c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c10c0_t> FUN_004c10c0 = {(FUN_004c10c0_t)0x004c10c0};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))

static uint32_t BEA_THISCALL ap_004c4560(CPDMover * this_, uint32_t param_1_bits, float param_2)
{
float param_1_f = __builtin_bit_cast(float, param_1_bits);   // @autoport-float-param: the slot holds a pointer first, a float later

  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float local_c;
  fVar6 = param_2;
  iVar1 = (int)param_1_bits;
  fVar5 = bea_fcast<float>(DAT_009c6400);
  iVar2 = *(int *)(this_ + 0x60);
  if (iVar2 == 0) {
    fVar3 = bea_fcast<float10>(*(float *)(this_ + 0x5c));
  }
  else {
    iVar10 = (int)param_1_bits;
    if (*(int *)(iVar2 + 0x84) == 0) {
      uVar12 = *(undefined4 *)(iVar2 + 0x80);
      uVar11 = *(undefined4 *)(iVar2 + 0x7c);
      iVar9 = iVar2 + 0x74;
      iVar8 = iVar2 + 0x6c;
      iVar7 = iVar2 + 100;
      iVar2 = iVar2 + 0x5c;
    }
    else {
      param_2 = bea_fcast<float>(DAT_009c6400);
      fVar3 = bea_fcast<float10>(FUN_004c10c0(bea_arg((void *)(iVar2 + 0x88)), bea_arg(DAT_009c6400), bea_arg(param_1_f)));
      if ((*(int *)(iVar2 + 0x90) != 0) && (param_1_f != 0.0f)) {
        param_2 = fVar5 - *(float *)((int)param_1_bits + 0x84);
      }
      uVar12 = *(undefined4 *)(iVar2 + 0x80);
      uVar11 = *(undefined4 *)(iVar2 + 0x7c);
      iVar9 = iVar2 + 0x74;
      iVar8 = iVar2 + 0x6c;
      iVar7 = iVar2 + 100;
      iVar2 = iVar2 + 0x5c;
      fVar4 = _CIfmod(bea_fcast<float10>(bea_fcast<float>(fVar3)),bea_fcast<float10>(param_2));
      param_2 = bea_fcast<float>((fVar4 / bea_fcast<float10>(bea_fcast<float>(fVar3))));
    }
    fVar3 = bea_fcast<float10>(FUN_004c0c70(bea_arg(param_2), bea_arg(iVar2), bea_arg(iVar7), bea_arg(iVar8), bea_arg(iVar9), bea_arg(uVar11), bea_arg(uVar12), bea_arg(iVar10)));
    fVar3 = fVar3 * bea_fcast<float10>(*(float *)(this_ + 0x5c));
  }
  *(float *)((int)param_1_bits + 0x50) =
       bea_fcast<float>((bea_fcast<float10>(DAT_009c63f8) * fVar3 * bea_fcast<float10>(0.003f) +
              bea_fcast<float10>(*(float *)((int)param_1_bits + 0x50))));
  fVar5 = bea_fcast<float>(DAT_009c6400);
  iVar2 = *(int *)(this_ + 0x70);
  local_c = *(float *)(this_ + 100);
  param_1_f = *(float *)(this_ + 0x68);
  param_2 = *(float *)(this_ + 0x6c);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x84) == 0) {
      uVar12 = *(undefined4 *)(iVar2 + 0x80);
      uVar11 = *(undefined4 *)(iVar2 + 0x7c);
      uVar13 = 0;
      iVar10 = iVar2 + 0x74;
      iVar9 = iVar2 + 0x6c;
      iVar8 = iVar2 + 100;
      iVar2 = iVar2 + 0x5c;
      fVar5 = fVar6;
    }
    else {
      fVar3 = bea_fcast<float10>(FUN_004c10c0(bea_arg((void *)(iVar2 + 0x88)), bea_arg(fVar6), bea_arg(0)));
      uVar12 = *(undefined4 *)(iVar2 + 0x80);
      uVar11 = *(undefined4 *)(iVar2 + 0x7c);
      uVar13 = 0;
      iVar10 = iVar2 + 0x74;
      iVar9 = iVar2 + 0x6c;
      iVar8 = iVar2 + 100;
      iVar2 = iVar2 + 0x5c;
      fVar4 = _CIfmod(bea_fcast<float10>(bea_fcast<float>(fVar3)),bea_fcast<float10>(fVar5));
      fVar5 = bea_fcast<float>((fVar4 / bea_fcast<float10>(bea_fcast<float>(fVar3))));
    }
    fVar3 = bea_fcast<float10>(FUN_004c0c70(bea_arg(fVar5), bea_arg(iVar2), bea_arg(iVar8), bea_arg(iVar9), bea_arg(iVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar13)));
    local_c = bea_fcast<float>((fVar3 * bea_fcast<float10>(3.1415927f) + bea_fcast<float10>(local_c)));
  }
  fVar5 = bea_fcast<float>(DAT_009c6400);
  iVar2 = *(int *)(this_ + 0x74);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x84) == 0) {
      uVar12 = *(undefined4 *)(iVar2 + 0x80);
      uVar11 = *(undefined4 *)(iVar2 + 0x7c);
      uVar13 = 0;
      iVar10 = iVar2 + 0x74;
      iVar9 = iVar2 + 0x6c;
      iVar8 = iVar2 + 100;
      iVar2 = iVar2 + 0x5c;
      fVar5 = fVar6;
    }
    else {
      fVar3 = bea_fcast<float10>(FUN_004c10c0(bea_arg((void *)(iVar2 + 0x88)), bea_arg(fVar6), bea_arg(0)));
      uVar12 = *(undefined4 *)(iVar2 + 0x80);
      uVar11 = *(undefined4 *)(iVar2 + 0x7c);
      uVar13 = 0;
      iVar10 = iVar2 + 0x74;
      iVar9 = iVar2 + 0x6c;
      iVar8 = iVar2 + 100;
      iVar2 = iVar2 + 0x5c;
      fVar4 = _CIfmod(bea_fcast<float10>(bea_fcast<float>(fVar3)),bea_fcast<float10>(fVar5));
      fVar5 = bea_fcast<float>((fVar4 / bea_fcast<float10>(bea_fcast<float>(fVar3))));
    }
    fVar3 = bea_fcast<float10>(FUN_004c0c70(bea_arg(fVar5), bea_arg(iVar2), bea_arg(iVar8), bea_arg(iVar9), bea_arg(iVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar13)));
    param_1_f = bea_fcast<float>((fVar3 * bea_fcast<float10>(3.1415927f) + bea_fcast<float10>(param_1_f)));
  }
  fVar5 = bea_fcast<float>(DAT_009c6400);
  iVar2 = *(int *)(this_ + 0x78);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x84) == 0) {
      uVar12 = *(undefined4 *)(iVar2 + 0x80);
      uVar11 = *(undefined4 *)(iVar2 + 0x7c);
      uVar13 = 0;
      iVar10 = iVar2 + 0x74;
      iVar9 = iVar2 + 0x6c;
      iVar8 = iVar2 + 100;
      iVar2 = iVar2 + 0x5c;
    }
    else {
      fVar3 = bea_fcast<float10>(FUN_004c10c0(bea_arg((void *)(iVar2 + 0x88)), bea_arg(fVar6), bea_arg(0)));
      uVar12 = *(undefined4 *)(iVar2 + 0x80);
      uVar11 = *(undefined4 *)(iVar2 + 0x7c);
      uVar13 = 0;
      iVar10 = iVar2 + 0x74;
      iVar9 = iVar2 + 0x6c;
      iVar8 = iVar2 + 100;
      iVar2 = iVar2 + 0x5c;
      fVar4 = _CIfmod(bea_fcast<float10>(bea_fcast<float>(fVar3)),bea_fcast<float10>(fVar5));
      fVar6 = bea_fcast<float>((fVar4 / bea_fcast<float10>(bea_fcast<float>(fVar3))));
    }
    fVar3 = bea_fcast<float10>(FUN_004c0c70(bea_arg(fVar6), bea_arg(iVar2), bea_arg(iVar8), bea_arg(iVar9), bea_arg(iVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar13)));
    param_2 = bea_fcast<float>((fVar3 * bea_fcast<float10>(3.1415927f) + bea_fcast<float10>(param_2)));
  }
  return FUN_004062d0(bea_arg((void *)(iVar1 + 8)), bea_arg(local_c), bea_arg(param_1_f), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c4560, ap_004c4560));
