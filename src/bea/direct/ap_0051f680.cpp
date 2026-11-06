// auto-ported from 0051f680_FUN_0051f680.c (FUN_0051f680, 74 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0063316c GLOBAL_AT(int, 0x0063316c)
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define s_Couldn_t_write_defaultoptions_0063fc54 ((char*)0x0063fc54)
#define s_defaultoptions_bea_0063fc74 ((char*)0x0063fc74)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef void * (BEA_CDECL* FUN_0055e490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e490_t> FUN_0055e490 = {(FUN_0055e490_t)0x0055e490};
typedef int (BEA_CDECL* FUN_0055e4a3_t)(uint32_t);
static const bea_guard<FUN_0055e4a3_t> FUN_0055e4a3 = {(FUN_0055e4a3_t)0x0055e4a3};
typedef unsigned int (BEA_CDECL* FUN_0055f16e_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055f16e_t> FUN_0055f16e = {(FUN_0055f16e_t)0x0055f16e};

static uint32_t BEA_CDECL ap_0051f680(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  iVar1 = FUN_0055e490(bea_arg(s_defaultoptions_bea_0063fc74), bea_arg(&DAT_0063316c));
  if (iVar1 != 0) {
    FUN_0055f16e(bea_arg(param_1), bea_arg(param_2), bea_arg(1), bea_arg(iVar1));
    return FUN_0055e4a3(bea_arg(iVar1));
  }
  return FUN_00441740(&DAT_0066eb90,s_Couldn_t_write_defaultoptions_0063fc54);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051f680, ap_0051f680));
