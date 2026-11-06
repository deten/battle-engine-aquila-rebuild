// auto-ported from 004e2a90_FUN_004e2a90.c (FUN_004e2a90, 145 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0089698c GLOBAL_AT(char, 0x0089698c)
#define DAT_0083cfe8 GLOBAL_AT(int, 0x0083cfe8)
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static int BEA_CDECL ap_004e2a90(char *param_1, int param_2)
{
  char *pcVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  char (&local_100)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x100 - 0x100);
  if (DAT_0089698c != '\0') {
    bVar4 = false;
    pcVar5 = local_100;
    cVar2 = *param_1;
    while (BEA_LOOP_GUARD((cVar2 != '\0'))) {
      if (cVar2 == '\\') {
        if (!bVar4) {
          *pcVar5 = '\\';
          pcVar5 = pcVar5 + 1;
          bVar4 = true;
        }
      }
      else {
        *pcVar5 = cVar2;
        pcVar5 = pcVar5 + 1;
        bVar4 = false;
      }
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar1;
    }
    *pcVar5 = '\0';
    for (iVar3 = DAT_0083cfe8; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = *(int *)(iVar3 + 0xd8)) {
      iVar6 = FUN_00568390(bea_arg(iVar3), bea_arg(local_100));
      if (iVar6 == 0) {
        if (param_2 == 0) {
          return iVar3;
        }
        param_2 = param_2 + -1;
      }
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e2a90, ap_004e2a90));
