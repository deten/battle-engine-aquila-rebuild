// auto-ported from 00503dd0_FUN_00503dd0.c (FUN_00503dd0, 250 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00662b2c GLOBAL_AT(char, 0x00662b2c)
#define DAT_00634554 GLOBAL_AT(int, 0x00634554)
#define DAT_00622d9c GLOBAL_AT(char, 0x00622d9c)
#define s_Unknown___d__0063d0e8 ((char*)0x0063d0e8)
#define s__s___d__0063d0e0 ((char*)0x0063d0e0)
#define PTR_s_f_create_eyespace_vertex_00634074 GLOBAL_AT(void*, 0x00634074)
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_CDECL ap_00503dd0(char *param_1, int *param_2)
{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined **ppuVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  char (&local_100)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x100 - 0x100);
  uVar2 = 0xffffffff;
  pcVar6 = &DAT_00662b2c;
  do {
    pcVar8 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  pcVar6 = pcVar8 + -uVar2;
  pcVar8 = param_1;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  iVar4 = *param_2;
  do {
    if (iVar4 == 0) {
      return;
    }
    FUN_0055de9b(local_100,s_Unknown___d__0063d0e8,iVar4);
    ppuVar5 = &PTR_s_f_create_eyespace_vertex_00634074;
    do {
      if (((ppuVar5[-1] == (undefined *)0x0) && (ppuVar5[1] == (undefined *)*param_2)) &&
         (*ppuVar5 != (char *)0x0)) {
        FUN_0055de9b(local_100,s__s___d__0063d0e0,*ppuVar5,*param_2);
      }
      ppuVar5 = ppuVar5 + 3;
    } while (BEA_LOOP_GUARD((ppuVar5 < &DAT_00634554)));
    uVar2 = 0xffffffff;
    param_2 = param_2 + 1;
    pcVar6 = local_100;
    do {
      pcVar8 = pcVar6;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar6 = param_1;
    do {
      pcVar7 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar6 = pcVar8 + -uVar2;
    pcVar8 = pcVar7 + -1;
    for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
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
    pcVar6 = &DAT_00622d9c;
    do {
      pcVar8 = pcVar6;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar6 = param_1;
    do {
      pcVar7 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar6 = pcVar8 + -uVar2;
    pcVar8 = pcVar7 + -1;
    for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    iVar4 = *param_2;
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_00503dd0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
