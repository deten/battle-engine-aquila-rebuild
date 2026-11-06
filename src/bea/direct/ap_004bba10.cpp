// auto-ported from 004bba10_FUN_004bba10.c (FUN_004bba10, 65 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00662ab0 GLOBAL_AT(int, 0x00662ab0)
#define s_input_vol____2_8f__master_music_v_00630a08 ((char*)0x00630a08)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static uint32_t BEA_THISCALL ap_004bba10(void * this_, float param_1)
{
  int local_8;
  
  local_8 = (int)(longlong)ROUND(param_1 * 127.0f);
  *(int *)((int)this_ + 0x2c) = local_8;
  FUN_00441740(&DAT_0066f580,s_input_vol____2_8f__master_music_v_00630a08,(double)param_1,local_8);
  DAT_00662ab0 = bea_piece32(param_1);
  return bea_arg(param_1);
  return bea_arg(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bba10, ap_004bba10));
