// auto-ported from 0046a220_FUN_0046a220.c (FUN_0046a220, 94 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define s_Unknown_Multiplayer_Level_Descri_0062aad4 ((char*)0x0062aad4)
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};

static undefined4 BEA_CDECL ap_0046a220(undefined4 param_1)
{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x358fd244));
    return uVar1;
  case 1:
    uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x4bc32e75));
    return uVar1;
  case 2:
  case 4:
    uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x61f68aa6));
    return uVar1;
  case 3:
    uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x358fd244));
    return uVar1;
  default:
    uVar1 = FUN_004f7bf0(bea_arg(s_Unknown_Multiplayer_Level_Descri_0062aad4));
    return uVar1;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046a220, ap_0046a220));
