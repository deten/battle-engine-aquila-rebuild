// auto-ported from 005515e0_FUN_005515e0.c (FUN_005515e0, 831 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x90: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c741c GLOBAL_AT(char, 0x009c741c)
#define _DAT_009c73d4 GLOBAL_AT(int, 0x009c73d4)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00513c70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513c70_t> FUN_00513c70 = {(FUN_00513c70_t)0x00513c70};
typedef uint32_t (BEA_THISCALL* FUN_00513e20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513e20_t> FUN_00513e20 = {(FUN_00513e20_t)0x00513e20};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_THISCALL* FUN_00550ca0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550ca0_t> FUN_00550ca0 = {(FUN_00550ca0_t)0x00550ca0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};

static void BEA_THISCALL ap_005515e0(void * this_, int param_1)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  alignas(16) uint8_t bea_frame_[0x90] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_84 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x84);
  undefined4 &local_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x80);
  undefined4 &local_7c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x7c);
  undefined4 &local_78 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x78);
  undefined4 &local_74 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x74);
  undefined4 &local_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x70);
  undefined4 &local_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x6c);
  undefined4 &local_68 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x68);
  undefined4 &local_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x64);
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x60);
  undefined4 &local_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x5c);
  undefined4 * &local_58 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x90 - 0x58);
  undefined4 *puVar5;
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x34);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x24);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x4);
  puVar3 = *(undefined4 **)((int)this_ + param_1 * 4 + 4);
  while (BEA_LOOP_GUARD((puVar5 = puVar3, puVar5 != (undefined4 *)0x0))) {
    puVar3 = (undefined4 *)puVar5[6];
    if (puVar3 == (undefined4 *)0x0) {
      if (puVar5[7] != *(int *)((int)this_ + 0xc)) {
        DAT_009c741c = 1;
        _DAT_009c73d4 = puVar5[7];
        *(undefined4 *)((int)this_ + 0xc) = puVar5[7];
      }
    }
    else if (puVar3 != *(undefined4 **)((int)this_ + 0x10)) {
      local_5c = 0x551610;
      FUN_00513e20(bea_arg(&DAT_00855bb0), bea_arg(puVar3));
      *(undefined4 *)((int)this_ + 0x10) = puVar5[6];
      local_58 = puVar3;
    }
    if ((void *)puVar5[3] != *(void **)((int)this_ + 8)) {
      local_58 = (undefined4 *)FUN_00558690(bea_arg((void *)puVar5[3]));
      local_5c = 0;
      local_60 = 0x551650;
      FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(local_58));
      *(undefined4 *)((int)this_ + 8) = puVar5[3];
    }
    if (puVar5[0xe] != *(int *)((int)this_ + 0x14)) {
      local_58 = (undefined4 *)(puVar5[0xe] << 0x18);
      local_5c = 0x3c;
      local_60 = 0x551670;
      FUN_00513bc0(bea_arg(0x3c), bea_arg(local_58));
      *(undefined4 *)((int)this_ + 0x14) = puVar5[0xe];
    }
    if ((((bea_fcast<float>(puVar5[10]) != *(float *)((int)this_ + 0x18)) ||
         (bea_fcast<float>(puVar5[0xb]) != *(float *)((int)this_ + 0x1c))) ||
        (bea_fcast<float>(puVar5[0xc]) != *(float *)((int)this_ + 0x20))) ||
       (bea_fcast<float>(puVar5[0xd]) != *(float *)((int)this_ + 0x24))) {
      local_40 = bea_fcast<float>(puVar5[0xc]);
      local_2c = bea_fcast<float>(puVar5[0xd]);
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_24 = 0;
      local_18 = 0x3f800000;
      local_14 = 0;
      local_10 = 0;
      local_20 = bea_fcast<float>(puVar5[10]) - (local_40 - 1.0f) * 0.5f;
      local_c = 0;
      local_8 = 0;
      local_4 = 0x3f800000;
      local_1c = (local_2c - 1.0f) * 0.5f + bea_fcast<float>(puVar5[0xb]);
      FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
      bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x10,&local_40);
      local_58 = (undefined4 *)0x2;
      local_5c = 0x18;
      local_60 = 0;
      local_64 = 0x551783;
      FUN_00513820(bea_arg(0), bea_arg(0x18), bea_arg(2));
      *(undefined4 *)((int)this_ + 0x18) = puVar5[10];
      *(undefined4 *)((int)this_ + 0x1c) = puVar5[0xb];
      *(undefined4 *)((int)this_ + 0x20) = puVar5[0xc];
      *(undefined4 *)((int)this_ + 0x24) = puVar5[0xd];
    }
    if ((((bea_fcast<float>(puVar5[0xf]) != *(float *)((int)this_ + 0x28)) ||
         (bea_fcast<float>(puVar5[0x10]) != *(float *)((int)this_ + 0x2c))) ||
        ((bea_fcast<float>(puVar5[0x11]) != *(float *)((int)this_ + 0x30) ||
         ((bea_fcast<float>(puVar5[0x13]) != *(float *)((int)this_ + 0x38) ||
          (bea_fcast<float>(puVar5[0x14]) != *(float *)((int)this_ + 0x3c))))))) ||
       ((bea_fcast<float>(puVar5[0x15]) != *(float *)((int)this_ + 0x40) ||
        (((((bea_fcast<float>(puVar5[0x17]) != *(float *)((int)this_ + 0x48) ||
            (bea_fcast<float>(puVar5[0x18]) != *(float *)((int)this_ + 0x4c))) ||
           (bea_fcast<float>(puVar5[0x19]) != *(float *)((int)this_ + 0x50))) ||
          ((bea_fcast<float>(puVar5[0x1b]) != *(float *)((int)this_ + 0x58) ||
           (bea_fcast<float>(puVar5[0x1c]) != *(float *)((int)this_ + 0x5c))))) ||
         (bea_fcast<float>(puVar5[0x1d]) != *(float *)((int)this_ + 0x60))))))) {
      uVar1 = puVar5[0xf];
      puVar3 = puVar5 + 0x13;
      puVar4 = (undefined4 *)&local_84;
      for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(uVar1), bea_arg(puVar5[0x10]), bea_arg(puVar5[0x11]), bea_arg(puVar5[0x12]), bea_arg(local_84), bea_arg(local_80), bea_arg(local_7c), bea_arg(local_78), bea_arg(local_74), bea_arg(local_70), bea_arg(local_6c), bea_arg(local_68), bea_arg(local_64), bea_arg(local_60), bea_arg(local_5c), bea_arg(local_58));
      *(undefined4 *)((int)this_ + 0x28) = puVar5[0xf];
      *(undefined4 *)((int)this_ + 0x2c) = puVar5[0x10];
      *(undefined4 *)((int)this_ + 0x30) = puVar5[0x11];
      *(undefined4 *)((int)this_ + 0x34) = puVar5[0x12];
      puVar3 = puVar5 + 0x13;
      puVar4 = (undefined4 *)((int)this_ + 0x38);
      for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    bea_vcall<uint32_t>(DAT_00888a50, 0x190, DAT_00888a50,0,*puVar5,0,puVar5[9]);
    bea_vcall<uint32_t>(DAT_00888a50, 0x1a0, DAT_00888a50,puVar5[1]);
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    local_60 = puVar5[4];
    local_68 = puVar5[2];
    local_64 = 0;
    local_6c = 0x5518f5;
    FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(local_68), bea_arg(0), bea_arg(local_60), bea_arg(0), bea_arg(puVar5[5]));
    puVar3 = (undefined4 *)puVar5[0x1f];
    local_5c = 0x551903;
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar5));
    local_58 = puVar5;
  }
  *(undefined4 *)((int)this_ + param_1 * 4 + 4) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005515e0, ap_005515e0));
