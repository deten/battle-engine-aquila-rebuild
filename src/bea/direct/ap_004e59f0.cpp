// auto-ported from 004e59f0_FUN_004e59f0.c (FUN_004e59f0, 131 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d134 GLOBAL_AT(int, 0x0083d134)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_0083d130 GLOBAL_AT(int, 0x0083d130)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0083d138 GLOBAL_AT(int, 0x0083d138)
#define s_Warning__Initilise_SptrSet_twice_00632750 ((char*)0x00632750)
#define s_C__dev_ONSLAUGHT2_SPtrSet_cpp_00632730 ((char*)0x00632730)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_CDECL ap_004e59f0(int param_1)
{
  int iVar1;
  
  if (DAT_0083d134 != 0) {
    FUN_00441740(&DAT_0066f580,s_Warning__Initilise_SptrSet_twice_00632750);
    return;
  }
  DAT_0083d130 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_1 * 8), bea_arg(0x4c), bea_arg(s_C__dev_ONSLAUGHT2_SPtrSet_cpp_00632730), bea_arg(0x89));
  iVar1 = 0;
  DAT_0083d138 = param_1;
  DAT_0083d134 = DAT_0083d130;
  if (-1 < param_1 + -2) {
    do {
      *(int *)(DAT_0083d130 + 4 + iVar1 * 8) = DAT_0083d130 + 8 + iVar1 * 8;
      iVar1 = iVar1 + 1;
    } while (BEA_LOOP_GUARD((iVar1 <= DAT_0083d138 + -2)));
  }
  *(undefined4 *)(DAT_0083d130 + -4 + DAT_0083d138 * 8) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e59f0, ap_004e59f0));
