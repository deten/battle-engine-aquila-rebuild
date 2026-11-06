// auto-ported from 004419e0_FUN_004419e0.c (FUN_004419e0, 290 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540640_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540640_t> FUN_00540640 = {(FUN_00540640_t)0x00540640};

static void BEA_THISCALL ap_004419e0(void * this_)
{
  float fVar1;
  undefined4 uVar2;
  void *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float local_8;
  
  if (*(float *)((int)this_ + 0x9e8) < DAT_00672fd0 - 16.0f) {
    *(undefined4 *)((int)this_ + 0x9e8) = 0xc2c80000;
    return;
  }
  local_8 = 100.0f;
  iVar5 = 0;
  do {
    iVar3 = *(int *)((int)this_ + 0x9e4) - iVar5;
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = iVar3 + ((0x1dU - iVar3) / 0x1e) * 0x1e;
    }
    fVar1 = (DAT_00672fd0 - *(float *)((int)this_ + iVar4 * 4 + 0x96c)) * 3.75f;
    if (fVar1 < 100.0f - local_8) {
      fVar1 = 100.0f - local_8;
    }
    if (iVar3 < 0) {
      iVar3 = iVar3 + ((0x1dU - iVar3) / 0x1e) * 0x1e;
    }
    uVar11 = 0x3f800000;
    uVar10 = 0;
    uVar9 = 0;
    uVar2 = FUN_004f7bf0(bea_arg(iVar3 * 0x50 + 9 + (int)this_));
    uVar8 = 0xff3eff84;
    uVar6 = 0x40000000;
    fVar7 = 100.0f - fVar1;
    this_00 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
    FUN_00540640(bea_arg(this_00), bea_arg(uVar6), bea_arg(fVar7), bea_arg(uVar8), bea_arg(uVar2), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11));
    local_8 = (100.0f - fVar1) - 15.0f;
    iVar5 = iVar5 + 1;
  } while (BEA_LOOP_GUARD((iVar5 < 6)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004419e0, ap_004419e0));
