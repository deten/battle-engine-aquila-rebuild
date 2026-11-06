// auto-ported from 004cfbd0_vslot15.c (CMultiSample::vslot15, 289 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_008889f0 GLOBAL_AT(int, 0x008889f0)
#define DAT_00856f6c GLOBAL_AT(int, 0x00856f6c)
#define DAT_0089c08c GLOBAL_AT(int, 0x0089c08c)

static int BEA_CDECL ap_004cfbd0(void)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 + DAT_008889f0 * 0x516c;
  iVar3 = *(int *)(((uint8_t *)&DAT_00856f6c) +
                  *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 +
                  DAT_008889f0 * 0x516c);
  if (iVar3 != -1) {
    if (iVar3 == 0) {
      return 0;
    }
    iVar4 = 0;
    uVar1 = *(uint *)(((uint8_t *)&DAT_00855bb0) +
                     *(int *)(((uint8_t *)&DAT_00855bb0) + iVar2 + 0x13b4) * 0x18 + iVar2 + 0x5b4);
    if (((uVar1 & 0x20) != 0) && (iVar4 = 1, iVar3 == 2)) {
      return 1;
    }
    if (((((uVar1 & 0x40) == 0) || (iVar4 = iVar4 + 1, iVar3 != 3)) &&
        (((uVar1 & 0x80) == 0 || (iVar4 = iVar4 + 1, iVar3 != 4)))) &&
       (((uVar1 & 0x100) == 0 || (iVar4 = iVar4 + 1, iVar3 != 6)))) {
      if ((uVar1 & 0x200) == 0) {
        return 0;
      }
      if (iVar3 != 8) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    }
    if (iVar4 != -1) {
      return iVar4;
    }
  }
  if (DAT_0089c08c == -1) {
    return -1;
  }
  if (DAT_0089c08c != 0) {
    iVar3 = 0;
    uVar1 = *(uint *)(((uint8_t *)&DAT_00855bb0) +
                     *(int *)(((uint8_t *)&DAT_00855bb0) + iVar2 + 0x13b4) * 0x18 + iVar2 + 0x5b4);
    if (((uVar1 & 0x20) != 0) && (iVar3 = 1, DAT_0089c08c == 2)) {
      return iVar3;
    }
    if (((uVar1 & 0x40) != 0) && (iVar3 = iVar3 + 1, DAT_0089c08c == 3)) {
      return iVar3;
    }
    if (((uVar1 & 0x80) != 0) && (iVar3 = iVar3 + 1, DAT_0089c08c == 4)) {
      return iVar3;
    }
    if (((uVar1 & 0x100) != 0) && (iVar3 = iVar3 + 1, DAT_0089c08c == 6)) {
      return iVar3;
    }
    if (((uVar1 & 0x200) != 0) && (DAT_0089c08c == 8)) {
      return iVar3 + 1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cfbd0, ap_004cfbd0));
