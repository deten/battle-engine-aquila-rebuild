// auto-ported from 004bb7e0_FUN_004bb7e0.c (FUN_004bb7e0, 209 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_00679ec1 GLOBAL_AT(char, 0x00679ec1)
#define s_data_music_BEA_08_Master__wma_006309e4 ((char*)0x006309e4)
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static void BEA_THISCALL ap_004bb7e0(void * this_, int param_1, int param_2)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if ((*(char *)((int)this_ + 8) != '\0') && (param_2 != 0)) {
    if (param_1 == *(int *)((int)this_ + 0x10)) {
      return;
    }
    *(int *)((int)this_ + 0x30) = param_1;
    *(undefined4 *)((int)this_ + 0x28) = 0;
    return;
  }
  if (param_1 == 0) {
    iVar2 = *(int *)((int)this_ + 0xc);
    *(undefined4 *)((int)this_ + 4) = 2;
    *(int *)((int)this_ + 0x10) = iVar2;
    if (iVar2 == 0) goto LAB_004bb856;
    iVar3 = 0;
    for (; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = *(int *)(iVar2 + 0x104)) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = _rand();
    iVar2 = iVar2 % iVar3;
    param_1 = *(int *)((int)this_ + 0xc);
    if (0 < iVar2) {
      do {
        param_1 = *(int *)(param_1 + 0x104);
        iVar2 = iVar2 + -1;
      } while (BEA_LOOP_GUARD((iVar2 != 0)));
    }
  }
  *(int *)((int)this_ + 0x10) = param_1;
LAB_004bb856:
  pcVar4 = *(char **)((int)this_ + 0x10);
  uVar1 = *(undefined4 *)((int)this_ + 0x2c);
  *(undefined4 *)((int)this_ + 0x28) = uVar1;
  if (pcVar4 != (char *)0x0) {
    if ((DAT_00662df4 != 0) || (DAT_00679ec1 != '\0')) {
      pcVar4 = s_data_music_BEA_08_Master__wma_006309e4;
    }
    if (*(char *)((int)this_ + 8) != '\0') {
      bea_vcall<uint32_t>(this_, 0x1c, pcVar4);
      return;
    }
    *(undefined4 *)((int)this_ + 0x34) = uVar1;
    *(undefined4 *)((int)this_ + 0x28) = uVar1;
    bea_vcall<uint32_t>(this_, 0x14, uVar1);
    bea_vcall<uint32_t>(this_, 0x8, pcVar4);
    *(undefined1 *)((int)this_ + 8) = 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bb7e0, ap_004bb7e0));
