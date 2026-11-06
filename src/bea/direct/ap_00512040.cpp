// auto-ported from 00512040_FUN_00512040.c (FUN_00512040, 34 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0063dc88 GLOBAL_AT(int, 0x0063dc88)
#define s_OnslaughtException_txt_0063dc70 ((char*)0x0063dc70)
typedef void * (BEA_CDECL* FUN_0055e490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e490_t> FUN_0055e490 = {(FUN_0055e490_t)0x0055e490};

static undefined4 BEA_STDCALL ap_00512040(undefined4 param_1)
{
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  FUN_0055e490(bea_arg(s_OnslaughtException_txt_0063dc70), bea_arg(&DAT_0063dc88));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00512040, ap_00512040));
