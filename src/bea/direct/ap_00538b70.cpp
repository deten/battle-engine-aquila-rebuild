// auto-ported from 00538b70_FUN_00538b70.c (FUN_00538b70, 251 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_game_playing_0062c258 ((char*)0x0062c258)
#define s_Warning__No_listeners_for_posted_0064fecc ((char*)0x0064fecc)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_0052fda0_t)(uint32_t);
static const bea_guard<FUN_0052fda0_t> FUN_0052fda0 = {(FUN_0052fda0_t)0x0052fda0};

static void BEA_THISCALL ap_00538b70(void * this_, byte *param_1)
{
  byte bVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  bool bVar9;
  
  if (*(int *)(*(int *)((int)this_ + 8) + 0xc) == 0) {
    pcVar3 = s_game_playing_0062c258;
    pbVar8 = param_1;
    do {
      bVar1 = *pcVar3;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_00538bb3:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00538bb8;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar3[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_00538bb3;
      pcVar3 = pcVar3 + 2;
      pbVar8 = pbVar8 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_00538bb8:
    if (iVar4 != 0) {
      FUN_00441740(&DAT_0066f580,s_Warning__No_listeners_for_posted_0064fecc,(char *)param_1);
    }
  }
  puVar2 = (undefined4 *)**(int **)((int)this_ + 8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)*puVar2;
  }
  do {
    if (puVar7 == (undefined4 *)0x0) {
      return;
    }
    pbVar5 = (byte *)bea_vcall<uint32_t>(*puVar7, 0x38);
    pbVar8 = param_1;
    do {
      bVar1 = *pbVar5;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_00538c15:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00538c1a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_00538c15;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_00538c1a:
    if (iVar4 == 0) {
      *(undefined1 *)(puVar7 + 5) = 1;
      puVar7 = (undefined4 *)puVar7[1];
      if (puVar7 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)*puVar7;
      }
      while (BEA_LOOP_GUARD((puVar6 != (undefined4 *)0x0))) {
        if ((void *)*puVar6 != (void *)0x0) {
          FUN_0052fda0(bea_arg((void *)*puVar6));
        }
        puVar7 = (undefined4 *)puVar7[1];
        if (puVar7 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = (undefined4 *)*puVar7;
        }
      }
    }
    puVar2 = (undefined4 *)puVar2[1];
    if (puVar2 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)*puVar2;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00538b70, ap_00538b70));
