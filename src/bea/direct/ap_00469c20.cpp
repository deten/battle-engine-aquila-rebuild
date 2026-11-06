// auto-ported from 00469c20_FUN_00469c20.c (FUN_00469c20, 163 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define s_Unnamed_Episode_0062aac4 ((char*)0x0062aac4)
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};

static undefined4 BEA_CDECL ap_00469c20(undefined4 param_1)
{
  undefined4 uVar1;
  
  switch(param_1) {
  case 1:
    uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x19be7a7));
    return uVar1;
  case 2:
    uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x19ef81a));
    return uVar1;
  case 3:
    uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1a2088d));
    return uVar1;
  case 4:
    uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1a51900));
    return uVar1;
  case 5:
    uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1a82973));
    return uVar1;
  case 6:
    uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1ab39e6));
    return uVar1;
  case 7:
    uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1ae4a59));
    return uVar1;
  case 8:
    uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1b15acc));
    return uVar1;
  default:
    uVar1 = FUN_004f7bf0(bea_arg(s_Unnamed_Episode_0062aac4));
    return uVar1;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00469c20, ap_00469c20));
