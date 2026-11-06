// auto-ported from 00401c50_vslot1_t8.c (CActor::vslot1_t8, 618 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit fStack_68: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_6c: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_70: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_f8: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_fc: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_100: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_108: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_10c: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_110: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_118: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_11c: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char Mat34;
typedef char Vec3;
typedef char fStack_100;
typedef char fStack_108;
typedef char fStack_10c;
typedef char fStack_110;
typedef char fStack_118;
typedef char fStack_11c;
typedef char fStack_120;
typedef char fStack_f8;
typedef char fStack_fc;
#define DAT_008a9e44 GLOBAL_AT(float, 0x008a9e44)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_00401ec0_t const FUN_00401ec0 = (FUN_00401ec0_t)0x00401ec0;
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static FUN_00401ee0_t const FUN_00401ee0 = (FUN_00401ee0_t)0x00401ee0;
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_00401f10_t const FUN_00401f10 = (FUN_00401f10_t)0x00401f10;

static undefined4 * BEA_THISCALL ap_00401c50(CActor * this_, undefined4 *param_1)
{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined1 *puVar8;
  float fStack_120;
  float fStack_11c = 0;
  float fStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 auStack_30 [12];
  
  fVar7 = (float10)bea_vcall<float10>(this_ + -8, 0x60);
  if (fVar7 <= (float10)1.0f) {
    fVar7 = (float10)DAT_008a9e44;
  }
  else {
    fVar1 = DAT_00672fd0 - *(float *)(this_ + 0xd0);
    fVar7 = (float10)bea_vcall<float10>(this_ + -8, 0x60);
    fVar7 = ((float10)1.0f / fVar7) * (float10)fVar1 * (float10)20.0f +
            (float10)DAT_008a9e44 * ((float10)1.0f / fVar7);
    if ((float10)0.0f <= fVar7) {
      if ((float10)1.0f < fVar7) {
        fVar7 = (float10)1.0f;
      }
    }
    else {
      fVar7 = (float10)0.0f;
    }
  }
  fVar1 = (float)fVar7;
  FUN_00401ec0(bea_arg(auStack_d0), bea_arg(*(float *)(this_ + 0x54) - *(float *)(this_ + 0xb4)), bea_arg(*(float *)(this_ + 0x58) - *(float *)(this_ + 0xb8)), bea_arg(*(float *)(this_ + 0x5c) - *(float *)(this_ + 0xbc)));
  FUN_00401ec0(bea_arg(auStack_60), bea_arg(*(float *)(this_ + 0x44) - *(float *)(this_ + 0xa4)), bea_arg(*(float *)(this_ + 0x48) - *(float *)(this_ + 0xa8)), bea_arg(*(float *)(this_ + 0x4c) - *(float *)(this_ + 0xac)));
  FUN_00401ec0(bea_arg(auStack_c0), bea_arg(*(float *)(this_ + 0x34) - *(float *)(this_ + 0x94)), bea_arg(*(float *)(this_ + 0x38) - *(float *)(this_ + 0x98)), bea_arg(*(float *)(this_ + 0x3c) - *(float *)(this_ + 0x9c)));
  FUN_00401f10(bea_arg(&fStack_120), bea_arg(auStack_c0), bea_arg(auStack_60), bea_arg(auStack_d0));
  FUN_00401ec0(bea_arg(auStack_a0), bea_arg(fStack_100 * fVar1), bea_arg(fStack_fc * fVar1), bea_arg(fStack_f8 * fVar1));
  FUN_00401ec0(bea_arg(auStack_b0), bea_arg(fStack_110 * fVar1), bea_arg(fStack_10c * fVar1), bea_arg(fStack_108 * fVar1));
  FUN_00401ec0(bea_arg(auStack_f0), bea_arg(fStack_120 * fVar1), bea_arg(fStack_11c * fVar1), bea_arg(fStack_118 * fVar1));
  FUN_00401f10(bea_arg(auStack_90), bea_arg(auStack_f0), bea_arg(auStack_b0), bea_arg(auStack_a0));
  FUN_00401ec0(bea_arg(auStack_e0), bea_arg(fStack_70 + *(float *)(this_ + 0xb4)), bea_arg(fStack_6c + *(float *)(this_ + 0xb8)), bea_arg(fStack_68 + *(float *)(this_ + 0xbc)));
  puVar8 = auStack_e0;
  uVar2 = FUN_00401ee0(bea_arg(this_ + 0xa4), bea_arg(auStack_50), bea_arg(auStack_80));
  uVar3 = FUN_00401ee0(bea_arg(this_ + 0x94), bea_arg(auStack_40), bea_arg(auStack_90));
  FUN_00401f10(bea_arg(auStack_30), bea_arg(uVar3), bea_arg(uVar2), bea_arg(puVar8));
  puVar5 = auStack_30;
  puVar6 = param_1;
  for (iVar4 = 0xc; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00401c50, ap_00401c50));
