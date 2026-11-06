// auto-ported from 00424990_FUN_00424990.c (FUN_00424990, 103 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define s_walktofly_006234b0 ((char*)0x006234b0)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static void BEA_THISCALL ap_00424990(void * this_)
{
  void *this_00;
  undefined4 uVar1;
  float10 fVar2;
  char *pcVar3;
  
  pcVar3 = s_walktofly_006234b0;
  this_00 = (void *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x8c), 0x24);
  uVar1 = FUN_004aa630(bea_arg(this_00), bea_arg(pcVar3));
  *(undefined4 *)((int)this_ + 0x11c) = uVar1;
  if (*(int **)((int)this_ + 0x8c) == (int *)0x0) {
    fVar2 = (float10)0.0f;
  }
  else {
    fVar2 = (float10)bea_vcall<float10>(*(int **)((int)this_ + 0x8c), 0x38, uVar1,(int)this_ + 0x118);
  }
  *(float *)((int)this_ + 0x120) = (float)fVar2;
  *(undefined4 *)((int)this_ + 0x124) = 0;
  *(undefined4 *)((int)this_ + 0x128) = 0;
  *(undefined4 *)((int)this_ + 0x114) = 2;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00424990, ap_00424990));
