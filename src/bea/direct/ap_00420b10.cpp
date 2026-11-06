// auto-ported from 00420b10_FUN_00420b10.c (FUN_00420b10, 434 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0083d97c GLOBAL_AT(int, 0x0083d97c)
#define DAT_00677d70 GLOBAL_AT(int, 0x00677d70)
#define DAT_008889f0 GLOBAL_AT(int, 0x008889f0)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_0066061c GLOBAL_AT(int, 0x0066061c)
#define DAT_00856f64 GLOBAL_AT(int, 0x00856f64)
#define DAT_006254f0 GLOBAL_AT(int, 0x006254f0)
#define DAT_006254f4 GLOBAL_AT(int, 0x006254f4)
#define DAT_006321a0 GLOBAL_AT(int, 0x006321a0)
#define DAT_00631e88 GLOBAL_AT(int, 0x00631e88)
#define _DAT_00630e0c GLOBAL_AT(int, 0x00630e0c)
#define DAT_009c7558 GLOBAL_AT(int, 0x009c7558)
#define DAT_008aa99c GLOBAL_AT(int, 0x008aa99c)
#define DAT_0082b484 GLOBAL_AT(int, 0x0082b484)
#define DAT_0082b474 GLOBAL_AT(int, 0x0082b474)
#define DAT_0066306c GLOBAL_AT(int, 0x0066306c)
#define DAT_008aa95c GLOBAL_AT(int, 0x008aa95c)
#define DAT_009cc104 GLOBAL_AT(int, 0x009cc104)
#define DAT_009cc0e4 GLOBAL_AT(int, 0x009cc0e4)
#define DAT_00856f6c GLOBAL_AT(int, 0x00856f6c)
#define DAT_00663070 GLOBAL_AT(int, 0x00663070)
#define DAT_00663074 GLOBAL_AT(int, 0x00663074)
#define DAT_00663080 GLOBAL_AT(int, 0x00663080)
#define DAT_00663078 GLOBAL_AT(int, 0x00663078)
#define DAT_00663084 GLOBAL_AT(int, 0x00663084)
#define DAT_009c7c54 GLOBAL_AT(char, 0x009c7c54)
#define DAT_009c7c56 GLOBAL_AT(char, 0x009c7c56)
typedef int (BEA_THISCALL* FUN_00420cd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00420cd0_t> FUN_00420cd0 = {(FUN_00420cd0_t)0x00420cd0};
typedef uint32_t (BEA_THISCALL* FUN_00420d10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00420d10_t> FUN_00420d10 = {(FUN_00420d10_t)0x00420d10};

static int BEA_STDCALL ap_00420b10(undefined4 *param_1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = DAT_0083d97c;
  uVar2 = DAT_00677d70;
  iVar1 = DAT_008889f0 * 0x516c;
  iVar4 = FUN_00420cd0(bea_arg(&DAT_00855bb0), bea_arg(0xffffffff));
  FUN_00420d10(bea_arg(&DAT_0066061c), bea_arg(iVar1 + *(int *)(iVar4 + 0x5168) * 0xf68 + 0x856154 +
               *(int *)(((uint8_t *)&DAT_00856f64) + *(int *)(iVar4 + 0x5168) * 0xf68 + iVar1) * 0x18));
  *param_1 = DAT_006254f0;
  param_1[1] = DAT_006254f4;
  *(short *)(param_1 + 2) = (short)uVar2;
  *(short *)((int)param_1 + 10) = (short)uVar3;
  param_1[3] = DAT_006321a0;
  param_1[4] = DAT_00631e88;
  param_1[5] = _DAT_00630e0c;
  param_1[6] = DAT_009c7558;
  param_1[7] = DAT_008aa99c;
  param_1[8] = DAT_0082b484;
  param_1[9] = DAT_0082b474;
  param_1[10] = DAT_0066061c;
  param_1[0xb] = DAT_0066306c;
  param_1[0xc] = DAT_008aa95c;
  param_1[0xd] = DAT_009cc104;
  param_1[0xe] = DAT_009cc0e4;
  param_1[0xf] = *(undefined4 *)
                  (((uint8_t *)&DAT_00856f6c) +
                  *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 +
                  DAT_008889f0 * 0x516c);
  param_1[0x10] = DAT_00663070;
  param_1[0x11] = DAT_00663074;
  param_1[0x12] = DAT_00663080;
  param_1[0x13] = DAT_00663078;
  param_1[0x14] = DAT_00663084;
  *(undefined1 *)(param_1 + 0x15) = DAT_009c7c54;
  *(undefined1 *)((int)param_1 + 0x55) = DAT_009c7c56;
  return (int)param_1 + 0x56;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00420b10, ap_00420b10));
