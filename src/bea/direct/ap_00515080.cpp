// auto-ported from 00515080_FUN_00515080.c (FUN_00515080, 268 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x110: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0063df8c GLOBAL_AT(char, 0x0063df8c)
#define DAT_00629038 GLOBAL_AT(int, 0x00629038)
#define s_savegames__0063df94 ((char*)0x0063df94)
typedef undefined1 * (BEA_CDECL* FUN_004f7d30_t)(void *, ...);
static const bea_guard<FUN_004f7d30_t> FUN_004f7d30 = {(FUN_004f7d30_t)0x004f7d30};
typedef void * (BEA_CDECL* FUN_0055e490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e490_t> FUN_0055e490 = {(FUN_0055e490_t)0x0055e490};
typedef int (BEA_CDECL* FUN_0055e4a3_t)(uint32_t);
static const bea_guard<FUN_0055e4a3_t> FUN_0055e4a3 = {(FUN_0055e4a3_t)0x0055e4a3};
typedef unsigned int (BEA_CDECL* FUN_0055f4d7_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055f4d7_t> FUN_0055f4d7 = {(FUN_0055f4d7_t)0x0055f4d7};

static undefined4 BEA_STDCALL ap_00515080(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5, int *param_6)
{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;

  alignas(16) uint8_t bea_frame_[0x110] = {};   // the original stack frame (emulate_frame)
  char (&local_104)[260] = *reinterpret_cast<char (*)[260]>(bea_frame_ + 0x110 - 0x104);
  uVar4 = 0xffffffff;
  pcVar2 = s_savegames__0063df94;
  do {
    pcVar8 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar4 = ~uVar4;
  pcVar2 = pcVar8 + -uVar4;
  pcVar8 = local_104;
  for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar8 = pcVar8 + 1;
  }
  pcVar2 = (char *)FUN_004f7d30(param_3);
  uVar4 = 0xffffffff;
  do {
    pcVar8 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar2 = local_104;
  do {
    pcVar7 = pcVar2;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar2 = pcVar8 + -uVar4;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar2 = &DAT_0063df8c;
  do {
    pcVar8 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar2 = local_104;
  do {
    pcVar7 = pcVar2;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar2 = pcVar8 + -uVar4;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar8 = pcVar8 + 1;
  }
  iVar6 = FUN_0055e490(bea_arg(local_104), bea_arg(&DAT_00629038));
  if (iVar6 != 0) {
    iVar3 = FUN_0055f4d7(bea_arg(param_4), bea_arg(1), bea_arg(param_5), bea_arg(iVar6));
    FUN_0055e4a3(bea_arg(iVar6));
    if (iVar3 == param_5) {
      *param_6 = iVar3;
      FUN_0055e4a3(bea_arg(iVar6));
      return 0;
    }
    *param_6 = iVar3;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00515080, ap_00515080));
