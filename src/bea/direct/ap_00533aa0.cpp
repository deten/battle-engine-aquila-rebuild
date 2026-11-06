// auto-ported from 00533aa0_FUN_00533aa0.c (FUN_00533aa0, 139 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00662564 GLOBAL_AT(int, 0x00662564)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa40 ((char*)0x0064fa40)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_STDCALL ap_00533aa0(undefined4 *param_1, undefined4 param_2, undefined4 *param_3)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puStack_8;
  undefined4 local_4;
  puVar2 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x196));
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = bea_vcall<uint32_t>(*param_1, 0x30);
    uVar1 = (&DAT_00662564)[iVar3 + -1];
    *puVar2 = ((void*)0x005e4af8);
    puVar2[1] = uVar1;
    *param_3 = puVar2;
    return param_3;
  }
  *param_3 = 0;
  return (undefined4 *)0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00533aa0, ap_00533aa0));
