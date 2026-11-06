// auto-ported from 004a2660_FUN_004a2660.c (FUN_004a2660, 945 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x110: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00622dbc GLOBAL_AT(char, 0x00622dbc)
#define DAT_0062f738 GLOBAL_AT(int, 0x0062f738)
#define DAT_0062f710 GLOBAL_AT(undefined, 0x0062f710)
#define DAT_0062f70c GLOBAL_AT(undefined, 0x0062f70c)
#define s___NumBlocks_0062f728 ((char*)0x0062f728)
#define s___Heap__d_0062f744 ((char*)0x0062f744)
#define s___Size_0062f73c ((char*)0x0062f73c)
#define s___Heap__d_Block__d_0062f714 ((char*)0x0062f714)
#define s_Unknown_0062f700 ((char*)0x0062f700)
typedef uint32_t (BEA_THISCALL* FUN_00548a70_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548a70_t> FUN_00548a70 = {(FUN_00548a70_t)0x00548a70};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_004a2660(void * this_, void *param_1, int param_2)
{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined *puVar9;

  alignas(16) uint8_t bea_frame_[0x110] = {};   // the original stack frame (emulate_frame)
  int &local_104 = *reinterpret_cast<int *>(bea_frame_ + 0x110 - 0x104);
  char (&local_100)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x110 - 0x100);
  local_104 = 0;
  iVar4 = *(int *)((int)this_ + 4);
  uVar6 = *(int *)((int)this_ + 8) + iVar4;
  uVar5 = *(uint *)(iVar4 + 4);
  uVar1 = (uVar5 & 0xfffffff0) + 0x10 + iVar4;
  while (BEA_LOOP_GUARD((uVar1 < uVar6))) {
    if (*(int *)(iVar4 + 8) != 100) {
      local_104 = local_104 + 1;
    }
    iVar4 = iVar4 + 0x10 + (uVar5 & 0xfffffff0);
    uVar5 = *(uint *)(iVar4 + 4);
    uVar1 = (uVar5 & 0xfffffff0) + 0x10 + iVar4;
  }
  FUN_0055de9b(local_100,s___Heap__d_0062f744,param_2);
  uVar6 = 0xffffffff;
  pcVar8 = local_100;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (BEA_LOOP_GUARD((cVar3 != '\0')));
  FUN_00548a70(bea_arg(param_1), bea_arg(local_100), bea_arg(~uVar6 - 1));
  FUN_0055de9b(local_100,&DAT_00622dbc,(char *)((int)this_ + 0x878));
  uVar6 = 0xffffffff;
  pcVar8 = local_100;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (BEA_LOOP_GUARD((cVar3 != '\0')));
  FUN_00548a70(bea_arg(param_1), bea_arg(local_100), bea_arg(~uVar6 - 1));
  FUN_0055de9b(local_100,s___Size_0062f73c);
  uVar6 = 0xffffffff;
  pcVar8 = local_100;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (BEA_LOOP_GUARD((cVar3 != '\0')));
  FUN_00548a70(bea_arg(param_1), bea_arg(local_100), bea_arg(~uVar6 - 1));
  FUN_0055de9b(local_100,&DAT_0062f738,*(int *)((int)this_ + 8));
  uVar6 = 0xffffffff;
  pcVar8 = local_100;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (BEA_LOOP_GUARD((cVar3 != '\0')));
  FUN_00548a70(bea_arg(param_1), bea_arg(local_100), bea_arg(~uVar6 - 1));
  FUN_0055de9b(local_100,s___NumBlocks_0062f728);
  uVar6 = 0xffffffff;
  pcVar8 = local_100;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (BEA_LOOP_GUARD((cVar3 != '\0')));
  FUN_00548a70(bea_arg(param_1), bea_arg(local_100), bea_arg(~uVar6 - 1));
  FUN_0055de9b(local_100,&DAT_0062f738,local_104);
  uVar6 = 0xffffffff;
  pcVar8 = local_100;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (BEA_LOOP_GUARD((cVar3 != '\0')));
  FUN_00548a70(bea_arg(param_1), bea_arg(local_100), bea_arg(~uVar6 - 1));
  piVar7 = *(int **)((int)this_ + 4);
  if ((piVar7[1] & 0xfffffff0U) + 0x10 + (int)piVar7 < (uint)(*(int *)((int)this_ + 8) + (int)piVar7)
     ) {
    do {
      if (piVar7[2] != 100) {
        FUN_0055de9b(local_100,s___Heap__d_Block__d_0062f714,param_2,local_104);
        uVar6 = 0xffffffff;
        pcVar8 = local_100;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (BEA_LOOP_GUARD((cVar3 != '\0')));
        FUN_00548a70(bea_arg(param_1), bea_arg(local_100), bea_arg(~uVar6 - 1));
        if (*piVar7 == 0x4f69ea21) {
          puVar9 = &DAT_0062f710;
        }
        else {
          puVar9 = &DAT_0062f70c;
        }
        FUN_0055de9b(local_100,puVar9);
        uVar6 = 0xffffffff;
        pcVar8 = local_100;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (BEA_LOOP_GUARD((cVar3 != '\0')));
        FUN_00548a70(bea_arg(param_1), bea_arg(local_100), bea_arg(~uVar6 - 1));
        FUN_0055de9b(local_100,&DAT_0062f738,piVar7[1] & 0xfffffff0);
        uVar6 = 0xffffffff;
        pcVar8 = local_100;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (BEA_LOOP_GUARD((cVar3 != '\0')));
        FUN_00548a70(bea_arg(param_1), bea_arg(local_100), bea_arg(~uVar6 - 1));
        FUN_0055de9b(local_100,&DAT_0062f738,(piVar7[1] & 0xfffffff0U) + 0x10);
        uVar6 = 0xffffffff;
        pcVar8 = local_100;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (BEA_LOOP_GUARD((cVar3 != '\0')));
        FUN_00548a70(bea_arg(param_1), bea_arg(local_100), bea_arg(~uVar6 - 1));
        FUN_0055de9b(local_100,&DAT_0062f738,(int)(piVar7 + 4));
        uVar6 = 0xffffffff;
        pcVar8 = local_100;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (BEA_LOOP_GUARD((cVar3 != '\0')));
        FUN_00548a70(bea_arg(param_1), bea_arg(local_100), bea_arg(~uVar6 - 1));
        FUN_0055de9b(local_100,&DAT_0062f738,piVar7[2]);
        uVar6 = 0xffffffff;
        pcVar8 = local_100;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (BEA_LOOP_GUARD((cVar3 != '\0')));
        FUN_00548a70(bea_arg(param_1), bea_arg(local_100), bea_arg(~uVar6 - 1));
        if ((~piVar7[1] & 1U) == 0) {
          puVar9 = &DAT_0062f70c;
        }
        else {
          puVar9 = &DAT_0062f710;
        }
        FUN_0055de9b(local_100,puVar9);
        uVar6 = 0xffffffff;
        pcVar8 = local_100;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (BEA_LOOP_GUARD((cVar3 != '\0')));
        FUN_00548a70(bea_arg(param_1), bea_arg(local_100), bea_arg(~uVar6 - 1));
        FUN_0055de9b(local_100,s_Unknown_0062f700);
        uVar6 = 0xffffffff;
        pcVar8 = local_100;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (BEA_LOOP_GUARD((cVar3 != '\0')));
        FUN_00548a70(bea_arg(param_1), bea_arg(local_100), bea_arg(~uVar6 - 1));
        FUN_0055de9b(local_100,&DAT_0062f70c);
        uVar6 = 0xffffffff;
        pcVar8 = local_100;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (BEA_LOOP_GUARD((cVar3 != '\0')));
        FUN_00548a70(bea_arg(param_1), bea_arg(local_100), bea_arg(~uVar6 - 1));
        local_104 = local_104 + 1;
      }
      puVar2 = (uint *)((int)piVar7 + (piVar7[1] & 0xfffffff0U) + 0x14);
      piVar7 = (int *)((int)piVar7 + (piVar7[1] & 0xfffffff0U) + 0x10);
    } while (BEA_LOOP_GUARD(((*puVar2 & 0xfffffff0) + 0x10 + (int)piVar7 <
             (uint)(*(int *)((int)this_ + 8) + *(int *)((int)this_ + 4)))));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a2660, ap_004a2660));
