// auto-ported from 004b7d90_FUN_004b7d90.c (FUN_004b7d90, 267 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008a9ac4 GLOBAL_AT(int, 0x008a9ac4)
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_00704e74 GLOBAL_AT(char, 0x00704e74)
#define DAT_00704f78 GLOBAL_AT(int, 0x00704f78)
#define DAT_008073d0 GLOBAL_AT(undefined4*, 0x008073d0)
#define DAT_0080738c GLOBAL_AT(int, 0x0080738c)
#define DAT_0089c808 GLOBAL_AT(char, 0x0089c808)
#define DAT_00707288 GLOBAL_AT(int, 0x00707288)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_00704e70 GLOBAL_AT(int, 0x00704e70)
#define _DAT_008969b4 GLOBAL_AT(float, 0x008969b4)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_STDCALL* FUN_0042c750_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042c750_t> FUN_0042c750 = {(FUN_0042c750_t)0x0042c750};
typedef uint32_t (BEA_THISCALL* FUN_004e0b30_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e0b30_t> FUN_004e0b30 = {(FUN_004e0b30_t)0x004e0b30};
typedef undefined4 * (BEA_STDCALL* FUN_005176d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005176d0_t> FUN_005176d0 = {(FUN_005176d0_t)0x005176d0};
typedef int (BEA_THISCALL* FUN_00528d90_t)(uint32_t);
static const bea_guard<FUN_00528d90_t> FUN_00528d90 = {(FUN_00528d90_t)0x00528d90};
typedef uint32_t (BEA_THISCALL* FUN_00528da0_t)(uint32_t);
static const bea_guard<FUN_00528da0_t> FUN_00528da0 = {(FUN_00528da0_t)0x00528da0};
typedef uint32_t (BEA_THISCALL* FUN_00528dc0_t)(uint32_t);
static const bea_guard<FUN_00528dc0_t> FUN_00528dc0 = {(FUN_00528dc0_t)0x00528dc0};

static void BEA_CDECL ap_004b7d90(void)
{
  int iVar1;
  
  if (((DAT_008a9ac4 == 0) && (DAT_008a9ac0 < 4)) && ((char)DAT_00704e74 != '\0')) {
    iVar1 = FUN_00528d90(bea_arg(&DAT_00704f78));
    if (iVar1 == 0) {
      if (DAT_008073d0 != (undefined4 *)0x0) {
        bea_vcall<uint32_t>(DAT_008073d0, 0x0, 1);
        DAT_008073d0 = (undefined4 *)0x0;
      }
      if (DAT_0080738c == 0) {
        if (DAT_0089c808 != '\0') {
          FUN_0042c750(bea_arg(&DAT_00704e74), bea_arg(0xffffffff));
          return;
        }
      }
      else {
        FUN_00528da0(bea_arg(&DAT_00704f78));
        DAT_008073d0 = (undefined4 *)FUN_005176d0(bea_arg(&DAT_00707288), bea_arg(DAT_0080738c), bea_arg(0), bea_arg(0));
        DAT_0080738c = 0;
        FUN_00528dc0(bea_arg(&DAT_00704f78));
        if (DAT_008073d0 != (undefined4 *)0x0) {
          FUN_004e0b30(bea_arg(&DAT_00896988), bea_arg(DAT_008073d0), bea_arg(DAT_00704e70), bea_arg(_DAT_008969b4), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(1), bea_arg(1));
        }
        (*(uint8_t*)((char*)&DAT_00704e74 + 0)) = '\0';
        FUN_00401000(bea_arg(&DAT_00704e70), bea_arg(0));
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b7d90, ap_004b7d90));
