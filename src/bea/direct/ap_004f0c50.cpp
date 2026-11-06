// auto-ported from 004f0c50_FUN_004f0c50.c (FUN_004f0c50, 316 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xc0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};

static void BEA_THISCALL ap_004f0c50(void * this_, undefined4 *param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *this_00;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  undefined1 *puVar9;
  float *pfVar10;

  alignas(16) uint8_t bea_frame_[0xc0] = {};   // the original stack frame (emulate_frame)
  float &local_c0 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xc0);
  float &local_bc = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xbc);
  float &local_b8 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xb8);
  float &local_b0 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xb0);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xac);
  float &local_a8 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xa8);
  float &local_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xa0);
  float &local_9c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x9c);
  float &local_98 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x98);
  undefined1 (&local_90)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0xc0 - 0x90);
  undefined1 (&local_60)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0xc0 - 0x60);
  undefined1 (&local_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0xc0 - 0x30);
  fVar7 = (float10)fcos((float10)-1.5707963705062866f);
  fVar1 = (float)fVar7;
  fVar8 = (float10)fsin((float10)-1.5707963705062866f);
  local_9c = (float)fVar8;
  fVar2 = (float)fVar8;
  fVar8 = (float10)fcos((float10)0.0);
  fVar3 = (float)fVar8;
  fVar8 = (float10)fsin((float10)0.0);
  fVar4 = (float)fVar8;
  local_c0 = fVar3 * fVar1 - local_9c * fVar4 * fVar2;
  local_bc = (float)-(fVar7 * (float10)fVar2);
  local_b8 = fVar4 * fVar1 + local_9c * fVar3 * fVar2;
  local_b0 = fVar3 * fVar2 + local_9c * fVar4 * fVar1;
  local_ac = (float)(fVar7 * (float10)fVar1);
  local_a8 = fVar4 * fVar2 - local_9c * fVar3 * fVar1;
  local_a0 = (float)-(fVar7 * (float10)fVar4);
  local_98 = (float)(fVar7 * (float10)fVar3);
  FUN_004062d0(bea_arg(local_90), bea_arg(*(undefined4 *)((int)this_ + 0x2c4)), bea_arg(*(float *)((int)this_ + 0x2c8) - 1.5707964f), bea_arg(0));
  pfVar10 = &local_c0;
  puVar9 = local_60;
  this_00 = (void *)FUN_0040d320(bea_arg((void *)((int)this_ + 0x3c)), bea_arg(local_30), bea_arg(local_90));
  puVar5 = (undefined4 *)FUN_0040d320(bea_arg(this_00), bea_arg(puVar9), bea_arg(pfVar10));
  for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
    *param_1 = *puVar5;
    puVar5 = puVar5 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f0c50, ap_004f0c50));
