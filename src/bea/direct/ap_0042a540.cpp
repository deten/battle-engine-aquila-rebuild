// auto-ported from 0042a540_FUN_0042a540.c (FUN_0042a540, 170 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0062504c GLOBAL_AT(char, 0x0062504c)
#define DAT_00625034 GLOBAL_AT(char, 0x00625034)
#define s_float_0062502c ((char*)0x0062502c)
#define s_DWORD_00625044 ((char*)0x00625044)
#define s_unknown_00625014 ((char*)0x00625014)
#define s_fvector_00625024 ((char*)0x00625024)
#define s_fmatrix_0062501c ((char*)0x0062501c)
#define s_string_0062503c ((char*)0x0062503c)

static void BEA_STDCALL ap_0042a540(int param_1, char *param_2)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  if (iVar2 == 0) {
    pcVar5 = &DAT_0062504c;
LAB_0042a59d:
    uVar3 = 0xffffffff;
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
      *param_2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      param_2 = param_2 + 1;
    }
    return;
  }
  if (iVar2 == 1) {
    pcVar5 = s_DWORD_00625044;
  }
  else {
    if (iVar2 == 2) {
      pcVar5 = s_string_0062503c;
      goto LAB_0042a59d;
    }
    if (iVar2 == 3) {
      pcVar5 = &DAT_00625034;
    }
    else {
      if (iVar2 == 4) {
        pcVar5 = s_float_0062502c;
        goto LAB_0042a59d;
      }
      if (iVar2 == 5) {
        pcVar5 = s_fvector_00625024;
      }
      else {
        if (iVar2 == 6) {
          pcVar5 = s_fmatrix_0062501c;
          goto LAB_0042a59d;
        }
        pcVar5 = s_unknown_00625014;
      }
    }
  }
  uVar3 = 0xffffffff;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *param_2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042a540, ap_0042a540));
