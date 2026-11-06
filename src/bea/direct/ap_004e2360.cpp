// auto-ported from 004e2360_FUN_004e2360.c (FUN_004e2360, 410 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s_Follow_don_t_die_tracking____s_00632578 ((char*)0x00632578)
#define s__s__Channel__d__0063260c ((char*)0x0063260c)
#define s_Volume____d___d__006325e0 ((char*)0x006325e0)
#define s_Follow_don_t_die_tracking___TARG_0063254c ((char*)0x0063254c)
#define s_No_tracking_006325d0 ((char*)0x006325d0)
#define s_Follow_and_die_tracking____s_0063252c ((char*)0x0063252c)
#define s_Follow_and_die_tracking___TARGET_00632504 ((char*)0x00632504)
#define s_SIP_tracking____s_006325bc ((char*)0x006325bc)
#define s_SIP_tracking___TARGET_DEAD_0063259c ((char*)0x0063259c)
#define s__no_sound__0063261c ((char*)0x0063261c)
#define s________s__no_channel__006325f4 ((char*)0x006325f4)
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_004e2360(void * this_, int param_1, char *param_2)
{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  char (&local_100)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x100 - 0x100);
  piVar2 = *(int **)((int)this_ + 0xc);
  do {
    if (piVar2 == (int *)0x0) {
LAB_004e2384:
      FUN_0055de9b(param_2,s__no_sound__0063261c);
      return;
    }
    if (param_1 < 1) {
      if ((piVar2 != (int *)0x0) && ((char)piVar2[2] != '\0')) {
        if (piVar2[1] < 0) {
          iVar4 = piVar2[3];
          pcVar7 = s________s__no_channel__006325f4;
        }
        else {
          iVar4 = piVar2[3];
          pcVar7 = s__s__Channel__d__0063260c;
        }
        FUN_0055de9b(param_2,pcVar7,(char *)(iVar4 + 8));
        FUN_0055de9b(local_100,s_Volume____d___d__006325e0,piVar2[0x19],piVar2[0x1a]);
        uVar3 = 0xffffffff;
        pcVar7 = local_100;
        break;
      }
      goto LAB_004e2384;
    }
    piVar2 = (int *)piVar2[0x1d];
    param_1 = param_1 + -1;
  } while(BEA_LOOP_GUARD(( true )));
  while(BEA_LOOP_GUARD(( true ))) {
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
    if (cVar1 == '\0') break;
    pcVar8 = pcVar7;
    if (uVar3 == 0) break;
  }
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar7 = param_2;
  do {
    pcVar6 = pcVar7;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar7 = pcVar8 + -uVar3;
  pcVar8 = pcVar6 + -1;
  for (uVar5 = uVar3 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  iVar4 = piVar2[4];
  if (iVar4 == 0) {
    pcVar7 = s_No_tracking_006325d0;
  }
  else if (iVar4 == 1) {
    if ((int *)*piVar2 != (int *)0x0) {
      pcVar7 = (char *)bea_vcall<uint32_t>(*piVar2, 0xa4);
      pcVar8 = s_SIP_tracking____s_006325bc;
      goto LAB_004e24e4;
    }
    pcVar7 = s_SIP_tracking___TARGET_DEAD_0063259c;
  }
  else if (iVar4 == 3) {
    if ((int *)*piVar2 != (int *)0x0) {
      pcVar7 = (char *)bea_vcall<uint32_t>(*piVar2, 0xa4);
      pcVar8 = s_Follow_don_t_die_tracking____s_00632578;
LAB_004e24e4:
      FUN_0055de9b(local_100,pcVar8,pcVar7);
      goto LAB_004e248f;
    }
    pcVar7 = s_Follow_don_t_die_tracking___TARG_0063254c;
  }
  else {
    if (iVar4 != 2) {
      return;
    }
    if ((int *)*piVar2 != (int *)0x0) {
      pcVar7 = (char *)bea_vcall<uint32_t>(*piVar2, 0xa4);
      pcVar8 = s_Follow_and_die_tracking____s_0063252c;
      goto LAB_004e24e4;
    }
    pcVar7 = s_Follow_and_die_tracking___TARGET_00632504;
  }
  FUN_0055de9b(local_100,pcVar7);
LAB_004e248f:
  uVar3 = 0xffffffff;
  pcVar7 = local_100;
  do {
    pcVar8 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  iVar4 = -1;
  do {
    pcVar7 = param_2;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar7;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar8 = pcVar8 + -uVar3;
  pcVar7 = pcVar7 + -1;
  for (uVar5 = uVar3 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004e2360.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
