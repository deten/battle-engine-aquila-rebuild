// auto-ported from 0048c120_vslot0.c (CInfluenceMap::vslot0, 418 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CInfluenceMap;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_0048b8e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0048b8e0_t> FUN_0048b8e0 = {(FUN_0048b8e0_t)0x0048b8e0};
typedef uint32_t (BEA_THISCALL* FUN_0048c3b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0048c3b0_t> FUN_0048c3b0 = {(FUN_0048c3b0_t)0x0048c3b0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0048c120(CInfluenceMap * this_, uint32_t param_1_bits)
{float param_1_f = __builtin_bit_cast(float, param_1_bits);   // @autoport-float-param: the slot holds a pointer first, a float later

  short sVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  void *this_00;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  sVar1 = *(short *)((int)param_1_bits + 4);
  if (sVar1 == 1000) {
    FUN_0048b8e0(bea_arg(this_), bea_arg(1));
  }
  else {
    if (sVar1 == 0x3e9) {
      puVar2 = *(undefined4 **)(this_ + 8);
      *(undefined4 **)(this_ + 0x10) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        this_00 = (void *)0x0;
      }
      else {
        this_00 = (void *)*puVar2;
      }
      while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
        FUN_0048c3b0(bea_arg(this_00), bea_arg(1));
        puVar2 = *(undefined4 **)(*(int *)(this_ + 0x10) + 4);
        *(undefined4 **)(this_ + 0x10) = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          this_00 = (void *)0x0;
        }
        else {
          this_00 = (void *)*puVar2;
        }
      }
      iVar4 = 0x14;
      do {
        piVar5 = *(int **)(this_ + 8);
        *(int **)(this_ + 0x10) = piVar5;
        if (piVar5 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar5;
        }
        while (BEA_LOOP_GUARD((iVar6 != 0))) {
          piVar5 = (int *)FUN_00406d20(bea_arg((void *)(iVar6 + 0x7c)));
          while (BEA_LOOP_GUARD((piVar5 != (int *)0x0))) {
            iVar7 = *(int *)(*piVar5 + 0xb0) + 1;
            if (iVar7 < *(int *)(iVar6 + 0xb0)) {
              *(int *)(iVar6 + 0xb0) = iVar7;
            }
            iVar7 = *(int *)(*piVar5 + 0xac) + 1;
            if (iVar7 < *(int *)(iVar6 + 0xac)) {
              *(int *)(iVar6 + 0xac) = iVar7;
            }
            piVar5 = (int *)FUN_00406d30(bea_arg((void *)(iVar6 + 0x7c)));
          }
          piVar5 = *(int **)(*(int *)(this_ + 0x10) + 4);
          *(int **)(this_ + 0x10) = piVar5;
          if (piVar5 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar5;
          }
        }
        iVar4 = iVar4 + -1;
      } while (BEA_LOOP_GUARD((iVar4 != 0)));
      param_1_f = DAT_00672fd0 + 0.25f;
      FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x3e9), bea_arg(this_), bea_arg(&param_1_f), bea_arg(0), bea_arg(0), bea_arg(0));
      return;
    }
    if (sVar1 == 0x3ea) {
      piVar5 = *(int **)(this_ + 0x18);
      if (piVar5 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar5;
      }
      do {
        if (iVar4 == 0) {
LAB_0048c198:
          param_1_f = DAT_00672fd0 + 0.5f;
          FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x3ea), bea_arg(this_), bea_arg(&param_1_f), bea_arg(0), bea_arg(0), bea_arg(0));
          return;
        }
        fVar3 = *(float *)(iVar4 + 4) - 0.2f;
        *(float *)(iVar4 + 4) = fVar3;
        if (fVar3 <= 0.0f) {
          FUN_004e5bd0(bea_arg(this_ + 0x18), bea_arg(iVar4));
          FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar4));
          goto LAB_0048c198;
        }
        piVar5 = (int *)piVar5[1];
        if (piVar5 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar5;
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048c120, ap_0048c120));
