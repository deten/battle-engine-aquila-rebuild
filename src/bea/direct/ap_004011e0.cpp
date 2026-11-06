// auto-ported from 004011e0_vslot9.c (CActor::vslot9, 485 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: rewritten from the asm (Ghidra's frame was 0x100000000 bytes): rotation matrix in a 12-float local at esp+0x20 (0x40125b-0x401316, x87 order kept; column 4 unwritten in the original, zero here); parent call is CComplexThing::vslot9 0x4f3fd0 (0x401343); fistp low dword of vslot 0x60 is the divisor (0x401355) and, at 0x40138f, stored to this+0xdc as an int; 0x44b370 is thiscall ecx=0x672fc8 with 6 args, the 3rd the param slot set to -1.0f (0x4013af)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char CActor;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef void (BEA_THISCALL* FUN_004f3fd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f3fd0_t> CComplexThing_vslot9 = {(FUN_004f3fd0_t)0x004f3fd0};

static int BEA_THISCALL ap_004011e0(CActor * this_, int param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar12;
  int iVar5;
  int iVar6;
  float10 fVar10;
  float10 fVar11;
  float10 fT;
  int iDiv;
  uint32_t uVar8;
  float local_m[12] = {};          // esp+0x20 .. esp+0x4c
  float fSlot;                     // the param_1 slot, esp+0x54
  *(undefined4 *)(this_ + 0xcc) = 0xc2c80000;
  *(undefined4 *)(this_ + 0xd0) = 0xc2c80000;
  *(undefined4 *)(this_ + 0xd4) = 0xc2c80000;
  *(undefined4 *)(this_ + 0xd8) = DAT_00672fd0;
  *(undefined4 *)(this_ + 0x7c) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this_ + 0x80) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this_ + 0x84) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this_ + 0x88) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this_ + 0x8c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this_ + 0x90) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this_ + 0x94) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this_ + 0x98) = *(undefined4 *)(param_1 + 0x10);
  const undefined4 *src = 0;
  if (*(int *)(param_1 + 0x60) == 0) {
    fVar1 = (float)fcos((float10)*(float *)(param_1 + 0x44));     // esp+0xc
    fVar2 = (float)fsin((float10)*(float *)(param_1 + 0x44));     // esp+0x54
    fVar3 = (float)fcos((float10)*(float *)(param_1 + 0x4c));     // esp+0x14
    fVar10 = fsin((float10)*(float *)(param_1 + 0x4c));           // kept in ST
    fVar4 = (float)fcos((float10)*(float *)(param_1 + 0x48));     // esp+0x10
    fVar11 = fsin((float10)*(float *)(param_1 + 0x48));           // kept in ST
    fT = fVar11 * fVar10;
    local_m[0] = (float)((float10)fVar3 * (float10)fVar1 - fT * (float10)fVar2);
    local_m[1] = (float)-((float10)fVar4 * (float10)fVar2);
    fVar12 = (float)(fVar11 * (float10)fVar3);                    // fst esp+0x18
    local_m[2] = (float)((fVar11 * (float10)fVar3) * (float10)fVar2 + fVar10 * (float10)fVar1);
    local_m[4] = (float)(fT * (float10)fVar1 + (float10)fVar3 * (float10)fVar2);
    local_m[5] = (float)((float10)fVar4 * (float10)fVar1);
    local_m[6] = (float)(fVar10 * (float10)fVar2 - (float10)fVar12 * (float10)fVar1);
    local_m[8] = (float)-((float10)fVar4 * fVar10);
    local_m[9] = (float)fVar11;
    local_m[10] = (float)((float10)fVar4 * (float10)fVar3);
    src = (const undefined4 *)local_m;
  }
  else if (*(int *)(param_1 + 0x60) == 1) {
    src = (const undefined4 *)(param_1 + 0x14);
  }
  if (src != 0) {
    for (iVar6 = 0; iVar6 < 0xc; iVar6 = iVar6 + 1) {
      *(undefined4 *)(this_ + 0x9c + iVar6 * 4) = src[iVar6];
    }
  }
  CComplexThing_vslot9(bea_arg(this_), bea_arg(param_1));
  iDiv = (int)(longlong)ROUND(bea_vcall<float10>(this_, 0x60));
  iVar6 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  iVar5 = iVar6 / iDiv;
  *(int *)(this_ + 0xdc) = iVar6 % iDiv;
  if (((byte)this_[0x2c] & 1) == 0) {
    iVar6 = iVar6 % iDiv + -1;
    uVar8 = 0xbb9;
    *(int *)(this_ + 0xdc) = iVar6;
    if (iVar6 < 1) {
      uVar8 = 3000;
      *(int *)(this_ + 0xdc) = (int)(longlong)ROUND(bea_vcall<float10>(this_, 0x60));
    }
    fSlot = -1.0f;
    iVar5 = FUN_0044b370(bea_arg(0x00672fc8), bea_arg(uVar8), bea_arg(this_), bea_arg(&fSlot), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  return iVar5;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004011e0, ap_004011e0));
