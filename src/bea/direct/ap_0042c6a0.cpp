// auto-ported from 0042c6a0_vslot3.c (CConsoleVariableMenu::vslot3, 170 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define DAT_00665830 GLOBAL_AT(int, 0x00665830)
#define DAT_0066529c GLOBAL_AT(char, 0x0066529c)
#define DAT_00665824 GLOBAL_AT(char, 0x00665824)
#define DAT_00665825 GLOBAL_AT(char, 0x00665825)
#define s_set__s_00625490 ((char*)0x00625490)
typedef uint32_t (BEA_STDCALL* FUN_005159c0_t)(uint32_t);
static const bea_guard<FUN_005159c0_t> FUN_005159c0 = {(FUN_005159c0_t)0x005159c0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_STDCALL ap_0042c6a0(int param_1)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  char (&local_100)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x100 - 0x100);
  pcVar5 = DAT_00665830;
  for (iVar2 = 0; BEA_LOOP_GUARD(((pcVar5 != (char *)0x0 && (param_1 != iVar2)))); iVar2 = iVar2 + 1) {
    pcVar5 = *(char **)(pcVar5 + 0xac);
  }
  FUN_0055de9b(local_100,s_set__s_00625490,pcVar5);
  uVar3 = 0xffffffff;
  pcVar5 = local_100;
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
  pcVar6 = &DAT_0066529c;
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
  DAT_00665824 = DAT_00665824 == '\0';
  if ((bool)DAT_00665824) {
    FUN_005159c0(bea_arg(((void*)0x004295c0)));
    DAT_00665825 = 0;
    return;
  }
  FUN_005159c0(bea_arg(0));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042c6a0, ap_0042c6a0));
