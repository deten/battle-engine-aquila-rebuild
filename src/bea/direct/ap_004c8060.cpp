// auto-ported from 004c8060_FUN_004c8060.c (FUN_004c8060, 1204 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_004c10c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c10c0_t> FUN_004c10c0 = {(FUN_004c10c0_t)0x004c10c0};

static int BEA_THISCALL ap_004c8060(void * this_, int param_1, float param_2, uint param_3)
{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  uint local_18;
  uint local_14;
  int local_c;
  
  iVar3 = param_3;
  iVar4 = *(int *)((int)this_ + 0x74);
  if (iVar4 == 0) {
    param_3 = 0xff;
    local_14 = 0xff;
    local_18 = 0xff;
  }
  else {
    fVar1 = (float)param_1 / (float)*(int *)(param_3 + 0x80);
    if (*(int *)(iVar4 + 0xa8) == 0) {
      if (*(int *)(iVar4 + 0xa4) == 0) {
        fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x5c)), bea_arg(fVar1), bea_arg(param_3));
        (*(uint8_t*)((char*)&local_c + 0)) = (byte)(longlong)ROUND(fVar7 * (float10)255.0f);
        local_18 = (uint)(byte)local_c;
        fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 100)), bea_arg(fVar1), bea_arg(param_3));
        local_14 = (uint)(longlong)ROUND(fVar7 * (float10)255.0f) & 0xff;
        fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x6c)), bea_arg(fVar1), bea_arg(param_3));
        (*(uint8_t*)((char*)&local_c + 0)) = (byte)(longlong)ROUND(fVar7 * (float10)255.0f);
        param_3 = (uint)(byte)local_c;
      }
      else {
        fVar2 = 1.0f - fVar1;
        fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x5c)), bea_arg(fVar1), bea_arg(param_3));
        fVar8 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x74)), bea_arg(fVar1), bea_arg(param_3));
        (*(uint8_t*)((char*)&local_14 + 0)) =
             (byte)(longlong)
                   ROUND((fVar8 * (float10)fVar1 + (float10)(float)(fVar7 * (float10)fVar2)) *
                         (float10)255.0f);
        local_18 = (uint)(byte)local_14;
        fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 100)), bea_arg(fVar1), bea_arg(param_3));
        fVar8 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x7c)), bea_arg(fVar1), bea_arg(param_3));
        local_14 = (uint)(longlong)
                         ROUND((fVar8 * (float10)fVar1 + (float10)(float)(fVar7 * (float10)fVar2)) *
                               (float10)255.0f);
        fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x6c)), bea_arg(fVar1), bea_arg(param_3));
        fVar8 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x84)), bea_arg(fVar1), bea_arg(param_3));
        (*(uint8_t*)((char*)&local_c + 0)) =
             (byte)(longlong)
                   ROUND((fVar8 * (float10)fVar1 + (float10)(float)(fVar7 * (float10)fVar2)) *
                         (float10)255.0f);
        param_3 = (uint)(byte)local_c;
      }
    }
    else if (*(float *)(iVar4 + 0xac) <= fVar1) {
      fVar1 = (fVar1 - *(float *)(iVar4 + 0xac)) / (1.0f - *(float *)(iVar4 + 0xac));
      fVar2 = 1.0f - fVar1;
      fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x8c)), bea_arg(fVar1), bea_arg(param_3));
      fVar8 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x74)), bea_arg(fVar1), bea_arg(param_3));
      (*(uint8_t*)((char*)&local_14 + 0)) =
           (byte)(longlong)
                 ROUND((fVar8 * (float10)fVar1 + (float10)(float)(fVar7 * (float10)fVar2)) *
                       (float10)255.0f);
      local_18 = (uint)(byte)local_14;
      fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x94)), bea_arg(fVar1), bea_arg(param_3));
      fVar8 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x7c)), bea_arg(fVar1), bea_arg(param_3));
      local_14 = (uint)(longlong)
                       ROUND((fVar8 * (float10)fVar1 + (float10)(float)(fVar7 * (float10)fVar2)) *
                             (float10)255.0f);
      fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x9c)), bea_arg(fVar1), bea_arg(param_3));
      fVar8 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x84)), bea_arg(fVar1), bea_arg(param_3));
      (*(uint8_t*)((char*)&local_c + 0)) =
           (byte)(longlong)
                 ROUND((fVar8 * (float10)fVar1 + (float10)(float)(fVar7 * (float10)fVar2)) *
                       (float10)255.0f);
      param_3 = (uint)(byte)local_c;
    }
    else {
      fVar1 = fVar1 / *(float *)(iVar4 + 0xac);
      fVar2 = 1.0f - fVar1;
      fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x8c)), bea_arg(fVar1), bea_arg(param_3));
      fVar8 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x5c)), bea_arg(fVar1), bea_arg(param_3));
      (*(uint8_t*)((char*)&local_14 + 0)) =
           (byte)(longlong)
                 ROUND((fVar8 * (float10)fVar2 + (float10)(float)(fVar7 * (float10)fVar1)) *
                       (float10)255.0f);
      local_18 = (uint)(byte)local_14;
      fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x94)), bea_arg(fVar1), bea_arg(param_3));
      fVar8 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 100)), bea_arg(fVar1), bea_arg(param_3));
      local_14 = (uint)(longlong)
                       ROUND((fVar8 * (float10)fVar2 + (float10)(float)(fVar7 * (float10)fVar1)) *
                             (float10)255.0f);
      fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x9c)), bea_arg(fVar1), bea_arg(param_3));
      fVar8 = (float10)FUN_004c10c0(bea_arg((void *)(iVar4 + 0x6c)), bea_arg(fVar1), bea_arg(param_3));
      (*(uint8_t*)((char*)&local_c + 0)) =
           (byte)(longlong)
                 ROUND((fVar8 * (float10)fVar2 + (float10)(float)(fVar7 * (float10)fVar1)) *
                       (float10)255.0f);
      param_3 = (uint)(byte)local_c;
    }
  }
  if (*(int *)((int)this_ + 0x90) == 0) {
    iVar4 = *(int *)(iVar3 + 0x80) / 2;
    if (iVar4 <= param_1) {
      iVar4 = ((iVar4 - param_1) * 0x11d) / iVar4 + 0xff;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      local_c = (int)(longlong)ROUND(param_2 * 255.0f);
      local_c = local_c * iVar4 >> 8;
      goto LAB_004c841c;
    }
  }
  else if ((-1.0f <= *(float *)(iVar3 + 0x60)) &&
          (*(float *)(iVar3 + 0x60) <= (float)*(int *)((int)this_ + 0x9c))) {
    local_c = (int)(longlong)
                   ROUND((*(float *)(iVar3 + 0x60) / (float)*(int *)((int)this_ + 0x9c)) * 255.0f);
    goto LAB_004c841c;
  }
  local_c = 0xff;
LAB_004c841c:
  iVar3 = (local_14 & 0xff) * local_c;
  iVar5 = (int)(local_18 * local_c + ((int)(local_18 * local_c) >> 0x1f & 0xffU)) >> 8;
  iVar4 = *(int *)((int)this_ + 100);
  iVar6 = (int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8;
  iVar3 = (int)(param_3 * local_c + ((int)(param_3 * local_c) >> 0x1f & 0xffU)) >> 8;
  if (iVar4 == 0) {
    return (iVar5 * 0x100 + iVar6) * 0x100 + iVar3;
  }
  if (iVar4 == 1) {
    return ((local_c * 0x100 + local_18) * 0x100 + (local_14 & 0xff)) * 0x100 + param_3;
  }
  if (iVar4 == 2) {
    if (local_c < 0x80) {
      local_c = local_c * 8;
    }
    else {
      local_c = (0xff - local_c) * 2;
    }
    if (0xff < local_c) {
      local_c = 0xff;
    }
    return ((local_c * 0x100 + iVar5) * 0x100 + iVar6) * 0x100 + iVar3;
  }
  return -1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c8060, ap_004c8060));
