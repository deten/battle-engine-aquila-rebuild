// auto-ported from 004d3110_vslot3.c (CPlayer::vslot3, 804 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CPlayer;
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_00662ab8 GLOBAL_AT(int, 0x00662ab8)
#define DAT_00662ac0 GLOBAL_AT(int, 0x00662ac0)
#define DAT_0082b5bc GLOBAL_AT(char, 0x0082b5bc)
#define _DAT_0082b5b8 GLOBAL_AT(float, 0x0082b5b8)
typedef undefined4 (BEA_THISCALL* FUN_004080f0_t)(uint32_t);
static const bea_guard<FUN_004080f0_t> FUN_004080f0 = {(FUN_004080f0_t)0x004080f0};
typedef uint32_t (BEA_THISCALL* FUN_00409e90_t)(uint32_t);
static const bea_guard<FUN_00409e90_t> FUN_00409e90 = {(FUN_00409e90_t)0x00409e90};
typedef uint32_t (BEA_THISCALL* FUN_00409ec0_t)(uint32_t);
static const bea_guard<FUN_00409ec0_t> FUN_00409ec0 = {(FUN_00409ec0_t)0x00409ec0};
typedef uint32_t (BEA_THISCALL* FUN_00409ef0_t)(uint32_t);
static const bea_guard<FUN_00409ef0_t> FUN_00409ef0 = {(FUN_00409ef0_t)0x00409ef0};
typedef uint32_t (BEA_THISCALL* FUN_00409f20_t)(uint32_t);
static const bea_guard<FUN_00409f20_t> FUN_00409f20 = {(FUN_00409f20_t)0x00409f20};
typedef uint32_t (BEA_THISCALL* FUN_00409f70_t)(uint32_t);
static const bea_guard<FUN_00409f70_t> FUN_00409f70 = {(FUN_00409f70_t)0x00409f70};
typedef uint32_t (BEA_THISCALL* FUN_0040a580_t)(uint32_t);
static const bea_guard<FUN_0040a580_t> FUN_0040a580 = {(FUN_0040a580_t)0x0040a580};
typedef uint32_t (BEA_THISCALL* FUN_0040d4d0_t)(uint32_t);
static const bea_guard<FUN_0040d4d0_t> FUN_0040d4d0 = {(FUN_0040d4d0_t)0x0040d4d0};
typedef uint32_t (BEA_THISCALL* FUN_00410310_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00410310_t> FUN_00410310 = {(FUN_00410310_t)0x00410310};
typedef uint32_t (BEA_THISCALL* FUN_00410490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00410490_t> FUN_00410490 = {(FUN_00410490_t)0x00410490};
typedef uint32_t (BEA_THISCALL* FUN_00410670_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00410670_t> FUN_00410670 = {(FUN_00410670_t)0x00410670};
typedef uint32_t (BEA_THISCALL* FUN_00410740_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00410740_t> FUN_00410740 = {(FUN_00410740_t)0x00410740};
typedef uint32_t (BEA_THISCALL* FUN_004109d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004109d0_t> FUN_004109d0 = {(FUN_004109d0_t)0x004109d0};
typedef uint32_t (BEA_THISCALL* FUN_00412d80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00412d80_t> FUN_00412d80 = {(FUN_00412d80_t)0x00412d80};
typedef uint32_t (BEA_THISCALL* FUN_00412f70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00412f70_t> FUN_00412f70 = {(FUN_00412f70_t)0x00412f70};
typedef uint32_t (BEA_THISCALL* FUN_00413160_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00413160_t> FUN_00413160 = {(FUN_00413160_t)0x00413160};
typedef uint32_t (BEA_THISCALL* FUN_00413360_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00413360_t> FUN_00413360 = {(FUN_00413360_t)0x00413360};
typedef uint32_t (BEA_THISCALL* FUN_004135e0_t)(uint32_t);
static const bea_guard<FUN_004135e0_t> FUN_004135e0 = {(FUN_004135e0_t)0x004135e0};
typedef uint32_t (BEA_THISCALL* FUN_00413660_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00413660_t> FUN_00413660 = {(FUN_00413660_t)0x00413660};
typedef uint32_t (BEA_THISCALL* FUN_004136e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004136e0_t> FUN_004136e0 = {(FUN_004136e0_t)0x004136e0};
typedef uint32_t (BEA_THISCALL* FUN_0046fb00_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0046fb00_t> FUN_0046fb00 = {(FUN_0046fb00_t)0x0046fb00};
typedef uint32_t (BEA_THISCALL* FUN_0046fec0_t)(uint32_t);
static const bea_guard<FUN_0046fec0_t> FUN_0046fec0 = {(FUN_0046fec0_t)0x0046fec0};
typedef uint32_t (BEA_THISCALL* FUN_004d28c0_t)(uint32_t);
static const bea_guard<FUN_004d28c0_t> FUN_004d28c0 = {(FUN_004d28c0_t)0x004d28c0};
typedef uint32_t (BEA_THISCALL* FUN_004d29c0_t)(uint32_t);
static const bea_guard<FUN_004d29c0_t> FUN_004d29c0 = {(FUN_004d29c0_t)0x004d29c0};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static void BEA_THISCALL ap_004d3110(CPlayer * this_, undefined4 param_1, int param_2, float param_3)
{
  void *pvVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  if ((DAT_008a9ac0 < 4) && (1 < DAT_008a9ac0)) {
    fVar3 = bea_fcast<float10>(FUN_005159e0(bea_arg(&DAT_0088a0a8)));
    *(float *)(this_ + 0x4c) = bea_fcast<float>(fVar3);
    if (param_2 == 0x38) {
      FUN_0046fb00(bea_arg(&DAT_008a9a98), bea_arg(1), bea_arg(param_1));
      return;
    }
    if (param_2 != 0x39) {
      if (((param_2 == 0x3a) && (*(int *)(this_ + 0x24) == 0)) && (DAT_008a9ac0 == 2)) {
        if (*(int *)(this_ + 0x28) == 1) {
          FUN_004d28c0(bea_arg(this_));
        }
        if (*(int *)(this_ + 0x28) == 2) {
          FUN_004d29c0(bea_arg(this_));
        }
        FUN_0046fec0(bea_arg(&DAT_008a9a98));
      }
      if (((2 < DAT_008a9ac0) && (pvVar1 = *(void **)(this_ + 0x1c), pvVar1 != (void *)0x0)) &&
         (((*(byte *)((int)pvVar1 + 0x2c) & 4) == 0 && (*(int *)((int)pvVar1 + 0x580) != 0)))) {
        if ((param_2 == 0x1a) || (param_2 == 0x1c)) {
          iVar2 = FUN_004080f0(bea_arg(pvVar1));
          if (iVar2 == 0) {
            iVar2 = *(int *)(&DAT_00662ab8 + *(int *)(this_ + 0x2c) * 4);
          }
          else {
            iVar2 = *(int *)(&DAT_00662ac0 + *(int *)(this_ + 0x2c) * 4);
          }
          if (iVar2 != 0) {
            param_3 = -param_3;
          }
        }
        if ((((param_2 == 0x1b) || (param_2 == 0x19)) || (param_2 == 0x1a)) || (param_2 == 0x1c)) {
          if (param_3 <= 0.0f) {
            fVar3 = bea_fcast<float10>(fptan(bea_fcast<float10>(param_3) * bea_fcast<float10>(-1.2f)));
            fVar3 = -(fVar3 * bea_fcast<float10>(3.0f));
          }
          else {
            fVar3 = bea_fcast<float10>(fptan(bea_fcast<float10>(param_3) * bea_fcast<float10>(1.2f)));
            fVar3 = fVar3 * bea_fcast<float10>(3.0f);
          }
          if ((DAT_0082b5bc & 1) == 0) {
            fVar4 = bea_fcast<float10>(fptan(bea_fcast<float10>(1.2000000476837158f)));
            DAT_0082b5bc = DAT_0082b5bc | 1;
            _DAT_0082b5b8 = bea_fcast<float>((fVar4 * bea_fcast<float10>(3.0f)));
          }
          param_3 = bea_fcast<float>((fVar3 / bea_fcast<float10>(_DAT_0082b5b8)));
        }
        pvVar1 = *(void **)(this_ + 0x1c);
        if ((*(int *)((int)pvVar1 + 0x260) != 0) && (*(int *)((int)pvVar1 + 0x260) != 1)) {
          switch(param_2) {
          case 0x10:
            FUN_00409ec0(bea_arg(pvVar1));
            break;
          case 0x11:
            FUN_00409e90(bea_arg(pvVar1));
            break;
          case 0x12:
            FUN_00409f20(bea_arg(pvVar1));
            break;
          case 0x13:
            FUN_00409ef0(bea_arg(pvVar1));
            break;
          case 0x14:
            FUN_00409f70(bea_arg(pvVar1));
            break;
          case 0x21:
            FUN_0040a580(bea_arg(pvVar1));
            break;
          case 0x3b:
            FUN_0040d4d0(bea_arg(pvVar1));
            break;
          case 0x3d:
            break;
          case 0x3e:;
          }
        }
        iVar2 = *(int *)(this_ + 0x1c);
        if (*(int *)(iVar2 + 0x260) == 2) {
          switch(param_2) {
          case 0x15:
            FUN_004135e0(bea_arg(*(void **)(iVar2 + 0x578)));
            return;
          case 0x19:
          case 0x1b:
            FUN_00413660(bea_arg(*(void **)(iVar2 + 0x578)), bea_arg(param_3));
            return;
          case 0x1a:
          case 0x1c:
            FUN_004136e0(bea_arg(*(void **)(iVar2 + 0x578)), bea_arg(param_3));
            return;
          case 0x1d:
            FUN_00413160(bea_arg(*(void **)(iVar2 + 0x578)), bea_arg(param_3));
            return;
          case 0x1e:
            FUN_00413360(bea_arg(*(void **)(iVar2 + 0x578)), bea_arg(param_3));
            return;
          case 0x1f:
            FUN_00412d80(bea_arg(*(void **)(iVar2 + 0x578)), bea_arg(param_3));
            return;
          case 0x20:
            FUN_00412f70(bea_arg(*(void **)(iVar2 + 0x578)), bea_arg(param_3));
            return;
          }
        }
        else if (*(int *)(iVar2 + 0x260) == 3) {
          switch(param_2) {
          case 0x19:
          case 0x1b:
            FUN_00410490(bea_arg(*(void **)(iVar2 + 0x57c)), bea_arg(param_3));
            return;
          case 0x1a:
          case 0x1c:
            FUN_00410670(bea_arg(*(void **)(iVar2 + 0x57c)), bea_arg(param_3));
            return;
          case 0x1d:
            FUN_00410740(bea_arg(*(void **)(iVar2 + 0x57c)), bea_arg(param_3));
            return;
          case 0x1e:
            FUN_004109d0(bea_arg(*(void **)(iVar2 + 0x57c)), bea_arg(param_3));
            return;
          case 0x1f:
            FUN_00410310(bea_arg(*(void **)(iVar2 + 0x57c)), bea_arg(param_3));
            return;
          case 0x20:
            FUN_00410310(bea_arg(*(void **)(iVar2 + 0x57c)), bea_arg(param_3));
          }
        }
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d3110, ap_004d3110));
