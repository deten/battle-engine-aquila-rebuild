// auto-ported from 0053be40_FUN_0053be40.c (FUN_0053be40, 902 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-uninit extraout_ECX_00: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit extraout_ECX: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0065044c GLOBAL_AT(int, 0x0065044c)
#define DAT_00888a90 GLOBAL_AT(char, 0x00888a90)
#define DAT_0089c924 GLOBAL_AT(int, 0x0089c924)
#define DAT_00650428 GLOBAL_AT(int, 0x00650428)
#define DAT_00650424 GLOBAL_AT(int, 0x00650424)
#define DAT_00888aac GLOBAL_AT(int, 0x00888aac)
#define DAT_00888ab0 GLOBAL_AT(int, 0x00888ab0)
#define DAT_00650430 GLOBAL_AT(int, 0x00650430)
#define DAT_0065042c GLOBAL_AT(int, 0x0065042c)
#define s_C__dev_ONSLAUGHT2_DXCompass_cpp_00650454 ((char*)0x00650454)
typedef uint32_t (BEA_THISCALL* FUN_00418470_t)(uint32_t);
static FUN_00418470_t const FUN_00418470 = (FUN_00418470_t)0x00418470;
typedef undefined4 (BEA_THISCALL* FUN_004184c0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_004184c0_t const FUN_004184c0 = (FUN_004184c0_t)0x004184c0;
typedef uint32_t (BEA_THISCALL* FUN_00418720_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_00418720_t const FUN_00418720 = (FUN_00418720_t)0x00418720;
typedef undefined4 (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static FUN_0042d080_t const FUN_0042d080 = (FUN_0042d080_t)0x0042d080;
typedef void * (BEA_THISCALL* FUN_004fff00_t)(uint32_t);
static FUN_004fff00_t const FUN_004fff00 = (FUN_004fff00_t)0x004fff00;
typedef bool (BEA_THISCALL* FUN_005000c0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_005000c0_t const FUN_005000c0 = (FUN_005000c0_t)0x005000c0;
typedef undefined4 (BEA_THISCALL* FUN_005001b0_t)(uint32_t, uint32_t);
static FUN_005001b0_t const FUN_005001b0 = (FUN_005001b0_t)0x005001b0;
typedef int (BEA_THISCALL* FUN_005001e0_t)(uint32_t);
static FUN_005001e0_t const FUN_005001e0 = (FUN_005001e0_t)0x005001e0;
typedef uint32_t (BEA_STDCALL* FUN_0053c1d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_0053c1d0_t const FUN_0053c1d0 = (FUN_0053c1d0_t)0x0053c1d0;
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_005490e0_t const FUN_005490e0 = (FUN_005490e0_t)0x005490e0;
typedef void * (BEA_THISCALL* FUN_00556cc0_t)(uint32_t);
static FUN_00556cc0_t const FUN_00556cc0 = (FUN_00556cc0_t)0x00556cc0;

static uint32_t BEA_THISCALL ap_0053be40(void * this_)
{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX = 0;
  undefined4 extraout_ECX_00;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_18;
  void *local_14;
  undefined4 uStack_10;
  undefined1 *puStack_8;
  undefined4 local_4;
  local_14 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20), bea_arg(0x4d), bea_arg(s_C__dev_ONSLAUGHT2_DXCompass_cpp_00650454), bea_arg(0x43));
  if (local_14 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_00418470(bea_arg(local_14));
  }
  *(void **)((int)this_ + 0x3c08) = pvVar1;
  FUN_004184c0(bea_arg(pvVar1), bea_arg(&DAT_0065044c), bea_arg(0x10), bea_arg(0x10), bea_arg(0x14), bea_arg(4));
  if (((DAT_00888a90 & 0x20) != 0) || (DAT_0089c924 != 0)) {
    DAT_00650428 = DAT_00650424;
  }
  for (; BEA_LOOP_GUARD((DAT_00888aac < DAT_00650424)); DAT_00650424 = DAT_00650424 >> 1) {
  }
  for (; BEA_LOOP_GUARD((DAT_00888ab0 < DAT_00650428)); DAT_00650428 = DAT_00650428 >> 1) {
  }
  FUN_0042d080(bea_arg(CONCAT31((int3)(DAT_00650428 >> 8),0x1f < DAT_00650428)), bea_arg(0xc5), bea_arg(0xffffffff));
  if (((DAT_00888a90 & 0x20) != 0) || (DAT_0089c924 != 0)) {
    DAT_00650430 = DAT_0065042c;
  }
  for (; BEA_LOOP_GUARD((DAT_00888aac < DAT_0065042c)); DAT_0065042c = DAT_0065042c >> 1) {
  }
  for (; BEA_LOOP_GUARD((DAT_00888ab0 < DAT_00650430)); DAT_00650430 = DAT_00650430 >> 1) {
  }
  puVar5 = (undefined4 *)((int)this_ + 0x3f04);
  iVar4 = 2;
  do {
    local_14 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x158), bea_arg(2), bea_arg(s_C__dev_ONSLAUGHT2_DXCompass_cpp_00650454), bea_arg(0x5b));
    if (local_14 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00556cc0(bea_arg(local_14));
    }
    puVar5[-0xc1] = uVar2;
    local_14 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x158), bea_arg(2), bea_arg(s_C__dev_ONSLAUGHT2_DXCompass_cpp_00650454), bea_arg(0x5c));
    if (local_14 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00556cc0(bea_arg(local_14));
    }
    uVar9 = 0xffffffff;
    uVar8 = 0xc6;
    *puVar5 = uVar2;
    uVar6 = DAT_00650424;
    uVar7 = DAT_00650428;
    iVar3 = bea_vcall<uint32_t>(puVar5[-0xc1], 0x18, DAT_00650424,DAT_00650428,2,1,0,1);
    FUN_0042d080(bea_arg(CONCAT31((int3)((uint)extraout_ECX >> 8),iVar3 != 0)), bea_arg(uVar6), bea_arg(uVar7));
    iVar3 = bea_vcall<uint32_t>(*puVar5, 0x18, DAT_0065042c,DAT_00650430,2,1,0,1,0xc6,0xffffffff)
    ;
    FUN_0042d080(bea_arg(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),iVar3 != 0)), bea_arg(uVar8), bea_arg(uVar9));
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (BEA_LOOP_GUARD((iVar4 != 0)));
  local_14 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c), bea_arg(0x2c), bea_arg(s_C__dev_ONSLAUGHT2_DXCompass_cpp_00650454), bea_arg(0x62));
  if (local_14 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_004fff00(bea_arg(local_14));
  }
  *(void **)((int)this_ + 0x3f0c) = pvVar1;
  FUN_005000c0(bea_arg(pvVar1), bea_arg(0x66), bea_arg(0x14), bea_arg(0x102));
  FUN_005001b0(bea_arg(*(void **)((int)this_ + 0x3f0c)), bea_arg(&uStack_18));
  local_14 = (void *)DAT_00650428;
  FUN_0053c1d0(bea_arg(uStack_18), bea_arg(DAT_00650424), bea_arg(DAT_00650428), bea_arg(0x32), bea_arg(0x1f), bea_arg(32.0f / (float)DAT_00650428));
  FUN_005001e0(bea_arg(*(void **)((int)this_ + 0x3f0c)));
  local_14 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c), bea_arg(0x2c), bea_arg(s_C__dev_ONSLAUGHT2_DXCompass_cpp_00650454), bea_arg(0x68));
  if (local_14 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_004fff00(bea_arg(local_14));
  }
  *(void **)((int)this_ + 0x3f10) = pvVar1;
  FUN_005000c0(bea_arg(pvVar1), bea_arg(0x52), bea_arg(0x14), bea_arg(0x102));
  FUN_005001b0(bea_arg(*(void **)((int)this_ + 0x3f10)), bea_arg(&uStack_18));
  local_14 = (void *)DAT_00650430;
  FUN_0053c1d0(bea_arg(uStack_18), bea_arg(DAT_0065042c), bea_arg(DAT_00650430), bea_arg(0x28), bea_arg(0x1b), bea_arg(8.0f / (float)DAT_00650430));
  FUN_005001e0(bea_arg(*(void **)((int)this_ + 0x3f10)));
  return FUN_00418720(bea_arg(*(void **)((int)this_ + 0x3c08)), bea_arg(this_), bea_arg(0x200), bea_arg(0x200), bea_arg(0x1e), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053be40, ap_0053be40));
