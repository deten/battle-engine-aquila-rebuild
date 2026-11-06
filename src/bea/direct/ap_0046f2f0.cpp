// auto-ported from 0046f2f0_FUN_0046f2f0.c (FUN_0046f2f0, 108 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0042e750_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042e750_t> FUN_0042e750 = {(FUN_0042e750_t)0x0042e750};
typedef uint32_t (BEA_THISCALL* FUN_0046fb00_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0046fb00_t> FUN_0046fb00 = {(FUN_0046fb00_t)0x0046fb00};

static undefined4 BEA_THISCALL ap_0046f2f0(void * this_)
{
  uint32_t eax_in = 0;
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)((int)this_ + 0x28) < 4) {
    iVar2 = 0;
    puVar3 = (undefined4 *)((int)this_ + 0x2b4);
    do {
      if ((void *)*puVar3 != (void *)0x0) {
        FUN_0042e750(bea_arg((void *)*puVar3), bea_arg(0), bea_arg(iVar2));
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < 4)));
    *(undefined4 *)((int)this_ + 0x28) = 5;
    if ((*(int *)((int)this_ + 0x30) != 0x2e5) && (*(int *)((int)this_ + 0x30) != 0x2e6)) {
      *(undefined4 *)((int)this_ + 0x48) = 0x40a00000;
      uVar1 = FUN_0046fb00(bea_arg(this_), bea_arg(0), bea_arg(0));
      return uVar1;
    }
    *(undefined4 *)((int)this_ + 0x48) = 0;
    eax_in = FUN_0046fb00(bea_arg(this_), bea_arg(0), bea_arg(0));
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046f2f0, ap_0046f2f0));
