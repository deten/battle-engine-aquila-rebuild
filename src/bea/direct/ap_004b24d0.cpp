// hand-ported from 004b24d0_FUN_004b24d0.c (FUN_004b24d0, 253 bytes)
// @hand-fixed 2026-10-29 param_2 is an int index (`test eax,eax; jl` at 0x4b24f8), its slot then holds the float result: t = fild[+0x1c]*param_1 stored as float (0x4b251b), v = fild[+0x14] + t stored (0x4b2526), so a float local v replaces the reused slot; vcall slot 0x14 is a thiscall on param_4 (ECX=param_4 at 0x4b252c) with (this, &v); floor 0x55dfe7 + fistp qword; ret 0x10
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
// floor(double): called without bea_guard, whose bea_pass would round the double argument to float
static const FUN_0055dfe7_t FUN_0055dfe7 = (FUN_0055dfe7_t)0x0055dfe7;

static int BEA_THISCALL ap_004b24d0(void *this_, float param_1, int param_2, float *param_3, int *param_4)
{
  int iVar1;
  float10 fVar2;
  int iStack_8;
  volatile float v;     // the reused argument slot ([esp+0x14] / [esp+0x10] in the original)
  float t;

  if (((*(int *)(*(int *)((int)this_ + 0x128) + 0x14) != 0) && (1 < *(int *)((int)this_ + 0xb8))) &&
     (-1 < param_2)) {
    iVar1 = *(int *)(*(int *)((int)this_ + 0x128) + 0x18);
    v = (float)((float10)*(int *)(iVar1 + 0x1c + param_2 * 0x24) * (float10)param_1);   // 0x4b250a-0x4b251b
    t = v;
    v = (float)((float10)*(int *)(iVar1 + param_2 * 0x24 + 0x14) + (float10)t);      // 0x4b251f-0x4b2526
    if (param_4 != (int *)0x0) {
      bea_vcall<uint32_t>(param_4, 0x14, this_, (float *)&v);
    }
    fVar2 = (float10)FUN_0055dfe7((double)v);
    iStack_8 = (int)(longlong)ROUND(fVar2);
    iStack_8 = iStack_8 % *(int *)((int)this_ + 0xb8);
    fVar2 = (float10)FUN_0055dfe7((double)v);
    *param_3 = (float)((float10)v - fVar2);
    return iStack_8;
  }
  v = 0.0f;
  if (param_4 != (int *)0x0) {
    bea_vcall<uint32_t>(param_4, 0x14, this_, (float *)&v);
  }
  fVar2 = (float10)FUN_0055dfe7((double)v);
  iStack_8 = (int)(longlong)ROUND(fVar2);
  fVar2 = (float10)FUN_0055dfe7((double)v);
  *param_3 = (float)((float10)v - fVar2);
  return iStack_8;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b24d0, ap_004b24d0));
