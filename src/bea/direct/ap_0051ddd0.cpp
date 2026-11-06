// auto-ported from 0051ddd0_FUN_0051ddd0.c (FUN_0051ddd0, 138 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef int (BEA_CDECL* FUN_0044ecf0_t)(void);
static const bea_guard<FUN_0044ecf0_t> FUN_0044ecf0 = {(FUN_0044ecf0_t)0x0044ecf0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};

static void BEA_THISCALL ap_0051ddd0(void * this_, int param_1, int param_2)
{
  int *piVar1;
  int iVar2;
  
  if (param_2 != -1) {
    if (param_1 == 0x2a) {
      iVar2 = FUN_0044ecf0();
      if (1 < iVar2) {
        piVar1 = (int *)((int)this_ + param_2 * 4 + 0x18);
        *piVar1 = *piVar1 + 1;
        iVar2 = FUN_0044ecf0();
        if (iVar2 + -1 < *(int *)((int)this_ + param_2 * 4 + 0x18)) {
          *(undefined4 *)((int)this_ + param_2 * 4 + 0x18) = 0;
        }
        FUN_00468770(0);
        *(undefined4 *)((int)this_ + param_2 * 4 + 0x20) = 0x3f800000;
      }
    }
    else if (param_1 == 0x2b) {
      iVar2 = FUN_0044ecf0();
      if (1 < iVar2) {
        iVar2 = *(int *)((int)this_ + param_2 * 4 + 0x18) + -1;
        *(int *)((int)this_ + param_2 * 4 + 0x18) = iVar2;
        if (iVar2 < 0) {
          iVar2 = FUN_0044ecf0();
          *(int *)((int)this_ + param_2 * 4 + 0x18) = iVar2 + -1;
        }
        FUN_00468770(0);
        *(undefined4 *)((int)this_ + param_2 * 4 + 0x28) = 0x3f800000;
        return;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051ddd0, ap_0051ddd0));
