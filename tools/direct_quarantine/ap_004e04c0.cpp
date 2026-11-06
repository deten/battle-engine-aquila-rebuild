// auto-ported from 004e04c0_FUN_004e04c0.c (FUN_004e04c0, 488 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00662aac GLOBAL_AT(int, 0x00662aac)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define s_sound_master_volume____2_8f_00632464 ((char*)0x00632464)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 (BEA_THISCALL* FUN_0046f2c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046f2c0_t> FUN_0046f2c0 = {(FUN_0046f2c0_t)0x0046f2c0};
typedef uint32_t (BEA_THISCALL* FUN_00517ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00517ae0_t> FUN_00517ae0 = {(FUN_00517ae0_t)0x00517ae0};

static void BEA_THISCALL ap_004e04c0(void * this_, int param_1)
{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int local_18;
  
  *(int *)((int)this_ + 0x20) = param_1;
  FUN_00441740(&DAT_0066f580,s_sound_master_volume____2_8f_00632464);
  DAT_00662aac = param_1;
  for (iVar1 = *(int *)((int)this_ + 0xc); BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0x74)) {
    param_1 = 0x7f;
    if (*(int *)(iVar1 + 0x10) != 0) {
      fVar2 = *(float *)(iVar1 + 0x44);
      fVar3 = *(float *)(iVar1 + 0x48);
      fVar4 = *(float *)(iVar1 + 0x4c);
      FUN_0046f2c0(bea_arg(&DAT_008a9a98), bea_arg(0));
      fVar2 = 50.0f - SQRT(-fVar2 * -fVar2 + -fVar3 * -fVar3 + -fVar4 * -fVar4);
      if (fVar2 <= 50.0f) {
        if (fVar2 < 0.0f) {
          fVar2 = 0.0f;
        }
      }
      else {
        fVar2 = 50.0f;
      }
      local_18 = (int)(longlong)ROUND(fVar2 * 100.0f * 0.02f);
      param_1 = local_18;
    }
    fVar2 = *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x1c);
    if (*(int *)(iVar1 + 0x14) == 1) {
      local_18 = (int)(longlong)
                      ROUND(fVar2 * *(float *)((int)this_ + 0x24) * *(float *)((int)this_ + 0x20) *
                            127.0f);
    }
    else {
      local_18 = (int)(longlong)
                      ROUND(fVar2 * *(float *)((int)this_ + 0x28) * *(float *)((int)this_ + 0x20) *
                            127.0f);
    }
    local_18 = local_18 * 200;
    if (10000 < local_18) {
      local_18 = 10000;
    }
    iVar6 = (local_18 + -10000) / 2;
    if (iVar6 < -10000) {
      iVar6 = -10000;
    }
    if (*(int *)(iVar1 + 0x14) == 1) {
      local_18 = (int)(longlong)
                      ROUND((float)param_1 * *(float *)((int)this_ + 0x24) * fVar2 *
                            *(float *)((int)this_ + 0x20));
    }
    else {
      local_18 = (int)(longlong)
                      ROUND((float)param_1 * *(float *)((int)this_ + 0x28) * fVar2 *
                            *(float *)((int)this_ + 0x20));
    }
    local_18 = local_18 * 200;
    if (10000 < local_18) {
      local_18 = 10000;
    }
    iVar5 = (local_18 + -10000) / 2;
    if (iVar5 < -10000) {
      iVar5 = -10000;
    }
    *(int *)(iVar1 + 0x68) = iVar5;
    *(int *)(iVar1 + 100) = iVar6;
    if ((*(char *)(iVar1 + 8) != '\0') && (-1 < *(int *)(iVar1 + 4))) {
      FUN_00517ae0(bea_arg(&DAT_00896988), bea_arg(iVar1), bea_arg(0));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e04c0, ap_004e04c0));
