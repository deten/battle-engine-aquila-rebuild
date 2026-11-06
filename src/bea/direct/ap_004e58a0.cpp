// auto-ported from 004e58a0_FUN_004e58a0.c (FUN_004e58a0, 99 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0083d130 GLOBAL_AT(int, 0x0083d130)
typedef uint32_t (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};

static void * BEA_THISCALL ap_004e58a0(void * this_, int *param_1)
{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)this_ + 0xc) != 0) {
    if (*(int *)((int)this_ + 4) != 0) {
      *(undefined4 *)(*(int *)((int)this_ + 4) + 4) = DAT_0083d130;
    }
    DAT_0083d130 = *(undefined4 *)this_;
    *(undefined4 *)this_ = 0;
    *(undefined4 *)((int)this_ + 4) = 0;
    *(undefined4 *)((int)this_ + 0xc) = 0;
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    while (BEA_LOOP_GUARD((iVar2 != 0))) {
      FUN_004e5b20(bea_arg(this_), bea_arg(iVar2));
      piVar1 = (int *)piVar1[1];
      if (piVar1 == (int *)0x0) {
        return this_;
      }
      iVar2 = *piVar1;
    }
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e58a0, ap_004e58a0));
