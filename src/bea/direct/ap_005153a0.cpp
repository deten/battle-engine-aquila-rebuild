// auto-ported from 005153a0_vslot6.c (CPCMusic::vslot6, 267 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x350: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CPCMusic;
#define DAT_0063e004 GLOBAL_AT(char, 0x0063e004)
#define s__s__s_0063dffc ((char*)0x0063dffc)
typedef uint32_t (BEA_THISCALL* FUN_004bb6b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004bb6b0_t> FUN_004bb6b0 = {(FUN_004bb6b0_t)0x004bb6b0};
typedef char* (BEA_CDECL* FUN_004f7c70_t)(uint32_t);
static const bea_guard<FUN_004f7c70_t> FUN_004f7c70 = {(FUN_004f7c70_t)0x004f7c70};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_THISCALL ap_005153a0(CPCMusic * this_, char *param_1, char *param_2)
{
  char cVar1;
  LPCSTR lpFileName;
  HANDLE hFindFile;
  BOOL BVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  _WIN32_FIND_DATAA *lpFindFileData;
  alignas(16) uint8_t bea_frame_[0x350] = {};   // the original stack frame (emulate_frame)
  char (&local_348)[260] = *reinterpret_cast<char (*)[260]>(bea_frame_ + 0x350 - 0x348);
  _WIN32_FIND_DATAA &local_244 = *reinterpret_cast<_WIN32_FIND_DATAA *>(bea_frame_ + 0x350 - 0x244);
  undefined1 (&local_104)[260] = *reinterpret_cast<undefined1 (*)[260]>(bea_frame_ + 0x350 - 0x104);
  uVar3 = 0xffffffff;
  pcVar6 = param_1;
  do {
    pcVar8 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar6 = pcVar8 + -uVar3;
  pcVar8 = local_348;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_0063e004;
  do {
    pcVar8 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  iVar5 = -1;
  pcVar6 = local_348;
  do {
    pcVar7 = pcVar6;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar6 = pcVar8 + -uVar3;
  pcVar8 = pcVar7 + -1;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar6 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  iVar5 = -1;
  pcVar8 = local_348;
  do {
    pcVar7 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar7;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar6 = pcVar6 + -uVar3;
  pcVar8 = pcVar7 + -1;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  lpFindFileData = &local_244;
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  lpFileName = (LPCSTR)FUN_004f7c70(bea_arg(local_348));
  hFindFile = FindFirstFileA(lpFileName,lpFindFileData);
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      FUN_0055de9b(local_104,s__s__s_0063dffc,param_1,local_244.cFileName);
      FUN_004bb6b0(bea_arg(this_), bea_arg(local_104));
      BVar2 = FindNextFileA(hFindFile,&local_244);
    } while (BEA_LOOP_GUARD((BVar2 != 0)));
  }
  return FindClose(hFindFile);
}

// @autoport-registration
// superseded by src/bea/lifted/lift_005153a0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
