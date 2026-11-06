// auto-ported from 004cfaf0_vslot14.c (CMultiSample::vslot14, 216 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_008889f0 GLOBAL_AT(int, 0x008889f0)
#define DAT_00856014 GLOBAL_AT(int, 0x00856014)
#define DAT_00631170 GLOBAL_AT(int, 0x00631170)
#define DAT_00704868 GLOBAL_AT(int, 0x00704868)
#define DAT_0082b5b0 GLOBAL_AT(char, 0x0082b5b0)

static void BEA_STDCALL ap_004cfaf0(int param_1)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 + DAT_008889f0 * 0x516c;
  iVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(((uint8_t *)&DAT_00856014) + *(int *)(((uint8_t *)&DAT_00856014) + iVar2 + 0xf50) * 0x18 + iVar2 + 0x150
                     );
    if ((uVar1 & 0x20) != 0) {
      param_1 = param_1 + -1;
    }
    if (param_1 == 0) {
      iVar3 = 2;
    }
    else {
      if ((uVar1 & 0x40) != 0) {
        param_1 = param_1 + -1;
      }
      if (param_1 == 0) {
        iVar3 = 3;
      }
      else {
        if ((uVar1 & 0x80) != 0) {
          param_1 = param_1 + -1;
        }
        if (param_1 == 0) {
          iVar3 = 4;
        }
        else {
          if ((uVar1 & 0x100) != 0) {
            param_1 = param_1 + -1;
          }
          if (param_1 == 0) {
            iVar3 = 6;
          }
          else {
            if ((uVar1 & 0x200) != 0) {
              param_1 = param_1 + -1;
            }
            iVar3 = (-(uint)(param_1 != 0) & 0xfffffff8) + 8;
          }
        }
      }
    }
  }
  *(int *)(((uint8_t *)&DAT_00856014) + iVar2 + 0xf58) = iVar3;
  if (DAT_00631170 != DAT_00704868) {
    DAT_0082b5b0 = 1;
    DAT_00631170 = DAT_00704868;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cfaf0, ap_004cfaf0));
