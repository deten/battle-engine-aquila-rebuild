// auto-ported from 00449d50_vslot2.c (CEngine::vslot2, 108 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CEngine;
#define DAT_009c74f8 GLOBAL_AT(int, 0x009c74f8)
#define DAT_009c7550 GLOBAL_AT(int, 0x009c7550)
#define s_hiteffect_tga_00628ca0 ((char*)0x00628ca0)
#define s_cloak_tga_00628c94 ((char*)0x00628c94)
#define s_hilight_tga_00628cb0 ((char*)0x00628cb0)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef uint32_t (BEA_THISCALL* FUN_005453d0_t)(uint32_t);
static const bea_guard<FUN_005453d0_t> FUN_005453d0 = {(FUN_005453d0_t)0x005453d0};
typedef uint32_t (BEA_THISCALL* FUN_00551cc0_t)(uint32_t);
static const bea_guard<FUN_00551cc0_t> FUN_00551cc0 = {(FUN_00551cc0_t)0x00551cc0};
typedef uint32_t (BEA_THISCALL* FUN_00552330_t)(uint32_t);
static const bea_guard<FUN_00552330_t> FUN_00552330 = {(FUN_00552330_t)0x00552330};

static uint32_t BEA_THISCALL ap_00449d50(CEngine * this_)
{
  undefined4 uVar1;
  FUN_00551cc0(bea_arg(&DAT_009c74f8));
  FUN_00552330(bea_arg(&DAT_009c7550));
  uVar1 = FUN_004f27f0(s_hilight_tga_00628cb0,0,0,0xffffffff,1,1);
  *(undefined4 *)(this_ + 0x4a0) = uVar1;
  uVar1 = FUN_004f27f0(s_hiteffect_tga_00628ca0,0,0,1,1,1);
  *(undefined4 *)(this_ + 0x20) = uVar1;
  uVar1 = FUN_004f27f0(s_cloak_tga_00628c94,0,0,1,1,1);
  *(undefined4 *)(this_ + 0x24) = uVar1;
  return FUN_005453d0(bea_arg(*(void **)(this_ + 0x10)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00449d50, ap_00449d50));
