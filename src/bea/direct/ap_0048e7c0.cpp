// auto-ported from 0048e7c0_FUN_0048e7c0.c (FUN_0048e7c0, 181 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_006fa7d8 GLOBAL_AT(undefined4, 0x006fa7d8)
#define PTR_DAT_0062d868 GLOBAL_AT(void*, 0x0062d868)
typedef uint32_t (BEA_THISCALL* FUN_0048ea80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0048ea80_t> FUN_0048ea80 = {(FUN_0048ea80_t)0x0048ea80};

static void BEA_CDECL ap_0048e7c0(void)
{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_40;
  int local_3c;
  int local_38;
  char acStack_34 [52];
  
  iVar4 = 0;
  iVar2 = 0;
  local_38 = 0;
  local_3c = 0;
  puVar1 = (undefined4 *)PTR_DAT_0062d868;
  do {
    puVar6 = &DAT_006fa7d8;
    local_40 = &DAT_006fa7d8;
    puVar3 = &DAT_006fa7d8;
    puVar7 = puVar6;
    if (&DAT_006fa7d8 < puVar1) {
      do {
        if ((puVar3[2] == 0) || ((local_3c != 0 && (iVar4 < 1)))) {
          FUN_0048ea80(bea_arg((void *)*puVar3), bea_arg(CONCAT22((short)((uint)local_3c >> 0x10),*(undefined2 *)(puVar3 + 1))));
          local_38 = iVar4 + 1;
          acStack_34[iVar2] = (-(puVar3[2] != 0) & 0x20U) + 0x58;
          iVar2 = iVar2 + 1;
          puVar1 = (undefined4 *)PTR_DAT_0062d868;
          puVar6 = puVar7;
        }
        else {
          puVar6 = local_40 + 5;
          puVar5 = puVar3;
          for (iVar4 = 5; BEA_LOOP_GUARD((local_40 = puVar6, iVar4 != 0)); iVar4 = iVar4 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        puVar3 = puVar3 + 5;
        iVar4 = local_38;
        puVar7 = puVar6;
      } while (BEA_LOOP_GUARD((puVar3 < puVar1)));
    }
  } while (BEA_LOOP_GUARD((((local_3c != 0) || (iVar4 < 1)) && (local_3c = local_3c + 1, local_3c < 2))));
  PTR_DAT_0062d868 = (undefined *)puVar6;
  acStack_34[iVar2] = '\0';
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048e7c0, ap_0048e7c0));
