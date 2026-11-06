// auto-ported from 004f5ba0_FUN_004f5ba0.c (FUN_004f5ba0, 205 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_TokenArchive_c_00633a00 ((char*)0x00633a00)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef void * (BEA_CDECL* FUN_0055f44b_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055f44b_t> FUN_0055f44b = {(FUN_0055f44b_t)0x0055f44b};

static void BEA_THISCALL ap_004f5ba0(void * this_, int *param_1)
{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar3 = 0;
  for (iVar5 = *param_1; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = *(int *)(iVar5 + 0x38)) {
    iVar3 = iVar3 + 1;
  }
  piVar1 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 * 4), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_TokenArchive_c_00633a00), bea_arg(0x1c2));
  iVar3 = 0;
  piVar4 = piVar1;
  for (iVar5 = *param_1; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = *(int *)(iVar5 + 0x38)) {
    *piVar4 = iVar5;
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  iVar5 = 0;
  if (0 < *(int *)((int)this_ + 8)) {
    puVar6 = (undefined4 *)((int)this_ + 0x9c4c);
    do {
      puVar2 = (undefined4 *)FUN_0055f44b(bea_arg(*puVar6), bea_arg(piVar1), bea_arg(iVar3), bea_arg(4), bea_arg(((void*)0x004f5c70)));
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)puVar6[-10000] = 0;
      }
      else {
        *(undefined4 *)puVar6[-10000] = *puVar2;
      }
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*puVar6));
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (BEA_LOOP_GUARD((iVar5 < *(int *)((int)this_ + 8))));
  }
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar1));
  *(undefined4 *)((int)this_ + 8) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f5ba0, ap_004f5ba0));
