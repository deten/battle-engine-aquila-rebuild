// auto-ported from 0050b030_FUN_0050b030.c (FUN_0050b030, 1256 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-uninit fStack_68: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_6c: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit fStack_70: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit local_144: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit local_148: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit uStack_170: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_004011b0_t const FUN_004011b0 = (FUN_004011b0_t)0x004011b0;
typedef uint32_t (BEA_THISCALL* FUN_004780f0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_004780f0_t const FUN_004780f0 = (FUN_004780f0_t)0x004780f0;
typedef int (BEA_THISCALL* FUN_00490a40_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_00490a40_t const FUN_00490a40 = (FUN_00490a40_t)0x00490a40;
typedef int (BEA_THISCALL* FUN_00492110_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_00492110_t const FUN_00492110 = (FUN_00492110_t)0x00492110;
typedef int (BEA_THISCALL* FUN_004925a0_t)(uint32_t);
static FUN_004925a0_t const FUN_004925a0 = (FUN_004925a0_t)0x004925a0;
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static FUN_00492c90_t const FUN_00492c90 = (FUN_00492c90_t)0x00492c90;
typedef undefined4 (BEA_THISCALL* FUN_004f3d10_t)(uint32_t);
static FUN_004f3d10_t const FUN_004f3d10 = (FUN_004f3d10_t)0x004f3d10;

static undefined4 BEA_STDCALL ap_0050b030(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, float param_6, float param_7, float param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, int *param_14, undefined4 *param_15, int param_16, int param_17, int param_18, uint param_19, undefined4 param_20, uint param_21)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  void *pvVar5;
  int *this_local;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fStack_1a0;
  float local_19c;
  float local_198;
  undefined4 local_194;
  undefined4 uStack_170 = 0;
  float local_14c;
  float local_148;
  float local_144;
  undefined1 auStack_13c [16];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined4 uStack_11c;
  undefined1 auStack_118 [16];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_f8;
  undefined4 local_f4 [2];
  undefined1 local_ec [96];
  undefined4 uStack_8c;
  undefined4 local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 local_4c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar9 = param_15;
  param_15[2] = 0;
  local_f4[0] = 0;
  FUN_004011b0(bea_arg(local_ec), bea_arg(0x10), bea_arg(6), bea_arg(((void*)0x00402d20)));
  local_194 = 0xffffffff;
  local_19c = 99999.0;
  iVar4 = FUN_00490a40(bea_arg(&DAT_006fadc8), bea_arg(&param_1), bea_arg(&local_14c), bea_arg(param_20));
  if (iVar4 != 0) {
    puVar9[2] = 1;
    local_19c = SQRT((param_6 - local_14c) * (param_6 - local_14c) +
                     (param_7 - local_148) * (param_7 - local_148) +
                     (param_8 - local_144) * (param_8 - local_144));
    puVar9[3] = local_19c;
  }
  local_198 = local_19c;
  piVar8 = (int *)0x0;
  pvVar5 = (void *)FUN_00492110(bea_arg(&DAT_00704200), bea_arg(param_6), bea_arg(param_7), bea_arg(param_8), bea_arg(param_9), bea_arg(param_10), bea_arg(param_11), bea_arg(param_12), bea_arg(param_13));
  if (pvVar5 != (void *)0x0) {
    do {
      this_local = (int *)FUN_00492c90(bea_arg(pvVar5));
      if ((((this_local == param_14) || ((*(byte *)(this_local + 0xb) & 0x10) != 0)) ||
          ((param_19 & this_local[0xd]) != 0)) ||
         ((((param_21 & this_local[0xd]) == 0 ||
           (piVar6 = (int *)FUN_004f3d10(bea_arg(this_local)), puVar9 = param_15, piVar6 == (int *)0x0)) ||
          ((*(byte *)(piVar6 + 3) & 0xc0) == 0)))) {
LAB_0050b4bc:
        pvVar5 = (void *)FUN_004925a0(bea_arg(&DAT_00704200));
      }
      else {
        if (((*(byte *)(this_local + 0xb) & 4) == 0) || ((this_local[0xd] & 0x100U) != 0)) {
          iVar7 = bea_vcall<uint32_t>(piVar6, 0x1c);
          fVar1 = *(float *)(iVar7 + 4) + (float)this_local[7];
          puVar9 = local_f4;
          fVar2 = *(float *)(iVar7 + 8) + (float)this_local[8];
          fVar3 = *(float *)(iVar7 + 0xc) + (float)this_local[9];
          fVar12 = -fVar1;
          fVar13 = -fVar2;
          fVar14 = -fVar3;
          puVar11 = &param_1;
          uVar15 = uStack_170;
          pvVar5 = (void *)bea_vcall<uint32_t>(piVar6, 0x1c);
          iVar7 = FUN_004780f0(bea_arg(pvVar5), bea_arg(puVar11), bea_arg(fVar12), bea_arg(fVar13), bea_arg(fVar14), bea_arg(uVar15), bea_arg(puVar9));
          puVar9 = param_15;
          if (iVar7 != 0) {
            fVar1 = fVar1 - param_6;
            fVar2 = fVar2 - param_7;
            fVar3 = fVar3 - param_8;
            fVar10 = (float10)bea_vcall<float10>(this_local, 0x44);
            fStack_1a0 = (float)((float10)SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) -
                                fVar10);
            puVar9 = param_15;
            if (((iVar4 == 0) || (fStack_1a0 < local_19c)) &&
               ((piVar8 == (int *)0x0 || (fStack_1a0 < local_198)))) {
              uStack_8c = 0xffffffff;
              if (((param_18 == 2) || ((((byte)piVar6[3] & 0xc) == 8 && (param_17 == 1)))) &&
                 (piVar6 = (int *)piVar6[6], piVar6 != (int *)0x0)) {
                fStack_12c = (float)this_local[7] + (float)piVar6[1];
                fStack_128 = (float)piVar6[2] + (float)this_local[8];
                fStack_124 = (float)piVar6[3] + (float)this_local[9];
                iVar7 = bea_vcall<uint32_t>(piVar6, 0x10, auStack_13c,auStack_118,&param_1,local_f4);
                puVar9 = param_15;
                if ((iVar7 == 0) ||
                   (((fStack_1a0 = SQRT((fStack_70 - param_6) * (fStack_70 - param_6) +
                                        (fStack_6c - param_7) * (fStack_6c - param_7) +
                                        (fStack_68 - param_8) * (fStack_68 - param_8)), iVar4 != 0
                     && (local_19c < fStack_1a0)) || (local_198 < fStack_1a0)))) goto LAB_0050b4bc;
              }
              if (param_16 != 0) {
                param_15[2] = 3;
                return 3;
              }
              local_194 = uStack_8c;
              local_198 = fStack_1a0;
              piVar8 = this_local;
              puVar9 = param_15;
            }
          }
          goto LAB_0050b4bc;
        }
        pvVar5 = (void *)FUN_004925a0(bea_arg(&DAT_00704200));
        puVar9 = param_15;
      }
    } while (BEA_LOOP_GUARD((pvVar5 != (void *)0x0)));
    if (piVar8 != (int *)0x0) {
      *puVar9 = piVar8;
      puVar9[1] = local_194;
      puVar9[2] = 3;
      puVar9[3] = local_198;
    }
  }
  return puVar9[2];
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050b030, ap_0050b030));
