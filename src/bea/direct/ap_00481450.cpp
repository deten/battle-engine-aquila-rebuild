// auto-ported from 00481450_FUN_00481450.c (FUN_00481450, 358 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define s_Y_C__dev_ONSLAUGHT2_Hud_cpp_0062ce76 ((char*)0x0062ce76)
typedef uint32_t (BEA_THISCALL* FUN_004270e0_t)(uint32_t);
static const bea_guard<FUN_004270e0_t> FUN_004270e0 = {(FUN_004270e0_t)0x004270e0};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef uint32_t (BEA_THISCALL* FUN_00539f00_t)(uint32_t);
static const bea_guard<FUN_00539f00_t> FUN_00539f00 = {(FUN_00539f00_t)0x00539f00};
typedef uint32_t (BEA_THISCALL* FUN_0053a050_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0053a050_t> FUN_0053a050 = {(FUN_0053a050_t)0x0053a050};
typedef void * (BEA_THISCALL* FUN_0053bd60_t)(uint32_t);
static const bea_guard<FUN_0053bd60_t> FUN_0053bd60 = {(FUN_0053bd60_t)0x0053bd60};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_00481450(void * this_)
{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 0x5c) = 1;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3f14), bea_arg(0x38), bea_arg(s_Y_C__dev_ONSLAUGHT2_Hud_cpp_0062ce76 + 2), bea_arg(0x5d));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_0053bd60(bea_arg(pvVar1));
  }
  *(void **)((int)this_ + 0x60) = pvVar1;
  FUN_004270e0(bea_arg(pvVar1));
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x80), bea_arg(0x38), bea_arg(s_Y_C__dev_ONSLAUGHT2_Hud_cpp_0062ce76 + 2), bea_arg(0x5f));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_00539f00(bea_arg(pvVar1));
  }
  *(void **)((int)this_ + 0x30) = pvVar1;
  FUN_0053a050(bea_arg(pvVar1), bea_arg(0xfffffff9), bea_arg(0xe));
  uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x72a0936));
  *(undefined4 *)((int)this_ + 0xb4) = uVar2;
  uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x6b91062));
  *(undefined4 *)((int)this_ + 0xb8) = uVar2;
  uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x85574fc));
  *(undefined4 *)((int)this_ + 0xbc) = uVar2;
  uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2b617f));
  *(undefined4 *)((int)this_ + 0xc4) = uVar2;
  uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2b4ce2));
  *(undefined4 *)((int)this_ + 200) = uVar2;
  uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x396c8));
  *(undefined4 *)((int)this_ + 0xc0) = uVar2;
  uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x31e12896));
  *(undefined4 *)((int)this_ + 0xcc) = uVar2;
  uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x227a52ff));
  *(undefined4 *)((int)this_ + 0xd0) = uVar2;
  return *(uint32_t*)((char*)this_ + 0xd0);
  return *(uint32_t*)((char*)this_ + 0xd0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00481450, ap_00481450));
