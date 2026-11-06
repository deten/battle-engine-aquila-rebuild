// auto-ported from 004eee80_vslot66.c (CSubmarine::vslot66, 378 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSubmarine;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot66_t)(uint32_t);
static const bea_guard<CUnit__vslot66_t> CUnit__vslot66 = {(CUnit__vslot66_t)0x004fa8d0};
typedef uint32_t (BEA_THISCALL* FUN_004ef120_t)(uint32_t);
static const bea_guard<FUN_004ef120_t> FUN_004ef120 = {(FUN_004ef120_t)0x004ef120};

static void BEA_THISCALL ap_004eee80(CSubmarine * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = bea_vcall<uint32_t>(this_, 0x130);
  if (iVar4 != 0) {
    *(float *)(this_ + 0x7c) = *(float *)(this_ + 0x14c) * 0.4f + *(float *)(this_ + 0x7c);
    *(float *)(this_ + 0x80) = *(float *)(this_ + 0x150) * 0.4f + *(float *)(this_ + 0x80);
    *(float *)(this_ + 0x84) = *(float *)(this_ + 0x154) * 0.4f + *(float *)(this_ + 0x84);
    fVar5 = (float10)bea_vcall<float10>(this_, 0x120);
    *(float *)(this_ + 0x7c) = (float)(fVar5 * (float10)*(float *)(this_ + 0x7c));
    *(float *)(this_ + 0x80) = (float)(fVar5 * (float10)*(float *)(this_ + 0x80));
    *(float *)(this_ + 0x84) = (float)(fVar5 * (float10)*(float *)(this_ + 0x84));
  }
  fVar1 = *(float *)(this_ + 0x7c);
  fVar2 = *(float *)(this_ + 0x80);
  fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  fVar5 = (float10)bea_vcall<float10>(this_, 0x1bc);
  if (fVar5 * (float10)0.05f < (float10)fVar3) {
    fVar5 = (fVar5 * (float10)0.05f) / (float10)fVar3;
    *(float *)(this_ + 0x7c) = (float)(fVar5 * (float10)fVar1);
    *(float *)(this_ + 0x80) = (float)(fVar5 * (float10)fVar2);
  }
  CUnit__vslot66(bea_arg((CUnit *)this_));
  if ((((byte)this_[0x2c] & 4) != 0) && (*(int *)(*(int *)(this_ + 0x164) + 0x11c) == 0)) {
    *(undefined4 *)(this_ + 0x124) = 0x3f490fdb;
    *(undefined4 *)(this_ + 0x84) = 0x3cf5c28f;
    bea_vcall<uint32_t>(this_, 0x180);
    if (50.0f < *(float *)(this_ + 0x24)) {
      bea_vcall<uint32_t>(this_, 0x38);
    }
  }
  if ((*(int *)(this_ + 0x250) == 1) || (*(int *)(this_ + 0x250) == 3)) {
    FUN_004ef120(bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004eee80, ap_004eee80));
