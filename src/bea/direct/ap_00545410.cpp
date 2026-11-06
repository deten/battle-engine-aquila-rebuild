// auto-ported from 00545410_FUN_00545410.c (FUN_00545410, 333 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0089ce44 GLOBAL_AT(int, 0x0089ce44)
#define DAT_008c0290 GLOBAL_AT(int, 0x008c0290)
#define DAT_008aa9c0 GLOBAL_AT(undefined4, 0x008aa9c0)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_008c0280 GLOBAL_AT(int, 0x008c0280)
#define DAT_008c0284 GLOBAL_AT(int, 0x008c0284)
#define DAT_008c0288 GLOBAL_AT(int, 0x008c0288)
#define DAT_008c028c GLOBAL_AT(int, 0x008c028c)
#define DAT_009c68a8 GLOBAL_AT(int, 0x009c68a8)
#define DAT_009c690c GLOBAL_AT(char, 0x009c690c)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_0083d28c GLOBAL_AT(int, 0x0083d28c)
#define DAT_009c68a0 GLOBAL_AT(char, 0x009c68a0)
#define DAT_006fbe54 GLOBAL_AT(int, 0x006fbe54)
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513af0_t)(uint32_t);
static const bea_guard<FUN_00513af0_t> FUN_00513af0 = {(FUN_00513af0_t)0x00513af0};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00545070_t)(uint32_t);
static const bea_guard<FUN_00545070_t> FUN_00545070 = {(FUN_00545070_t)0x00545070};
typedef uint32_t (BEA_THISCALL* FUN_00545590_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00545590_t> FUN_00545590 = {(FUN_00545590_t)0x00545590};
typedef uint32_t (BEA_THISCALL* FUN_00546b40_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00546b40_t> FUN_00546b40 = {(FUN_00546b40_t)0x00546b40};
typedef uint32_t (BEA_THISCALL* FUN_00550ca0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550ca0_t> FUN_00550ca0 = {(FUN_00550ca0_t)0x00550ca0};
typedef uint32_t (BEA_THISCALL* FUN_00551200_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00551200_t> FUN_00551200 = {(FUN_00551200_t)0x00551200};

static void BEA_THISCALL ap_00545410(void * this_, undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x30);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x10);
  iVar1 = DAT_0089ce44;
  if (DAT_0089ce44 != DAT_008c0290) {
    FUN_00545070(bea_arg(this_));
    local_18 = 0x54543a;
    local_10 = param_2;
    FUN_00546b40(bea_arg(this_), bea_arg(param_1), bea_arg(param_2));
    DAT_008c0290 = iVar1;
    local_14 = param_1;
  }
  puVar2 = &DAT_008aa9c0;
  puVar3 = (undefined4 *)&local_3c;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(DAT_008c0280), bea_arg(DAT_008c0284), bea_arg(DAT_008c0288), bea_arg(DAT_008c028c), bea_arg(local_3c), bea_arg(local_38), bea_arg(local_34), bea_arg(local_30), bea_arg(local_2c), bea_arg(local_28), bea_arg(local_24), bea_arg(local_20), bea_arg(local_1c), bea_arg(local_18), bea_arg(local_14), bea_arg(local_10));
  FUN_00513bc0(bea_arg(0x91), bea_arg(0));
  FUN_00513bc0(bea_arg(0x1b), bea_arg(0));
  FUN_00513bc0(bea_arg(0xf), bea_arg(0));
  FUN_00513af0(bea_arg(0));
  FUN_00513af0(bea_arg(1));
  FUN_00513820(bea_arg(0), bea_arg(4), bea_arg(1));
  DAT_009c68a8 = 0;
  DAT_009c690c = 1;
  bea_vcall<uint32_t>(DAT_00888a50, 0xc4, DAT_00888a50,&DAT_0083d28c);
  iVar1 = 0;
  do {
    if ((&DAT_009c68a0)[iVar1] != '\0') {
      FUN_00551200(bea_arg(&DAT_009c65c0), bea_arg(iVar1), bea_arg(1));
    }
    iVar1 = iVar1 + 1;
  } while (BEA_LOOP_GUARD((iVar1 < 8)));
  FUN_00545590(bea_arg(this_), bea_arg(param_2));
  DAT_009c690c = 1;
  DAT_009c68a8 = DAT_006fbe54;
  iVar1 = 0;
  do {
    if ((&DAT_009c68a0)[iVar1] != '\0') {
      FUN_00551200(bea_arg(&DAT_009c65c0), bea_arg(iVar1), bea_arg(0));
    }
    iVar1 = iVar1 + 1;
  } while (BEA_LOOP_GUARD((iVar1 < 8)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00545410, ap_00545410));
