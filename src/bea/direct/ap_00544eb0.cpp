// auto-ported from 00544eb0_vslot4.c (CDXLandscape::vslot4, 89 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CDXLandscape;
typedef uint32_t (BEA_STDCALL* FUN_00514010_t)(uint32_t);
static const bea_guard<FUN_00514010_t> FUN_00514010 = {(FUN_00514010_t)0x00514010};

static undefined4 BEA_THISCALL ap_00544eb0(CDXLandscape * this_)
{
  int *piVar1;
  
  piVar1 = *(int **)(this_ + 8);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
    *(undefined4 *)(this_ + 8) = 0;
  }
  piVar1 = *(int **)(this_ + 0x10);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
    *(undefined4 *)(this_ + 0x10) = 0;
  }
  piVar1 = *(int **)(this_ + 0xc);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
    *(undefined4 *)(this_ + 0xc) = 0;
  }
  piVar1 = *(int **)(this_ + 0x14);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
    *(undefined4 *)(this_ + 0x14) = 0;
  }
  FUN_00514010(bea_arg(this_ + 0x1c));
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00544eb0, ap_00544eb0));
