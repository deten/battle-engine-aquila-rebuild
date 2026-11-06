// auto-ported from 0053c510_FUN_0053c510.c (FUN_0053c510, 2068 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit iStack_10: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit puStack_30: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit iStack_34: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit iStack_50: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit iStack_94: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit iStack_9c: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBattleEngine;
#define DAT_0065042c GLOBAL_AT(int, 0x0065042c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_008aa4e8 GLOBAL_AT(int, 0x008aa4e8)
#define DAT_00650430 GLOBAL_AT(int, 0x00650430)
typedef float10 (BEA_THISCALL* CBattleEngine__vslot78_t)(uint32_t);
static CBattleEngine__vslot78_t const CBattleEngine__vslot78 = (CBattleEngine__vslot78_t)0x00406040;
typedef float10 (BEA_THISCALL* FUN_0040c630_t)(uint32_t);
static FUN_0040c630_t const FUN_0040c630 = (FUN_0040c630_t)0x0040c630;
typedef undefined4 (BEA_THISCALL* FUN_004881e0_t)(uint32_t, uint32_t);
static FUN_004881e0_t const FUN_004881e0 = (FUN_004881e0_t)0x004881e0;
typedef float10 (BEA_THISCALL* FUN_004f99f0_t)(uint32_t);
static FUN_004f99f0_t const FUN_004f99f0 = (FUN_004f99f0_t)0x004f99f0;
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static FUN_00558690_t const FUN_00558690 = (FUN_00558690_t)0x00558690;

static void BEA_THISCALL ap_0053c510(void * this_, CBattleEngine *param_1)
{
  float fVar1;
  float fVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  short *psVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  ulonglong uVar18;
  short *local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint local_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  int iStack_9c = 0;
  uint uStack_98;
  int iStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  uint uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  short sStack_58;
  short sStack_54;
  int iStack_50;
  short sStack_4c;
  int iStack_34;
  undefined4 *puStack_30;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_10;
  
  FUN_004f99f0(bea_arg(param_1));
  CBattleEngine__vslot78(bea_arg(param_1));
  FUN_0040c630(bea_arg(param_1));
  piVar4 = (int *)FUN_00558690(bea_arg(*(void **)((int)this_ + *(int *)((int)this_ + 0x3c10) * 4 + 0x3f04)));
  iVar5 = bea_vcall<uint32_t>(piVar4, 0x4c, piVar4,0,&local_20,0,0x800);
  if (-1 < iVar5) {
    iStack_60 = 8;
    uVar8 = DAT_0065042c * 2;
    puVar16 = puStack_30;
    for (uVar7 = (DAT_0065042c & 0x7fffffff) >> 1; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    }
    iStack_70 = 3;
    for (uVar8 = uVar8 & 3; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar16 = 0;
      puVar16 = (undefined4 *)((int)puVar16 + 1);
    }
    iVar17 = 1;
    local_b8 = (short *)((int)puStack_30 + iStack_34);
    iStack_6c = 3;
    iStack_68 = 3;
    local_80 = 3;
    uVar8 = (uint)(*(int *)(*(int *)(iStack_10 + 0x574) + 0x2c) != 1);
    iStack_7c = 3;
    iStack_78 = 3;
    iStack_64 = 1;
    iVar5 = 1;
    iVar14 = 8;
    if (iStack_9c < *(int *)(iStack_50 + 0x3c14 + uVar8 * 4)) {
      iStack_64 = 0xf;
      iStack_60 = 1;
    }
    fVar1 = DAT_00672fd0 - *(float *)(iStack_10 + 0x2d4);
    if (2.0f < fVar1) {
      fVar1 = 2.0f;
    }
    fVar2 = 1.0f - fVar1 * 0.5f;
    if (2.0f <= fVar1) {
      if (*(int *)(iStack_50 + 0x3c1c + uVar8 * 4) < iStack_94) {
        iVar5 = 1;
        iVar17 = 5;
        iVar14 = 8;
      }
    }
    else {
      fVar1 = 1.0f - fVar2;
      iVar5 = (int)(longlong)ROUND(fVar2 * 15.0f + fVar1);
      iVar17 = (int)(longlong)ROUND(fVar1 + fVar2);
      iVar14 = (int)(longlong)ROUND(fVar1 * 8.0f + fVar2);
    }
    *(int *)(iStack_50 + 0x3c1c + uVar8 * 4) = iStack_94;
    *(int *)(iStack_50 + 0x3c14 + uVar8 * 4) = iStack_9c;
    iVar6 = FUN_004881e0(bea_arg(&DAT_008aa4e8), bea_arg(0));
    if (iVar6 == 0) {
      iStack_60 = 0;
      iStack_64 = 0;
      iStack_68 = 0;
      iStack_6c = 0;
      iStack_70 = 0;
    }
    uVar8 = (uint)(iVar6 != 0);
    iVar6 = FUN_004881e0(bea_arg(&DAT_008aa4e8), bea_arg(1));
    if (iVar6 == 0) {
      iVar14 = 0;
      iVar17 = 0;
      iVar5 = 0;
      iStack_78 = 0;
      iStack_7c = 0;
      local_80 = 0;
    }
    iVar6 = DAT_00650430 + -2;
    if (iVar6 != 0) {
      uStack_a4 = iVar6 * iVar14;
      local_ac = iVar6 * iVar17;
      uStack_b0 = iVar6 * iVar5;
      local_88 = iVar6 * iStack_78;
      uStack_98 = iVar6 * iStack_7c;
      uStack_b4 = iVar6 * local_80;
      uStack_a0 = iVar6 * uVar8;
      uStack_84 = iVar6 * iStack_60;
      uStack_a8 = iVar6 * iStack_64;
      uStack_90 = iVar6 * iStack_68;
      uStack_74 = iVar6 * iStack_6c;
      uStack_8c = iVar6 * iStack_70;
      uVar7 = iVar6 * 4;
      iStack_1c = -local_80;
      local_20 = -iStack_60;
      iStack_18 = -iStack_70;
      uVar18 = (ulonglong)(uint)-iVar14;
      do {
        uVar15 = DAT_00650430 - 2;
        sVar3 = (short)(uVar7 / uVar15) * 0x1000;
        sStack_4c = ((short)(uStack_8c / uVar15) * 0x10 + (short)(uStack_74 / uVar15)) * 0x10 +
                    (short)(uStack_90 / uVar15);
        sVar13 = ((short)(uStack_a8 / uVar15) * 0x10 + (short)(uStack_84 / uVar15)) * 0x10 +
                 (short)(uStack_a0 / uVar15);
        sStack_54 = ((short)(uStack_b4 / uVar15) * 0x10 + (short)(uStack_98 / uVar15)) * 0x10 +
                    (short)(local_88 / uVar15);
        sStack_58 = ((short)(uStack_b0 / uVar15) * 0x10 + (short)(local_ac / uVar15)) * 0x10 +
                    (short)(uStack_a4 / uVar15);
        iVar14 = FUN_004881e0(bea_arg(&DAT_008aa4e8), bea_arg(0));
        if (iVar14 != 0) {
          sStack_4c = sStack_4c + sVar3;
          sVar13 = sVar13 + sVar3;
        }
        iVar14 = FUN_004881e0(bea_arg(&DAT_008aa4e8), bea_arg(1));
        if (iVar14 != 0) {
          sStack_54 = sStack_54 + sVar3;
          sStack_58 = sStack_58 + sVar3;
        }
        uVar15 = 0;
        psVar11 = local_b8;
        if ((DAT_0065042c * 0x3c) / 0x168 != 0) {
          do {
            *psVar11 = 0;
            psVar11 = psVar11 + 1;
            uVar15 = uVar15 + 1;
          } while (BEA_LOOP_GUARD((uVar15 < (DAT_0065042c * 0x3c) / 0x168)));
        }
        if ((int)uVar15 < iStack_9c) {
          uVar9 = iStack_9c - uVar15;
          psVar12 = psVar11;
          for (uVar10 = uVar9 >> 1; BEA_LOOP_GUARD((uVar10 != 0)); uVar10 = uVar10 - 1) {
            *(uint *)psVar12 = CONCAT22(sStack_4c,sStack_4c);
            psVar12 = psVar12 + 2;
          }
          for (uVar10 = (uint)((uVar9 & 1) != 0); BEA_LOOP_GUARD((uVar10 != 0)); uVar10 = uVar10 - 1) {
            *psVar12 = sStack_4c;
            psVar12 = psVar12 + 1;
          }
          uVar15 = uVar15 + uVar9;
          psVar11 = psVar11 + uVar9;
        }
        if (uVar15 < (DAT_0065042c * 0x96) / 0x168) {
          do {
            *psVar11 = sVar13;
            psVar11 = psVar11 + 1;
            uVar15 = uVar15 + 1;
          } while (BEA_LOOP_GUARD((uVar15 < (DAT_0065042c * 0x96) / 0x168)));
        }
        if (uVar15 < (DAT_0065042c * 0xe1) / 0x168) {
          do {
            *psVar11 = 0;
            psVar11 = psVar11 + 1;
            uVar15 = uVar15 + 1;
          } while (BEA_LOOP_GUARD((uVar15 < (DAT_0065042c * 0xe1) / 0x168)));
        }
        psVar12 = psVar11;
        if ((int)uVar15 < iStack_94) {
          uVar10 = iStack_94 - uVar15;
          psVar12 = psVar11 + uVar10;
          for (uVar9 = uVar10 >> 1; BEA_LOOP_GUARD((uVar9 != 0)); uVar9 = uVar9 - 1) {
            *(uint *)psVar11 = CONCAT22(sStack_58,sStack_58);
            psVar11 = psVar11 + 2;
          }
          uVar15 = uVar15 + uVar10;
          for (uVar9 = (uint)((uVar10 & 1) != 0); BEA_LOOP_GUARD((uVar9 != 0)); uVar9 = uVar9 - 1) {
            *psVar11 = sStack_58;
            psVar11 = psVar11 + 1;
          }
        }
        if (uVar15 < (DAT_0065042c * 0x168) / 0x168) {
          do {
            *psVar12 = sStack_54;
            psVar12 = psVar12 + 1;
            uVar15 = uVar15 + 1;
          } while (BEA_LOOP_GUARD((uVar15 < (DAT_0065042c * 0x168) / 0x168)));
        }
        local_b8 = (short *)((int)local_b8 + iStack_34);
        uStack_8c = uStack_8c + iStack_18;
        uStack_90 = uStack_90 - iStack_68;
        uStack_74 = uStack_74 - iStack_6c;
        uVar7 = uVar7 - 4;
        uStack_a8 = uStack_a8 - iStack_64;
        uStack_a0 = uStack_a0 - uVar8;
        uStack_84 = uStack_84 + local_20;
        uStack_98 = uStack_98 - iStack_7c;
        uStack_b4 = uStack_b4 + iStack_1c;
        local_88 = local_88 - iStack_78;
        uStack_b0 = uStack_b0 - iVar5;
        local_ac = local_ac - iVar17;
        uStack_a4 = uStack_a4 + (int)uVar18;
        iVar6 = iVar6 + -1;
      } while (BEA_LOOP_GUARD((iVar6 != 0)));
    }
    uVar8 = DAT_0065042c * 2;
    for (uVar7 = (DAT_0065042c & 0x7fffffff) >> 1; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_b8 = local_b8 + 2;
    }
    for (uVar8 = uVar8 & 3; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
      *(undefined1 *)local_b8 = 0;
      local_b8 = (short *)((int)local_b8 + 1);
    }
    piVar4 = (int *)FUN_00558690(bea_arg(*(void **)(iStack_50 + 0x3f04 + *(int *)(iStack_50 + 0x3c10) * 4)));
    bea_vcall<uint32_t>(piVar4, 0x50, piVar4,0);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053c510, ap_0053c510));
