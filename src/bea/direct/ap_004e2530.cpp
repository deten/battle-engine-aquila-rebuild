// auto-ported from 004e2530_FUN_004e2530.c (FUN_004e2530, 1374 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x250: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define DAT_0083cfe8 GLOBAL_AT(int, 0x0083cfe8)
#define s_C__dev_ONSLAUGHT2_SoundManager_c_00632428 ((char*)0x00632428)
typedef void* (BEA_THISCALL* FUN_00547d70_t)(uint32_t);
static const bea_guard<FUN_00547d70_t> FUN_00547d70 = {(FUN_00547d70_t)0x00547d70};
typedef uint32_t (BEA_THISCALL* FUN_00547d90_t)(uint32_t);
static const bea_guard<FUN_00547d90_t> FUN_00547d90 = {(FUN_00547d90_t)0x00547d90};
typedef undefined4 (BEA_THISCALL* FUN_00547ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00547ec0_t> FUN_00547ec0 = {(FUN_00547ec0_t)0x00547ec0};
typedef uint (BEA_THISCALL* FUN_00548820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548820_t> FUN_00548820 = {(FUN_00548820_t)0x00548820};
typedef undefined4 (BEA_THISCALL* FUN_00548c00_t)(uint32_t);
static const bea_guard<FUN_00548c00_t> FUN_00548c00 = {(FUN_00548c00_t)0x00548c00};
typedef undefined4 (BEA_THISCALL* FUN_00548d30_t)(uint32_t);
static const bea_guard<FUN_00548d30_t> FUN_00548d30 = {(FUN_00548d30_t)0x00548d30};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_0055e2a6_t)(uint32_t);
static const bea_guard<FUN_0055e2a6_t> FUN_0055e2a6 = {(FUN_0055e2a6_t)0x0055e2a6};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static uint32_t BEA_CDECL ap_004e2530(undefined4 param_1)
{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  alignas(16) uint8_t bea_frame_[0x250] = {};   // the original stack frame (emulate_frame)
  int &local_248 = *reinterpret_cast<int *>(bea_frame_ + 0x250 - 0x248);
  undefined4 &local_244 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x250 - 0x244);
  char (&local_240)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x250 - 0x240);
  undefined1 (&local_140)[308] = *reinterpret_cast<undefined1 (*)[308]>(bea_frame_ + 0x250 - 0x140);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x250 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x250 - 0x4);
  FUN_00547d70(bea_arg(local_140));
  FUN_00547ec0(bea_arg(local_140), bea_arg(param_1), bea_arg(0x11), bea_arg(1), bea_arg(0));
  local_240[0] = '#';
  do {
    iVar3 = FUN_00548d30(bea_arg(local_140));
    if (iVar3 != 0) break;
    FUN_00548820(bea_arg(local_140), bea_arg(local_240), bea_arg(0x100));
    uVar7 = 0xffffffff;
    pcVar4 = local_240;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    local_240[~uVar7 - 2] = '\0';
  } while (BEA_LOOP_GUARD((local_240[0] == '#')));
  local_244 = FUN_0055e2a6(bea_arg(local_240));
  local_240[0] = '#';
  do {
    iVar3 = FUN_00548d30(bea_arg(local_140));
    if (iVar3 != 0) break;
    FUN_00548820(bea_arg(local_140), bea_arg(local_240), bea_arg(0x100));
    uVar7 = 0xffffffff;
    pcVar4 = local_240;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    local_240[~uVar7 - 2] = '\0';
  } while (BEA_LOOP_GUARD((local_240[0] == '#')));
  local_248 = FUN_0055e2a6(bea_arg(local_240));
  if (0 < local_248) {
    do {
      pcVar4 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xdc), bea_arg(0x4a), bea_arg(s_C__dev_ONSLAUGHT2_SoundManager_c_00632428), bea_arg(0x61e));
      if (pcVar4 == (char *)0x0) {
        pcVar4 = (char *)0x0;
      }
      else {
        pcVar4[0xd4] = '\0';
        pcVar4[0xd5] = '\0';
        pcVar4[0xd6] = '\0';
        pcVar4[0xd7] = '\0';
        *(char **)(pcVar4 + 0xd8) = DAT_0083cfe8;
        DAT_0083cfe8 = pcVar4;
      }
      local_240[0] = '#';
      do {
        iVar3 = FUN_00548d30(bea_arg(local_140));
        if (iVar3 != 0) break;
        FUN_00548820(bea_arg(local_140), bea_arg(local_240), bea_arg(0x100));
        uVar7 = 0xffffffff;
        pcVar9 = local_240;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        local_240[~uVar7 - 2] = '\0';
      } while (BEA_LOOP_GUARD((local_240[0] == '#')));
      uVar7 = 0xffffffff;
      pcVar9 = local_240;
      do {
        pcVar10 = pcVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar7 = ~uVar7;
      pcVar9 = pcVar10 + -uVar7;
      pcVar10 = pcVar4;
      for (uVar8 = uVar7 >> 2; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      local_240[0] = '#';
      do {
        iVar3 = FUN_00548d30(bea_arg(local_140));
        if (iVar3 != 0) break;
        FUN_00548820(bea_arg(local_140), bea_arg(local_240), bea_arg(0x100));
        uVar7 = 0xffffffff;
        pcVar9 = local_240;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        local_240[~uVar7 - 2] = '\0';
      } while (BEA_LOOP_GUARD((local_240[0] == '#')));
      uVar7 = 0xffffffff;
      pcVar9 = local_240;
      do {
        pcVar10 = pcVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar7 = ~uVar7;
      pcVar9 = pcVar10 + -uVar7;
      pcVar10 = pcVar4 + 0x40;
      for (uVar8 = uVar7 >> 2; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      local_240[0] = '#';
      do {
        iVar3 = FUN_00548d30(bea_arg(local_140));
        if (iVar3 != 0) break;
        FUN_00548820(bea_arg(local_140), bea_arg(local_240), bea_arg(0x100));
        uVar7 = 0xffffffff;
        pcVar9 = local_240;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        local_240[~uVar7 - 2] = '\0';
      } while (BEA_LOOP_GUARD((local_240[0] == '#')));
      uVar7 = 0xffffffff;
      pcVar9 = local_240;
      do {
        pcVar10 = pcVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar7 = ~uVar7;
      pcVar9 = pcVar10 + -uVar7;
      pcVar10 = pcVar4 + 0x80;
      for (uVar8 = uVar7 >> 2; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      local_240[0] = '#';
      do {
        iVar3 = FUN_00548d30(bea_arg(local_140));
        if (iVar3 != 0) break;
        FUN_00548820(bea_arg(local_140), bea_arg(local_240), bea_arg(0x100));
        uVar7 = 0xffffffff;
        pcVar9 = local_240;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        local_240[~uVar7 - 2] = '\0';
      } while (BEA_LOOP_GUARD((local_240[0] == '#')));
      uVar5 = FUN_0055e2a6(bea_arg(local_240));
      *(undefined4 *)(pcVar4 + 0xc0) = uVar5;
      local_240[0] = '#';
      do {
        iVar3 = FUN_00548d30(bea_arg(local_140));
        if (iVar3 != 0) break;
        FUN_00548820(bea_arg(local_140), bea_arg(local_240), bea_arg(0x100));
        uVar7 = 0xffffffff;
        pcVar9 = local_240;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        local_240[~uVar7 - 2] = '\0';
      } while (BEA_LOOP_GUARD((local_240[0] == '#')));
      uVar5 = FUN_0055e2a6(bea_arg(local_240));
      *(undefined4 *)(pcVar4 + 0xc4) = uVar5;
      local_240[0] = '#';
      do {
        iVar3 = FUN_00548d30(bea_arg(local_140));
        if (iVar3 != 0) break;
        FUN_00548820(bea_arg(local_140), bea_arg(local_240), bea_arg(0x100));
        uVar7 = 0xffffffff;
        pcVar9 = local_240;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        local_240[~uVar7 - 2] = '\0';
      } while (BEA_LOOP_GUARD((local_240[0] == '#')));
      uVar5 = FUN_0055e2a6(bea_arg(local_240));
      iVar3 = local_244;
      *(undefined4 *)(pcVar4 + 200) = uVar5;
      if (local_244 < 0x65) {
LAB_004e2911:
        pcVar4[0xd0] = '\0';
        pcVar4[0xd1] = '\0';
        pcVar4[0xd2] = '\0';
        pcVar4[0xd3] = '\0';
      }
      else {
        local_240[0] = '#';
        do {
          iVar6 = FUN_00548d30(bea_arg(local_140));
          if (iVar6 != 0) break;
          FUN_00548820(bea_arg(local_140), bea_arg(local_240), bea_arg(0x100));
          uVar7 = 0xffffffff;
          pcVar9 = local_240;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (BEA_LOOP_GUARD((cVar1 != '\0')));
          local_240[~uVar7 - 2] = '\0';
        } while (BEA_LOOP_GUARD((local_240[0] == '#')));
        if (local_240[0] != '1') goto LAB_004e2911;
        pcVar4[0xd0] = '\x01';
        pcVar4[0xd1] = '\0';
        pcVar4[0xd2] = '\0';
        pcVar4[0xd3] = '\0';
      }
      if (iVar3 < 0x67) {
LAB_004e2971:
        pcVar4[0xcc] = '\0';
      }
      else {
        local_240[0] = '#';
        do {
          iVar3 = FUN_00548d30(bea_arg(local_140));
          if (iVar3 != 0) break;
          FUN_00548820(bea_arg(local_140), bea_arg(local_240), bea_arg(0x100));
          uVar7 = 0xffffffff;
          pcVar9 = local_240;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (BEA_LOOP_GUARD((cVar1 != '\0')));
          local_240[~uVar7 - 2] = '\0';
        } while (BEA_LOOP_GUARD((local_240[0] == '#')));
        if (local_240[0] != '1') goto LAB_004e2971;
        pcVar4[0xcc] = '\x01';
      }
      local_240[0] = '#';
      do {
        iVar3 = FUN_00548d30(bea_arg(local_140));
        if (iVar3 != 0) break;
        FUN_00548820(bea_arg(local_140), bea_arg(local_240), bea_arg(0x100));
        uVar7 = 0xffffffff;
        pcVar9 = local_240;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        local_240[~uVar7 - 2] = '\0';
      } while (BEA_LOOP_GUARD((local_240[0] == '#')));
      pcVar10 = (char *)0x0;
      pcVar9 = DAT_0083cfe8;
      if (DAT_0083cfe8 != (char *)0x0) {
        do {
          if (pcVar10 != (char *)0x0) goto LAB_004e29ee;
          iVar3 = FUN_00568390(bea_arg(pcVar9), bea_arg(pcVar4));
          if ((iVar3 == 0) && (pcVar9 != pcVar4)) {
            pcVar10 = pcVar9;
          }
          pcVar9 = *(char **)(pcVar9 + 0xd8);
        } while (BEA_LOOP_GUARD((pcVar9 != (char *)0x0)));
        if (pcVar10 != (char *)0x0) {
LAB_004e29ee:
          pcVar9 = *(char **)(pcVar10 + 0xd4);
          while (BEA_LOOP_GUARD((pcVar2 = pcVar9, pcVar2 != (char *)0x0))) {
            pcVar10 = pcVar2;
            pcVar9 = *(char **)(pcVar2 + 0xd4);
          }
          *(char **)(pcVar10 + 0xd4) = pcVar4;
          pcVar9 = (char *)0x0;
          for (pcVar10 = DAT_0083cfe8; BEA_LOOP_GUARD((pcVar10 != (char *)0x0)); pcVar10 = *(char **)(pcVar10 + 0xd8))
          {
            if (pcVar10 == pcVar4) {
              if (pcVar9 == (char *)0x0) {
                DAT_0083cfe8 = *(char **)(pcVar4 + 0xd8);
              }
              else {
                *(undefined4 *)(pcVar9 + 0xd8) = *(undefined4 *)(pcVar4 + 0xd8);
              }
            }
            pcVar9 = pcVar10;
          }
        }
      }
      local_248 = local_248 + -1;
    } while (BEA_LOOP_GUARD((local_248 != 0)));
  }
  FUN_00548c00(bea_arg(local_140));
  return FUN_00547d90(bea_arg(local_140));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004e2530.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
