// auto-ported from 004884f0_vslot2.c (CIBuffer::vslot2, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CIBuffer;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef uint32_t (BEA_THISCALL* FUN_005137d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005137d0_t> FUN_005137d0 = {(FUN_005137d0_t)0x005137d0};

static undefined4 BEA_THISCALL ap_004884f0(CIBuffer * this_)
{
  int iVar1;
  
  if (*(int *)(this_ + 0x18) == 0) {
    iVar1 = FUN_005137d0(bea_arg(&DAT_00855bb0), bea_arg(*(undefined4 *)(this_ + 0xc)), bea_arg(*(undefined4 *)(this_ + 0x10)), bea_arg(*(undefined4 *)(this_ + 0x14)), bea_arg(0), bea_arg(this_ + 8));
    if (iVar1 < 0) {
      return 0x80004005;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004884f0, ap_004884f0));
