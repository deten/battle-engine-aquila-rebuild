// auto-ported from 004e8930_FUN_004e8930.c (FUN_004e8930, 927 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit uStack_54: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit uStack_58: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit uStack_5c: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_6c: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Vec3;
typedef char fStack_6c;
typedef char fStack_70;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_00401ec0_t const FUN_00401ec0 = (FUN_00401ec0_t)0x00401ec0;
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static FUN_00401ee0_t const FUN_00401ee0 = (FUN_00401ee0_t)0x00401ee0;
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static FUN_0040d120_t const FUN_0040d120 = (FUN_0040d120_t)0x0040d120;
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static FUN_0040d2c0_t const FUN_0040d2c0 = (FUN_0040d2c0_t)0x0040d2c0;
typedef uint32_t (BEA_THISCALL* FUN_004e83b0_t)(uint32_t, uint32_t);
static FUN_004e83b0_t const FUN_004e83b0 = (FUN_004e83b0_t)0x004e83b0;
typedef undefined4 (BEA_THISCALL* FUN_004e84e0_t)(uint32_t);
static FUN_004e84e0_t const FUN_004e84e0 = (FUN_004e84e0_t)0x004e84e0;
typedef uint32_t (BEA_THISCALL* FUN_004fcec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_004fcec0_t const FUN_004fcec0 = (FUN_004fcec0_t)0x004fcec0;
typedef undefined4 (BEA_THISCALL* FUN_004fd570_t)(uint32_t);
static FUN_004fd570_t const FUN_004fd570 = (FUN_004fd570_t)0x004fd570;
typedef uint32_t (BEA_THISCALL* FUN_004ffdd0_t)(uint32_t, uint32_t, uint32_t);
static FUN_004ffdd0_t const FUN_004ffdd0 = (FUN_004ffdd0_t)0x004ffdd0;

static void BEA_THISCALL ap_004e8930(void * this_)
{
  float fVar1;
  undefined4 *puVar2;
  int *piVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  void *this_00;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  bool bVar14;
  float10 fVar15;
  float fStack_70;
  float fStack_6c = 0;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  FUN_004e83b0(bea_arg(this_), bea_arg(0));
  if ((*(float *)((int)this_ + 0x104) != 0.0f) && (*(int *)((int)this_ + 0xbc) != 2)) {
    uVar5 = *(uint *)((int)this_ + 0xb4);
    iVar10 = 0;
    fVar1 = 0.0f;
    uVar11 = (int)uVar5 / 2;
    if ((int)uVar11 < 6) {
      uVar11 = 6;
    }
    if ((int)uVar5 < (int)uVar11) {
      uVar11 = uVar5;
    }
    uVar5 = uVar11 & 0x80000001;
    bVar14 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar14 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar14) {
      fVar1 = *(float *)((int)this_ + 0x104);
    }
    piVar12 = *(int **)((int)this_ + 0xa4);
    if (piVar12 == (int *)0x0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *piVar12;
    }
    while (BEA_LOOP_GUARD((iVar13 != 0))) {
      iVar6 = iVar10 / (int)uVar11;
      uVar5 = iVar10 - iVar6 * uVar11;
      uVar9 = uVar5 & 0x80000001;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
      }
      if (uVar9 == 1) {
        fVar4 = (float)(int)(-1 - uVar5) * *(float *)((int)this_ + 0x104);
      }
      else {
        fVar4 = (float)(int)uVar5 * *(float *)((int)this_ + 0x104);
      }
      iVar10 = iVar10 + 1;
      *(float *)(iVar13 + 4) = fVar4 + fVar1;
      *(float *)(iVar13 + 8) = (float)iVar6 * *(float *)((int)this_ + 0x104) * -2.0;
      piVar12 = (int *)piVar12[1];
      if (piVar12 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *piVar12;
      }
    }
    *(undefined4 *)((int)this_ + 0xbc) = 2;
  }
  iVar10 = FUN_004e84e0(bea_arg(this_));
  while (BEA_LOOP_GUARD((iVar10 == 0))) {
    iVar10 = FUN_004e84e0(bea_arg(this_));
  }
  puVar2 = *(undefined4 **)((int)this_ + 0xa4);
  if (puVar2 == (undefined4 *)0x0) {
    piVar12 = (int *)0x0;
  }
  else {
    piVar12 = (int *)*puVar2;
  }
  do {
    if (piVar12 == (int *)0x0) {
      return;
    }
    iVar10 = *piVar12;
    if (iVar10 != 0) {
      piVar3 = *(int **)((int)this_ + 0xc4);
      piVar7 = (int *)0x0;
      if (piVar3 != (int *)0x0) {
        if ((piVar3[0xd] & 0x20000000U) == 0) {
          if ((piVar3[0xd] & 0x10U) != 0) {
            piVar7 = piVar3;
          }
        }
        else {
          piVar7 = (int *)bea_vcall<uint32_t>(piVar3, 0x12c, *(undefined4 *)(iVar10 + 0x1c),*(undefined4 *)(iVar10 + 0x20),
                                     *(undefined4 *)(iVar10 + 0x24),*(undefined4 *)(iVar10 + 0x28));
        }
      }
      if (*piVar12 == 0) {
LAB_004e8b73:
        if (*(int *)((int)this_ + 0x110) == 0) {
          if ((void *)*piVar12 != (void *)0x0) {
            if (piVar7 != (int *)0x0) {
              FUN_004fcec0(bea_arg((void *)*piVar12), bea_arg(piVar7[7]), bea_arg(piVar7[8]), bea_arg(piVar7[9]), bea_arg(piVar7[10]));
            }
            if (*(void **)(*piVar12 + 0x13c) != (void *)0x0) {
              FUN_004ffdd0(bea_arg(*(void **)(*piVar12 + 0x13c)), bea_arg(piVar7), bea_arg(0));
            }
          }
          goto LAB_004e8caa;
        }
      }
      else {
        iVar10 = piVar12[4];
        uVar8 = FUN_00401ec0(bea_arg(auStack_40), bea_arg(piVar12[1]), bea_arg(piVar12[2]), bea_arg(0));
        uVar8 = FUN_0040d2c0(bea_arg((void *)(piVar12[4] + 0x3c)), bea_arg(auStack_30), bea_arg(uVar8));
        FUN_00401ee0(bea_arg((void *)(iVar10 + 0x1c)), bea_arg(auStack_50), bea_arg(uVar8));
        FUN_0040d120(bea_arg((void *)(*piVar12 + 0x1c)), bea_arg(&fStack_70), bea_arg(auStack_50));
        bea_vcall<uint32_t>(piVar12[4], 0x138);
        fVar1 = fStack_6c * fStack_6c;
        fVar4 = fStack_70 * fStack_70;
        fVar15 = (float10)bea_vcall<float10>(piVar12[4], 0x138);
        if (SQRT((float10)(fVar4 + fVar1)) <= fVar15 * (float10)1.5) goto LAB_004e8b73;
      }
      if (((void *)*piVar12 == (void *)0x0) ||
         (iVar10 = FUN_004fd570(bea_arg((void *)*piVar12)), iVar10 == 0)) {
        if ((*piVar12 != 0) && (this_00 = *(void **)(*piVar12 + 0x13c), this_00 != (void *)0x0)) {
          piVar7 = (int *)0x0;
LAB_004e8c36:
          FUN_004ffdd0(bea_arg(this_00), bea_arg(piVar7), bea_arg(0));
        }
      }
      else if ((void *)*piVar12 != (void *)0x0) {
        if (piVar7 != (int *)0x0) {
          FUN_004fcec0(bea_arg((void *)*piVar12), bea_arg(piVar7[7]), bea_arg(piVar7[8]), bea_arg(piVar7[9]), bea_arg(piVar7[10]));
        }
        this_00 = *(void **)(*piVar12 + 0x13c);
        if (this_00 != (void *)0x0) goto LAB_004e8c36;
      }
      if (*piVar12 != 0) {
        iVar10 = piVar12[4];
        uVar8 = FUN_00401ec0(bea_arg(auStack_20), bea_arg(piVar12[1]), bea_arg(piVar12[2]), bea_arg(0));
        uVar8 = FUN_0040d2c0(bea_arg((void *)(piVar12[4] + 0x3c)), bea_arg(auStack_10), bea_arg(uVar8));
        FUN_00401ee0(bea_arg((void *)(iVar10 + 0x1c)), bea_arg(&uStack_60), bea_arg(uVar8));
        bea_vcall<uint32_t>(*piVar12, 0xf4, uStack_60,uStack_5c,uStack_58,uStack_54,0);
      }
    }
LAB_004e8caa:
    puVar2 = (undefined4 *)puVar2[1];
    if (puVar2 == (undefined4 *)0x0) {
      piVar12 = (int *)0x0;
    }
    else {
      piVar12 = (int *)*puVar2;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e8930, ap_004e8930));
