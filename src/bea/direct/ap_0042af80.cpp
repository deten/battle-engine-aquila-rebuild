// auto-ported from 0042af80_FUN_0042af80.c (FUN_0042af80, 189 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_console_cpp_00624d0c ((char*)0x00624d0c)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static undefined4 BEA_THISCALL ap_0042af80(void * this_, char *param_1, char *param_2, undefined4 param_3, undefined4 param_4)
{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  for (pcVar3 = *(char **)((int)this_ + 0x2394); BEA_LOOP_GUARD((pcVar3 != (char *)0x0));
      pcVar3 = *(char **)(pcVar3 + 0xa8)) {
    iVar2 = FUN_00568390(bea_arg(pcVar3), bea_arg(param_1));
    if (iVar2 == 0) {
      if (pcVar3 != (char *)0x0) goto LAB_0042afe2;
      break;
    }
  }
  pcVar3 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xac), bea_arg(0x4e), bea_arg(s_C__dev_ONSLAUGHT2_console_cpp_00624d0c), bea_arg(0x325));
  *(undefined4 *)(pcVar3 + 0xa8) = *(undefined4 *)((int)this_ + 0x2394);
  *(char **)((int)this_ + 0x2394) = pcVar3;
LAB_0042afe2:
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = pcVar3;
  for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = pcVar3 + 0x20;
  for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar4 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  *(undefined4 *)(pcVar3 + 0xa0) = param_3;
  pcVar3[0xa4] = (char)param_4;
  return CONCAT31((int3)(uVar4 >> 8),(char)param_4);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042af80, ap_0042af80));
