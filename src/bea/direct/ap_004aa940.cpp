// auto-ported from 004aa940_FUN_004aa940.c (FUN_004aa940, 592 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x4c0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define s_WARNING__trying_to_get_random_ve_0062fce0 ((char*)0x0062fce0)
#define s_WARNING__Not_enough_mp_allocated_0062fcac ((char*)0x0062fcac)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef void * (BEA_THISCALL* FUN_004b0cd0_t)(uint32_t);
static const bea_guard<FUN_004b0cd0_t> FUN_004b0cd0 = {(FUN_004b0cd0_t)0x004b0cd0};
typedef uint32_t (BEA_THISCALL* FUN_004b25d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b25d0_t> FUN_004b25d0 = {(FUN_004b25d0_t)0x004b25d0};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static undefined4 * BEA_THISCALL ap_004aa940(void * this_, undefined4 *param_1, int *param_2)
{
  float fVar1;
  void *pvVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  alignas(16) uint8_t bea_frame_[0x4c0] = {};   // the original stack frame (emulate_frame)
  float &local_4b8 = *reinterpret_cast<float *>(bea_frame_ + 0x4c0 - 0x4b8);
  int &local_4b4 = *reinterpret_cast<int *>(bea_frame_ + 0x4c0 - 0x4b4);
  float (&local_4b0)[150] = *reinterpret_cast<float (*)[150]>(bea_frame_ + 0x4c0 - 0x4b0);
  void * (&local_258)[150] = *reinterpret_cast<void * (*)[150]>(bea_frame_ + 0x4c0 - 0x258);
  iVar6 = 0;
  local_4b4 = 0;
  iVar7 = *(int *)((int)this_ + 0x15c);
  if (iVar7 == 0) {
    FUN_00441740(&DAT_0066f580,s_WARNING__trying_to_get_random_ve_0062fce0);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return (undefined4 *)(param_1);
  }
  if (0xf < iVar7) {
    iVar5 = 0;
    local_4b8 = 0.0f;
    if (0 < iVar7) {
      do {
        pvVar2 = *(void **)(*(int *)((int)this_ + 0x160) + iVar5 * 4);
        *param_2 = (int)pvVar2;
        iVar7 = FUN_004b0cd0(bea_arg(pvVar2));
        if ((iVar7 != 0) && (iVar7 = FUN_004b0cd0(bea_arg((void *)*param_2)), *(int *)(iVar7 + 0x8c) == 1)) {
          iVar7 = *(int *)(*param_2 + 0xfc);
          if (iVar7 != 0) {
            if (iVar6 < 0x96) {
              fVar1 = *(float *)(iVar7 + 0x24);
              local_258[iVar6] = (void *)*param_2;
              local_4b0[iVar6] = fVar1;
              local_4b8 = fVar1 + local_4b8;
              iVar6 = iVar6 + 1;
            }
            else {
              FUN_00441740(&DAT_0066f580,s_WARNING__Not_enough_mp_allocated_0062fcac);
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (BEA_LOOP_GUARD((iVar5 < *(int *)((int)this_ + 0x15c))));
    }
    if (0 < iVar6) {
      pfVar3 = local_4b0;
      iVar7 = iVar6;
      do {
        iVar7 = iVar7 + -1;
        *pfVar3 = *pfVar3 / local_4b8;
        pfVar3 = pfVar3 + 1;
      } while (BEA_LOOP_GUARD((iVar7 != 0)));
    }
    do {
      uVar4 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      uVar4 = uVar4 & 0x8000ffff;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffff0000) + 1;
      }
      iVar7 = 0;
      if (0 < iVar6) {
        do {
          iVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
          fVar1 = local_4b0[iVar5 % iVar6];
          pvVar2 = local_258[iVar5 % iVar6];
          *param_2 = (int)pvVar2;
          if ((float)(int)uVar4 * 1.5258789e-05f <= fVar1) {
            FUN_004b25d0(bea_arg(pvVar2), bea_arg(param_1));
            return (undefined4 *)(param_1);
          }
          iVar7 = iVar7 + 1;
        } while (BEA_LOOP_GUARD((iVar7 < iVar6)));
      }
      local_4b4 = local_4b4 + 1;
    } while (BEA_LOOP_GUARD((local_4b4 < 100)));
    if (iVar6 < 1) {
      FUN_00441740(&DAT_0066f580,s_WARNING__trying_to_get_random_ve_0062fce0);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return (undefined4 *)(param_1);
    }
    FUN_004b25d0(bea_arg(local_258[0]), bea_arg(param_1));
    return (undefined4 *)(param_1);
  }
  iVar7 = 0xf;
  do {
    iVar6 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    pvVar2 = *(void **)(*(int *)((int)this_ + 0x160) + (iVar6 % *(int *)((int)this_ + 0x15c)) * 4);
    *param_2 = (int)pvVar2;
    pvVar2 = (void *)FUN_004b0cd0(bea_arg(pvVar2));
    iVar7 = iVar7 + -1;
    if ((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 0x8c) == 1)) break;
  } while (BEA_LOOP_GUARD((0 < iVar7)));
  if (iVar7 != 0) {
    FUN_004b25d0(bea_arg(pvVar2), bea_arg(param_1));
    return (undefined4 *)(param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return (undefined4 *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004aa940, ap_004aa940));
