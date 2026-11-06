// auto-ported from 004213c0_FUN_004213c0.c (FUN_004213c0, 112 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
#define DAT_008892d8 GLOBAL_AT(char, 0x008892d8)
#define DAT_00623e24 GLOBAL_AT(int, 0x00623e24)
#define DAT_008892dc GLOBAL_AT(int, 0x008892dc)
typedef int (BEA_STDCALL* FUN_00420b10_t)(uint32_t);
static const bea_guard<FUN_00420b10_t> FUN_00420b10 = {(FUN_00420b10_t)0x00420b10};

static uint32_t BEA_THISCALL ap_004213c0(void * this_, short *param_1)
{
  int *piVar1;
  short *psVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  short *psVar6;
  *(undefined4 *)((int)this_ + 0x2488) = 1;
  pcVar4 = &DAT_008892d8;
  *param_1 = (short)DAT_00623e24 + 0x4bc0;
  psVar6 = param_1 + 1;
  for (iVar3 = 0x92f; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *(undefined4 *)psVar6 = *(undefined4 *)this_;
    this_ = (undefined4 *)((int)this_ + 4);
    psVar6 = psVar6 + 2;
  }
  psVar6 = param_1 + 0x125f;
  iVar3 = DAT_008892dc;
  while (BEA_LOOP_GUARD((iVar3 != -1))) {
    psVar2 = psVar6;
    if (*pcVar4 != '\0') {
      psVar2 = psVar6 + 0x10;
      pcVar5 = pcVar4;
      for (iVar3 = 8; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
        *(undefined4 *)psVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        psVar6 = psVar6 + 2;
      }
    }
    piVar1 = (int *)(pcVar4 + 0x24);
    pcVar4 = pcVar4 + 0x20;
    psVar6 = psVar2;
    iVar3 = *piVar1;
  }
  return FUN_00420b10(bea_arg(psVar6));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004213c0, ap_004213c0));
