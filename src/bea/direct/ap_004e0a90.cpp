// auto-ported from 004e0a90_FUN_004e0a90.c (FUN_004e0a90, 151 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_ERROR__PlayNamedSample_failed_to_006322b8 ((char*)0x006322b8)
#define s_ERROR__Could_not_play_sample___s_006322f0 ((char*)0x006322f0)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_THISCALL* FUN_004e0a00_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e0a00_t> FUN_004e0a00 = {(FUN_004e0a00_t)0x004e0a00};
typedef uint32_t (BEA_THISCALL* FUN_004e0b30_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e0b30_t> FUN_004e0b30 = {(FUN_004e0b30_t)0x004e0b30};

static uint32_t BEA_THISCALL ap_004e0a90(void * this_, char *param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13)
{
  int iVar1;
  if (*(char *)((int)this_ + 4) == '\0') {
    return FUN_00441740(&DAT_0066f580,s_ERROR__Could_not_play_sample___s_006322f0);
  }
  iVar1 = FUN_004e0a00(bea_arg(this_), bea_arg(param_1), bea_arg(0), bea_arg(0));
  if (iVar1 != 0) {
    return FUN_004e0b30(bea_arg(this_), bea_arg(iVar1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4), bea_arg(param_5), bea_arg(param_6), bea_arg(param_7), bea_arg(param_8), bea_arg(param_9), bea_arg(param_10), bea_arg(param_11), bea_arg(param_12), bea_arg(param_13));
  }
  return FUN_00441740(&DAT_0066f580,s_ERROR__PlayNamedSample_failed_to_006322b8,param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e0a90, ap_004e0a90));
