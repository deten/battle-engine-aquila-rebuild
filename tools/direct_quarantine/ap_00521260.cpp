// auto-ported from 00521260_FUN_00521260.c (FUN_00521260, 613 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_0063fd1c GLOBAL_AT(float, 0x0063fd1c)
#define DAT_0063fd24 GLOBAL_AT(int, 0x0063fd24)
#define DAT_0063fd20 GLOBAL_AT(float, 0x0063fd20)
#define _DAT_0063fd28 GLOBAL_AT(float, 0x0063fd28)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_0063fd30 GLOBAL_AT(int, 0x0063fd30)
typedef uint32_t (BEA_STDCALL* FUN_00465710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465710_t> FUN_00465710 = {(FUN_00465710_t)0x00465710};
typedef uint32_t (BEA_STDCALL* FUN_00466e70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466e70_t> FUN_00466e70 = {(FUN_00466e70_t)0x00466e70};
typedef uint32_t (BEA_STDCALL* FUN_00467010_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467010_t> FUN_00467010 = {(FUN_00467010_t)0x00467010};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))

static void BEA_THISCALL ap_00521260(void * this_, float param_1, undefined4 param_2, uint32_t param_3_bits)
{float param_3_f = __builtin_bit_cast(float, param_3_bits);   // @autoport-float-param: the slot holds a pointer first, a float later

  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int *piVar17;
  undefined4 uVar18;
  undefined4 uVar19;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  int &local_50 = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x50);
  int &local_4c = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x4c);
  int (&aiStack_48)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x50 - 0x48);
  undefined4 (&auStack_40)[16] = *reinterpret_cast<undefined4 (*)[16]>(bea_frame_ + 0x50 - 0x40);
  iVar1 = (int)param_3_bits;
  uVar6 = (int)param_3_bits * 0xa00000;
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  FUN_00467010(bea_arg(DAT_0063fd1c), bea_arg(DAT_0063fd24), bea_arg(DAT_0063fd20), bea_arg(_DAT_0063fd28 + 3.0f), bea_arg(0x3e051eb8), bea_arg(uVar6 & 0xff000000));
  FUN_00466e70(bea_arg(DAT_0063fd1c), bea_arg(DAT_0063fd24), bea_arg(DAT_0063fd20), bea_arg(_DAT_0063fd28 + 3.0f), bea_arg(uVar6 | 0xffffff), bea_arg(0x40000000), bea_arg(0x3e051eb8));
  piVar17 = &local_50;
  puVar7 = (undefined4 *)((int)this_ + 4);
  puVar8 = puVar7;
  pvVar2 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00540680(bea_arg(pvVar2), bea_arg(puVar8), bea_arg(piVar17));
  param_3_f = ((DAT_0063fd20 - DAT_0063fd1c) * 0.5f + DAT_0063fd1c) - (float)(local_50 >> 1);
  if (*(char *)((int)this_ + 0x48) != '\0') {
    FUN_00467010(bea_arg(param_3_f - 2.0f), bea_arg(param_1), bea_arg((float)local_50 + param_3_f + 2.0f), bea_arg((float)local_4c + param_1), bea_arg(0x3e051eb8), bea_arg((iVar1 * 0xff & 0xff00U) << 0x10 | 0x80a0));
  }
  uVar5 = iVar1 * 0xff0000;
  uVar18 = 0;
  uVar16 = 0;
  uVar15 = 0x447a0000;
  uVar6 = uVar5 | 0xffffff;
  uVar14 = 0x3f800000;
  uVar13 = 0x3f800000;
  uVar12 = 0x3e051eb8;
  fVar10 = param_3_f;
  fVar11 = param_1;
  puVar8 = puVar7;
  FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00465710(bea_arg(fVar10), bea_arg(fVar11), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14), bea_arg(uVar6), bea_arg(puVar8), bea_arg(uVar15), bea_arg(uVar16), bea_arg(uVar18));
  if (*(char *)((int)this_ + 0x48) == '\0') {
    fVar9 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
    fVar9 = _CIfmod((float10)1.0f,fVar9);
    if (fVar9 < (float10)0.5f) {
      uVar6 = *(uint *)((int)this_ + 0x44);
      param_1 = 1.02295e-43;
      uVar3 = 0;
      if (0 < (int)uVar6) {
        puVar8 = auStack_40;
        for (uVar3 = uVar6 >> 1; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar4 = (uint)((uVar6 & 1) != 0); BEA_LOOP_GUARD((uVar3 = uVar6, uVar4 != 0)); uVar4 = uVar4 - 1) {
          *(undefined2 *)puVar8 = *(undefined2 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 2);
          puVar8 = (undefined4 *)((int)puVar8 + 2);
        }
      }
      *(undefined2 *)((int)auStack_40 + uVar3 * 2) = 0;
      piVar17 = aiStack_48;
      puVar7 = auStack_40;
      pvVar2 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00540680(bea_arg(pvVar2), bea_arg(puVar7), bea_arg(piVar17));
      uVar19 = 0;
      uVar18 = 0;
      puVar7 = (undefined4*)&param_1;
      uVar16 = 0x447a0000;
      uVar6 = uVar5 & 0xff0080a0 | 0x80a0;
      fVar10 = (float)aiStack_48[0] + param_3_f + 1.0f;
      uVar15 = 0x3f800000;
      uVar14 = 0x3f800000;
      uVar13 = 0x3e051eb8;
      uVar12 = DAT_0063fd30;
      FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00465710(bea_arg(fVar10), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14), bea_arg(uVar15), bea_arg(uVar6), bea_arg(puVar7), bea_arg(uVar16), bea_arg(uVar18), bea_arg(uVar19));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00521260, ap_00521260));
