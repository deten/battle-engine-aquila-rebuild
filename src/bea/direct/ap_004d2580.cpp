// auto-ported from 004d2580_FUN_004d2580.c (FUN_004d2580, 124 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (5 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_0082b5b0 GLOBAL_AT(char, 0x0082b5b0)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
#define s_C__dev_ONSLAUGHT2_Platform_cpp_00631654 ((char*)0x00631654)
typedef uint32_t (BEA_THISCALL* FUN_00421350_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00421350_t> FUN_00421350 = {(FUN_00421350_t)0x00421350};
typedef int (BEA_CDECL* FUN_00421430_t)(void);
static const bea_guard<FUN_00421430_t> FUN_00421430 = {(FUN_00421430_t)0x00421430};
typedef uint32_t (BEA_THISCALL* FUN_005158f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005158f0_t> FUN_005158f0 = {(FUN_005158f0_t)0x005158f0};
typedef uint32_t (BEA_CDECL* FUN_0051f680_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0051f680_t> FUN_0051f680 = {(FUN_0051f680_t)0x0051f680};
typedef undefined4 (BEA_THISCALL* FUN_0052bb80_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0052bb80_t> FUN_0052bb80 = {(FUN_0052bb80_t)0x0052bb80};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_STDCALL ap_004d2580(undefined4 param_1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  
  FUN_005158f0(bea_arg(&DAT_0088a0a8), bea_arg(param_1));
  if (DAT_0082b5b0 != '\0') {
    bVar3 = DAT_0082b5b0 == '\x02';
    DAT_0082b5b0 = '\0';
    FUN_0052bb80(bea_arg(&DAT_00855bb0), bea_arg(1), bea_arg(1));
    if (bVar3) {
      uVar1 = FUN_00421430();
      uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(uVar1), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_Platform_cpp_00631654), bea_arg(0x29));
      FUN_00421350(bea_arg(&DAT_00660620), bea_arg(uVar2));
      FUN_0051f680(bea_arg(uVar2), bea_arg(uVar1));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar2));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d2580, ap_004d2580));
