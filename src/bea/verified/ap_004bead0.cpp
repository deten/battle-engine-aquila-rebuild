// auto-ported from 004bead0_FUN_004bead0.c (FUN_004bead0, 94 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00809dbc GLOBAL_AT(int, 0x00809dbc)
#define DAT_00809dc0 GLOBAL_AT(int, 0x00809dc0)
#define DAT_00829dc0 GLOBAL_AT(int, 0x00829dc0)
#define DAT_00809db8 GLOBAL_AT(int, 0x00809db8)

static undefined4 BEA_CDECL ap_004bead0(void)
{
  uint uVar1;
  
  if ((DAT_00809dbc < 0xff) &&
     (*(short *)((int)&DAT_00809dc0 + (DAT_00829dc0 * 0x100 + DAT_00809dbc) * 2 + 2) == -1)) {
    uVar1 = DAT_00829dc0 & 0x80000007;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
    }
    if ((*(byte *)(((int)DAT_00829dc0 >> 3) * 0x100 + DAT_00809db8 + 1 + DAT_00809dbc) &
        (byte)(1 << ((byte)uVar1 & 0x1f))) != 0) {
      return 1;
    }
  }
  return 0;
}

// @autoport-registration (verified: 8168 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004bead0, ap_004bead0));
