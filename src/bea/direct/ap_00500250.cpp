// auto-ported from 00500250_vslot2.c (CVBuffer::vslot2, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CVBuffer;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef int (BEA_THISCALL* FUN_00513770_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513770_t> FUN_00513770 = {(FUN_00513770_t)0x00513770};

static undefined4 BEA_THISCALL ap_00500250(CVBuffer * this_)
{
  int iVar1;
  
  if (*(int *)(this_ + 0x20) == 0) {
    iVar1 = FUN_00513770(bea_arg(&DAT_00855bb0), bea_arg(*(undefined4 *)(this_ + 0x10)), bea_arg(*(undefined4 *)(this_ + 0x14)), bea_arg(*(undefined4 *)(this_ + 0x18)), bea_arg(0), bea_arg(this_ + 8));
    if (iVar1 < 0) {
      return 0x80004005;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500250, ap_00500250));
