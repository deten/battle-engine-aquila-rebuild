// auto-ported from 00491060_FUN_00491060.c (FUN_00491060, 246 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit extraout_EDX: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_0089bd80 GLOBAL_AT(int, 0x0089bd80)
#define DAT_0089c9a0 GLOBAL_AT(char, 0x0089c9a0)
#define s_Deserializing_map__d_0062da6c ((char*)0x0062da6c)
#define s_Deserializing_map_0062da84 ((char*)0x0062da84)
typedef uint32_t (BEA_STDCALL* CFEPBEConfig__vslot7_t)(uint32_t);
static const bea_guard<CFEPBEConfig__vslot7_t> CFEPBEConfig__vslot7 = {(CFEPBEConfig__vslot7_t)0x00452b60};
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef uint32_t (BEA_THISCALL* FUN_0042b500_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042b500_t> FUN_0042b500 = {(FUN_0042b500_t)0x0042b500};
typedef undefined4 (BEA_THISCALL* FUN_0042b800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b800_t> FUN_0042b800 = {(FUN_0042b800_t)0x0042b800};
typedef uint32_t (BEA_THISCALL* FUN_0044a1f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a1f0_t> FUN_0044a1f0 = {(FUN_0044a1f0_t)0x0044a1f0};
typedef uint32_t (BEA_THISCALL* FUN_0044a2a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a2a0_t> FUN_0044a2a0 = {(FUN_0044a2a0_t)0x0044a2a0};
typedef uint32_t (BEA_THISCALL* FUN_0044a2c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a2c0_t> FUN_0044a2c0 = {(FUN_0044a2c0_t)0x0044a2c0};
typedef uint32_t (BEA_THISCALL* FUN_0047f750_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047f750_t> FUN_0047f750 = {(FUN_0047f750_t)0x0047f750};
typedef uint32_t (BEA_CDECL* FUN_0048dec0_t)(uint32_t);
static const bea_guard<FUN_0048dec0_t> FUN_0048dec0 = {(FUN_0048dec0_t)0x0048dec0};
typedef uint32_t (BEA_THISCALL* FUN_005232b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005232b0_t> FUN_005232b0 = {(FUN_005232b0_t)0x005232b0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_THISCALL ap_00491060(void * this_, void *param_1)
{
  undefined4 uVar1;
  undefined4 extraout_EDX = 0;
  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  int &local_24 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x24);
  undefined1 (&local_20)[32] = *reinterpret_cast<undefined1 (*)[32]>(bea_frame_ + 0x30 - 0x20);
  FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(s_Deserializing_map_0062da84));
  FUN_00423910(bea_arg(param_1));
  FUN_00423960(bea_arg(param_1), bea_arg(&local_24), bea_arg(4), bea_arg(1));
  FUN_0055de9b(local_20,s_Deserializing_map__d_0062da6c,local_24);
  CRenderThing__vslot3(local_20);
  *(int *)((int)this_ + 0x93dc) = local_24;
  *(undefined4 *)((int)this_ + 0x93e4) = 1;
  *(undefined4 *)((int)this_ + 0x93e0) = 1;
  FUN_0047f750(bea_arg(this_), bea_arg(param_1));
  FUN_005232b0(bea_arg(&DAT_0089bd80), bea_arg(param_1));
  uVar1 = FUN_0044a2a0(bea_arg(&DAT_0089c9a0), bea_arg(CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)((int)this_ + 0x1090))));
  CFEPBEConfig__vslot7(bea_arg(CONCAT31((int3)((uint)uVar1 >> 8),*(undefined1 *)((int)this_ + 0x1091))));
  FUN_0044a1f0(bea_arg(&DAT_0089c9a0), bea_arg((uint)*(byte *)((int)this_ + 0x1030)));
  uVar1 = FUN_0048dec0(bea_arg((uint)*(byte *)((int)this_ + 0x1094)));
  FUN_0044a2c0(bea_arg(&DAT_0089c9a0), bea_arg(CONCAT31((int3)((uint)uVar1 >> 8),*(undefined1 *)((int)this_ + 0x1095))))
  ;
  return FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(s_Deserializing_map_0062da84), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00491060, ap_00491060));
