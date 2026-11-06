// auto-ported from 004136e0_FUN_004136e0.c (FUN_004136e0, 113 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
#define DAT_00889304 GLOBAL_AT(int, 0x00889304)
typedef float10 (BEA_STDCALL* FUN_00409e60_t)(uint32_t);
static const bea_guard<FUN_00409e60_t> FUN_00409e60 = {(FUN_00409e60_t)0x00409e60};

static void BEA_THISCALL ap_004136e0(void * this_, float param_1)
{
  int iVar1;
  float fVar2;
  float10 fVar3;
  float local_8;
  
  iVar1 = *(int *)((int)this_ + 0x20);
  if (((&DAT_00889304)[(*(int *)(*(int *)(iVar1 + 0x574) + 0x2c) + -1) * 3] == 0xc) ||
     (local_8 = 1.0, (&DAT_00889304)[(*(int *)(*(int *)(iVar1 + 0x574) + 0x2c) + -1) * 3] == 0xb)) {
    local_8 = 1.7;
  }
  fVar2 = *(float *)(iVar1 + 0x280);
  fVar3 = (float10)FUN_00409e60(bea_arg(*(undefined4 *)(iVar1 + 0x2c8)));
  *(float *)(*(int *)((int)this_ + 0x20) + 0x280) =
       (float)((float10)fVar2 - (float10)local_8 * (float10)param_1 * (float10)0.008547009f * fVar3);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004136e0, ap_004136e0));
