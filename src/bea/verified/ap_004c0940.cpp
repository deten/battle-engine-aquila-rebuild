// auto-ported from 004c0940_FUN_004c0940.c (FUN_004c0940, 237 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_004c0940(int in_ECX, uint param_1, int param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;

  switch(param_2) {
  case 0:
    param_2 = 0x10;
    bVar4 = 4;
    break;
  case 1:
    param_2 = 8;
    bVar4 = 3;
    break;
  case 2:
    param_2 = 4;
    bVar4 = 2;
    break;
  case 3:
    param_2 = 2;
    bVar4 = 1;
    break;
  case 4:
    param_2 = 1;
    bVar4 = 0;
    break;
  default:
    bVar4 = (byte)param_2;
  }
  if ((*(int *)(in_ECX + 0x6c) != 0) && (*(int *)(in_ECX + 0x8c) != -1)) {
    fVar2 = (float)param_2;
    fVar1 = (float)(int)(param_2 - 1U & param_1) / fVar2;
    *(float *)(in_ECX + 0xb8) = fVar1;
    fVar3 = (float)((int)param_1 >> (bVar4 & 0x1f)) / fVar2;
    *(float *)(in_ECX + 0xbc) = fVar3;
    *(float *)(in_ECX + 0xc0) = 1.0f / fVar2 + fVar1;
    *(float *)(in_ECX + 0xc4) = 1.0f / fVar2 + fVar3;
    return in_ECX;
  }
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  *(undefined4 *)(in_ECX + 0xb8) = 0;
  *(undefined4 *)(in_ECX + 0xc4) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0xc0) = 0x3f800000;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 781 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004c0940, ap_004c0940));
