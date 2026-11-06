// auto-ported from 004e1330_FUN_004e1330.c (FUN_004e1330, 44 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
typedef uint32_t (BEA_THISCALL* FUN_00517960_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00517960_t> FUN_00517960 = {(FUN_00517960_t)0x00517960};

static void BEA_THISCALL ap_004e1330(void * this_)
{
  int iVar1;
  
  for (iVar1 = *(int *)((int)this_ + 0xc); BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0x74)) {
    if (*(int *)(iVar1 + 4) != -1) {
      FUN_00517960(bea_arg(&DAT_00896988), bea_arg(iVar1));
    }
    *(undefined4 *)(iVar1 + 0x84) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e1330, ap_004e1330));
