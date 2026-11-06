// auto-ported from 0053b470_FUN_0053b470.c (FUN_0053b470, 378 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
typedef int (BEA_THISCALL* FUN_005001e0_t)(uint32_t);
static const bea_guard<FUN_005001e0_t> FUN_005001e0 = {(FUN_005001e0_t)0x005001e0};
typedef uint32_t (BEA_THISCALL* FUN_00500320_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00500320_t> FUN_00500320 = {(FUN_00500320_t)0x00500320};
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};

static void BEA_THISCALL ap_0053b470(void * this_)
{
  undefined4 uVar1;
  
  if ((*(int *)((int)this_ + 0x5c) != 0) && (*(void **)((int)this_ + 0x78) != (void *)0x0)) {
    FUN_005001e0(bea_arg(*(void **)((int)this_ + 0x78)));
    *(undefined4 *)((int)this_ + 0x5c) = 0;
  }
  if (*(int *)((int)this_ + 0x60) != 0) {
    uVar1 = FUN_00558690(bea_arg(*(void **)((int)this_ + 0xc)));
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(uVar1));
    FUN_00500320(bea_arg(*(void **)((int)this_ + 0x78)), bea_arg(0));
    FUN_00513bc0(bea_arg(0x9c), bea_arg(1));
    FUN_00513bc0(bea_arg(0x9d), bea_arg(0));
    FUN_00513bc0(bea_arg(0x13), bea_arg(5));
    FUN_00513bc0(bea_arg(0x14), bea_arg(6));
    FUN_00513820(bea_arg(0), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(0), bea_arg(3), bea_arg(3));
    FUN_00513bc0(bea_arg(0x3c), bea_arg(0));
    FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
    FUN_00513820(bea_arg(0), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(0), bea_arg(4), bea_arg(2));
    FUN_00513820(bea_arg(0), bea_arg(5), bea_arg(2));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    bea_vcall<uint32_t>(DAT_00888a50, 0x144, DAT_00888a50,1,0,*(undefined4 *)((int)this_ + 0x60));
    FUN_00513bc0(bea_arg(0x13), bea_arg(2));
    FUN_00513bc0(bea_arg(0x14), bea_arg(2));
    FUN_00513820(bea_arg(0), bea_arg(3), bea_arg(0));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    bea_vcall<uint32_t>(DAT_00888a50, 0x144, DAT_00888a50,1,0,*(undefined4 *)((int)this_ + 0x60));
    FUN_00513bc0(bea_arg(0x9c), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053b470, ap_0053b470));
