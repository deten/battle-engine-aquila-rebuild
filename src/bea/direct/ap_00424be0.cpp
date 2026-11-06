// auto-ported from 00424be0_FUN_00424be0.c (FUN_00424be0, 188 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_006235a0 GLOBAL_AT(int, 0x006235a0)
#define PTR_DAT_0062359c GLOBAL_AT(void*, 0x0062359c)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static void BEA_THISCALL ap_00424be0(void * this_)
{
  float fVar1;
  void *this_00;
  undefined4 uVar2;
  float10 fVar3;
  undefined **ppuVar4;
  
  fVar1 = *(float *)((int)this_ + 0x120) + *(float *)((int)this_ + 0x124);
  *(undefined4 *)((int)this_ + 0x128) = *(undefined4 *)((int)this_ + 0x124);
  *(float *)((int)this_ + 0x124) = fVar1;
  if (fVar1 <= 1.0f) {
    return;
  }
  if (*(int *)((int)this_ + 0x114) == 1) {
    ppuVar4 = (undefined **)&DAT_006235a0;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x8c), 0x24);
  }
  else {
    if (*(int *)((int)this_ + 0x114) != 2) {
      *(undefined4 *)((int)this_ + 0x124) = 0;
      *(undefined4 *)((int)this_ + 0x120) = 0;
      return;
    }
    ppuVar4 = &PTR_DAT_0062359c;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x8c), 0x24);
  }
  uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(ppuVar4));
  *(undefined4 *)((int)this_ + 0x11c) = uVar2;
  if (*(int **)((int)this_ + 0x8c) == (int *)0x0) {
    fVar3 = (float10)0.0f;
  }
  else {
    fVar3 = (float10)bea_vcall<float10>(*(int **)((int)this_ + 0x8c), 0x38, uVar2,(int)this_ + 0x118);
  }
  *(float *)((int)this_ + 0x120) = (float)fVar3;
  *(undefined4 *)((int)this_ + 0x124) = 0;
  *(undefined4 *)((int)this_ + 0x114) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00424be0, ap_00424be0));
