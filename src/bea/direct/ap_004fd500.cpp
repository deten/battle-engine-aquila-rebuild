// auto-ported from 004fd500_FUN_004fd500.c (FUN_004fd500, 105 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef uint32_t (BEA_THISCALL* CActor__vslot0_t8_t)(uint32_t, uint32_t);
static const bea_guard<CActor__vslot0_t8_t> CActor__vslot0_t8 = {(CActor__vslot0_t8_t)0x00401be0};

static void BEA_THISCALL ap_004fd500(void * this_, float *param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_24)[12] = *reinterpret_cast<undefined1 (*)[12]>(bea_frame_ + 0x30 - 0x24);
  undefined1 (&auStack_18)[24] = *reinterpret_cast<undefined1 (*)[24]>(bea_frame_ + 0x30 - 0x18);
  bea_vcall<uint32_t>(this_, 0x168, param_1);
  pfVar5 = (float *)bea_vcall<uint32_t>(this_, 0x78, auStack_24);
  pfVar6 = (float *)CActor__vslot0_t8(bea_arg((CActor *)((int)this_ + 8)), bea_arg(auStack_18));
  fVar1 = pfVar6[1];
  fVar2 = pfVar5[1];
  fVar3 = pfVar6[2];
  fVar4 = pfVar5[2];
  *param_1 = (*pfVar6 - *pfVar5) + *param_1;
  param_1[1] = (fVar1 - fVar2) + param_1[1];
  param_1[2] = (fVar3 - fVar4) + param_1[2];
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fd500, ap_004fd500));
