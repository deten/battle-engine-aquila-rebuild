// auto-ported from 004e5850_FUN_004e5850.c (FUN_004e5850, 68 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};

static void * BEA_THISCALL ap_004e5850(void * this_, int *param_1)
{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)this_ = 0;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
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
BEA_HOOKS(BEA_HOOK(0x004e5850, ap_004e5850));
