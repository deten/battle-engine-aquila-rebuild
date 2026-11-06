// auto-ported from 0043f210_FUN_0043f210.c (FUN_0043f210, 294 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00662b2c GLOBAL_AT(char, 0x00662b2c)
#define s_C__dev_ONSLAUGHT2_Cutscene_cpp_0062811c ((char*)0x0062811c)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_THISCALL ap_0043f210(void * this_, int param_1, char *param_2, char *param_3, undefined4 param_4, undefined4 param_5)
{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  puVar4 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x24c), bea_arg(0x1d), bea_arg(s_C__dev_ONSLAUGHT2_Cutscene_cpp_0062811c), bea_arg(0x133));
  uVar5 = 0xffffffff;
  do {
    pcVar7 = param_2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar7;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar7 = pcVar7 + -uVar5;
  pcVar8 = (char *)(puVar4 + 2);
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar7 = param_3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar7;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar7 = pcVar7 + -uVar5;
  pcVar8 = (char *)(puVar4 + 0x42);
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar7 = &DAT_00662b2c;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = (char *)((int)puVar4 + 0x12d);
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  puVar4[0x8c] = 0;
  puVar4[0x8f] = param_4;
  puVar4[0x8d] = param_5;
  puVar4[0x92] = 0;
  puVar4[0x4a] = 0xffffffff;
  *(undefined1 *)(puVar4 + 0x4b) = 0;
  puVar4[1] = param_1;
  puVar4[0x91] = 0;
  puVar4[0x90] = 0;
  *puVar4 = 0;
  iVar2 = *(int *)((int)this_ + param_1 * 4 + 0x7c);
  if (iVar2 == 0) {
    *(undefined4 **)((int)this_ + param_1 * 4 + 0x7c) = puVar4;
  }
  else {
    for (iVar3 = *(int *)(iVar2 + 0x248); BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = *(int *)(iVar3 + 0x248)) {
      iVar2 = iVar3;
    }
    *(undefined4 **)(iVar2 + 0x248) = puVar4;
  }
  *(undefined1 *)((int)this_ + 0x841) = 1;
  *(int *)((int)this_ + param_1 * 4 + 0x6bc) = *(int *)((int)this_ + param_1 * 4 + 0x6bc) + 1;
  return puVar4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043f210, ap_0043f210));
