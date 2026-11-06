// auto-ported from 00425760_FUN_00425760.c (FUN_00425760, 399 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
// @hand-fixed 2026-10-28: the three lengths summed x*x + y*y first, then z*z, as the asm
// does (Ghidra printed z*z + y*y + x*x; bug class 19)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00425760(void * this_)
{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined4 local_4 = 0;
  
  fVar3 = SQRT(*(float *)this_ * *(float *)this_ +
               *(float *)((int)this_ + 4) * *(float *)((int)this_ + 4) +
               *(float *)((int)this_ + 8) * *(float *)((int)this_ + 8));
  if (fVar3 != 0.0f) {
    fVar3 = 1.0f / fVar3;
    *(float *)this_ = fVar3 * *(float *)this_;
    *(float *)((int)this_ + 4) = fVar3 * *(float *)((int)this_ + 4);
    *(float *)((int)this_ + 8) = fVar3 * *(float *)((int)this_ + 8);
  }
  pfVar1 = (float *)((int)this_ + 0x10);
  fVar3 = SQRT(*(float *)((int)this_ + 0x10) * *(float *)((int)this_ + 0x10) +
               *(float *)((int)this_ + 0x14) * *(float *)((int)this_ + 0x14) +
               *(float *)((int)this_ + 0x18) * *(float *)((int)this_ + 0x18));
  if (fVar3 != 0.0f) {
    fVar3 = 1.0f / fVar3;
    *pfVar1 = fVar3 * *pfVar1;
    *(float *)((int)this_ + 0x14) = fVar3 * *(float *)((int)this_ + 0x14);
    *(float *)((int)this_ + 0x18) = fVar3 * *(float *)((int)this_ + 0x18);
  }
  pfVar2 = (float *)((int)this_ + 0x20);
  *pfVar2 = *(float *)((int)this_ + 0x18) * *(float *)((int)this_ + 4) -
            *(float *)((int)this_ + 0x14) * *(float *)((int)this_ + 8);
  *(float *)((int)this_ + 0x24) =
       *pfVar1 * *(float *)((int)this_ + 8) - *(float *)((int)this_ + 0x18) * *(float *)this_;
  *(float *)((int)this_ + 0x28) =
       *(float *)((int)this_ + 0x14) * *(float *)this_ - *(float *)((int)this_ + 4) * *pfVar1;
  *(undefined4 *)((int)this_ + 0x2c) = local_4;
  fVar3 = SQRT(*pfVar2 * *pfVar2 + *(float *)((int)this_ + 0x24) * *(float *)((int)this_ + 0x24) +
               *(float *)((int)this_ + 0x28) * *(float *)((int)this_ + 0x28));
  if (fVar3 != 0.0f) {
    fVar3 = 1.0f / fVar3;
    *pfVar2 = fVar3 * *pfVar2;
    *(float *)((int)this_ + 0x24) = fVar3 * *(float *)((int)this_ + 0x24);
    *(float *)((int)this_ + 0x28) = fVar3 * *(float *)((int)this_ + 0x28);
  }
  *pfVar1 = *(float *)((int)this_ + 0x24) * *(float *)((int)this_ + 8) -
            *(float *)((int)this_ + 0x28) * *(float *)((int)this_ + 4);
  *(float *)((int)this_ + 0x14) =
       *(float *)((int)this_ + 0x28) * *(float *)this_ - *pfVar2 * *(float *)((int)this_ + 8);
  *(float *)((int)this_ + 0x18) =
       *(float *)((int)this_ + 4) * *pfVar2 - *(float *)((int)this_ + 0x24) * *(float *)this_;
  *(undefined4 *)((int)this_ + 0x1c) = local_4;
  return *(uint32_t*)((char*)this_ + 0x1c);
  return *(uint32_t*)((char*)this_ + 0x1c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00425760, ap_00425760));
