// auto-ported from 00548d70_FUN_00548d70.c (FUN_00548d70, 333 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c2bcc GLOBAL_AT(undefined4, 0x009c2bcc)
#define DAT_009c2dd0 GLOBAL_AT(char, 0x009c2dd0)
#define DAT_0062e140 GLOBAL_AT(undefined4, 0x0062e140)
#define s_Generic_0062e144 ((char*)0x0062e144)
#define s_Name_not_found_00651040 ((char*)0x00651040)
typedef void * (BEA_THISCALL* FUN_004a1390_t)(uint32_t);
static const bea_guard<FUN_004a1390_t> FUN_004a1390 = {(FUN_004a1390_t)0x004a1390};

static void * BEA_THISCALL ap_00548d70(void * this_)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *local_14;
  int local_10;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)this_ = 0;
  local_4 = 0;
  FUN_004a1390(bea_arg((void *)((int)this_ + 0x214)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  FUN_004a1390(bea_arg((void *)((int)this_ + 0xae0)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 2;
  FUN_004a1390(bea_arg((void *)((int)this_ + 0x13ac)));
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),3);
  FUN_004a1390(bea_arg((void *)((int)this_ + 0x1c78)));
  local_10 = 0;
  puVar6 = (undefined4 *)((int)this_ + 0x10);
  for (iVar2 = 0x81; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar6 = (void *)((int)this_ + 0x214);
    puVar6 = puVar6 + 1;
  }
  local_14 = &DAT_009c2bcc;
  pcVar7 = (char *)&DAT_009c2dd0;
LAB_00548dfb:
  uVar3 = 0xffffffff;
  pcVar8 = s_Name_not_found_00651040;
  do {
    pcVar9 = pcVar8;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar8 = pcVar9 + -uVar3;
  pcVar9 = pcVar7;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((iVar2 = DAT_0062e140, uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  *local_14 = 0xffffffff;
  iVar5 = 0;
  if (iVar2 != 0x81) {
    puVar6 = &DAT_0062e140;
    do {
      if (iVar2 == local_10) {
        uVar3 = 0xffffffff;
        pcVar8 = s_Generic_0062e144 + iVar5 * 0x28;
        goto code_r0x00548e61;
      }
      iVar2 = puVar6[10];
      puVar6 = puVar6 + 10;
      iVar5 = iVar5 + 1;
    } while (BEA_LOOP_GUARD((iVar2 != 0x81)));
  }
  goto LAB_00548e85;
  while(BEA_LOOP_GUARD(( true ))) {
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
    if (cVar1 == '\0') break;
code_r0x00548e61:
    pcVar9 = pcVar8;
    if (uVar3 == 0) break;
  }
  uVar3 = ~uVar3;
  pcVar8 = pcVar9 + -uVar3;
  pcVar9 = pcVar7;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  *local_14 = *(undefined4 *)(iVar5 * 0x28 + 0x62e164);
LAB_00548e85:
  pcVar7 = pcVar7 + 0x20;
  local_10 = local_10 + 1;
  local_14 = local_14 + 1;
  if (0x9c3def < (int)pcVar7) {
    return (void *)(this_);
  }
  goto LAB_00548dfb;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00548d70, ap_00548d70));
