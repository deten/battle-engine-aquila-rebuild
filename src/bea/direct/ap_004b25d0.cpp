// auto-ported from 004b25d0_FUN_004b25d0.c (FUN_004b25d0, 455 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define s_FATAL_ERROR__can_t_get_ranom_ver_0062ffa8 ((char*)0x0062ffa8)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 (BEA_THISCALL* FUN_004d5930_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d5930_t> FUN_004d5930 = {(FUN_004d5930_t)0x004d5930};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static void BEA_THISCALL ap_004b25d0(void * this_, float *param_1)
{
  float fVar1;
  int iVar2;
  float *pfVar3;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  short * &local_1c = *reinterpret_cast<short * *>(bea_frame_ + 0x20 - 0x1c);
  short * &local_18 = *reinterpret_cast<short * *>(bea_frame_ + 0x20 - 0x18);
  short * &local_14 = *reinterpret_cast<short * *>(bea_frame_ + 0x20 - 0x14);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x8);
  float &local_4 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x4);
  local_10 = 0.0;
  local_c = 0.0;
  local_8 = 0.0;
  if (*(void **)((int)this_ + 0x100) == (void *)0x0) {
    FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__can_t_get_ranom_ver_0062ffa8);
    *param_1 = local_10;
    param_1[1] = local_c;
    param_1[2] = local_8;
    param_1[3] = local_4;
    return;
  }
  iVar2 = FUN_004d5930(bea_arg(*(void **)((int)this_ + 0x100)), bea_arg(&local_1c));
  if (iVar2 == 1) {
    iVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    iVar2 = iVar2 % 3;
    if (iVar2 == 0) {
      iVar2 = *(int *)((int)this_ + 0x100);
      pfVar3 = (float *)(iVar2 + 0x40);
      local_10 = (float)(int)*local_1c * *(float *)(iVar2 + 0x50) * 3.051851e-05f + *pfVar3;
      local_c = (float)(int)local_1c[1] * *(float *)(iVar2 + 0x50) * 3.051851e-05f +
                *(float *)(iVar2 + 0x44);
      fVar1 = (float)(int)local_1c[2];
    }
    else if (iVar2 == 1) {
      iVar2 = *(int *)((int)this_ + 0x100);
      pfVar3 = (float *)(iVar2 + 0x40);
      local_10 = (float)(int)*local_18 * *(float *)(iVar2 + 0x50) * 3.051851e-05f + *pfVar3;
      local_c = (float)(int)local_18[1] * *(float *)(iVar2 + 0x50) * 3.051851e-05f +
                *(float *)(iVar2 + 0x44);
      fVar1 = (float)(int)local_18[2];
    }
    else {
      if (iVar2 != 2) goto LAB_004b276f;
      iVar2 = *(int *)((int)this_ + 0x100);
      pfVar3 = (float *)(iVar2 + 0x40);
      local_10 = (float)(int)*local_14 * *(float *)(iVar2 + 0x50) * 3.051851e-05f + *pfVar3;
      local_c = (float)(int)local_14[1] * *(float *)(iVar2 + 0x50) * 3.051851e-05f +
                *(float *)(iVar2 + 0x44);
      fVar1 = (float)(int)local_14[2];
    }
    local_8 = fVar1 * pfVar3[4] * 3.051851e-05f + pfVar3[2];
  }
LAB_004b276f:
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b25d0, ap_004b25d0));
