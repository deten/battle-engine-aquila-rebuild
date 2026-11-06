// auto-ported from 0054e670_FUN_0054e670.c (FUN_0054e670, 102 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0054e670_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0054e670_t> FUN_0054e670 = {(FUN_0054e670_t)0x0054e670};

static void BEA_THISCALL ap_0054e670(void * this_, int param_1)
{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_4;
  
  iVar1 = param_1;
  if (-1 < *(int *)((int)this_ + 4)) {
    *(undefined4 *)(param_1 + *(int *)((int)this_ + 4) * 4) = *(undefined4 *)this_;
  }
  puVar3 = (undefined4 *)((int)this_ + 0x14);
  local_4 = 2;
  do {
    param_1 = 2;
    do {
      iVar2 = 2;
      do {
        iVar4 = 2;
        do {
          if ((void *)*puVar3 != (void *)0x0) {
            FUN_0054e670(bea_arg((void *)*puVar3), bea_arg(iVar1));
          }
          puVar3 = puVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (BEA_LOOP_GUARD((iVar4 != 0)));
        iVar2 = iVar2 + -1;
      } while (BEA_LOOP_GUARD((iVar2 != 0)));
      param_1 = param_1 + -1;
    } while (BEA_LOOP_GUARD((param_1 != 0)));
    local_4 = local_4 + -1;
  } while (BEA_LOOP_GUARD((local_4 != 0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054e670, ap_0054e670));
