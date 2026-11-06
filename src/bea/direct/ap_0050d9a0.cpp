// auto-ported from 0050d9a0_FUN_0050d9a0.c (FUN_0050d9a0, 60 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00855360 GLOBAL_AT(int, 0x00855360)
#define DAT_00855358 GLOBAL_AT(undefined4*, 0x00855358)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_CDECL ap_0050d9a0(void)
{
  undefined4 *puVar1;
  
  while(BEA_LOOP_GUARD(( true ))) {
    DAT_00855360 = DAT_00855358;
    if ((DAT_00855358 == (int *)0x0) ||
       (puVar1 = (undefined4 *)*DAT_00855358, puVar1 == (undefined4 *)0x0)) break;
    FUN_004e5bd0(bea_arg(&DAT_00855358), bea_arg(puVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*puVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050d9a0, ap_0050d9a0));
