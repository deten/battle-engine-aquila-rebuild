// auto-ported from 0048b8e0_FUN_0048b8e0.c (FUN_0048b8e0, 1672 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char fStack_30;
#define DAT_008550b0 GLOBAL_AT(undefined4, 0x008550b0)
#define DAT_008550c0 GLOBAL_AT(undefined4, 0x008550c0)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static FUN_00406d20_t const FUN_00406d20 = (FUN_00406d20_t)0x00406d20;
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static FUN_00406d30_t const FUN_00406d30 = (FUN_00406d30_t)0x00406d30;
typedef undefined4 (BEA_THISCALL* FUN_00409760_t)(uint32_t);
static FUN_00409760_t const FUN_00409760 = (FUN_00409760_t)0x00409760;
typedef undefined4 (BEA_THISCALL* FUN_00409780_t)(uint32_t);
static FUN_00409780_t const FUN_00409780 = (FUN_00409780_t)0x00409780;
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_0044b370_t const FUN_0044b370 = (FUN_0044b370_t)0x0044b370;
typedef uint32_t (BEA_THISCALL* FUN_0048c3b0_t)(uint32_t, uint32_t);
static FUN_0048c3b0_t const FUN_0048c3b0 = (FUN_0048c3b0_t)0x0048c3b0;
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static FUN_004de8d0_t const FUN_004de8d0 = (FUN_004de8d0_t)0x004de8d0;

static void BEA_THISCALL ap_0048b8e0(void * this_, float param_1)
{
  int *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  void *this_01;
  uint uVar12;
  int iVar13;
  int *piVar14;
  float10 fVar15;
  float fStack_30;
  float local_2c;
  undefined1 local_10 [4];
  undefined4 *local_c;
  undefined1 local_8 [4];
  undefined4 *local_4;
  
  this_00 = (int *)((int)this_ + 8);
  iVar8 = FUN_00406d20(bea_arg(this_00));
  while (BEA_LOOP_GUARD((iVar8 != 0))) {
    *(undefined4 *)(iVar8 + 0x9c) = 0;
    *(undefined4 *)(iVar8 + 0xa0) = 0;
    *(undefined4 *)(iVar8 + 0xa4) = 0;
    *(undefined4 *)(iVar8 + 0xa8) = 0;
    *(undefined4 *)(iVar8 + 0xb8) = 0;
    *(undefined4 *)(iVar8 + 0xac) = 99999;
    *(undefined4 *)(iVar8 + 0xb0) = 99999;
    iVar8 = FUN_00406d30(bea_arg(this_00));
  }
  local_c = &DAT_008550b0;
  piVar9 = (int *)FUN_00409760(bea_arg(local_10));
  while (BEA_LOOP_GUARD((piVar9 != (int *)0x0))) {
    if ((*(byte *)(piVar9 + 0xb) & 4) == 0) {
      uVar12 = piVar9[0xd];
      if ((uVar12 & 0x10) == 0) {
        if ((uVar12 & 0x20000000) != 0) {
          fVar3 = (float)piVar9[7];
          fVar4 = (float)piVar9[8];
          fStack_30 = 999999.0;
          piVar14 = (int *)0x0;
          piVar10 = (int *)FUN_00406d20(bea_arg(this_00));
          while (BEA_LOOP_GUARD((piVar7 = piVar14, piVar10 != (int *)0x0))) {
            fVar1 = (float)piVar10[0x23];
            fVar2 = (float)piVar10[0x24];
            fVar15 = (float10)bea_vcall<float10>(piVar10, 0x40);
            fVar15 = (float10)(ABS(fVar3 - fVar1) + ABS(fVar4 - fVar2)) - fVar15;
            piVar7 = piVar10;
            if (fVar15 < (float10)0.0f) break;
            if (fVar15 < (float10)fStack_30) {
              fStack_30 = (float)fVar15;
              piVar14 = piVar10;
            }
            piVar10 = (int *)FUN_00406d30(bea_arg(this_00));
          }
          goto joined_r0x0048baa0;
        }
      }
      else if ((uVar12 & 0x88400) == 0) {
        fVar3 = (float)piVar9[7];
        fVar4 = (float)piVar9[8];
        local_2c = 999999.0;
        piVar14 = (int *)0x0;
        piVar10 = (int *)FUN_00406d20(bea_arg(this_00));
        while (BEA_LOOP_GUARD((piVar7 = piVar14, piVar10 != (int *)0x0))) {
          fVar1 = (float)piVar10[0x23];
          fVar2 = (float)piVar10[0x24];
          fVar15 = (float10)bea_vcall<float10>(piVar10, 0x40);
          fVar15 = (float10)(ABS(fVar3 - fVar1) + ABS(fVar4 - fVar2)) - fVar15;
          piVar7 = piVar10;
          if (fVar15 < (float10)0.0f) break;
          if (fVar15 < (float10)local_2c) {
            local_2c = (float)fVar15;
            piVar14 = piVar10;
          }
          piVar10 = (int *)FUN_00406d30(bea_arg(this_00));
        }
joined_r0x0048baa0:
        if (piVar7 != (int *)0x0) {
          fVar15 = (float10)bea_vcall<float10>(piVar9, 0x13c);
          piVar7[0x27] = (int)(float)(fVar15 + (float10)(float)piVar7[0x27]);
          fVar15 = (float10)bea_vcall<float10>(piVar9, 0x140);
          piVar7[0x28] = (int)(float)(fVar15 + (float10)(float)piVar7[0x28]);
        }
      }
    }
    piVar9 = (int *)FUN_00409780(bea_arg(local_10));
  }
  local_4 = &DAT_008550c0;
  piVar9 = (int *)FUN_00409760(bea_arg(local_8));
  do {
    if (piVar9 == (int *)0x0) {
      puVar5 = *(undefined4 **)((int)this_ + 0x18);
      if (puVar5 == (undefined4 *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)*puVar5;
      }
      while (BEA_LOOP_GUARD((piVar9 != (int *)0x0))) {
        iVar8 = *piVar9;
        if (iVar8 != 0) {
          if (piVar9[2] == 0) {
            *(float *)(iVar8 + 0x9c) = (float)piVar9[1] + *(float *)(iVar8 + 0x9c);
            *(float *)(*piVar9 + 0xa0) = (float)piVar9[1] + *(float *)(*piVar9 + 0xa0);
          }
          else if (piVar9[2] == 1) {
            *(float *)(iVar8 + 0xa4) = (float)piVar9[1] + *(float *)(iVar8 + 0xa4);
            *(float *)(*piVar9 + 0xa8) = (float)piVar9[1] + *(float *)(*piVar9 + 0xa8);
          }
        }
        puVar5 = (undefined4 *)puVar5[1];
        if (puVar5 == (undefined4 *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)*puVar5;
        }
      }
      piVar9 = (int *)*this_00;
      *(int **)((int)this_ + 0x10) = piVar9;
      if (piVar9 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar9;
      }
      while (BEA_LOOP_GUARD((iVar8 != 0))) {
        if (*(float *)(iVar8 + 0x9c) != 0.0f) {
          *(undefined4 *)(iVar8 + 0xb0) = 0;
        }
        if (*(float *)(iVar8 + 0xa4) != 0.0f) {
          *(undefined4 *)(iVar8 + 0xac) = 0;
        }
        piVar9 = *(int **)(*(int *)((int)this_ + 0x10) + 4);
        *(int **)((int)this_ + 0x10) = piVar9;
        if (piVar9 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *piVar9;
        }
      }
      iVar8 = 10;
      do {
        piVar9 = (int *)*this_00;
        *(int **)((int)this_ + 0x10) = piVar9;
        uVar6 = param_1;
        if (piVar9 == (int *)0x0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *piVar9;
        }
        while (BEA_LOOP_GUARD((param_1 = (float)uVar6, iVar11 != 0))) {
          if (*(float *)(iVar11 + 0x9c) + *(float *)(iVar11 + 0xa4) == 0.0f) {
            fStack_30 = 0.0f;
            local_2c = 0.0f;
            piVar9 = (int *)FUN_00406d20(bea_arg((void *)(iVar11 + 0x7c)));
            while (BEA_LOOP_GUARD((piVar9 != (int *)0x0))) {
              fStack_30 = *(float *)(*piVar9 + 0x9c) + fStack_30;
              local_2c = *(float *)(*piVar9 + 0xa4) + local_2c;
              piVar9 = (int *)FUN_00406d30(bea_arg((void *)(iVar11 + 0x7c)));
            }
            *(float *)(iVar11 + 0x9c) = fStack_30 * 0.1f;
            *(float *)(iVar11 + 0xa4) = local_2c * 0.1f;
          }
          piVar9 = *(int **)(*(int *)((int)this_ + 0x10) + 4);
          *(int **)((int)this_ + 0x10) = piVar9;
          uVar6 = param_1;
          if (piVar9 == (int *)0x0) {
            iVar11 = 0;
          }
          else {
            iVar11 = *piVar9;
          }
        }
        iVar8 = iVar8 + -1;
      } while (BEA_LOOP_GUARD((iVar8 != 0)));
      iVar8 = 0x14;
      do {
        piVar9 = (int *)*this_00;
        *(int **)((int)this_ + 0x10) = piVar9;
        if (piVar9 == (int *)0x0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *piVar9;
        }
        while (BEA_LOOP_GUARD((iVar11 != 0))) {
          puVar5 = *(undefined4 **)(iVar11 + 0x7c);
          *(undefined4 **)(iVar11 + 0x84) = puVar5;
          if (puVar5 == (undefined4 *)0x0) {
            piVar9 = (int *)0x0;
          }
          else {
            piVar9 = (int *)*puVar5;
          }
          while (BEA_LOOP_GUARD((piVar9 != (int *)0x0))) {
            iVar13 = *(int *)(*piVar9 + 0xb0) + 1;
            if (iVar13 < *(int *)(iVar11 + 0xb0)) {
              *(int *)(iVar11 + 0xb0) = iVar13;
            }
            iVar13 = *(int *)(*piVar9 + 0xac) + 1;
            if (iVar13 < *(int *)(iVar11 + 0xac)) {
              *(int *)(iVar11 + 0xac) = iVar13;
            }
            puVar5 = *(undefined4 **)(*(int *)(iVar11 + 0x84) + 4);
            *(undefined4 **)(iVar11 + 0x84) = puVar5;
            if (puVar5 == (undefined4 *)0x0) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = (int *)*puVar5;
            }
          }
          piVar9 = *(int **)(*(int *)((int)this_ + 0x10) + 4);
          *(int **)((int)this_ + 0x10) = piVar9;
          if (piVar9 == (int *)0x0) {
            iVar11 = 0;
          }
          else {
            iVar11 = *piVar9;
          }
        }
        iVar8 = iVar8 + -1;
      } while (BEA_LOOP_GUARD((iVar8 != 0)));
      puVar5 = (undefined4 *)*this_00;
      *(undefined4 **)((int)this_ + 0x10) = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        this_01 = (void *)0x0;
      }
      else {
        this_01 = (void *)*puVar5;
      }
      while (BEA_LOOP_GUARD((this_01 != (void *)0x0))) {
        FUN_0048c3b0(bea_arg(this_01), bea_arg(uVar6));
        puVar5 = *(undefined4 **)(*(int *)((int)this_ + 0x10) + 4);
        *(undefined4 **)((int)this_ + 0x10) = puVar5;
        if (puVar5 == (undefined4 *)0x0) {
          this_01 = (void *)0x0;
        }
        else {
          this_01 = (void *)*puVar5;
        }
      }
      uVar12 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      uVar12 = uVar12 & 0x8000ffff;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xffff0000) + 1;
      }
      param_1 = (float)(int)uVar12 * 1.5258789e-05f + DAT_00672fd0 + 1.0f;
      FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(1000), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
      return;
    }
    if ((*(byte *)(piVar9 + 0xb) & 4) == 0) {
      uVar12 = piVar9[0xd];
      if ((uVar12 & 0x10) == 0) {
        if ((uVar12 & 0x20000000) != 0) {
          fVar3 = (float)piVar9[7];
          fVar4 = (float)piVar9[8];
          fStack_30 = 999999.0;
          piVar14 = (int *)0x0;
          piVar10 = (int *)FUN_00406d20(bea_arg(this_00));
          while (BEA_LOOP_GUARD((piVar7 = piVar14, piVar10 != (int *)0x0))) {
            fVar1 = (float)piVar10[0x23];
            fVar2 = (float)piVar10[0x24];
            fVar15 = (float10)bea_vcall<float10>(piVar10, 0x40);
            fVar15 = (float10)(ABS(fVar3 - fVar1) + ABS(fVar4 - fVar2)) - fVar15;
            piVar7 = piVar10;
            if (fVar15 < (float10)0.0f) break;
            if (fVar15 < (float10)fStack_30) {
              fStack_30 = (float)fVar15;
              piVar14 = piVar10;
            }
            piVar10 = (int *)FUN_00406d30(bea_arg(this_00));
          }
          goto joined_r0x0048bc51;
        }
      }
      else if ((uVar12 & 0x88400) == 0) {
        fVar3 = (float)piVar9[7];
        fVar4 = (float)piVar9[8];
        local_2c = 999999.0;
        piVar14 = (int *)0x0;
        piVar10 = (int *)FUN_00406d20(bea_arg(this_00));
        while (BEA_LOOP_GUARD((piVar7 = piVar14, piVar10 != (int *)0x0))) {
          fVar1 = (float)piVar10[0x23];
          fVar2 = (float)piVar10[0x24];
          fVar15 = (float10)bea_vcall<float10>(piVar10, 0x40);
          fVar15 = (float10)(ABS(fVar3 - fVar1) + ABS(fVar4 - fVar2)) - fVar15;
          piVar7 = piVar10;
          if (fVar15 < (float10)0.0f) break;
          if (fVar15 < (float10)local_2c) {
            local_2c = (float)fVar15;
            piVar14 = piVar10;
          }
          piVar10 = (int *)FUN_00406d30(bea_arg(this_00));
        }
joined_r0x0048bc51:
        if (piVar7 != (int *)0x0) {
          fVar15 = (float10)bea_vcall<float10>(piVar9, 0x13c);
          piVar7[0x29] = (int)(float)(fVar15 + (float10)(float)piVar7[0x29]);
          fVar15 = (float10)bea_vcall<float10>(piVar9, 0x140);
          piVar7[0x2a] = (int)(float)(fVar15 + (float10)(float)piVar7[0x2a]);
        }
      }
    }
    piVar9 = (int *)FUN_00409780(bea_arg(local_8));
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048b8e0, ap_0048b8e0));
