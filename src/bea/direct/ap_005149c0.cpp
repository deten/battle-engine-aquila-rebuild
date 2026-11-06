// auto-ported from 005149c0_FUN_005149c0.c (FUN_005149c0, 189 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_008898d8 GLOBAL_AT(int, 0x008898d8)
#define DAT_008898e0 GLOBAL_AT(char, 0x008898e0)
#define s_savegames___bes_0063df7c ((char*)0x0063df7c)
typedef int (BEA_CDECL* FUN_0055f5ee_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055f5ee_t> FUN_0055f5ee = {(FUN_0055f5ee_t)0x0055f5ee};
typedef int (BEA_CDECL* FUN_0055f6bb_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055f6bb_t> FUN_0055f6bb = {(FUN_0055f6bb_t)0x0055f6bb};
typedef int (BEA_CDECL* FUN_0055f783_t)(uint32_t);
static const bea_guard<FUN_0055f783_t> FUN_0055f783 = {(FUN_0055f783_t)0x0055f783};

static undefined4 BEA_STDCALL ap_005149c0(undefined4 param_1, int *param_2)
{
  int iVar1;
  
  *param_2 = 0;
  DAT_008898d8 = FUN_0055f5ee(bea_arg(s_savegames___bes_0063df7c), bea_arg(&DAT_008898e0));
  if (DAT_008898d8 != -1) {
    if ((DAT_008898e0 & 0x16) == 0) {
LAB_00514a2b:
      do {
        *param_2 = *param_2 + 1;
        iVar1 = FUN_0055f6bb(bea_arg(DAT_008898d8), bea_arg(&DAT_008898e0));
        while(BEA_LOOP_GUARD(( true ))) {
          if (iVar1 != 0) goto LAB_00514a67;
          if ((DAT_008898e0 & 0x16) == 0) break;
          iVar1 = FUN_0055f6bb(bea_arg(DAT_008898d8), bea_arg(&DAT_008898e0));
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
    iVar1 = FUN_0055f6bb(bea_arg(DAT_008898d8), bea_arg(&DAT_008898e0));
    while (BEA_LOOP_GUARD((iVar1 == 0))) {
      if ((DAT_008898e0 & 0x16) == 0) goto LAB_00514a2b;
      iVar1 = FUN_0055f6bb(bea_arg(DAT_008898d8), bea_arg(&DAT_008898e0));
    }
LAB_00514a67:
    FUN_0055f783(bea_arg(DAT_008898d8));
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005149c0, ap_005149c0));
