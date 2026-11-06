// auto-ported from 0046a2a0_FUN_0046a2a0.c (FUN_0046a2a0, 3154 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00679b88 GLOBAL_AT(char, 0x00679b88)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_007c113d GLOBAL_AT(int, 0x007c113d)
#define DAT_008251dc GLOBAL_AT(int, 0x008251dc)
#define DAT_0077fdb9 GLOBAL_AT(int, 0x0077fdb9)
#define DAT_0088b6ab GLOBAL_AT(int, 0x0088b6ab)
#define DAT_0072eda3 GLOBAL_AT(int, 0x0072eda3)
#define DAT_00703c61 GLOBAL_AT(int, 0x00703c61)
#define DAT_00679b8c GLOBAL_AT(int, 0x00679b8c)
#define DAT_0083d990 GLOBAL_AT(int, 0x0083d990)
#define DAT_0062adb4 GLOBAL_AT(int, 0x0062adb4)
#define DAT_0083d97c GLOBAL_AT(int, 0x0083d97c)
#define DAT_0062ad28 GLOBAL_AT(int, 0x0062ad28)
#define DAT_0062ac90 GLOBAL_AT(int, 0x0062ac90)
#define DAT_0062ab74 GLOBAL_AT(int, 0x0062ab74)
#define DAT_0062ac1c GLOBAL_AT(int, 0x0062ac1c)
#define DAT_0062ab0c GLOBAL_AT(int, 0x0062ab0c)
#define s_Unknown_Text_0062aafc ((char*)0x0062aafc)
typedef uint32_t (BEA_CDECL* FUN_0046b1e0_t)(uint32_t);
static const bea_guard<FUN_0046b1e0_t> FUN_0046b1e0 = {(FUN_0046b1e0_t)0x0046b1e0};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef undefined1 (BEA_STDCALL* FUN_00515980_t)(uint32_t);
static const bea_guard<FUN_00515980_t> FUN_00515980 = {(FUN_00515980_t)0x00515980};
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};

static undefined * BEA_CDECL ap_0046a2a0(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00515980(bea_arg(0x2d));
  if (iVar1 != 0) {
    DAT_00679b88 = DAT_00679b88 ^ 1;
  }
  if (DAT_00679b88 == 0) {
    switch(param_1) {
    case 0:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xe39ad3));
      return (undefined *)(puVar2);
    case 1:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1b749178));
      return (undefined *)(puVar2);
    case 2:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1be0271));
      return (undefined *)(puVar2);
    case 3:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1c0573d));
      return (undefined *)(puVar2);
    case 4:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x794b06e));
      return (undefined *)(puVar2);
    case 5:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(&DAT_007c113d));
      return (undefined *)(puVar2);
    case 6:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(&DAT_008251dc));
      return (undefined *)(puVar2);
    case 7:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xddb483));
      return (undefined *)(puVar2);
    case 8:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x141d4a));
      return (undefined *)(puVar2);
    case 9:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3810b66));
      return (undefined *)(puVar2);
    case 10:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xe89f10a));
      return (undefined *)(puVar2);
    case 0xb:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xe0df0ba8));
      return (undefined *)(puVar2);
    case 0xc:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xc93b6c));
      return (undefined *)(puVar2);
    case 0xd:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x179592a));
      return (undefined *)(puVar2);
    case 0xe:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x5cb1c2e));
      return (undefined *)(puVar2);
    case 0xf:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x5ce98381));
      return (undefined *)(puVar2);
    case 0x10:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x5c9867ea));
      return (undefined *)(puVar2);
    case 0x11:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x17b722a));
      return (undefined *)(puVar2);
    case 0x12:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xbb59d5e));
      return (undefined *)(puVar2);
    case 0x13:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xd88af9c));
      return (undefined *)(puVar2);
    case 0x14:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1c01706));
      return (undefined *)(puVar2);
    case 0x15:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xc67e11b));
      return (undefined *)(puVar2);
    case 0x16:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3dc6176c));
      return (undefined *)(puVar2);
    case 0x17:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x7b5590f));
      return (undefined *)(puVar2);
    case 0x18:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1b85584));
      return (undefined *)(puVar2);
    case 0x19:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2e88f0b));
      return (undefined *)(puVar2);
    case 0x1a:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x39ad2b5));
      return (undefined *)(puVar2);
    case 0x1b:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xbb52f));
      return (undefined *)(puVar2);
    case 0x1c:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x74cd9));
      return (undefined *)(puVar2);
    case 0x1d:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x737e5));
      return (undefined *)(puVar2);
    case 0x1e:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xe0383f6));
      return (undefined *)(puVar2);
    case 0x1f:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1b8903f7));
      return (undefined *)(puVar2);
    case 0x20:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xcc292da8));
      return (undefined *)(puVar2);
    case 0x21:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x7b9d24ca));
      return (undefined *)(puVar2);
    case 0x22:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1d0a54f));
      return (undefined *)(puVar2);
    case 0x23:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x305e20a));
      return (undefined *)(puVar2);
    case 0x24:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xe69771));
      return (undefined *)(puVar2);
    case 0x25:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1beb77bc));
      return (undefined *)(puVar2);
    case 0x26:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1f77e31));
      return (undefined *)(puVar2);
    case 0x27:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x6d370c03));
      return (undefined *)(puVar2);
    case 0x28:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xe056cb5));
      return (undefined *)(puVar2);
    case 0x29:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xd82b000d));
      return (undefined *)(puVar2);
    case 0x2a:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x44337e32));
      return (undefined *)(puVar2);
    case 0x2b:
      puVar2 = (undefined *)FUN_0046b1e0(bea_arg(0x2b));
      return (undefined *)(puVar2);
    case 0x2c:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3d2e5a43));
      return (undefined *)(puVar2);
    case 0x2d:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x4031715));
      return (undefined *)(puVar2);
    case 0x2e:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x4035271));
      return (undefined *)(puVar2);
    case 0x2f:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x403441b));
      return (undefined *)(puVar2);
    case 0x30:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x4037f78));
      return (undefined *)(puVar2);
    case 0x31:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x4037121));
      return (undefined *)(puVar2);
    case 0x32:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x403ac7f));
      return (undefined *)(puVar2);
    case 0x33:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x4039e27));
      return (undefined *)(puVar2);
    case 0x34:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x403d986));
      return (undefined *)(puVar2);
    case 0x35:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3b7e680f));
      return (undefined *)(puVar2);
    case 0x36:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x6ed8509a));
      return (undefined *)(puVar2);
    case 0x37:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x81b48c08));
      return (undefined *)(puVar2);
    case 0x38:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xe4fff2));
      return (undefined *)(puVar2);
    case 0x39:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1f4f905));
      return (undefined *)(puVar2);
    case 0x3a:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x7f9cec4));
      return (undefined *)(puVar2);
    case 0x3b:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xff5f0a1));
      return (undefined *)(puVar2);
    case 0x3c:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xff109ccb));
      return (undefined *)(puVar2);
    case 0x3d:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xfea1872c));
      return (undefined *)(puVar2);
    case 0x3e:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x7faf69be));
      return (undefined *)(puVar2);
    case 0x3f:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3fb6c79a));
      return (undefined *)(puVar2);
    case 0x40:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1ff32de5));
      return (undefined *)(puVar2);
    case 0x41:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xfdda1312));
      return (undefined *)(puVar2);
    case 0x42:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xe0e95217));
      return (undefined *)(puVar2);
    default:
      puVar2 = (undefined *)FUN_004f7bf0(bea_arg(s_Unknown_Text_0062aafc));
      return (undefined *)(puVar2);
    case 0x45:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xbdbae81));
      return (undefined *)(puVar2);
    case 0x46:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xf9029115));
      return (undefined *)(puVar2);
    case 0x47:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xc0cb2d3));
      return (undefined *)(puVar2);
    case 0x48:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xc2534fc));
      return (undefined *)(puVar2);
    case 0x49:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xf94c35bd));
      return (undefined *)(puVar2);
    case 0x4a:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xf964c1f5));
      return (undefined *)(puVar2);
    case 0x4b:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xdeb663));
      return (undefined *)(puVar2);
    case 0x4c:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xd6f2991));
      return (undefined *)(puVar2);
    case 0x4d:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xf9d375));
      return (undefined *)(puVar2);
    case 0x4e:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x72e4531));
      return (undefined *)(puVar2);
    case 0x4f:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x76a80c2));
      return (undefined *)(puVar2);
    case 0x50:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3e46441));
      return (undefined *)(puVar2);
    case 0x51:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3f1bb16));
      return (undefined *)(puVar2);
    case 0x52:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(&DAT_0077fdb9));
      return (undefined *)(puVar2);
    case 0x53:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xbe313cbb));
      return (undefined *)(puVar2);
    case 0x54:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x788284aa));
      return (undefined *)(puVar2);
    case 0x55:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x752e0ac5));
      return (undefined *)(puVar2);
    case 0x56:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xfa20785f));
      return (undefined *)(puVar2);
    case 0x57:
      puVar2 = (undefined *)FUN_0046b1e0(bea_arg(0x57));
      return (undefined *)(puVar2);
    case 0x58:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xfdacffa2));
      return (undefined *)(puVar2);
    case 0x59:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x71acba1e));
      return (undefined *)(puVar2);
    case 0x5a:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x35926681));
      return (undefined *)(puVar2);
    case 0x5b:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1ee4ac26));
      return (undefined *)(puVar2);
    case 0x5c:
      puVar2 = (undefined *)FUN_0046b1e0(bea_arg(0x5c));
      return (undefined *)(puVar2);
    case 0x5d:
      puVar2 = (undefined *)FUN_0046b1e0(bea_arg(0x5d));
      return (undefined *)(puVar2);
    case 0x5e:
      puVar2 = (undefined *)FUN_0046b1e0(bea_arg(0x5e));
      return (undefined *)(puVar2);
    case 0x5f:
      puVar2 = (undefined *)FUN_0046b1e0(bea_arg(0x5f));
      return (undefined *)(puVar2);
    case 0x60:
      puVar2 = (undefined *)FUN_0046b1e0(bea_arg(0x60));
      return (undefined *)(puVar2);
    case 0x61:
      puVar2 = (undefined *)FUN_0046b1e0(bea_arg(0x61));
      return (undefined *)(puVar2);
    case 0x62:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x74bd1790));
      return (undefined *)(puVar2);
    case 99:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1f459b77));
      return (undefined *)(puVar2);
    case 100:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3f9968a9));
      return (undefined *)(puVar2);
    case 0x65:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(&DAT_0088b6ab));
      return (undefined *)(puVar2);
    case 0x66:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3f3384));
      return (undefined *)(puVar2);
    case 0x67:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(&DAT_0072eda3));
      return (undefined *)(puVar2);
    case 0x68:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xcd8bc48f));
      return (undefined *)(puVar2);
    case 0x69:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2a53e6c7));
      return (undefined *)(puVar2);
    case 0x6a:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xe848ac));
      return (undefined *)(puVar2);
    case 0x6b:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3905856));
      return (undefined *)(puVar2);
    case 0x6c:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1f9f23));
      return (undefined *)(puVar2);
    case 0x6d:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(&DAT_00703c61));
      return (undefined *)(puVar2);
    case 0x6e:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xcecece9d));
      return (undefined *)(puVar2);
    case 0x6f:
    case 0x72:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x7dea02c));
      return (undefined *)(puVar2);
    case 0x70:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xd56abcd4));
      return (undefined *)(puVar2);
    case 0x71:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xee1c5cc4));
      return (undefined *)(puVar2);
    case 0x73:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xcffc756a));
      return (undefined *)(puVar2);
    case 0x74:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1fae562c));
      return (undefined *)(puVar2);
    case 0x78:
      FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1f9a8d9b));
      break;
    case 0x79:
      FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xfe8a00f));
      uVar3 = FUN_00524830(0xb5);
      FUN_0055e64e(bea_arg(&DAT_00679b8c), bea_arg(uVar3));
      return (undefined *)(&DAT_00679b8c);
    case 0x7a:
      FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x800ff93));
      uVar3 = FUN_00524830(0xb5);
      FUN_0055e64e(bea_arg(&DAT_00679b8c), bea_arg(uVar3));
      return (undefined *)(&DAT_00679b8c);
    case 0x8a:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xe5f04ce9));
      return (undefined *)(puVar2);
    case 0x8b:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x38b58362));
      return (undefined *)(puVar2);
    case 0x8c:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1cbca5cc));
      return (undefined *)(puVar2);
    case 0x8d:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3879ed5));
      return (undefined *)(puVar2);
    case 0x8e:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1c9b959));
      return (undefined *)(puVar2);
    case 0x8f:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x7004a61));
      return (undefined *)(puVar2);
    case 0x90:
      FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xc18c4bd8));
      uVar3 = FUN_00524830(0xb5);
      FUN_0055e64e(bea_arg(&DAT_00679b8c), bea_arg(uVar3));
      return (undefined *)(&DAT_00679b8c);
    case 0x91:
      FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2eedc50b));
      uVar3 = FUN_00524830(0xb5);
      FUN_0055e64e(bea_arg(&DAT_00679b8c), bea_arg(uVar3));
      return (undefined *)(&DAT_00679b8c);
    case 0x92:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x36578c5f));
      return (undefined *)(puVar2);
    case 0x93:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x78fb9e35));
      return (undefined *)(puVar2);
    case 0x94:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x12b09fa3));
      return (undefined *)(puVar2);
    case 0x95:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xbe9eed1f));
      return (undefined *)(puVar2);
    case 0x96:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x375857fb));
      return (undefined *)(puVar2);
    case 0x97:
      if (DAT_0083d990 != 0) {
        puVar2 = (undefined *)FUN_004f7bf0(bea_arg(&DAT_0062adb4));
        return (undefined *)(puVar2);
      }
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2b3ade51));
      return (undefined *)(puVar2);
    case 0x98:
      FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x6f01b1e));
      uVar3 = FUN_00524830(0xb5);
      FUN_0055e64e(bea_arg(&DAT_00679b8c), bea_arg(uVar3));
      return (undefined *)(&DAT_00679b8c);
    case 0x99:
      FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3bbcfa71));
      uVar3 = FUN_00524830(0xb5);
      FUN_0055e64e(bea_arg(&DAT_00679b8c), bea_arg(uVar3));
      return (undefined *)(&DAT_00679b8c);
    case 0x9a:
      FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3b49fdbe));
      uVar3 = FUN_00524830(0xb5);
      FUN_0055e64e(bea_arg(&DAT_00679b8c), bea_arg(uVar3));
      return (undefined *)(&DAT_00679b8c);
    case 0x9b:
      FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x9e028248));
      uVar3 = FUN_00524830(0xb5);
      FUN_0055e64e(bea_arg(&DAT_00679b8c), bea_arg(uVar3));
      return (undefined *)(&DAT_00679b8c);
    case 0x9c:
      FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x679ecccf));
      uVar3 = FUN_00524830(0xb5);
      FUN_0055e64e(bea_arg(&DAT_00679b8c), bea_arg(uVar3));
      return (undefined *)(&DAT_00679b8c);
    case 0x9d:
      FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x387023f4));
      uVar3 = FUN_00524830(0xb5);
      FUN_0055e64e(bea_arg(&DAT_00679b8c), bea_arg(uVar3));
      return (undefined *)(&DAT_00679b8c);
    case 0x9e:
      FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xabc8b921));
      uVar3 = FUN_00524830(0xb5);
      FUN_0055e64e(bea_arg(&DAT_00679b8c), bea_arg(uVar3));
      return (undefined *)(&DAT_00679b8c);
    case 0x9f:
      FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x6b17107e));
      uVar3 = FUN_00524830(0xb5);
      FUN_0055e64e(bea_arg(&DAT_00679b8c), bea_arg(uVar3));
      return (undefined *)(&DAT_00679b8c);
    case 0xa0:
      FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xce1ae172));
      uVar3 = FUN_00524830(0xb5);
      FUN_0055e64e(bea_arg(&DAT_00679b8c), bea_arg(uVar3));
      return (undefined *)(&DAT_00679b8c);
    case 0xa1:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x150d048a));
      return (undefined *)(puVar2);
    case 0xa2:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x122025));
      return (undefined *)(puVar2);
    case 0xa3:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1c5e31d5));
      return (undefined *)(puVar2);
    case 0xa4:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x7d83e320));
      return (undefined *)(puVar2);
    case 0xa5:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x696ff5d0));
      return (undefined *)(puVar2);
    case 0xa6:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1bbb80be));
      return (undefined *)(puVar2);
    case 0xa7:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xbeb0a41a));
      return (undefined *)(puVar2);
    case 0xa8:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1e610f4f));
      return (undefined *)(puVar2);
    case 0xa9:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xf22a5dfe));
      return (undefined *)(puVar2);
    case 0xaa:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2d70116));
      return (undefined *)(puVar2);
    case 0xab:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1d34b963));
      return (undefined *)(puVar2);
    case 0xac:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1da92121));
      return (undefined *)(puVar2);
    case 0xad:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x399e5b8f));
      return (undefined *)(puVar2);
    case 0xae:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xdbbcadaf));
      return (undefined *)(puVar2);
    case 0xaf:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x29745a61));
      return (undefined *)(puVar2);
    case 0xb0:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x49ec1c72));
      return (undefined *)(puVar2);
    case 0xb1:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x6a63de83));
      return (undefined *)(puVar2);
    case 0xb2:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x8adba094));
      return (undefined *)(puVar2);
    case 0xb3:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xc533ec78));
      return (undefined *)(puVar2);
    case 0xb4:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x8e5153ec));
      return (undefined *)(puVar2);
    case 0xb5:
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xe52c34bf));
      return (undefined *)(puVar2);
    case 0xb6:
      switch(DAT_0083d97c) {
      case 1:
        FUN_004f7bf0(bea_arg(&DAT_0062ad28));
        break;
      case 2:
        FUN_004f7bf0(bea_arg(&DAT_0062ac90));
        break;
      case 3:
        FUN_004f7bf0(bea_arg(&DAT_0062ab74));
        break;
      case 4:
        FUN_004f7bf0(bea_arg(&DAT_0062ac1c));
        break;
      default:
        FUN_004f7bf0(bea_arg(&DAT_0062ab0c));
      }
    }
    uVar3 = FUN_00524830(0xb5);
    FUN_0055e64e(bea_arg(&DAT_00679b8c), bea_arg(uVar3));
    return (undefined *)(&DAT_00679b8c);
  }
  puVar2 = (undefined *)FUN_0046b1e0(bea_arg(param_1));
  return (undefined *)(puVar2);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046a2a0, ap_0046a2a0));
