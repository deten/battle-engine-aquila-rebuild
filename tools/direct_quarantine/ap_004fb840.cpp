// auto-ported from 004fb840_FUN_004fb840.c (FUN_004fb840, 1099 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit uStack_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit uStack_14: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit uStack_24: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (14 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static FUN_00401000_t const FUN_00401000 = (FUN_00401000_t)0x00401000;
typedef int (BEA_THISCALL* FUN_00401fa0_t)(uint32_t);
static FUN_00401fa0_t const FUN_00401fa0 = (FUN_00401fa0_t)0x00401fa0;
typedef undefined4 (BEA_THISCALL* FUN_00409760_t)(uint32_t);
static FUN_00409760_t const FUN_00409760 = (FUN_00409760_t)0x00409760;
typedef undefined4 (BEA_THISCALL* FUN_00409780_t)(uint32_t);
static FUN_00409780_t const FUN_00409780 = (FUN_00409780_t)0x00409780;
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static FUN_0047eb80_t const FUN_0047eb80 = (FUN_0047eb80_t)0x0047eb80;
typedef undefined4 (BEA_THISCALL* FUN_004e43d0_t)(uint32_t);
static FUN_004e43d0_t const FUN_004e43d0 = (FUN_004e43d0_t)0x004e43d0;
typedef bool (BEA_THISCALL* FUN_004e4420_t)(uint32_t);
static FUN_004e4420_t const FUN_004e4420 = (FUN_004e4420_t)0x004e4420;
typedef undefined4 (BEA_THISCALL* FUN_004e4480_t)(uint32_t, uint32_t);
static FUN_004e4480_t const FUN_004e4480 = (FUN_004e4480_t)0x004e4480;
typedef float10 (BEA_THISCALL* FUN_005096a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_005096a0_t const FUN_005096a0 = (FUN_005096a0_t)0x005096a0;
typedef float10 (BEA_THISCALL* FUN_005099a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_005099a0_t const FUN_005099a0 = (FUN_005099a0_t)0x005099a0;
typedef undefined4 (BEA_THISCALL* FUN_00509f70_t)(uint32_t);
static FUN_00509f70_t const FUN_00509f70 = (FUN_00509f70_t)0x00509f70;
typedef uint (BEA_THISCALL* FUN_0050a0b0_t)(uint32_t, uint32_t);
static FUN_0050a0b0_t const FUN_0050a0b0 = (FUN_0050a0b0_t)0x0050a0b0;
typedef uint (BEA_THISCALL* FUN_0050a0d0_t)(uint32_t, uint32_t);
static FUN_0050a0d0_t const FUN_0050a0d0 = (FUN_0050a0d0_t)0x0050a0d0;
typedef undefined4 (BEA_THISCALL* FUN_0050a290_t)(uint32_t);
static FUN_0050a290_t const FUN_0050a290 = (FUN_0050a290_t)0x0050a290;

static void BEA_THISCALL ap_004fb840(void * this_, int param_1)
{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  void *this_00;
  float10 fVar9;
  float fStack_54;
  float local_4c;
  undefined4 *puStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 *local_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24 = 0;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_34 = (int)this_ + 0x17c;
  pvVar7 = (void *)FUN_00409760(bea_arg(&local_38));
  while (BEA_LOOP_GUARD((pvVar7 != (void *)0x0))) {
    iVar8 = FUN_0050a290(bea_arg(pvVar7));
    if (iVar8 != 0) {
      return;
    }
    pvVar7 = (void *)FUN_00409780(bea_arg(&local_38));
  }
  if (param_1 != 0) {
    *(undefined4 *)((int)this_ + 0x140) = 0;
    FUN_00401000(bea_arg((void *)((int)this_ + 0x144)), bea_arg(0));
    fVar2 = *(float *)(param_1 + 0x1c) - *(float *)((int)this_ + 0x1c);
    fVar3 = *(float *)(param_1 + 0x20) - *(float *)((int)this_ + 0x20);
    fVar4 = *(float *)(param_1 + 0x24) - *(float *)((int)this_ + 0x24);
    local_4c = -1.0;
    fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    local_34 = (int)this_ + 0x18c;
    pvVar7 = (void *)FUN_00409760(bea_arg(&local_38));
    uVar6 = uStack_3c;
    while (BEA_LOOP_GUARD((pvVar7 != (void *)0x0))) {
      bVar5 = false;
      uStack_3c = uVar6;
      iVar8 = bea_vcall<uint32_t>(this_, 0x10c);
      if ((((iVar8 != 0) && ((*(byte *)(*(int *)((int)pvVar7 + 0x3d0) + 0x14) & 2) != 0)) ||
          ((iVar8 = FUN_00401fa0(bea_arg(this_)), iVar8 != 0 &&
           ((*(byte *)(*(int *)((int)pvVar7 + 0x3d0) + 0x14) & 1) != 0)))) ||
         (((iVar8 = bea_vcall<uint32_t>(this_, 0x10c), iVar8 == 0 &&
           (iVar8 = FUN_00401fa0(bea_arg(this_)), iVar8 == 0)) &&
          ((*(byte *)(*(int *)((int)pvVar7 + 0x3d0) + 0x14) & 4) != 0)))) {
        bVar5 = true;
      }
      iVar8 = FUN_004e4480(bea_arg(pvVar7), bea_arg(param_1));
      if ((iVar8 != 0) && (bVar5)) {
        iVar8 = *(int *)((int)pvVar7 + 0x3d0);
        if ((fVar2 <= *(float *)(iVar8 + 0x2c)) || (*(float *)(iVar8 + 0x30) <= fVar2)) {
          fStack_54 = fVar2 - *(float *)(iVar8 + 0x30);
        }
        else {
          fStack_54 = 1e+06;
        }
        iVar8 = FUN_004e43d0(bea_arg(pvVar7));
        if (iVar8 != 0) {
          iStack_44 = (int)this_ + 0x18c;
          this_00 = (void *)FUN_00409760(bea_arg(&puStack_48));
          while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
            iVar8 = FUN_004e4420(bea_arg(this_00));
            if (iVar8 != 0) goto LAB_004fb9fd;
            puStack_48 = (undefined4 *)puStack_48[1];
            if (puStack_48 == (undefined4 *)0x0) {
              this_00 = (void *)0x0;
            }
            else {
              this_00 = (void *)*puStack_48;
            }
          }
          fStack_54 = fStack_54 + 1e+06;
        }
LAB_004fb9fd:
        if (local_4c < fStack_54) {
          FUN_00401000(bea_arg((void *)((int)this_ + 0x144)), bea_arg(pvVar7));
          local_4c = fStack_54;
        }
      }
      local_38 = (undefined4 *)local_38[1];
      uVar6 = uStack_3c;
      if (local_38 == (undefined4 *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = (void *)*local_38;
      }
    }
    puVar1 = *(undefined4 **)((int)this_ + 0x17c);
    if (puVar1 == (undefined4 *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = (void *)*puVar1;
    }
    while (BEA_LOOP_GUARD((pvVar7 != (void *)0x0))) {
      iVar8 = FUN_0050a0b0(bea_arg(pvVar7), bea_arg(param_1));
      if (iVar8 != 0) {
        fVar9 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(param_1 + 0x1c));
        if ((float10)DAT_006fbdfc < fVar9) {
          fVar9 = (float10)DAT_006fbdfc;
        }
        fVar9 = fVar9 - (float10)*(float *)(param_1 + 0x24);
        if (((float10)*(float *)(*(int *)((int)pvVar7 + 0xa0) + 0x6c) < fVar9) &&
           (fVar9 < (float10)*(float *)(*(int *)((int)pvVar7 + 0xa0) + 0x70))) {
          fStack_54 = 0.0f;
          if (((*(uint *)(param_1 + 0x34) & 0x80000) != 0) &&
             (iVar8 = FUN_0050a0d0(bea_arg(pvVar7), bea_arg(0x80000)), iVar8 != 0)) {
            fStack_54 = 2e+06;
          }
          puStack_48 = (undefined4 *)0x0;
          iStack_44 = 0;
          uStack_40 = 0;
          fVar9 = (float10)FUN_005096a0(bea_arg(pvVar7), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(uVar6));
          if (fVar9 <= (float10)fVar2) {
            uStack_20 = 0;
            uStack_1c = 0;
            uStack_18 = 0;
            fVar9 = (float10)FUN_005099a0(bea_arg(pvVar7), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(uStack_14));
            if ((float10)fVar2 <= fVar9) {
              fVar9 = (float10)fStack_54 + (float10)1e+06;
            }
            else {
              uStack_10 = 0;
              uStack_c = 0;
              uStack_8 = 0;
              fVar9 = (float10)FUN_005099a0(bea_arg(pvVar7), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(uStack_4));
              fVar9 = ((float10)fVar2 - fVar9) + (float10)fStack_54;
            }
          }
          else {
            uStack_30 = 0;
            uStack_2c = 0;
            uStack_28 = 0;
            fVar9 = (float10)FUN_005096a0(bea_arg(pvVar7), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(uStack_24));
            fVar9 = (fVar9 - (float10)fVar2) + (float10)fStack_54;
          }
          fStack_54 = (float)fVar9;
          iVar8 = FUN_00509f70(bea_arg(pvVar7));
          if (iVar8 != 0) {
            fStack_54 = fStack_54 + 1e+06;
          }
          if (local_4c < fStack_54) {
            *(void **)((int)this_ + 0x140) = pvVar7;
            FUN_00401000(bea_arg((void *)((int)this_ + 0x144)), bea_arg(0));
            local_4c = fStack_54;
          }
        }
      }
      puVar1 = (undefined4 *)puVar1[1];
      if (puVar1 == (undefined4 *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = (void *)*puVar1;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fb840, ap_004fb840));
