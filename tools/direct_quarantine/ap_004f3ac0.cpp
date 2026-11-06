// auto-ported from 004f3ac0_FUN_004f3ac0.c (FUN_004f3ac0, 394 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit fStack_14: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (17 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0083d9c0 GLOBAL_AT(float, 0x0083d9c0)

static void BEA_THISCALL ap_004f3ac0(void * this_, float *param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  float fStack_14 = 0;
  
  uVar15 = *(uint *)((int)this_ + 0x34);
  if ((uVar15 & 0x80100) == 0) {
    if ((uVar15 & 8) == 0) {
      if (*(int **)((int)this_ + 0x30) != (int *)0x0) {
        iVar16 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x10);
        if (iVar16 != 0) {
          fVar1 = *(float *)((int)this_ + 0x20);
          fVar2 = *(float *)(iVar16 + 8);
          fVar3 = *(float *)((int)this_ + 0x24);
          *param_1 = *(float *)((int)this_ + 0x1c);
          param_1[1] = fVar1;
          param_1[2] = fVar2 + fVar3;
          param_1[3] = fStack_14;
          return;
        }
      }
    }
    else if ((uVar15 & 0x200) != 0) {
      *param_1 = *(float *)((int)this_ + 0x1c);
      param_1[1] = *(float *)((int)this_ + 0x20);
      param_1[2] = *(float *)((int)this_ + 0x24);
      param_1[3] = *(float *)((int)this_ + 0x28);
      param_1[2] = param_1[2] + 0.76f;
      return;
    }
  }
  else if (*(int **)((int)this_ + 0x30) != (int *)0x0) {
    iVar16 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x10);
    if (iVar16 != 0) {
      pfVar18 = (float *)((int)this_ + 0x3c);
      if ((*(uint *)((int)this_ + 0x34) & 0x80000000) == 0) {
        pfVar18 = (float *)&DAT_0083d9c0;
      }
      pfVar17 = (float *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x10);
      fVar1 = pfVar18[6];
      fVar2 = pfVar17[2];
      fVar3 = pfVar18[5];
      fVar4 = pfVar17[1];
      fVar5 = pfVar18[4];
      fVar6 = *pfVar17;
      fVar7 = pfVar18[10];
      fVar8 = pfVar17[2];
      fVar9 = pfVar18[9];
      fVar10 = pfVar17[1];
      fVar11 = pfVar18[8];
      fVar12 = *pfVar17;
      fVar13 = *(float *)((int)this_ + 0x20);
      fVar14 = *(float *)((int)this_ + 0x24);
      *param_1 = *pfVar18 * *pfVar17 + pfVar18[1] * pfVar17[1] + pfVar18[2] * pfVar17[2] +
                 *(float *)((int)this_ + 0x1c);
      param_1[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar13;
      param_1[2] = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8 + fVar14;
      param_1[3] = fStack_14;
      return;
    }
  }
  *param_1 = *(float *)((int)this_ + 0x1c);
  param_1[1] = *(float *)((int)this_ + 0x20);
  param_1[2] = *(float *)((int)this_ + 0x24);
  param_1[3] = *(float *)((int)this_ + 0x28);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3ac0, ap_004f3ac0));
