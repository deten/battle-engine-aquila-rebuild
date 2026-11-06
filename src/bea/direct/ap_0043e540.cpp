// auto-ported from 0043e540_FUN_0043e540.c (FUN_0043e540, 142 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818 ((char*)0x00625818)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_CDECL ap_0043e540(int param_1)
{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x19c));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dacd0);
      puVar1[1] = 1;
      return puVar1;
    }
  }
  else if (param_1 == 2) {
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x19d));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dacdc);
      puVar1[1] = 2;
      return puVar1;
    }
  }
  else if (param_1 == 3) {
    puVar1 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_CPhysicsScript_00625818), bea_arg(0x19e));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = ((void*)0x005dace8);
      puVar1[1] = 3;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043e540, ap_0043e540));
