// auto-ported from 004be9b0_FUN_004be9b0.c (FUN_004be9b0, 90 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00829dc0 GLOBAL_AT(int, 0x00829dc0)
#define DAT_00809bc0 GLOBAL_AT(int, 0x00809bc0)
#define DAT_00809dbc GLOBAL_AT(int, 0x00809dbc)
#define DAT_00809db8 GLOBAL_AT(int, 0x00809db8)

static undefined4 BEA_CDECL ap_004be9b0(void)
{
  uint uVar1;
  
  if ((0 < DAT_00829dc0) &&
     (*(short *)(((char *)&DAT_00809bc0) + (DAT_00829dc0 * 0x100 + DAT_00809dbc) * 2) == -1)) {
    uVar1 = DAT_00829dc0 - 1U & 0x80000007;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
    }
    if ((*(byte *)(((int)(DAT_00829dc0 - 1U) >> 3) * 0x100 + DAT_00809db8 + DAT_00809dbc) &
        (byte)(1 << ((byte)uVar1 & 0x1f))) != 0) {
      return 1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004be9b0, ap_004be9b0));
