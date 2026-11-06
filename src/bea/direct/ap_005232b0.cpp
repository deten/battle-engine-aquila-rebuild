// auto-ported from 005232b0_FUN_005232b0.c (FUN_005232b0, 270 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_mixermap_cpp_00640030 ((char*)0x00640030)
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef uint32_t (BEA_THISCALL* FUN_00523190_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00523190_t> FUN_00523190 = {(FUN_00523190_t)0x00523190};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static uint32_t BEA_THISCALL ap_005232b0(void * this_, void *param_1)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puStack_8;
  undefined4 local_4;
  iVar4 = *(int *)this_;
  if (iVar4 != 0) {
    FUN_0055db0a(bea_arg(iVar4), bea_arg(0x14), bea_arg(*(undefined4 *)(iVar4 + -4)), bea_arg(((void*)0x00523210)));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar4 + -4));
    *(undefined4 *)this_ = 0;
  }
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14004), bea_arg(0x77), bea_arg(s_C__dev_ONSLAUGHT2_mixermap_cpp_00640030), bea_arg(0xf6));
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar1 + 1;
    *puVar1 = 0x1000;
    FUN_0055dc20(bea_arg(puVar3), bea_arg(0x14), bea_arg(0x1000), bea_arg(((void*)0x00523200)), bea_arg(((void*)0x00523210)));
  }
  *(undefined4 **)this_ = puVar3;
  uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x40000), bea_arg(0x77), bea_arg(s_C__dev_ONSLAUGHT2_mixermap_cpp_00640030), bea_arg(0xf7));
  *(undefined4 *)((int)this_ + 4) = uVar2;
  FUN_00423910(bea_arg(param_1));
  iVar4 = 0;
  do {
    FUN_00523190(bea_arg((void *)(iVar4 + *(int *)this_)), bea_arg(param_1));
    iVar4 = iVar4 + 0x14;
  } while (BEA_LOOP_GUARD((iVar4 < 0x14000)));
  FUN_00423910(bea_arg(param_1));
  return FUN_00423960(bea_arg(param_1), bea_arg(*(undefined4 *)((int)this_ + 4)), bea_arg(1), bea_arg(0x40000));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005232b0, ap_005232b0));
