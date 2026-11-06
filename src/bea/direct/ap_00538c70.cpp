// auto-ported from 00538c70_vslot0.c (CScriptEventNB::vslot0, 312 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CScriptEventNB;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_game_playing_0062c258 ((char*)0x0062c258)
#define s_Warning__No_listeners_for_posted_0064fecc ((char*)0x0064fecc)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_0052fda0_t)(uint32_t);
static const bea_guard<FUN_0052fda0_t> FUN_0052fda0 = {(FUN_0052fda0_t)0x0052fda0};

static void BEA_THISCALL ap_00538c70(CScriptEventNB * this_, int param_1)
{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte *v0;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  bool bVar10;
  
  if (*(short *)(param_1 + 4) == 2000) {
    piVar2 = *(int **)(param_1 + 0xc);
    v0 = (byte *)bea_vcall<uint32_t>(piVar2[2], 0x38);
    if (*(int *)(*(int *)(this_ + 8) + 0xc) == 0) {
      pcVar4 = s_game_playing_0062c258;
      pbVar9 = v0;
      do {
        bVar1 = *pcVar4;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_00538cd1:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00538cd6;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar4[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_00538cd1;
        pcVar4 = pcVar4 + 2;
        pbVar9 = pbVar9 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar5 = 0;
LAB_00538cd6:
      if (iVar5 != 0) {
        FUN_00441740(&DAT_0066f580,s_Warning__No_listeners_for_posted_0064fecc,(char *)v0);
      }
    }
    puVar3 = (undefined4 *)**(int **)(this_ + 8);
    if (puVar3 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)*puVar3;
    }
    while (BEA_LOOP_GUARD((puVar8 != (undefined4 *)0x0))) {
      pbVar6 = (byte *)bea_vcall<uint32_t>(*puVar8, 0x38);
      pbVar9 = v0;
      do {
        bVar1 = *pbVar6;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_00538d43:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00538d48;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_00538d43;
        pbVar6 = pbVar6 + 2;
        pbVar9 = pbVar9 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar5 = 0;
LAB_00538d48:
      if (iVar5 == 0) {
        *(undefined1 *)(puVar8 + 5) = 1;
        puVar8 = (undefined4 *)puVar8[1];
        if (puVar8 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)*puVar8;
        }
        while (BEA_LOOP_GUARD((puVar7 != (undefined4 *)0x0))) {
          if ((void *)*puVar7 != (void *)0x0) {
            FUN_0052fda0(bea_arg((void *)*puVar7));
          }
          puVar8 = (undefined4 *)puVar8[1];
          if (puVar8 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = (undefined4 *)*puVar8;
          }
        }
      }
      puVar3 = (undefined4 *)puVar3[1];
      if (puVar3 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = (undefined4 *)*puVar3;
      }
    }
    if (piVar2 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar2, 0x4, 1);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00538c70, ap_00538c70));
