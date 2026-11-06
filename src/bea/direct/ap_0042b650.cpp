// auto-ported from 0042b650_FUN_0042b650.c (FUN_0042b650, 419 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00624624 GLOBAL_AT(char, 0x00624624)
#define DAT_00622d9c GLOBAL_AT(int, 0x00622d9c)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s__s__untraceable_status_line______00625294 ((char*)0x00625294)
typedef uint32_t (BEA_CDECL* FUN_0042b840_t)(int, undefined4, ...);
static const bea_guard<FUN_0042b840_t> FUN_0042b840 = {(FUN_0042b840_t)0x0042b840};
typedef uint32_t (BEA_THISCALL* FUN_0042c810_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042c810_t> FUN_0042c810 = {(FUN_0042c810_t)0x0042c810};
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};

static void BEA_THISCALL ap_0042b650(void * this_, char *param_1, char *param_2)
{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  char (&local_100)[80] = *reinterpret_cast<char (*)[80]>(bea_frame_ + 0x100 - 0x100);
  undefined1 &local_b0 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x100 - 0xb0);
  if (*(char *)((int)this_ + 0xb3c5) == '\0') {
    return;
  }
  local_100[0] = '\0';
  iVar2 = *(int *)((int)this_ + 0xb3c8) + -1;
  if (0 < iVar2) {
    do {
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_00624624;
      do {
        pcVar9 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar7 = local_100;
      do {
        pcVar8 = pcVar7;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      pcVar7 = pcVar9 + -uVar4;
      pcVar9 = pcVar8 + -1;
      for (uVar6 = uVar4 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      iVar2 = iVar2 + -1;
      for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
    } while (BEA_LOOP_GUARD((iVar2 != 0)));
  }
  uVar4 = 0xffffffff;
  pcVar7 = param_1;
  do {
    pcVar9 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar4 = ~uVar4;
  iVar2 = -1;
  pcVar7 = local_100;
  do {
    pcVar8 = pcVar7;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar7 = pcVar9 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar4 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = local_100;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
joined_r0x0042b6ec:
  if (~uVar4 - 1 < 0x50) {
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_00624624;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar4 = ~uVar4;
    iVar2 = -1;
    pcVar7 = local_100;
    do {
      pcVar8 = pcVar7;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = pcVar8 + -1;
    for (uVar6 = uVar4 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar7 = local_100;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    goto joined_r0x0042b6ec;
  }
  local_b0 = 0;
  iVar5 = 0;
  iVar2 = (int)this_ + 4;
  do {
    iVar3 = FUN_0056e170(bea_arg(iVar2), bea_arg(local_100), bea_arg(0x50));
    if (iVar3 == 0) {
      uVar4 = 0xffffffff;
      *(undefined1 *)((int)this_ + iVar5 * 0x80 + 0x54) = 0;
      goto code_r0x0042b7b5;
    }
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 + 0x80;
  } while (BEA_LOOP_GUARD((iVar5 < 0x3c)));
  FUN_0042b840(this_,s__s__untraceable_status_line______00625294,param_1,param_2);
  cVar1 = *(char *)((int)this_ + 0xb3c4);
  goto joined_r0x0042b7ef;
  while(BEA_LOOP_GUARD(( true ))) {
    uVar4 = uVar4 - 1;
    pcVar7 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar7;
    if (cVar1 == '\0') break;
code_r0x0042b7b5:
    pcVar7 = param_2;
    if (uVar4 == 0) break;
  }
  uVar4 = ~uVar4;
  iVar2 = -1;
  pcVar9 = (char *)((int)this_ + iVar5 * 0x80 + 4);
  do {
    pcVar8 = pcVar9;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar7 = pcVar7 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar4 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  if (iVar5 == 0) {
    FUN_0042b840(this_,&DAT_00622d9c);
  }
  cVar1 = *(char *)((int)this_ + 0xb3c4);
joined_r0x0042b7ef:
  if (cVar1 != '\0') {
    FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042b650, ap_0042b650));
