// auto-ported from 0052c3c0_vslot13.c (CD3DApplication::vslot13, 109 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CD3DApplication;
#define DAT_0089c0f8 GLOBAL_AT(int, 0x0089c0f8)
typedef float10 (BEA_STDCALL* FUN_0052cd20_t)(uint32_t);
static const bea_guard<FUN_0052cd20_t> FUN_0052cd20 = {(FUN_0052cd20_t)0x0052cd20};

static void BEA_THISCALL ap_0052c3c0(CD3DApplication * this_, int param_1)
{
  DAT_0089c0f8 = DAT_0089c0f8 + ((-(uint)(param_1 != 0) & 2) - 1);
  *(uint *)(this_ + 0x32e4c) = (uint)(DAT_0089c0f8 == 0);
  if ((param_1 != 0) && (DAT_0089c0f8 == 1)) {
    if (*(int *)(this_ + 0x32e50) == 0) {
      return;
    }
    FUN_0052cd20(bea_arg(2));
  }
  if ((DAT_0089c0f8 == 0) && (*(int *)(this_ + 0x32e50) != 0)) {
    FUN_0052cd20(bea_arg(1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052c3c0, ap_0052c3c0));
