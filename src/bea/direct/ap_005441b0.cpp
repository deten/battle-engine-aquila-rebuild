// auto-ported from 005441b0_FUN_005441b0.c (FUN_005441b0, 417 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_0089c9a4 GLOBAL_AT(int, 0x0089c9a4)
#define DAT_0089ce4c GLOBAL_AT(int, 0x0089ce4c)
#define DAT_008aa8d8 GLOBAL_AT(undefined4, 0x008aa8d8)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_008aa908 GLOBAL_AT(int, 0x008aa908)
#define _DAT_009c73d4 GLOBAL_AT(int, 0x009c73d4)
#define DAT_009c741c GLOBAL_AT(char, 0x009c741c)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef uint32_t (BEA_STDCALL* FUN_004eba30_t)(uint32_t);
static const bea_guard<FUN_004eba30_t> FUN_004eba30 = {(FUN_004eba30_t)0x004eba30};
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_STDCALL* FUN_00513c20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513c20_t> FUN_00513c20 = {(FUN_00513c20_t)0x00513c20};
typedef uint32_t (BEA_THISCALL* FUN_00550ca0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550ca0_t> FUN_00550ca0 = {(FUN_00550ca0_t)0x00550ca0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};

static void BEA_THISCALL ap_005441b0(void * this_)
{
  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)

  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x24);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x28);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x2c);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x30);
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x50);
  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x34);
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x50 - 0x10);
  FUN_00513bc0(bea_arg(0xe), bea_arg(0));
  FUN_00513bc0(bea_arg(7), bea_arg(0));
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(3));
  FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(3));
  uVar8 = 4;
  uVar7 = 1;
  uVar6 = 0;
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  DAT_009c68ad = 0;
  DAT_009c6910 = 1;
  uVar5 = 0x544222;
  FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
  puVar1 = (undefined4 *)(&DAT_0089c9a4)[DAT_0089ce4c];
  puVar3 = &DAT_008aa8d8;
  puVar4 = (undefined4 *)&local_50;
  for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1 = (undefined4 *)bea_vcall<uint32_t>(puVar1, 0x0, local_10);
  FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(*puVar1), bea_arg(puVar1[1]), bea_arg(puVar1[2]), bea_arg(puVar1[3]), bea_arg(local_50), bea_arg(local_4c), bea_arg(local_48), bea_arg(local_44), bea_arg(local_40), bea_arg(local_3c), bea_arg(local_38), bea_arg(local_34), bea_arg(local_30), bea_arg(local_2c), bea_arg(local_28), bea_arg(local_24));
  bea_vcall<uint32_t>(DAT_00888a50, 0x190, DAT_00888a50, 0, *(undefined4 *)(DAT_008aa908 + 8), 0, 0x14);
  _DAT_009c73d4 = 0x102;
  DAT_009c741c = 1;
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  FUN_00513c20(bea_arg(0x98), bea_arg(0));
  iVar2 = 0;
  do {
    uVar5 = FUN_00558690(bea_arg(*(void **)(iVar2 + (int)this_)));
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(uVar5));
    bea_vcall<uint32_t>(DAT_00888a50, 0x144, DAT_00888a50, 5, iVar2, 2);
    iVar2 = iVar2 + 4;
  } while (BEA_LOOP_GUARD((iVar2 < 0x14)));
  FUN_004eba30(bea_arg(0));
  FUN_00513bc0(bea_arg(0xe), bea_arg(1));
  FUN_00513bc0(bea_arg(7), bea_arg(1));
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(1));
  FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(1));
  DAT_009c68ad = 1;
  DAT_009c6910 = 1;
  DAT_009c68ac = 1;
  DAT_009c690d = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005441b0, ap_005441b0));
