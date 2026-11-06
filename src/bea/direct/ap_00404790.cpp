// auto-ported from 00404790_FUN_00404790.c (FUN_00404790, 206 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_004f3c80_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f3c80_t> FUN_004f3c80 = {(FUN_004f3c80_t)0x004f3c80};

static void BEA_THISCALL ap_00404790(void * this_)
{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = *(int *)((int)this_ + 0x14);
  *(undefined4 *)((int)this_ + 0xc) = *(undefined4 *)((int)this_ + 8);
  if ((iVar2 != 0) && (iVar2 != -1)) {
    fVar1 = *(float *)((int)this_ + 0x18) + *(float *)((int)this_ + 8);
    *(float *)((int)this_ + 8) = fVar1;
    if (1.0f <= fVar1) {
      if (((iVar2 < 1) || (10 < iVar2)) && (*(int *)((int)this_ + 0x1c) != 1)) {
        iVar2 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0xec);
        if ((iVar2 != 0) && (1.0f <= *(float *)((int)this_ + 8))) {
          fVar3 = (float10)FUN_004f3c80(bea_arg(*(void **)((int)this_ + 0x20)), bea_arg(3), bea_arg((int)this_ + 0x10));
          *(float *)((int)this_ + 0x18) = (float)fVar3;
          *(undefined4 *)((int)this_ + 8) = 0;
          *(undefined4 *)((int)this_ + 0x14) = 3;
          if (fVar3 <= (float10)0.0001) {
            *(undefined4 *)((int)this_ + 0x18) = 0x3f800000;
          }
        }
      }
      else {
        *(float *)((int)this_ + 8) = fVar1 - 1.0f;
      }
      if (1.0f <= *(float *)((int)this_ + 8)) {
        *(undefined4 *)((int)this_ + 8) = 0x3f800000;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00404790, ap_00404790));
