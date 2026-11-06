// auto-ported from 004b82b0_FUN_004b82b0.c (FUN_004b82b0, 1353 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_008a9ac4 GLOBAL_AT(int, 0x008a9ac4)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef float10 (BEA_THISCALL* FUN_00515950_t)(uint32_t);
static const bea_guard<FUN_00515950_t> FUN_00515950 = {(FUN_00515950_t)0x00515950};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};

static void BEA_THISCALL ap_004b82b0(void * this_, float param_1, float param_2, int param_3)
{
  undefined4 *this_00;
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  float10 fVar11;
  float local_24;
  float local_20;
  uint local_1c;
  float local_18;
  float local_14;
  int local_c;
  
  if (*(int *)((int)this_ + 8) == 0) {
    return;
  }
  uVar1 = *(undefined4 *)((int)this_ + 0x28);
  this_00 = (undefined4 *)((int)this_ + 0x28);
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(1));
  FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(1));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  local_24 = *(float *)((int)this_ + 0x20);
  iVar7 = FUN_004de8d0(bea_arg(this_00));
  if (((float)(iVar7 % 200) * 0.01f < *(float *)((int)this_ + 0x20)) &&
     (local_24 = *(float *)((int)this_ + 0x20) + 0.2f, local_24 < 1.0f)) {
    local_24 = 1.0f;
  }
  bVar10 = *(float *)((int)this_ + 0x1b4) + 0.05f < DAT_00672fd0;
  if (*(int *)((int)this_ + 0x1a8) == 5) {
    if (bVar10) {
      *(float *)((int)this_ + 0x1b4) = DAT_00672fd0;
      uVar8 = FUN_004de8d0(bea_arg(this_00));
      uVar8 = uVar8 & 0x80000001;
      bVar10 = uVar8 == 0;
      if ((int)uVar8 < 0) {
        bVar10 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar10) {
        iVar7 = FUN_004de8d0(bea_arg(this_00));
        if (iVar7 % 7 == 0) {
          iVar7 = FUN_004de8d0(bea_arg(this_00));
          *(int *)((int)this_ + 0x1ac) = iVar7 % 5;
        }
        uVar8 = *(uint *)((int)this_ + 0x1ac);
        uVar9 = uVar8 & 0x80000001;
        bVar10 = uVar9 == 0;
        if ((int)uVar9 < 0) {
          bVar10 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar10) {
          iVar7 = uVar8 + 1;
        }
        else {
          iVar7 = uVar8 - 1;
        }
        *(int *)((int)this_ + 0x1ac) = iVar7;
        *(undefined4 *)((int)this_ + 0x1b0) =
             *(undefined4 *)((int)this_ + (iVar7 + *(int *)((int)this_ + 0x1a8) * 6) * 4 + 0x34);
      }
    }
  }
  else if (bVar10) {
    *(float *)((int)this_ + 0x1b4) = DAT_00672fd0;
    uVar8 = FUN_004de8d0(bea_arg(this_00));
    uVar8 = uVar8 & 0x80000001;
    bVar10 = uVar8 == 0;
    if ((int)uVar8 < 0) {
      bVar10 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar10) {
      iVar7 = *(int *)((int)this_ + 0x1ac);
      do {
        bVar6 = FUN_004de8d0(bea_arg(this_00));
        dVar3 = (double)bVar6 * 0.390625;
        if (8.0f <= dVar3) {
          if (20.0f <= dVar3) {
            if (60.0f <= dVar3) {
              *(undefined4 *)((int)this_ + 0x1ac) = 3;
            }
            else {
              *(undefined4 *)((int)this_ + 0x1ac) = 2;
            }
          }
          else {
            *(undefined4 *)((int)this_ + 0x1ac) = 1;
          }
        }
        else {
          *(undefined4 *)((int)this_ + 0x1ac) = 0;
        }
      } while (BEA_LOOP_GUARD((iVar7 == *(int *)((int)this_ + 0x1ac))));
      *(undefined4 *)((int)this_ + 0x1b0) =
           *(undefined4 *)
            ((int)this_ + (*(int *)((int)this_ + 0x1ac) + *(int *)((int)this_ + 0x1a8) * 6) * 4 + 0x34)
      ;
    }
  }
  if (*(int *)((int)this_ + 0x24) == 0) {
    uVar8 = 0x40;
    if (0.3f < local_24) {
      uVar8 = FUN_004de8d0(bea_arg(this_00));
      uVar8 = uVar8 & 0x8000003f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
      }
    }
    local_18 = 0.0f;
    if (0.1f < local_24) {
      iVar7 = FUN_004de8d0(bea_arg(this_00));
      local_18 = (float)(iVar7 % 100) * 0.0033333334f * local_24;
    }
    fVar5 = local_18;
    fVar2 = local_18 + 1.0f;
    local_20 = 0.0f;
    if (0.1f < local_24) {
      iVar7 = FUN_004de8d0(bea_arg(this_00));
      local_20 = (float)(iVar7 % 100) * 0.002f * local_24;
    }
    local_1c = 5;
    do {
      local_14 = local_20;
      local_18 = local_20 + 1.0f;
      if (0.2f < local_24) {
        fVar4 = local_24;
        if (local_24 < 0.5f) {
          fVar4 = 0.5f;
        }
        uVar9 = local_1c & 0x80000001;
        bVar10 = uVar9 == 0;
        if ((int)uVar9 < 0) {
          bVar10 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
        }
        fVar4 = fVar4 * (float)(int)local_1c * 0.16f;
        if (bVar10) {
          local_14 = fVar4 + local_20;
          local_18 = local_14 + 1.0f;
        }
        else {
          local_14 = local_20 - fVar4;
          local_18 = (1.0f - fVar4) + local_20;
        }
      }
      if (*(int *)((int)this_ + 0x1b0) != 0) {
        FUN_00555be0(bea_arg(param_1 + 16.0f), bea_arg(param_2 - 16.0f), bea_arg((float)param_3 * 0.001f), bea_arg(*(int *)((int)this_ + 0x1b0)), bea_arg(2), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(uVar8 * 0x1000000 + 0xffffff), bea_arg(0x3f400000), bea_arg(0x3f400000), bea_arg(local_14), bea_arg(local_18), bea_arg(fVar5), bea_arg(fVar2));
      }
      local_1c = local_1c - 1;
    } while (BEA_LOOP_GUARD((-1 < (int)local_1c)));
  }
  iVar7 = FUN_004de8d0(bea_arg(this_00));
  fVar2 = (float)(iVar7 % 100) * 0.01f;
  iVar7 = FUN_004de8d0(bea_arg(this_00));
  fVar5 = (float)(iVar7 % 100) * 0.01f;
  iVar7 = FUN_004de8d0(bea_arg(this_00));
  local_c = (int)(longlong)ROUND((local_24 + 1.5f) * (float)(iVar7 % 10 + 0x28));
  FUN_00555be0(bea_arg(param_1), bea_arg(param_2), bea_arg((float)param_3 * 0.001f), bea_arg(*(undefined4 *)((int)this_ + 0x1a4)), bea_arg(2), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(local_c * 0x1000000 + 0xffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(fVar2), bea_arg(fVar2 + 1.0f), bea_arg(fVar5), bea_arg(fVar5 + 1.0f));
  fVar2 = *(float *)(*(int *)((int)this_ + 8) + 0x20);
  if ((*(int *)((int)this_ + 0x24) == 0) && (fVar2 < local_24)) {
    if (DAT_008a9ac4 != 0) goto LAB_004b87eb;
    fVar11 = (float10)FUN_00515950(bea_arg(&DAT_0088a0a8));
    fVar11 = (float10)*(float *)((int)this_ + 0x20) - ((float10)60.0f / fVar11) * (float10)0.06f;
    *(float *)((int)this_ + 0x20) = (float)fVar11;
    if (fVar11 < (float10)fVar2) {
      *(float *)((int)this_ + 0x20) = fVar2;
    }
  }
  if (DAT_008a9ac4 == 0) {
    return;
  }
LAB_004b87eb:
  *this_00 = uVar1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b82b0, ap_004b82b0));
