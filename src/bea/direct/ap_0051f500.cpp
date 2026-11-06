// auto-ported from 0051f500_FUN_0051f500.c (FUN_0051f500, 245 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008a1388 GLOBAL_AT(short, 0x008a1388)
#define DAT_008a9584 GLOBAL_AT(int, 0x008a9584)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_008a9580 GLOBAL_AT(int, 0x008a9580)
#define DAT_008a9690 GLOBAL_AT(int, 0x008a9690)
#define DAT_008a968c GLOBAL_AT(int, 0x008a968c)
#define DAT_006799d0 GLOBAL_AT(char, 0x006799d0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
#define DAT_0063316c GLOBAL_AT(int, 0x0063316c)
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define s_C__dev_ONSLAUGHT2_FEPOptions_cpp_0063fc88 ((char*)0x0063fc88)
#define s_Couldn_t_write_defaultoptions_0063fc54 ((char*)0x0063fc54)
#define s_defaultoptions_bea_0063fc74 ((char*)0x0063fc74)
typedef uint32_t (BEA_THISCALL* FUN_00421350_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00421350_t> FUN_00421350 = {(FUN_00421350_t)0x00421350};
typedef int (BEA_CDECL* FUN_00421430_t)(void);
static const bea_guard<FUN_00421430_t> FUN_00421430 = {(FUN_00421430_t)0x00421430};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef void * (BEA_CDECL* FUN_0055e490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e490_t> FUN_0055e490 = {(FUN_0055e490_t)0x0055e490};
typedef int (BEA_CDECL* FUN_0055e4a3_t)(uint32_t);
static const bea_guard<FUN_0055e4a3_t> FUN_0055e4a3 = {(FUN_0055e4a3_t)0x0055e4a3};
typedef unsigned int (BEA_CDECL* FUN_0055f16e_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055f16e_t> FUN_0055f16e = {(FUN_0055f16e_t)0x0055f16e};

static uint32_t BEA_CDECL ap_0051f500(undefined4 param_1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  if ((DAT_008a1388 == 0) || (DAT_008a9584 != 1)) {
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(-(uint)(DAT_0083d448 != 0) & 0x16), bea_arg(0x46));
  }
  else {
    DAT_008a9580 = 1;
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0xb), bea_arg(0));
    DAT_008a9690 = 0x46;
    DAT_008a968c = -(uint)(DAT_0083d448 != 0) & 0x16;
    DAT_006799d0 = (undefined1)param_1;
  }
  uVar1 = FUN_00421430();
  uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(uVar1), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_FEPOptions_cpp_0063fc88), bea_arg(0xfa));
  FUN_00421350(bea_arg(&DAT_00660620), bea_arg(uVar2));
  iVar3 = FUN_0055e490(bea_arg(s_defaultoptions_bea_0063fc74), bea_arg(&DAT_0063316c));
  if (iVar3 != 0) {
    FUN_0055f16e(bea_arg(uVar2), bea_arg(uVar1), bea_arg(1), bea_arg(iVar3));
    FUN_0055e4a3(bea_arg(iVar3));
    return FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar2));
  }
  FUN_00441740(&DAT_0066eb90,s_Couldn_t_write_defaultoptions_0063fc54);
  return FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051f500, ap_0051f500));
