// auto-ported from 0041a980_vslot3_t4.c (CControllableCamera::vslot3_t4, 841 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xc0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CControllableCamera;
typedef char Mat34;
typedef char Vec3;
#define DAT_008a9ac4 GLOBAL_AT(int, 0x008a9ac4)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef uint32_t (BEA_THISCALL* FUN_0041ad10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041ad10_t> FUN_0041ad10 = {(FUN_0041ad10_t)0x0041ad10};
typedef uint32_t (BEA_THISCALL* FUN_0046fae0_t)(uint32_t);
static const bea_guard<FUN_0046fae0_t> FUN_0046fae0 = {(FUN_0046fae0_t)0x0046fae0};
typedef uint32_t (BEA_THISCALL* FUN_0046fb00_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0046fb00_t> FUN_0046fb00 = {(FUN_0046fb00_t)0x0046fb00};

static int BEA_THISCALL ap_0041a980(CControllableCamera * this_, undefined4 param_1, int param_2, float param_3)
{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  CControllableCamera *pCVar9;

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
  undefined1 (&local_90)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xc0 - 0x90);
  undefined1 (&local_80)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xc0 - 0x80);
  undefined1 (&local_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xc0 - 0x70);
  float (&local_60)[12] = *reinterpret_cast<float (*)[12]>(bea_frame_ + 0xc0 - 0x60);
  undefined1 (&local_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0xc0 - 0x30);
  iVar2 = param_2 + -0x22;
  switch(param_2) {
  case 0x22:
  case 0x23:
    FUN_004062d0(bea_arg(&local_c0), bea_arg(0), bea_arg(param_3 * -0.09090909f), bea_arg(0));
    pCVar9 = this_ + 0x98;
    uVar6 = FUN_00401ec0(bea_arg(local_80), bea_arg(local_b0 * *(float *)(this_ + 0xbc) +
                                  local_a0 * *(float *)(this_ + 0xc0) +
                                  local_c0 * *(float *)(this_ + 0xb8)), bea_arg(local_ac * *(float *)(this_ + 0xbc) +
                         local_9c * *(float *)(this_ + 0xc0) + local_bc * *(float *)(this_ + 0xb8)), bea_arg(local_a8 * *(float *)(this_ + 0xbc) +
                         local_98 * *(float *)(this_ + 0xc0) + local_b8 * *(float *)(this_ + 0xb8)));
    uVar3 = FUN_00401ec0(bea_arg(local_90), bea_arg(local_b0 * *(float *)(this_ + 0xac) +
                                  local_a0 * *(float *)(this_ + 0xb0) +
                                  local_c0 * *(float *)(this_ + 0xa8)), bea_arg(local_ac * *(float *)(this_ + 0xac) +
                         local_9c * *(float *)(this_ + 0xb0) + local_bc * *(float *)(this_ + 0xa8)), bea_arg(local_a8 * *(float *)(this_ + 0xac) +
                         local_98 * *(float *)(this_ + 0xb0) + local_b8 * *(float *)(this_ + 0xa8)));
    uVar4 = FUN_00401ec0(bea_arg(local_70), bea_arg(local_c0 * *(float *)pCVar9 +
                                  local_b0 * *(float *)(this_ + 0x9c) +
                                  local_a0 * *(float *)(this_ + 0xa0)), bea_arg(local_bc * *(float *)pCVar9 +
                         local_ac * *(float *)(this_ + 0x9c) + local_9c * *(float *)(this_ + 0xa0)), bea_arg(local_b8 * *(float *)pCVar9 +
                         local_a8 * *(float *)(this_ + 0x9c) + local_98 * *(float *)(this_ + 0xa0)));
    uVar6 = FUN_00401f10(bea_arg(local_60), bea_arg(uVar4), bea_arg(uVar3), bea_arg(uVar6));
    pfVar7 = local_60;
    for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
      *(float *)pCVar9 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pCVar9 = pCVar9 + 4;
    }
    return uVar6;
  case 0x24:
  case 0x25:
    FUN_004011b0(bea_arg(&local_c0), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    FUN_004062d0(bea_arg(&local_c0), bea_arg(param_3 * -0.09090909f), bea_arg(0), bea_arg(0));
    puVar5 = (undefined4 *)FUN_0040d320(bea_arg(&local_c0), bea_arg(local_30), bea_arg(this_ + 0x98));
    puVar8 = puVar5;
    pCVar9 = this_ + 0x98;
    for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      pCVar9 = pCVar9 + 4;
    }
    return (int)puVar5;
  case 0x26:
    fVar1 = -param_3;
    FUN_00401ec0(bea_arg(local_90), bea_arg(fVar1 * *(float *)(this_ + 0x9c)), bea_arg(fVar1 * *(float *)(this_ + 0xac)), bea_arg(fVar1 * *(float *)(this_ + 0xbc)));
    uVar6 = FUN_0041ad10(bea_arg(this_ + 0x88), bea_arg(local_90));
    return uVar6;
  case 0x27:
    FUN_00401ec0(bea_arg(local_90), bea_arg(0), bea_arg(-param_3), bea_arg(0));
    FUN_0040d2c0(bea_arg(this_ + 0x98), bea_arg(local_80), bea_arg(local_90));
    uVar6 = FUN_0041ad10(bea_arg(this_ + 0x88), bea_arg(local_80));
    return uVar6;
  case 0x28:
    FUN_00401ec0(bea_arg(local_80), bea_arg(param_3), bea_arg(0), bea_arg(0));
    FUN_0040d2c0(bea_arg(this_ + 0x98), bea_arg(local_90), bea_arg(local_80));
    uVar6 = FUN_0041ad10(bea_arg(this_ + 0x88), bea_arg(local_90));
    return uVar6;
  case 0x29:
    FUN_00401ec0(bea_arg(local_80), bea_arg(param_3), bea_arg(0), bea_arg(0));
    FUN_0040d2c0(bea_arg(this_ + 0x98), bea_arg(local_90), bea_arg(local_80));
    uVar6 = FUN_0041ad10(bea_arg(this_ + 0x88), bea_arg(local_90));
    return uVar6;
  case 0x38:
    if (DAT_008a9ac4 != 0) {
      uVar6 = FUN_0046fae0(bea_arg(&DAT_008a9a98));
      return uVar6;
    }
    iVar2 = FUN_0046fb00(bea_arg(&DAT_008a9a98), bea_arg(0), bea_arg(0));
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041a980, ap_0041a980));
