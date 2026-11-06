// auto-ported from 004f9220_vslot58.c (CUnit::vslot58, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
#define DAT_0083da30 GLOBAL_AT(short, 0x0083da30)
typedef uint32_t (BEA_STDCALL* CFEPBEConfig__vslot7_t)(uint32_t);
static const bea_guard<CFEPBEConfig__vslot7_t> CFEPBEConfig__vslot7 = {(CFEPBEConfig__vslot7_t)0x00452b60};

static uint32_t BEA_STDCALL ap_004f9220(int param_1)
{
  int *piVar1;
  int iVar2;
  piVar1 = *(int **)(*(int *)(param_1 + 0x3bc) + 0x5c);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    while (BEA_LOOP_GUARD((iVar2 != 0))) {
      DAT_0083da30 = DAT_0083da30 + 1;
      piVar1 = (int *)piVar1[1];
      if (piVar1 == (int *)0x0) break;
      iVar2 = *piVar1;
    }
  }
  return CFEPBEConfig__vslot7(bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f9220, ap_004f9220));
