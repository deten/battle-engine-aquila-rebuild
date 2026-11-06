// auto-ported from 004bb6b0_FUN_004bb6b0.c (FUN_004bb6b0, 265 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_C__dev_ONSLAUGHT2_Music_cpp_00630a4c ((char*)0x00630a4c)
#define s_Added__s_to_playlist_00630a34 ((char*)0x00630a34)
typedef uint32_t (BEA_CDECL* FUN_0042b840_t)(int, undefined4, ...);
static const bea_guard<FUN_0042b840_t> FUN_0042b840 = {(FUN_0042b840_t)0x0042b840};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_THISCALL ap_004bb6b0(void * this_, char *param_1)
{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  for (iVar4 = *(int *)((int)this_ + 0xc); BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = *(int *)(iVar4 + 0x104)) {
    iVar2 = FUN_00568390(bea_arg(param_1), bea_arg(iVar4));
    if (iVar2 == 0) {
      return;
    }
  }
  pcVar3 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10c), bea_arg(0x14), bea_arg(s_C__dev_ONSLAUGHT2_Music_cpp_00630a4c), bea_arg(0x13e));
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3[0x108] = -1;
    pcVar3[0x109] = -1;
    pcVar3[0x10a] = -1;
    pcVar3[0x10b] = -1;
    pcVar3[0x104] = '\0';
    pcVar3[0x105] = '\0';
    pcVar3[0x106] = '\0';
    pcVar3[0x107] = '\0';
  }
  pcVar8 = *(char **)((int)this_ + 0xc);
  pcVar9 = param_1;
  if (*(char **)((int)this_ + 0xc) == (char *)0x0) {
    *(char **)((int)this_ + 0xc) = pcVar3;
    pcVar3[0x104] = '\0';
    pcVar3[0x105] = '\0';
    pcVar3[0x106] = '\0';
    pcVar3[0x107] = '\0';
  }
  else {
    do {
      pcVar7 = pcVar8;
      iVar4 = FUN_00568390(bea_arg(pcVar7), bea_arg(param_1));
      if (-1 < iVar4) {
        if (pcVar7 != (char *)0x0) {
          if (pcVar7 == *(char **)((int)this_ + 0xc)) {
            *(char **)((int)this_ + 0xc) = pcVar3;
            *(char **)(pcVar3 + 0x104) = pcVar7;
          }
          else {
            *(char **)(pcVar9 + 0x104) = pcVar3;
            *(char **)(pcVar3 + 0x104) = pcVar7;
          }
          goto LAB_004bb77a;
        }
        break;
      }
      pcVar8 = *(char **)(pcVar7 + 0x104);
      pcVar9 = pcVar7;
    } while (BEA_LOOP_GUARD((*(char **)(pcVar7 + 0x104) != (char *)0x0)));
    *(char **)(pcVar9 + 0x104) = pcVar3;
    pcVar3[0x104] = '\0';
    pcVar3[0x105] = '\0';
    pcVar3[0x106] = '\0';
    pcVar3[0x107] = '\0';
  }
LAB_004bb77a:
  uVar5 = 0xffffffff;
  pcVar8 = param_1;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar3 = pcVar3 + 1;
  }
  FUN_0042b840(&DAT_00663498,s_Added__s_to_playlist_00630a34,param_1);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bb6b0, ap_004bb6b0));
