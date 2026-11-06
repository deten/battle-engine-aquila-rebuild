// auto-ported from 0046e460_FUN_0046e460.c (FUN_0046e460, 1196 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CTweakFLOAT;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_009c648c GLOBAL_AT(int, 0x009c648c)
#define DAT_0089c9b0 GLOBAL_AT(int, 0x0089c9b0)
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
#define DAT_0083cd58 GLOBAL_AT(char, 0x0083cd58)
#define DAT_0089c9a0 GLOBAL_AT(int, 0x0089c9a0)
#define DAT_0089cdd8 GLOBAL_AT(int, 0x0089cdd8)
#define DAT_0089cdf0 GLOBAL_AT(int, 0x0089cdf0)
typedef uint32_t (BEA_THISCALL* CTweakFLOAT__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CTweakFLOAT__vslot0_t> CTweakFLOAT__vslot0 = {(CTweakFLOAT__vslot0_t)0x00528b50};
typedef uint32_t (BEA_THISCALL* FUN_00407540_t)(uint32_t);
static const bea_guard<FUN_00407540_t> FUN_00407540 = {(FUN_00407540_t)0x00407540};
typedef undefined4 (BEA_CDECL* FUN_0042d420_t)(void);
static const bea_guard<FUN_0042d420_t> FUN_0042d420 = {(FUN_0042d420_t)0x0042d420};
typedef uint32_t (BEA_THISCALL* FUN_0044a020_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044a020_t> FUN_0044a020 = {(FUN_0044a020_t)0x0044a020};
typedef uint32_t (BEA_THISCALL* FUN_00491900_t)(uint32_t);
static const bea_guard<FUN_00491900_t> FUN_00491900 = {(FUN_00491900_t)0x00491900};
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};
typedef uint32_t (BEA_STDCALL* FUN_00527990_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00527990_t> FUN_00527990 = {(FUN_00527990_t)0x00527990};
typedef undefined4 (BEA_THISCALL* FUN_0053e220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0053e220_t> FUN_0053e220 = {(FUN_0053e220_t)0x0053e220};
typedef undefined4 (BEA_THISCALL* FUN_0053e2e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0053e2e0_t> FUN_0053e2e0 = {(FUN_0053e2e0_t)0x0053e2e0};
typedef undefined4 (BEA_THISCALL* FUN_0053ecc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0053ecc0_t> FUN_0053ecc0 = {(FUN_0053ecc0_t)0x0053ecc0};
typedef undefined4 (BEA_THISCALL* FUN_00546220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00546220_t> FUN_00546220 = {(FUN_00546220_t)0x00546220};
typedef uint32_t (BEA_THISCALL* FUN_005463f0_t)(uint32_t);
static const bea_guard<FUN_005463f0_t> FUN_005463f0 = {(FUN_005463f0_t)0x005463f0};
typedef uint32_t (BEA_THISCALL* FUN_00546460_t)(uint32_t);
static const bea_guard<FUN_00546460_t> FUN_00546460 = {(FUN_00546460_t)0x00546460};

static void BEA_THISCALL ap_0046e460(void * this_, int param_1)
{
  int iVar1;
  void *pvVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_44)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0x50 - 0x44);
  int &local_3c = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x3c);
  int &local_38 = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x38);
  int &local_34 = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x34);
  int &local_30 = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x30);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x28);
  int &local_24 = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x24);
  int &local_20 = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x50 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4);
  FUN_00491900(bea_arg(local_44));
  fVar3 = (*(float *)((int)this_ + 0x3ac) * 0.05f + DAT_00672fd0) * 20.0f;
  if (((((*(int *)((int)this_ + 0x2a0) < 0x352) || (899 < *(int *)((int)this_ + 0x2a0))) &&
       (DAT_009c648c != 0)) && ((DAT_0089c9b0 != 0 && (*(int *)(DAT_0089c9b0 + 0x14) != 0)))) &&
     (DAT_0089d680 == '\0')) {
    cVar4 = FUN_00546220(bea_arg(local_44), bea_arg(*(undefined4 *)(DAT_0089c9b0 + 0x14)));
    if (cVar4 != '\0') {
      DAT_0089d680 = '\x01';
      (*(uint8_t*)((char*)&DAT_0083cd58 + 0)) = 1;
    }
  }
  if (*(int *)((int)this_ + 0x38c) == -0x40800000) {
    *(undefined4 *)((int)this_ + 0x388) = 0x3f800000;
  }
  else {
    *(float *)((int)this_ + 0x388) = fVar3 - *(float *)((int)this_ + 0x38c);
  }
  *(float *)((int)this_ + 0x38c) = fVar3;
  do {
    if (DAT_0089d680 == '\0') {
      local_24 = FUN_00515940();
    }
    else {
      local_24 = 0x100;
    }
    if (DAT_0089d680 == '\0') {
      local_20 = FUN_00515b00();
    }
    else {
      local_20 = 0x100;
    }
    *(int *)((int)this_ + 0x14) = *(int *)((int)this_ + 0x14) + 1;
    *(uint *)((int)this_ + 0x390) = (uint)(param_1 == 0);
    if (*(int *)((int)this_ + 0x40) == 0) {
      uVar5 = *(undefined4 *)((int)this_ + 0x29c);
    }
    else {
      uVar5 = 1;
    }
    CTweakFLOAT__vslot0(bea_arg((CTweakFLOAT *)&DAT_0089c9a0), bea_arg(uVar5));
    FUN_0053e220(bea_arg(&DAT_0089c9a0), bea_arg(&local_24));
    if (*(int *)((int)this_ + 0x300) == 0xff) goto LAB_0046e888;
    iVar1 = *(int *)((int)this_ + 0x29c);
    if ((iVar1 == 1) || (*(int *)((int)this_ + 0x40) != 0)) {
      local_3c = local_24;
      local_38 = local_20;
      local_34 = 0;
      local_30 = 0;
      FUN_0042d420();
      pvVar2 = *(void **)(*(int *)((int)this_ + 0x2a4) + 0x1c);
      if (pvVar2 != (void *)0x0) {
        FUN_00407540(bea_arg(pvVar2));
      }
      FUN_0044a020(bea_arg(&DAT_0089c9a0), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 0x2c4)), bea_arg(&local_3c), bea_arg(*(undefined4 *)((int)this_ + 0x2a4)));
      uVar5 = 0;
LAB_0046e87e:
      FUN_0053e2e0(bea_arg(&DAT_0089c9a0), bea_arg(uVar5));
    }
    else {
      if (iVar1 == 2) {
        if (*(char *)((int)this_ + 0x38) == '\0') {
          local_3c = local_24 / 2;
          local_38 = local_20;
        }
        else {
          local_3c = local_24;
          local_38 = local_20 / 2;
        }
        local_34 = 0;
        local_30 = 0;
        FUN_0042d420();
        pvVar2 = *(void **)(*(int *)((int)this_ + 0x2a4) + 0x1c);
        if (pvVar2 != (void *)0x0) {
          FUN_00407540(bea_arg(pvVar2));
        }
        pvVar2 = *(void **)(*(int *)((int)this_ + 0x2a8) + 0x1c);
        if (pvVar2 != (void *)0x0) {
          FUN_00407540(bea_arg(pvVar2));
        }
        FUN_0044a020(bea_arg(&DAT_0089c9a0), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 0x2c4)), bea_arg(&local_3c), bea_arg(*(undefined4 *)((int)this_ + 0x2a4)));
        FUN_0053e2e0(bea_arg(&DAT_0089c9a0), bea_arg(0));
        if (*(char *)((int)this_ + 0x38) == '\0') {
          local_34 = local_34 + local_24 / 2;
        }
        else {
          local_30 = local_30 + local_20 / 2;
        }
        FUN_0044a020(bea_arg(&DAT_0089c9a0), bea_arg(1), bea_arg(*(undefined4 *)((int)this_ + 0x2c8)), bea_arg(&local_3c), bea_arg(*(undefined4 *)((int)this_ + 0x2a8)));
        uVar5 = 1;
        goto LAB_0046e87e;
      }
      if ((iVar1 == 3) || (iVar1 == 4)) {
        local_34 = 0;
        local_3c = local_24 / 2;
        local_30 = 0;
        local_38 = local_20 / 2;
        FUN_0044a020(bea_arg(&DAT_0089c9a0), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 0x2c4)), bea_arg(&local_3c), bea_arg(*(undefined4 *)((int)this_ + 0x2a4)));
        FUN_0053e2e0(bea_arg(&DAT_0089c9a0), bea_arg(0));
        local_34 = local_34 + local_24 / 2;
        FUN_0044a020(bea_arg(&DAT_0089c9a0), bea_arg(1), bea_arg(*(undefined4 *)((int)this_ + 0x2c8)), bea_arg(&local_3c), bea_arg(*(undefined4 *)((int)this_ + 0x2a8)));
        FUN_0053e2e0(bea_arg(&DAT_0089c9a0), bea_arg(1));
        local_34 = local_34 - local_24 / 2;
        local_30 = local_30 + local_20 / 2;
        FUN_0044a020(bea_arg(&DAT_0089c9a0), bea_arg(2), bea_arg(*(undefined4 *)((int)this_ + 0x2cc)), bea_arg(&local_3c), bea_arg(*(undefined4 *)((int)this_ + 0x2ac)));
        FUN_0053e2e0(bea_arg(&DAT_0089c9a0), bea_arg(2));
        if (*(int *)((int)this_ + 0x29c) == 4) {
          local_34 = local_34 + local_24 / 2;
          FUN_0044a020(bea_arg(&DAT_0089c9a0), bea_arg(3), bea_arg(*(undefined4 *)((int)this_ + 0x2d0)), bea_arg(&local_3c), bea_arg(*(undefined4 *)((int)this_ + 0x2b0)));
          uVar5 = 3;
          goto LAB_0046e87e;
        }
      }
    }
LAB_0046e888:
    FUN_0053ecc0(bea_arg(&DAT_0089c9a0), bea_arg(&local_24));
    FUN_00527990(bea_arg(&DAT_0089cdd8), bea_arg(*(undefined4 *)((int)this_ + 0x2b4)), bea_arg(0));
    FUN_00527990(bea_arg(&DAT_0089cdf0), bea_arg(*(undefined4 *)((int)this_ + 0x2b8)), bea_arg(0));
    if (DAT_0089d680 == '\0') {
      FUN_00546460(bea_arg(local_44));
      return;
    }
    DAT_0089d680 = '\0';
    (*(uint8_t*)((char*)&DAT_0083cd58 + 0)) = 0;
    FUN_005463f0(bea_arg(local_44));
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046e460, ap_0046e460));
