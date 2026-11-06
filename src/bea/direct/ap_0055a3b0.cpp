// auto-ported from 0055a3b0_vslot4.c (CDXTrees::vslot4, 73 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDXTrees;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00500460_t)(uint32_t);
static const bea_guard<FUN_00500460_t> FUN_00500460 = {(FUN_00500460_t)0x00500460};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_0055a3b0(CDXTrees * this_)
{
  void *pvVar1;
  
  pvVar1 = *(void **)(this_ + 8);
  if (pvVar1 != (void *)0x0) {
    FUN_00500460(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    *(undefined4 *)(this_ + 8) = 0;
  }
  pvVar1 = *(void **)(this_ + 0xc);
  if (pvVar1 != (void *)0x0) {
    FUN_00500460(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    *(undefined4 *)(this_ + 0xc) = 0;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0055a3b0, ap_0055a3b0));
