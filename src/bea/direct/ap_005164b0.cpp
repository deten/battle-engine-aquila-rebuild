// auto-ported from 005164b0_FUN_005164b0.c (FUN_005164b0, 200 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00896488 GLOBAL_AT(int, 0x00896488)
#define DAT_0088a0f0 GLOBAL_AT(int, 0x0088a0f0)
#define DAT_0088a0f4 GLOBAL_AT(int, 0x0088a0f4)
#define DAT_0088a0f8 GLOBAL_AT(undefined4, 0x0088a0f8)
typedef undefined4 * (BEA_CDECL* FUN_00516580_t)(undefined4, ...);
static const bea_guard<FUN_00516580_t> FUN_00516580 = {(FUN_00516580_t)0x00516580};

static int * BEA_CDECL ap_005164b0(int *param_1, undefined4 param_2)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *local_4;
  
  iVar1 = 0;
  local_4 = (int *)0x0;
  if (0 < DAT_00896488) {
    piVar2 = &DAT_0088a0f0;
    do {
      if ((int *)*piVar2 == param_1) {
        if (*(int *)(((char *)&DAT_0088a0f4) + iVar1 * 0x428) == -1) {
          return (int *)((int *)0x0);
        }
        iVar5 = *(int *)(iVar1 * 0x428 + 0x88a514);
        iVar3 = iVar5 + -1;
        if (iVar3 < 0) {
          return (int *)(param_1);
        }
        puVar6 = &DAT_0088a0f8 + iVar1 * 0x10a + iVar3 * 0x107;
        puVar4 = (undefined4 *)(((char *)&DAT_0088a0f4) + (iVar3 + iVar1 * 0x10a) * 4);
        do {
          piVar2 = (int *)FUN_00516580(*puVar4);
          if (piVar2 != (int *)0x0) {
            puVar6[0x100] = param_2;
            bea_vcall<uint32_t>(piVar2, 0x4, puVar6);
            piVar2[4] = (int)local_4;
            local_4 = piVar2;
          }
          puVar4 = puVar4 + -1;
          puVar6 = puVar6 + -0x107;
          iVar5 = iVar5 + -1;
        } while (BEA_LOOP_GUARD((iVar5 != 0)));
        return (int *)(piVar2);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x10a;
    } while (BEA_LOOP_GUARD((iVar1 < DAT_00896488)));
  }
  return (int *)((int *)0x0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005164b0, ap_005164b0));
