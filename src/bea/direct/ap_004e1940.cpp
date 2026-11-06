// auto-ported from 004e1940_FUN_004e1940.c (FUN_004e1940, 367 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (25 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083cfa0 GLOBAL_AT(char, 0x0083cfa0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_ERROR__PlayNamedSample_failed_to_006322b8 ((char*)0x006322b8)
#define s_ERROR__Could_not_play_sample___s_006322f0 ((char*)0x006322f0)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_THISCALL* FUN_004e0a00_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e0a00_t> FUN_004e0a00 = {(FUN_004e0a00_t)0x004e0a00};
typedef uint32_t (BEA_THISCALL* FUN_004e0b30_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e0b30_t> FUN_004e0b30 = {(FUN_004e0b30_t)0x004e0b30};
typedef undefined1 (BEA_CDECL* FUN_00517ad0_t)(void);
static const bea_guard<FUN_00517ad0_t> FUN_00517ad0 = {(FUN_00517ad0_t)0x00517ad0};
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static void BEA_THISCALL ap_004e1940(void * this_, int param_1, undefined4 param_2, float param_3, undefined4 param_4, uint param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, float param_10, undefined4 param_11, int param_12)
{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(char *)((int)this_ + 4) == '\0') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar3 = 0;
  iVar2 = param_1;
  do {
    iVar2 = *(int *)(iVar2 + 0xd4);
    iVar3 = iVar3 + 1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  iVar2 = _rand();
  for (iVar2 = iVar2 % iVar3; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    param_1 = *(int *)(param_1 + 0xd4);
  }
  iVar2 = *(int *)(param_1 + 0xc0);
  if (*(int *)(param_1 + 0xd0) == 0) {
    cVar1 = (char)param_5;
    param_5 = CONCAT31(((*(uint32_t*)((char*)&param_5) >> 8) & 0xffffffu),1);
    if (cVar1 != '\0') goto LAB_004e19b1;
  }
  param_5 = param_5 & 0xffffff00;
LAB_004e19b1:
  if ((*(int *)(param_1 + 200) != 0) && (cVar1 = FUN_00517ad0(), cVar1 != '\0')) {
    iVar3 = _rand();
    param_10 = (float)(iVar3 % *(int *)(param_1 + 200)) * 0.01f + param_10;
    if (param_10 < 0.1f) {
      param_10 = 0.1f;
    }
  }
  DAT_0083cfa0 = *(undefined1 *)(param_1 + 0xcc);
  if (*(char *)((int)this_ + 4) != '\0') {
    uVar4 = FUN_004e0a00(bea_arg(this_), bea_arg((char *)(param_1 + 0x40)), bea_arg(0), bea_arg(0));
    if ((int)uVar4 == 0) {
      FUN_00441740(&DAT_0066f580,s_ERROR__PlayNamedSample_failed_to_006322b8,
                   (char *)(param_1 + 0x40));
      DAT_0083cfa0 = 0;
      return;
    }
    FUN_004e0b30(bea_arg(this_), bea_arg((int)uVar4), bea_arg(param_2), bea_arg((float)iVar2 * param_3 * 0.01f), bea_arg(param_4), bea_arg(param_5), bea_arg(param_6), bea_arg(param_7), bea_arg(param_8), bea_arg(param_9), bea_arg(param_10), bea_arg(0), bea_arg(CONCAT31((int3)((ulonglong)uVar4 >> 0x28),param_12 != 0)), bea_arg(param_11));
    DAT_0083cfa0 = 0;
    return;
  }
  FUN_00441740(&DAT_0066f580,s_ERROR__Could_not_play_sample___s_006322f0);
  DAT_0083cfa0 = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e1940, ap_004e1940));
