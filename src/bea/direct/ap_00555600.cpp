// auto-ported from 00555600_vslot2.c (CSnow::vslot2, 1249 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xd0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CSnow;
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
#define DAT_0063c108 GLOBAL_AT(char, 0x0063c108)
#define _DAT_0066018c GLOBAL_AT(float, 0x0066018c)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_006601a4 GLOBAL_AT(int, 0x006601a4)
#define DAT_006601a0 GLOBAL_AT(int, 0x006601a0)
#define DAT_0066019c GLOBAL_AT(int, 0x0066019c)
#define DAT_00660198 GLOBAL_AT(int, 0x00660198)
#define DAT_0089c9a4 GLOBAL_AT(int, 0x0089c9a4)
#define DAT_0089ce4c GLOBAL_AT(int, 0x0089ce4c)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_008a9e44 GLOBAL_AT(int, 0x008a9e44)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_009c7f88 GLOBAL_AT(undefined4, 0x009c7f88)
#define DAT_009c6954 GLOBAL_AT(undefined4, 0x009c6954)
typedef float10 (BEA_CDECL* FUN_0044a0c0_t)(void);
static const bea_guard<FUN_0044a0c0_t> FUN_0044a0c0 = {(FUN_0044a0c0_t)0x0044a0c0};
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513870_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513870_t> FUN_00513870 = {(FUN_00513870_t)0x00513870};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_STDCALL* FUN_00513af0_t)(uint32_t);
static const bea_guard<FUN_00513af0_t> FUN_00513af0 = {(FUN_00513af0_t)0x00513af0};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef undefined4 (BEA_THISCALL* FUN_00513ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513ca0_t> FUN_00513ca0 = {(FUN_00513ca0_t)0x00513ca0};
typedef uint32_t (BEA_THISCALL* FUN_00550ca0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550ca0_t> FUN_00550ca0 = {(FUN_00550ca0_t)0x00550ca0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_THISCALL* FUN_005513f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005513f0_t> FUN_005513f0 = {(FUN_005513f0_t)0x005513f0};
typedef uint32_t (BEA_THISCALL* FUN_00555460_t)(uint32_t);
static const bea_guard<FUN_00555460_t> FUN_00555460 = {(FUN_00555460_t)0x00555460};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};

static void BEA_THISCALL ap_00555600(CSnow * this_)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  CSnow *pCVar4;
  undefined4 *puVar5;
  float10 fVar6;

  alignas(16) uint8_t bea_frame_[0xd0] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0xc4);
  undefined4 &local_c0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0xc0);
  undefined4 &local_bc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0xbc);
  undefined4 &local_b8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0xb8);
  undefined4 &local_b4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0xb4);
  undefined4 &local_b0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0xb0);
  undefined4 &local_ac = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0xac);
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float &fStack_84 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x84);
  float &fStack_80 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x80);
  undefined4 &uStack_7c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x7c);
  undefined4 &uStack_78 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x78);
  float &fStack_74 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x74);
  undefined4 &uStack_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x70);
  undefined4 &uStack_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x6c);
  undefined4 &uStack_68 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x68);
  undefined4 &uStack_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x64);
  undefined4 &uStack_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x60);
  undefined4 &uStack_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x5c);
  undefined4 &uStack_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x58);
  undefined4 &uStack_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x54);
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x50);
  undefined4 &uStack_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x4c);
  undefined4 &uStack_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x48);
  undefined4 &uStack_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x44);
  undefined4 &uStack_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x40);
  undefined4 &uStack_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x3c);
  undefined4 &uStack_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x38);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x34);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0xd0 - 0x30);
  if ((((DAT_0089d680 == '\0') && (this_[0x14] != (CSnow)0x0)) && (DAT_0063c108 != '\0')) &&
     ((_DAT_0066018c != 0.0f && (*(int *)(this_ + 0x10) != 0)))) {
    FUN_00513bc0(bea_arg(0x16), bea_arg(1));
    DAT_009c68ad = 0;
    DAT_009c6910 = 1;
    FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
    FUN_00513bc0(bea_arg(0xe), bea_arg(0));
    FUN_00513820(bea_arg(0), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(0), bea_arg(3), bea_arg(0));
    FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
    FUN_00513820(bea_arg(0), bea_arg(5), bea_arg(2));
    FUN_00513820(bea_arg(0), bea_arg(6), bea_arg(0));
    FUN_00513820(bea_arg(0), bea_arg(4), bea_arg(4));
    FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(1));
    FUN_00513bc0(bea_arg(0x9c), bea_arg(1));
    FUN_00513bc0(bea_arg(0x9d), bea_arg(1));
    FUN_00513bc0(bea_arg(0x13), bea_arg(2));
    FUN_00513bc0(bea_arg(0x14), bea_arg(2));
    FUN_00513870(bea_arg(1), bea_arg(0xb), bea_arg(1));
    FUN_00513870(bea_arg(2), bea_arg(0xb), bea_arg(2));
    FUN_00513870(bea_arg(3), bea_arg(0xb), bea_arg(3));
    FUN_00513820(bea_arg(2), bea_arg(0x18), bea_arg(0));
    FUN_00513820(bea_arg(3), bea_arg(0x18), bea_arg(0));
    uVar9 = DAT_006601a4;
    uVar7 = DAT_006601a0;
    uVar1 = DAT_0066019c;
    *(undefined4 *)(this_ + 0x58) = DAT_00660198;
    *(undefined4 *)(this_ + 0x5c) = uVar1;
    *(undefined4 *)(this_ + 0x60) = uVar7;
    *(undefined4 *)(this_ + 100) = uVar9;
    *(undefined4 *)(this_ + 0x60) = 0x41700000;
    bea_vcall<uint32_t>((&DAT_0089c9a4)[DAT_0089ce4c], 0x0, &local_50);
    bea_vcall<uint32_t>((&DAT_0089c9a4)[DAT_0089ce4c], 0x4, auStack_30);
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_40 = 0x3f800000;
    uStack_3c = 0x3f800000;
    uStack_38 = 0x3f800000;
    uStack_34 = 0x3f800000;
    bea_vcall<uint32_t>(DAT_00888a50, 0x178, DAT_00888a50,0x5e,&uStack_60,1);
    bea_vcall<uint32_t>(DAT_00888a50, 0x178, DAT_00888a50,0x5f,&uStack_40,1);
    fStack_74 = bea_fcast<float>(DAT_008a9e44);
    fVar6 = bea_fcast<float10>(FUN_0044a0c0());
    fStack_84 = bea_fcast<float>((bea_fcast<float10>(fStack_74) * bea_fcast<float10>(0.05f) + fVar6));
    bea_vcall<uint32_t>(DAT_00888a50, 0x178, DAT_00888a50,10,&fStack_84,1);
    fStack_84 = *(float *)(this_ + 0x58);
    uStack_7c = *(undefined4 *)(this_ + 0x60);
    fStack_80 = *(float *)(this_ + 0x5c);
    uStack_78 = 0;
    bea_vcall<uint32_t>(DAT_00888a50, 0x178, DAT_00888a50,0xb,&fStack_84,1);
    fStack_80 = 1.0f / *(float *)(this_ + 0x388);
    fStack_84 = *(float *)(this_ + 0x388);
    bea_vcall<uint32_t>(DAT_00888a50, 0x178, DAT_00888a50,0xc,&fStack_84,1);
    fStack_84 = *(float *)(this_ + 0x38c);
    fStack_80 = 15.0;
    uStack_7c = 0x3d888889;
    uStack_78 = 0x40f00000;
    bea_vcall<uint32_t>(DAT_00888a50, 0x178, DAT_00888a50,0xf,&fStack_84,1);
    iVar2 = 0;
    pCVar4 = this_ + 0x68;
    do {
      bea_vcall<uint32_t>(DAT_00888a50, 0x178, DAT_00888a50,iVar2 + 0x14,pCVar4,1);
      iVar2 = iVar2 + 1;
      pCVar4 = pCVar4 + 0x10;
    } while (((iVar2 < 0x32)));
    uStack_78 = *(undefined4 *)(this_ + 0x3a0);
    fStack_84 = 50.0;
    fStack_80 = 0.02;
    uStack_7c = 0x41a00000;
    uVar7 = 0x555991;
    piVar8 = DAT_00888a50;
    bea_vcall<uint32_t>(DAT_00888a50, 0x178, DAT_00888a50,0x5d,&fStack_84,1);
    uVar1 = FUN_00558690(bea_arg(*(void **)(this_ + 0xc)));
    uVar9 = 0x5559a6;
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(uVar1));
    uVar1 = *(undefined4 *)(this_ + 0x10);
    uVar10 = 0x5559b4;
    FUN_005513f0(bea_arg(&DAT_009c65c0), bea_arg(uVar1));
    puVar3 = &DAT_009c7f88;
    puVar5 = (undefined4 *)&local_c4;
    for (iVar2 = 0xc; ((iVar2 != 0)); iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(uStack_64), bea_arg(local_c4), bea_arg(local_c0), bea_arg(local_bc), bea_arg(local_b8), bea_arg(local_b4), bea_arg(local_b0), bea_arg(local_ac), bea_arg(uVar7), bea_arg(piVar8), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar1));
    FUN_00555460(bea_arg(this_));
    FUN_005513f0(bea_arg(&DAT_009c65c0), bea_arg(0));
    FUN_00513ca0(bea_arg(&DAT_00855bb0), bea_arg(0));
    puVar3 = &DAT_009c6954;
    pCVar4 = this_ + 0x18;
    for (iVar2 = 0x10; ((iVar2 != 0)); iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pCVar4 = pCVar4 + 4;
    }
    *(undefined4 *)(this_ + 0x390) = local_50;
    *(undefined4 *)(this_ + 0x394) = uStack_4c;
    *(undefined4 *)(this_ + 0x398) = uStack_48;
    *(undefined4 *)(this_ + 0x39c) = uStack_44;
    FUN_00513af0(bea_arg(0));
    FUN_00513bc0(bea_arg(0x13), bea_arg(5));
    FUN_00513bc0(bea_arg(0x14), bea_arg(6));
    FUN_00513bc0(bea_arg(0x9d), bea_arg(0));
    FUN_00513bc0(bea_arg(0x9c), bea_arg(0));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    FUN_00513bc0(bea_arg(0xe), bea_arg(1));
    DAT_009c68ad = 1;
    DAT_009c6910 = 1;
    FUN_00513bc0(bea_arg(0x16), bea_arg(3));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00555600, ap_00555600));
