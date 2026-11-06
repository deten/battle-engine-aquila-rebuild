// auto-ported from 004c14f0_vslot10.c (CPDSimpleSprite::vslot10, 248 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CPDSimpleSprite;
#define DAT_009c63f8 GLOBAL_AT(float, 0x009c63f8)
#define DAT_009c63fc GLOBAL_AT(int, 0x009c63fc)
typedef float10 (BEA_THISCALL* FUN_004c10c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c10c0_t> FUN_004c10c0 = {(FUN_004c10c0_t)0x004c10c0};

static undefined4 BEA_THISCALL ap_004c14f0(CPDSimpleSprite * this_, int param_1)
{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)FUN_004c10c0(bea_arg(this_ + 0x5c), bea_arg(((float)*(int *)(this_ + 0x70) - *(float *)(param_1 + 0x60)) /
                                (float)*(int *)(this_ + 0x70)), bea_arg(param_1));
  if (*(int *)(this_ + 0x70) == 0) {
    *(float *)(param_1 + 0x74) = (float)fVar2;
  }
  else {
    fVar3 = (float10)*(int *)(this_ + 0x70);
    *(float *)(param_1 + 0x74) =
         (float)(((fVar3 - (float10)*(float *)(param_1 + 0x60)) *
                 (fVar2 * (float10)*(float *)(this_ + 100) - fVar2)) / fVar3 + fVar2);
  }
  if (*(int *)(this_ + 0x68) != 0) {
    *(float *)(param_1 + 0x50) = DAT_009c63f8 * 0.003f + *(float *)(param_1 + 0x50);
  }
  if ((*(int *)(this_ + 0x94) != 0x3f800000) && (DAT_009c63fc != 0)) {
    fVar1 = *(float *)(this_ + 0x94);
    *(float *)(param_1 + 0x48) = fVar1 * *(float *)(param_1 + 0x48);
    *(float *)(param_1 + 0x4c) = fVar1 * *(float *)(param_1 + 0x4c);
    *(float *)(param_1 + 0x50) = fVar1 * *(float *)(param_1 + 0x50);
  }
  if (*(int **)(this_ + 0x80) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)(this_ + 0x80), 0x34, param_1);
  }
  if (*(int *)(this_ + 0xa4) != 0) {
    fVar1 = DAT_009c63f8 * *(float *)(this_ + 0xb0) + *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x78) = fVar1;
    if ((float)((*(int *)(this_ + 0xa8) - *(int *)(this_ + 0x8c)) + 1) <= fVar1) {
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c14f0, ap_004c14f0));
