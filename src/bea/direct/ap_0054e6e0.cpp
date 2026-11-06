// auto-ported from 0054e6e0_FUN_0054e6e0.c (FUN_0054e6e0, 176 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_0054e6e0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0054e6e0_t> FUN_0054e6e0 = {(FUN_0054e6e0_t)0x0054e6e0};

static int BEA_THISCALL ap_0054e6e0(void * this_, int *param_1, uint param_2)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  uVar1 = param_2;
  iVar3 = 0;
  if (*(int *)((int)this_ + 0xc) == 0) {
    puVar4 = (undefined4 *)((int)this_ + 0x14);
    local_4 = 2;
    do {
      local_8 = 2;
      do {
        param_2 = 2;
        do {
          iVar5 = 2;
          do {
            if ((void *)*puVar4 != (void *)0x0) {
              iVar2 = FUN_0054e6e0(bea_arg((void *)*puVar4), bea_arg(param_1), bea_arg(uVar1));
              iVar3 = iVar3 + iVar2;
            }
            puVar4 = puVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (BEA_LOOP_GUARD((iVar5 != 0)));
          param_2 = param_2 + -1;
        } while (BEA_LOOP_GUARD((param_2 != 0)));
        local_8 = local_8 + -1;
      } while (BEA_LOOP_GUARD((local_8 != 0)));
      local_4 = local_4 + -1;
    } while (BEA_LOOP_GUARD((local_4 != 0)));
    return iVar3;
  }
  if (param_2 <= *(uint *)((int)this_ + 8)) {
    iVar3 = *param_1;
    *(undefined4 *)((int)this_ + 0x10) = 1;
    *(int *)((int)this_ + 4) = iVar3;
    *param_1 = *param_1 + 1;
    iVar3 = *(int *)((int)this_ + 8);
    *(undefined4 *)((int)this_ + 8) = 0;
    return iVar3;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054e6e0, ap_0054e6e0));
