// auto-ported from 00446150_FUN_00446150.c (FUN_00446150, 688 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit fStack_18: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit uStack_28: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_2c: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_34: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_3c: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char fStack_1c;
typedef char fStack_20;
typedef char fStack_24;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef uint32_t (BEA_THISCALL* FUN_004455c0_t)(uint32_t);
static FUN_004455c0_t const FUN_004455c0 = (FUN_004455c0_t)0x004455c0;
typedef uint32_t (BEA_THISCALL* FUN_00446400_t)(uint32_t);
static FUN_00446400_t const FUN_00446400 = (FUN_00446400_t)0x00446400;
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static FUN_004de8d0_t const FUN_004de8d0 = (FUN_004de8d0_t)0x004de8d0;
typedef uint32_t (BEA_THISCALL* FUN_004fcec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_004fcec0_t const FUN_004fcec0 = (FUN_004fcec0_t)0x004fcec0;
typedef undefined4 (BEA_THISCALL* FUN_004fda10_t)(uint32_t);
static FUN_004fda10_t const FUN_004fda10 = (FUN_004fda10_t)0x004fda10;

static float10 BEA_THISCALL ap_00446150(void * this_)
{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fStack_3c = 0;
  float fStack_34;
  float local_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  
  FUN_004de8d0(bea_arg(DAT_008a9d9c));
  if (*(int *)((int)this_ + 0xc) != 0) {
    bea_vcall<uint32_t>(this_, 0xc);
  }
  if (*(int **)((int)this_ + 0xc) == (int *)0x0) {
    *(undefined4 *)((int)this_ + 0x68) = 0;
    iVar6 = bea_vcall<uint32_t>(this_, 0x14);
    if (iVar6 != 0) {
      return (float10)0.0f;
    }
    iVar6 = FUN_004fda10(bea_arg(*(void **)((int)this_ + 8)));
    if (iVar6 == 0) {
      bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x100);
    }
  }
  else {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0xc), 0x168, &local_30);
    iVar6 = *(int *)((int)this_ + 8);
    fStack_24 = fStack_34 - *(float *)(iVar6 + 0x1c);
    fStack_20 = local_30 - *(float *)(iVar6 + 0x20);
    fStack_1c = fStack_2c - *(float *)(iVar6 + 0x24);
    fVar7 = (float10)bea_vcall<float10>(*(int **)((int)this_ + 0xc), 0x40);
    fVar8 = (float)fVar7;
    if (((*(uint *)(*(int *)((int)this_ + 0xc) + 0x34) & 0x80000) != 0) &&
       (piVar1 = *(int **)(*(int *)((int)this_ + 0xc) + 0x26c), piVar1 != (int *)0x0)) {
      fVar7 = (float10)bea_vcall<float10>(piVar1, 0x40);
      fVar8 = (float)fVar7;
    }
    fVar4 = fStack_20 * fStack_20;
    fVar2 = fStack_1c * fStack_1c;
    fVar3 = fStack_24 * fStack_24;
    fVar7 = (float10)bea_vcall<float10>(*(int **)((int)this_ + 8), 0x40);
    fVar8 = (float)(((float10)SQRT(fVar3 + fVar2 + fVar4) - fVar7) - (float10)fVar8);
    if (*(int *)((int)this_ + 0x68) == 0) {
      piVar1 = *(int **)((int)this_ + 8);
      fStack_10 = (float)piVar1[0x14] * 50.0f;
      fStack_c = -((float)piVar1[0x18] * 50.0f);
      fStack_24 = (float)piVar1[0x10] * 50.0f + (float)piVar1[7];
      fStack_20 = fStack_10 + (float)piVar1[8];
      fStack_1c = fStack_c + (float)piVar1[9];
      bea_vcall<uint32_t>(piVar1, 0xf4, fStack_24,fStack_20,fStack_1c,fStack_18,0);
      if (*(float *)((int)this_ + 0x70) < fVar8) {
        FUN_00446400(bea_arg(this_));
        return (float10)fStack_3c;
      }
    }
    else {
      FUN_004fcec0(bea_arg(*(void **)((int)this_ + 8)), bea_arg(fStack_34), bea_arg(local_30), bea_arg(fStack_2c), bea_arg(uStack_28));
      if (fVar8 < *(float *)((int)this_ + 0x70)) {
        *(undefined4 *)((int)this_ + 0x68) = 0;
        uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
        uVar5 = uVar5 & 0x8000ffff;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xffff0000) + 1;
        }
        *(float *)((int)this_ + 0x70) = (float)(int)uVar5 * 0.00030517578f + 20.0f;
        FUN_004455c0(bea_arg(*(void **)((int)this_ + 8)));
        piVar1 = *(int **)((int)this_ + 8);
        fStack_10 = (float)piVar1[0x14] * 50.0f;
        fStack_c = -((float)piVar1[0x18] * 50.0f);
        fStack_24 = (float)piVar1[0x10] * 50.0f + (float)piVar1[7];
        fStack_20 = fStack_10 + (float)piVar1[8];
        fStack_1c = fStack_c + (float)piVar1[9];
        bea_vcall<uint32_t>(piVar1, 0xf4, fStack_24,fStack_20,fStack_1c,fStack_18,0);
        return (float10)fStack_18;
      }
    }
  }
  return (float10)fStack_3c;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00446150, ap_00446150));
