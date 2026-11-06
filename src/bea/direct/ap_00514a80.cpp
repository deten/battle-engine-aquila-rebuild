// auto-ported from 00514a80_FUN_00514a80.c (FUN_00514a80, 349 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_008898d8 GLOBAL_AT(int, 0x008898d8)
#define DAT_008898e0 GLOBAL_AT(char, 0x008898e0)
#define DAT_008898f4 GLOBAL_AT(char, 0x008898f4)
#define s_savegames___bes_0063df7c ((char*)0x0063df7c)
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};
typedef int (BEA_CDECL* FUN_0055f5ee_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055f5ee_t> FUN_0055f5ee = {(FUN_0055f5ee_t)0x0055f5ee};
typedef int (BEA_CDECL* FUN_0055f6bb_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055f6bb_t> FUN_0055f6bb = {(FUN_0055f6bb_t)0x0055f6bb};
typedef int (BEA_CDECL* FUN_0055f783_t)(uint32_t);
static const bea_guard<FUN_0055f783_t> FUN_0055f783 = {(FUN_0055f783_t)0x0055f783};

static undefined4 BEA_STDCALL ap_00514a80(undefined4 param_1, int param_2, undefined4 param_3)
{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  char (&local_100)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x100 - 0x100);
  DAT_008898d8 = FUN_0055f5ee(bea_arg(s_savegames___bes_0063df7c), bea_arg(&DAT_008898e0));
  if (DAT_008898d8 != -1) {
    if ((DAT_008898e0 & 0x16) == 0) {
joined_r0x00514b0e:
      while (BEA_LOOP_GUARD((param_2 != 0))) {
        param_2 = param_2 + -1;
        iVar2 = FUN_0055f6bb(bea_arg(DAT_008898d8), bea_arg(&DAT_008898e0));
        while(BEA_LOOP_GUARD(( true ))) {
          if (iVar2 != 0) goto LAB_00514ae8;
          if ((DAT_008898e0 & 0x16) == 0) break;
          iVar2 = FUN_0055f6bb(bea_arg(DAT_008898d8), bea_arg(&DAT_008898e0));
        }
      }
      uVar4 = 0xffffffff;
      pcVar6 = &DAT_008898f4;
      do {
        pcVar7 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar4 = ~uVar4;
      pcVar6 = pcVar7 + -uVar4;
      pcVar7 = local_100;
      for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar6 = local_100;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      local_100[~uVar4 - 5] = '\0';
      uVar3 = FUN_004f7bf0(bea_arg(local_100));
      FUN_0055e64e(bea_arg(param_3), bea_arg(uVar3));
      if (DAT_008898d8 != -1) {
        FUN_0055f783(bea_arg(DAT_008898d8));
        DAT_008898d8 = -1;
      }
      return 0;
    }
    iVar2 = FUN_0055f6bb(bea_arg(DAT_008898d8), bea_arg(&DAT_008898e0));
    while (BEA_LOOP_GUARD((iVar2 == 0))) {
      if ((DAT_008898e0 & 0x16) == 0) goto joined_r0x00514b0e;
      iVar2 = FUN_0055f6bb(bea_arg(DAT_008898d8), bea_arg(&DAT_008898e0));
    }
LAB_00514ae8:
    FUN_0055f783(bea_arg(DAT_008898d8));
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00514a80, ap_00514a80));
