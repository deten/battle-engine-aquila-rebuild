// auto-ported from 005412e0_FUN_005412e0.c (FUN_005412e0, 331 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (5 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char IAT;
#define DAT_008a9810 GLOBAL_AT(int, 0x008a9810)
#define DAT_008a982c GLOBAL_AT(char, 0x008a982c)
#define DAT_008a97d0 GLOBAL_AT(char, 0x008a97d0)
#define DAT_008a9804 GLOBAL_AT(int, 0x008a9804)
#define DAT_008a9808 GLOBAL_AT(int, 0x008a9808)
#define _DAT_008a9a40 GLOBAL_AT(int, 0x008a9a40)
#define DAT_008a9834 GLOBAL_AT(char, 0x008a9834)
#define DAT_008a9938 GLOBAL_AT(char, 0x008a9938)
#define _DAT_008a9a3c GLOBAL_AT(int, 0x008a9a3c)
typedef DWORD (BEA_THISCALL* FUN_00528d10_t)(uint32_t);
static const bea_guard<FUN_00528d10_t> FUN_00528d10 = {(FUN_00528d10_t)0x00528d10};
typedef uint32_t (BEA_THISCALL* FUN_00528d50_t)(uint32_t);
static const bea_guard<FUN_00528d50_t> FUN_00528d50 = {(FUN_00528d50_t)0x00528d50};
typedef uint32_t (BEA_THISCALL* FUN_00528d70_t)(uint32_t);
static const bea_guard<FUN_00528d70_t> FUN_00528d70 = {(FUN_00528d70_t)0x00528d70};
typedef int (BEA_THISCALL* FUN_00528d90_t)(uint32_t);
static const bea_guard<FUN_00528d90_t> FUN_00528d90 = {(FUN_00528d90_t)0x00528d90};
typedef uint32_t (BEA_THISCALL* FUN_00541430_t)(uint32_t);
static const bea_guard<FUN_00541430_t> FUN_00541430 = {(FUN_00541430_t)0x00541430};
typedef uint32_t (BEA_THISCALL* FUN_00541650_t)(uint32_t);
static const bea_guard<FUN_00541650_t> FUN_00541650 = {(FUN_00541650_t)0x00541650};
typedef uint32_t (BEA_STDCALL* _RADSetMemory_8_t)(uint32_t, uint32_t);
#define _RADSetMemory_8 (*(_RADSetMemory_8_t*)0x005d8320)   /* BINKW32.DLL import, via the IAT */

static void BEA_THISCALL ap_005412e0(void * this_, char *param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5, undefined4 param_6)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  _RADSetMemory_8(bea_arg(((void*)0x00541280)), bea_arg(((void*)0x005412b0)));
  *(undefined4 *)((int)this_ + 0x20) = param_2;
  *(undefined4 *)((int)this_ + 0x24) = param_3;
  if (*(int *)((int)this_ + 8) == 0) {
    iVar2 = FUN_00528d90(bea_arg(&DAT_008a9810));
    if ((iVar2 == 0) && (DAT_008a982c == '\0')) goto LAB_0054137d;
  }
  if (param_5 != 0) {
    iVar2 = FUN_00528d90(bea_arg(&DAT_008a9810));
    if (iVar2 != 0) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar5;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pcVar6 = &DAT_008a97d0;
      for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      DAT_008a9804 = param_4;
      DAT_008a9808 = param_6;
      return;
    }
  }
  FUN_00541650(bea_arg(this_));
LAB_0054137d:
  *(undefined4 *)((int)this_ + 0x28) = param_6;
  _DAT_008a9a40 = param_6;
  FUN_00528d10(bea_arg(&DAT_008a9810));
  uVar3 = 0xffffffff;
  pcVar5 = param_1;
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
  pcVar6 = (char *)&DAT_008a9834;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = (char *)&DAT_008a9938;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  _DAT_008a9a3c = param_4;
  DAT_008a982c = 0;
  if (param_5 == 0) {
    FUN_00528d70(bea_arg(&DAT_008a9810));
  }
  else {
    FUN_00528d50(bea_arg(&DAT_008a9810));
  }
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  if (param_5 == 0) {
    FUN_00541430(bea_arg(this_));
    *(undefined4 *)((int)this_ + 0x2c) = 0xff;
    return;
  }
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005412e0, ap_005412e0));
