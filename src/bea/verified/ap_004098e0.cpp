// auto-ported from 004098e0_FUN_004098e0.c (FUN_004098e0, 111 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_004098e0(undefined4 * in_ECX, int param_1)
{
  undefined4 uVar1;

  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *in_ECX = ((void*)0x005d892c);
  in_ECX[4] = uVar1;
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  in_ECX[0xb] = *(undefined4 *)(param_1 + 0x2c);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *in_ECX = ((void*)0x005d8bfc);
  in_ECX[0xc] = uVar1;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 6974 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004098e0, ap_004098e0));
