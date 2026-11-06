// auto-ported from 00469550_FUN_00469550.c (FUN_00469550, 877 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define s_Unnamed_Level_0062aab4 ((char*)0x0062aab4)
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};

static undefined4 BEA_CDECL ap_00469550(int param_1)
{
  undefined4 uVar1;
  
  if (param_1 < 0x1b0) {
    if (param_1 == 0x1af) {
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29a6a035));
      return uVar1;
    }
    if (param_1 < 0x138) {
      if (param_1 == 0x137) {
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x292bc249));
        return uVar1;
      }
      switch(param_1) {
      case 100:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x28672c3f));
        return uVar1;
      case 0x6e:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2898519c));
        return uVar1;
      case 200:
      case 0xc9:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x287fbf66));
        return uVar1;
      case 0xd3:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29132f1f));
        return uVar1;
      case 0xd4:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2975797a));
        return uVar1;
      case 0xdd:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2944547e));
        return uVar1;
      case 0xde:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29a69eda));
        return uVar1;
      case 0xe7:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x297579dd));
        return uVar1;
      case 0xe8:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29d7c43a));
        return uVar1;
      case 300:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2898528d));
        return uVar1;
      }
    }
    else {
      switch(param_1) {
      case 0x138:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x298e0ca6));
        return uVar1;
      case 0x141:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x295ce7a9));
        return uVar1;
      case 0x142:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29bf3207));
        return uVar1;
      case 0x14b:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x298e0d09));
        return uVar1;
      case 0x14c:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29f05768));
        return uVar1;
      case 400:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x28b0e5b4));
        return uVar1;
      case 0x19b:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29445573));
        return uVar1;
      case 0x19c:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29a69fd2));
        return uVar1;
      case 0x1a5:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29757ad4));
        return uVar1;
      case 0x1a6:
        uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29d7c534));
        return uVar1;
      }
    }
  }
  else if (param_1 < 0x265) {
    if (param_1 == 0x264) {
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29d7c62a));
      return uVar1;
    }
    switch(param_1) {
    case 0x1b0:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2a08ea96));
      return uVar1;
    case 500:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x28c978db));
      return uVar1;
    case 0x1ff:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x295ce89d));
      return uVar1;
    case 0x200:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29bf32fe));
      return uVar1;
    case 0x209:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x298e0dff));
      return uVar1;
    case 0x20a:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29f05861));
      return uVar1;
    case 0x20b:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2a52a2c3));
      return uVar1;
    case 0x20c:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2ab4ed25));
      return uVar1;
    case 600:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x28e20c02));
      return uVar1;
    case 0x263:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29757bc7));
      return uVar1;
    }
  }
  else {
    switch(param_1) {
    case 0x26d:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29a6a12a));
      return uVar1;
    case 0x26e:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2a08eb8e));
      return uVar1;
    case 700:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x28fa9f29));
      return uVar1;
    case 0x2c6:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x292bc48c));
      return uVar1;
    case 0x2d0:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x295ce9ef));
      return uVar1;
    case 0x2db:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29f059b9));
      return uVar1;
    case 0x2dc:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2a52a420));
      return uVar1;
    case 0x2e5:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2a217f1d));
      return uVar1;
    case 0x2e6:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2a83c985));
      return uVar1;
    case 800:
      uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29133250));
      return uVar1;
    }
  }
  uVar1 = FUN_004f7bf0(bea_arg(s_Unnamed_Level_0062aab4));
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00469550, ap_00469550));
