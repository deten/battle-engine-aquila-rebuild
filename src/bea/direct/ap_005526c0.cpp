// auto-ported from 005526c0_FUN_005526c0.c (FUN_005526c0, 118 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};

static void BEA_THISCALL ap_005526c0(void * this_, undefined4 param_1, float param_2)
{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (DAT_0089d680 == '\0') {
    iVar1 = *(int *)((int)this_ + 0x5bc);
    iVar4 = 0;
    if (0 < iVar1) {
      pfVar2 = (float *)((int)this_ + 0x10);
      do {
        if (param_2 < *pfVar2) break;
        iVar4 = iVar4 + 1;
        pfVar2 = pfVar2 + 2;
      } while (BEA_LOOP_GUARD((iVar4 < iVar1)));
    }
    iVar1 = iVar1 + -1;
    if (iVar4 < iVar1) {
      puVar3 = (undefined4 *)((int)this_ + iVar1 * 8 + 0x10);
      iVar1 = iVar1 - iVar4;
      do {
        *puVar3 = puVar3[-2];
        FUN_00401000(bea_arg(puVar3 + -1), bea_arg(puVar3[-3]));
        puVar3 = puVar3 + -2;
        iVar1 = iVar1 + -1;
      } while (BEA_LOOP_GUARD((iVar1 != 0)));
    }
    *(float *)((int)this_ + iVar4 * 8 + 0x10) = param_2;
    FUN_00401000(bea_arg((void *)((int)this_ + iVar4 * 8 + 0xc)), bea_arg(param_1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005526c0, ap_005526c0));
