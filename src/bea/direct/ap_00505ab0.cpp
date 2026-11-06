// auto-ported from 00505ab0_FUN_00505ab0.c (FUN_00505ab0, 44 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00854fc8 GLOBAL_AT(int, 0x00854fc8)
#define DAT_00854fc0 GLOBAL_AT(undefined4*, 0x00854fc0)
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static void BEA_CDECL ap_00505ab0(void)
{
  undefined4 *puVar1;
  
  while(BEA_LOOP_GUARD(( true ))) {
    DAT_00854fc8 = DAT_00854fc0;
    if ((DAT_00854fc0 == (int *)0x0) ||
       (puVar1 = (undefined4 *)*DAT_00854fc0, puVar1 == (undefined4 *)0x0)) break;
    FUN_004e5bd0(bea_arg(&DAT_00854fc0), bea_arg(puVar1));
    bea_vcall<uint32_t>(puVar1, 0x0, 1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00505ab0, ap_00505ab0));
