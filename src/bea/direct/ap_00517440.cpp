// auto-ported from 00517440_FUN_00517440.c (FUN_00517440, 441 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00663080 GLOBAL_AT(int, 0x00663080)
#define DAT_00663074 GLOBAL_AT(int, 0x00663074)
#define DAT_00896a44 GLOBAL_AT(int, 0x00896a44)
#define DAT_00896a48 GLOBAL_AT(undefined4*, 0x00896a48)

static undefined4 BEA_CDECL ap_00517440(int *param_1, uint param_2)
{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  int &local_30 = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x30);
  int &local_2c = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x2c);
  ushort &local_28 = *reinterpret_cast<ushort *>(bea_frame_ + 0x40 - 0x28);
  ushort &uStack_26 = *reinterpret_cast<ushort *>(bea_frame_ + 0x40 - 0x26);
  int (&local_24)[4] = *reinterpret_cast<int (*)[4]>(bea_frame_ + 0x40 - 0x24);
  undefined4 * &local_14 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x40 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x4);
  piVar1 = param_1;
  local_34 = 0x10001;
  if (DAT_00663080 == 0) {
    local_30 = 0xac44;
  }
  else if (DAT_00663080 == 1) {
    local_30 = 0x5622;
  }
  else {
    local_30 = 0x2b11;
  }
  if ((DAT_00663080 < 0) || (uVar2 = 0x10, 1 < DAT_00663080)) {
    uVar2 = 8;
  }
  (*(uint32_t*)((char*)&local_28)) = CONCAT22(uVar2,uVar2 >> 3);
  local_2c = (uint)(uVar2 >> 3) * local_30;
  piVar4 = local_24;
  for (iVar3 = 9; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_24[0] = 0x24;
  local_24[1] = (-(uint)(DAT_00663074 != 0) & 0x3fff8) + 0x200b8;
  if (DAT_00896a44 != 0) {
    if (DAT_00896a44 == 1) {
      local_10 = 0xc2413342;
      goto LAB_00517545;
    }
    if (DAT_00896a44 == 2) {
      local_10 = 0xc241333f;
      goto LAB_00517545;
    }
  }
  local_10 = 0xc2413340;
LAB_00517545:
  local_c = 0x11d21c1b;
  local_8 = 0xc000f594;
  local_4 = 0xca8ac24f;
  if (DAT_00663080 == 1) {
    local_24[2] = param_2 + 1 >> 1;
  }
  else if (DAT_00663080 == 2) {
    local_24[2] = param_2 + 7 >> 3;
  }
  else {
    local_24[2] = param_2;
  }
  local_14 = &local_34;
  iVar3 = bea_vcall<uint32_t>(DAT_00896a48, 0xc, DAT_00896a48,local_24,param_1,0);
  if (iVar3 < 0) {
    return 0;
  }
  param_1 = (int *)0x0;
  iVar3 = bea_vcall<uint32_t>(*piVar1, 0x2c, (int *)*piVar1,0,0,&param_1,&param_2,0,0,2);
  if (iVar3 < 0) {
    piVar4 = (int *)*piVar1;
    if (piVar4 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar4, 0x8, piVar4);
      *piVar1 = 0;
    }
    return 0;
  }
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00517440, ap_00517440));
