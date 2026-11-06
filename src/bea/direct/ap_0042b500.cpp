// auto-ported from 0042b500_FUN_0042b500.c (FUN_0042b500, 329 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (16 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00624624 GLOBAL_AT(char, 0x00624624)
#define DAT_0062528c GLOBAL_AT(char, 0x0062528c)
#define DAT_00622dbc GLOBAL_AT(int, 0x00622dbc)
typedef uint32_t (BEA_CDECL* FUN_0042b840_t)(int, undefined4, ...);
static const bea_guard<FUN_0042b840_t> FUN_0042b840 = {(FUN_0042b840_t)0x0042b840};

static void BEA_THISCALL ap_0042b500(void * this_, char *param_1)
{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  char (&local_100)[80] = *reinterpret_cast<char (*)[80]>(bea_frame_ + 0x100 - 0x100);
  undefined1 &local_b0 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x100 - 0xb0);
  if (*(char *)((int)this_ + 0xb3c5) != '\0') {
    iVar5 = *(int *)((int)this_ + 0xb3c8);
    local_100[0] = '\0';
    if (0 < iVar5) {
      do {
        uVar2 = 0xffffffff;
        pcVar6 = &DAT_00624624;
        do {
          pcVar8 = pcVar6;
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          pcVar8 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar8;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        uVar2 = ~uVar2;
        iVar3 = -1;
        pcVar6 = local_100;
        do {
          pcVar7 = pcVar6;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        pcVar6 = pcVar8 + -uVar2;
        pcVar8 = pcVar7 + -1;
        for (uVar4 = uVar2 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar8 = pcVar8 + 4;
        }
        iVar5 = iVar5 + -1;
        for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
          *pcVar8 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar8 = pcVar8 + 1;
        }
      } while (BEA_LOOP_GUARD((iVar5 != 0)));
    }
    uVar2 = 0xffffffff;
    do {
      pcVar6 = param_1;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar6;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar2 = ~uVar2;
    iVar5 = -1;
    pcVar8 = local_100;
    do {
      pcVar7 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar6 = pcVar6 + -uVar2;
    pcVar8 = pcVar7 + -1;
    for (uVar4 = uVar2 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar6 = local_100;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
joined_r0x0042b59c:
    if (~uVar2 - 1 < 0x50) {
      uVar2 = 0xffffffff;
      pcVar6 = &DAT_00624624;
      do {
        pcVar8 = pcVar6;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar2 = ~uVar2;
      iVar5 = -1;
      pcVar6 = local_100;
      do {
        pcVar7 = pcVar6;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      pcVar6 = pcVar8 + -uVar2;
      pcVar8 = pcVar7 + -1;
      for (uVar4 = uVar2 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar2 = 0xffffffff;
      pcVar6 = local_100;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      goto joined_r0x0042b59c;
    }
    uVar2 = 0xffffffff;
    pcVar6 = &DAT_0062528c;
    do {
      pcVar8 = pcVar6;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar2 = ~uVar2;
    local_b0 = 0;
    iVar5 = -1;
    pcVar6 = local_100;
    do {
      pcVar7 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar6 = pcVar8 + -uVar2;
    pcVar8 = pcVar7 + -1;
    for (uVar4 = uVar2 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_0042b840(this_,&DAT_00622dbc,local_100);
    iVar5 = *(int *)((int)this_ + 0xb3c8) + 1;
    *(int *)((int)this_ + 0xb3c8) = iVar5;
    if (0x28 < iVar5) {
      *(undefined4 *)((int)this_ + 0xb3c8) = 0;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042b500, ap_0042b500));
