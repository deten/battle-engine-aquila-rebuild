// auto-ported from 004f5f60_FUN_004f5f60.c (FUN_004f5f60, 277 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_004f5f60(void * this_, undefined4 *param_1, undefined4 param_2, float *param_3)
{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_4 = 0;
  
  puVar4 = param_1;
  puVar5 = (undefined4 *)((int)this_ + 0x5c);
  for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  puVar4 = param_1;
  puVar5 = (undefined4 *)((int)this_ + 0x2c);
  for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined4 *)((int)this_ + 0x8c);
  for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)this_ = param_2;
  *(float *)((int)this_ + 0xc) = *param_3;
  *(float *)((int)this_ + 0x10) = param_3[1];
  *(float *)((int)this_ + 0x14) = param_3[2];
  *(float *)((int)this_ + 0x18) = param_3[3];
  pfVar1 = (float *)((int)this_ + 0x1c);
  fVar2 = *param_3;
  *pfVar1 = param_3[1] * -1.0f - 0.0f;
  *(float *)((int)this_ + 0x20) = 0.0f - fVar2 * -1.0f;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x28) = local_4;
  fVar2 = SQRT(*(float *)((int)this_ + 0x24) * *(float *)((int)this_ + 0x24) +
               *(float *)((int)this_ + 0x20) * *(float *)((int)this_ + 0x20) + *pfVar1 * *pfVar1);
  if (fVar2 != 0.0f) {
    fVar2 = 1.0f / fVar2;
    *pfVar1 = fVar2 * *pfVar1;
    *(float *)((int)this_ + 0x20) = fVar2 * *(float *)((int)this_ + 0x20);
    *(float *)((int)this_ + 0x24) = fVar2 * *(float *)((int)this_ + 0x24);
    *(undefined4 *)((int)this_ + 8) = 0x3ca3d70a;
    return this_;
  }
  *(undefined4 *)((int)this_ + 8) = 0x3ca3d70a;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f5f60, ap_004f5f60));
