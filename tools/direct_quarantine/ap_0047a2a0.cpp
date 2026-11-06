// auto-ported from 0047a2a0_vslot9.c (CGillMAI::vslot9, 339 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
// @autoport-repair: 3 float/pointer cast(s) made bit copies (compiler-located, tools/repair_fcasts.py)
// @hand-fixed 2026-10-28 check_fild: piVar2[7..9] are floats (fsub [ecx+0x1c/0x20/0x24] at 0x47a2d0..0x47a2dc) -> bea_fcast<float> instead of (float)
// @hand-fixed 2026-10-28 fingerprint/check_fp_order: distance sum grouped as the asm does, (dy*dy + dz*dz) + dx*dx (fld st0;fmul / fld [esp+0xc];fmul / faddp / fld st2;fmul / faddp at 0x47a2e9..0x47a2fb); consts-3 itself is benign (GCC folds 15+3/25+3 into 18/28, fadd 3.0 at 0x47a315)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGillMAI;
typedef char pCStack_4;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_00479db0_t)(uint32_t);
static const bea_guard<FUN_00479db0_t> FUN_00479db0 = {(FUN_00479db0_t)0x00479db0};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef uint32_t (BEA_THISCALL* FUN_004fce80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fce80_t> FUN_004fce80 = {(FUN_004fce80_t)0x004fce80};

static void BEA_THISCALL ap_0047a2a0(CGillMAI * this_, undefined4 param_1)
{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  CGillMAI *pCStack_4;
  
  if ((*(byte *)(*(int *)(this_ + 8) + 0x2c) & 4) == 0) {
    pCStack_4 = this_;
    bea_vcall<uint32_t>(this_, 0x2c);
    iVar1 = *(int *)(this_ + 0xc);
    if (iVar1 != 0) {
      piVar2 = *(int **)(this_ + 8);
      fVar3 = *(float *)(iVar1 + 0x1c) - bea_fcast<float>(piVar2[7]);
      fVar4 = *(float *)(iVar1 + 0x20) - bea_fcast<float>(piVar2[8]);
      pCStack_4 = (CGillMAI *)(uintptr_t)bea_piece32((*(float *)(iVar1 + 0x24) - bea_fcast<float>(piVar2[9])));
      fVar3 = SQRT(fVar4 * fVar4 + __builtin_bit_cast(float, (uint32_t)(uintptr_t)(pCStack_4)) * __builtin_bit_cast(float, (uint32_t)(uintptr_t)(pCStack_4)) + fVar3 * fVar3);
      fVar4 = 15.0f;
      if ((*(uint *)(iVar1 + 0x34) & 0x8000) != 0) {
        fVar4 = 25.0f;
      }
      if (fVar3 <= fVar4 + 3.0f) {
        if (fVar4 < fVar3) {
          bea_vcall<uint32_t>(piVar2, 0x100);
          iVar1 = *(int *)(this_ + 0xc);
          FUN_004fce80(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(iVar1 + 0x1c)), bea_arg(*(undefined4 *)(iVar1 + 0x20)), bea_arg(*(undefined4 *)(iVar1 + 0x24)), bea_arg(*(undefined4 *)(iVar1 + 0x28)));
          FUN_00479db0(bea_arg(*(void **)(this_ + 8)));
        }
      }
      else {
        bea_vcall<uint32_t>(piVar2, 0xf4, *(float *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20),
                   *(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x28),0);
      }
    }
    uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar5 = uVar5 & 0x8000ffff;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffff0000) + 1;
    }
    pCStack_4 = (CGillMAI *)(uintptr_t)bea_piece32(((float)(int)uVar5 * 7.6293945e-06f + 0.5f + DAT_00672fd0));
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&pCStack_4), bea_arg(0), bea_arg(0), bea_arg(param_1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047a2a0, ap_0047a2a0));
