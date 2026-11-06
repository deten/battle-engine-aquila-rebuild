// auto-ported from 004cfa70_vslot16.c (CMultiSample::vslot16, 126 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008889f0 GLOBAL_AT(int, 0x008889f0)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_00856f64 GLOBAL_AT(int, 0x00856f64)

static int BEA_CDECL ap_004cfa70(void)
{
  uint uVar1;
  int iVar2;
  
  iVar2 = 1;
  uVar1 = *(uint *)(DAT_008889f0 * 0x516c +
                    *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 +
                    *(int *)(((uint8_t *)&DAT_00856f64) +
                            *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 +
                            DAT_008889f0 * 0x516c) * 0x18 + 0x856164);
  if ((uVar1 & 0x20) != 0) {
    iVar2 = 2;
  }
  if ((uVar1 & 0x40) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((uVar1 & 0x80) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((uVar1 & 0x100) != 0) {
    iVar2 = iVar2 + 1;
  }
  if ((uVar1 & 0x200) != 0) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cfa70, ap_004cfa70));
