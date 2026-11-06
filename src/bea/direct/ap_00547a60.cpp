// hand-ported from 00547a60_FUN_00547a60.c (FUN_00547a60, 727 bytes)
// @hand-fixed 2026-10-29 stdcall (ret 4 at 0x547d34), returns ST0 = [0x6fbdf4] (float) fimul max (0x547d23); the EAX left beside it is overwritten by its one caller 0x545070 (eaxuse.py: unused), so float10 alone; integer body checked against the asm line by line (signed /2 via cdq/sub/sar, abs via cdq/xor/sub, idiv by (c*3+2)*c, short-index vs byte-offset locals as at 0x547ac5-0x547af6) and kept as Ghidra printed it
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_006fbdf0 GLOBAL_AT(int, 0x006fbdf0)
#define DAT_006fbdf4 GLOBAL_AT(float, 0x006fbdf4)

static float10 BEA_STDCALL ap_00547a60(uint param_1)
{
  int iVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  short *local_58;
  short *local_54;
  short *local_50;
  short *local_4c;
  short *local_48;
  short *local_44;
  short *local_40;
  short *local_3c;
  int local_38;
  short *local_34;
  short *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  int local_c;
  int local_8;
  
  local_20 = 0;
  local_c = 4;
  iVar1 = DAT_006fbdf0 + ((param_1 & 0x3f) * 0x40 + ((int)param_1 >> 6)) * 0xa2;
  local_8 = 1;
  do {
    iVar9 = 1 << ((byte)local_8 & 0x1f);
    param_1 = 0;
    local_24 = 0;
    local_38 = 0;
    local_14 = 0;
    iVar10 = iVar9 >> 1;
    local_28 = iVar10 * 9;
    local_2c = iVar10 * 0x12;
    local_40 = (short *)(local_2c + iVar1);
    local_34 = (short *)(iVar1 + iVar10 * 2);
    local_3c = (short *)(iVar1 + iVar10 * 0x24);
    local_30 = (short *)(iVar1 + iVar10 * 0x14);
    do {
      local_58 = (short *)(local_14 + iVar1);
      local_1c = 0;
      local_44 = local_34;
      local_48 = (short *)(local_14 + iVar10 * 4 + iVar1);
      local_50 = local_3c;
      local_4c = local_40;
      psVar2 = (short *)(local_14 + iVar10 * 0x28 + iVar1);
      local_54 = local_30;
      do {
        uVar3 = ((int)*psVar2 + (int)*local_58) / 2 - (int)*local_54;
        uVar6 = (int)uVar3 >> 0x1f;
        uVar4 = ((int)*local_50 + (int)*local_58) / 2 - (int)*local_4c;
        uVar7 = (int)uVar4 >> 0x1f;
        uVar5 = ((int)*local_48 + (int)*local_58) / 2 - (int)*local_44;
        uVar8 = (int)uVar5 >> 0x1f;
        param_1 = ((uVar5 ^ uVar8) - uVar8) + param_1 +
                  ((uVar3 ^ uVar6) - uVar6) + ((uVar4 ^ uVar7) - uVar7);
        local_54 = local_54 + iVar9;
        local_50 = local_50 + iVar9;
        local_4c = local_4c + iVar9;
        local_1c = local_1c + iVar9;
        local_48 = local_48 + iVar9;
        psVar2 = psVar2 + iVar9;
        local_58 = local_58 + iVar9;
        local_44 = local_44 + iVar9;
      } while (local_1c < 8);
      uVar3 = ((int)*(short *)(iVar1 + (local_2c + local_1c) * 2) +
              (int)*(short *)(iVar1 + (local_38 + local_1c) * 2)) / 2 -
              (int)*(short *)(iVar1 + (local_28 + local_1c) * 2);
      uVar4 = (int)uVar3 >> 0x1f;
      param_1 = param_1 + ((uVar3 ^ uVar4) - uVar4);
      local_40 = local_40 + iVar9 * 9;
      local_24 = local_24 + iVar9;
      local_3c = local_3c + iVar9 * 9;
      local_14 = local_14 + iVar9 * 0x12;
      local_38 = local_38 + iVar9 * 9;
      local_34 = local_34 + iVar9 * 9;
      local_30 = local_30 + iVar9 * 9;
      local_2c = local_2c + iVar9 * 9;
      local_28 = local_28 + iVar9 * 9;
    } while (local_14 < 0x90);
    iVar9 = local_24 * 9 + local_1c;
    uVar3 = ((int)*(short *)(iVar1 + (local_24 * 9 + iVar10 * 2 + local_1c) * 2) +
            (int)*(short *)(iVar1 + iVar9 * 2)) / 2 - (int)*(short *)(iVar1 + (iVar9 + iVar10) * 2);
    uVar4 = (int)uVar3 >> 0x1f;
    iVar9 = (int)(((uVar3 ^ uVar4) - uVar4) + param_1) / ((local_c * 3 + 2) * local_c);
    if (local_20 < iVar9) {
      local_20 = iVar9;
    }
    local_c = local_c >> 1;
    local_8 = local_8 + 1;
  } while (local_8 < 4);
  return (float10)DAT_006fbdf4 * (float10)local_20;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00547a60, ap_00547a60));
