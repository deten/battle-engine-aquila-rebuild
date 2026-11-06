// auto-ported from 00552410_vslot2.c (CShadows::vslot2, 91 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CShadows;
#define DAT_009c7c7c GLOBAL_AT(int, 0x009c7c7c)
#define DAT_009c7c8c GLOBAL_AT(int, 0x009c7c8c)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static undefined4 BEA_THISCALL ap_00552410(CShadows * this_)
{
  int *piVar1;
  
  if (DAT_009c7c7c == 0) {
    this_[0x704] = (CShadows)0x0;
    this_[0x706] = (CShadows)0x1;
  }
  piVar1 = *(int **)(this_ + 0x6c0);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
    *(undefined4 *)(this_ + 0x6c0) = 0;
  }
  if (DAT_009c7c8c != 0) {
    bea_vcall<uint32_t>(DAT_00888a50, 0x74, DAT_00888a50,0x40,0x40,0x50,0,0,1,this_ + 0x6c0,0);
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00552410, ap_00552410));
