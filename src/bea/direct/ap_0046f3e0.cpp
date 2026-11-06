// auto-ported from 0046f3e0_FUN_0046f3e0.c (FUN_0046f3e0, 71 bytes) by tools/autoport.py
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

static undefined4 BEA_THISCALL ap_0046f3e0(void * this_)
{
  uint32_t eax_in = 0;
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)((int)this_ + 0x28) < 4) {
    iVar1 = 0;
    puVar2 = (undefined4 *)((int)this_ + 0x2b4);
    do {
      if ((void *)*puVar2 != (void *)0x0) {
        FUN_0042e750(bea_arg((void *)*puVar2), bea_arg(0), bea_arg(iVar1));
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar1 < 4)));
    *(undefined4 *)((int)this_ + 0x28) = 8;
    *(undefined4 *)((int)this_ + 0x48) = 0x40000000;
    eax_in = FUN_0046fb00(bea_arg(this_), bea_arg(0), bea_arg(0));
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046f3e0, ap_0046f3e0));
