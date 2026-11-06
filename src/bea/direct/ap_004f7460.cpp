// auto-ported from 004f7460_FUN_004f7460.c (FUN_004f7460, 77 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_004f74b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f74b0_t> FUN_004f74b0 = {(FUN_004f74b0_t)0x004f74b0};

static void BEA_THISCALL ap_004f7460(void * this_, undefined4 *param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((int)this_ + 0xc);
  iVar3 = *(int *)((int)this_ + 4);
  do {
    if (iVar2 == 0) {
LAB_004f748d:
      iVar2 = *(int *)((int)this_ + 8);
      iVar3 = *(int *)this_;
      *(undefined4 *)(iVar3 + iVar2 * 8) = *param_1;
      *(undefined4 *)(iVar3 + 4 + iVar2 * 8) = param_1[1];
      *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + 1;
      return;
    }
    iVar1 = FUN_004f74b0(bea_arg(this_), bea_arg(iVar3), bea_arg(param_1));
    if (iVar1 != 0) {
      if (iVar2 != 0) {
        return;
      }
      goto LAB_004f748d;
    }
    iVar3 = iVar3 + 6;
    iVar2 = iVar2 + -1;
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f7460, ap_004f7460));
