// auto-ported from 0048c3b0_FUN_0048c3b0.c (FUN_0048c3b0, 417 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_0048c3b0(void * this_, int param_1)
{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  
  fVar2 = *(float *)((int)this_ + 0x9c) + *(float *)((int)this_ + 0xa4);
  if (fVar2 <= 0.0f) {
    fVar2 = 0.0f;
    fVar3 = 0.0f;
    *(undefined4 *)((int)this_ + 0xb8) = 0;
    puVar1 = *(undefined4 **)((int)this_ + 0x7c);
    *(undefined4 **)((int)this_ + 0x84) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)*puVar1;
    }
    if (piVar4 == (int *)0x0) {
      *(undefined4 *)((int)this_ + 0xbc) = 2;
      goto LAB_0048c4b0;
    }
    do {
      fVar2 = *(float *)(*piVar4 + 0x9c) + fVar2;
      fVar3 = fVar3 + *(float *)(*piVar4 + 0xa4);
      puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x84) + 4);
      *(undefined4 **)((int)this_ + 0x84) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)*puVar1;
      }
    } while (BEA_LOOP_GUARD((piVar4 != (int *)0x0)));
    if (fVar3 <= fVar2) {
      *(undefined4 *)((int)this_ + 0xbc) = 2;
      goto LAB_0048c4b0;
    }
  }
  else {
    *(float *)((int)this_ + 0xb8) =
         (*(float *)((int)this_ + 0x9c) - *(float *)((int)this_ + 0xa4)) / fVar2;
    if (0.0f <= *(float *)((int)this_ + 0xb4)) {
      if (*(float *)((int)this_ + 0xb4) <= 0.0f) {
        *(undefined4 *)((int)this_ + 0xbc) = 0;
      }
      else {
        *(undefined4 *)((int)this_ + 0xbc) = 2;
      }
      goto LAB_0048c4b0;
    }
  }
  *(undefined4 *)((int)this_ + 0xbc) = 1;
LAB_0048c4b0:
  if (*(float *)((int)this_ + 0xb8) == 0.0f) {
    if (*(int *)((int)this_ + 0xbc) == 1) {
      *(undefined4 *)((int)this_ + 0xb8) = 0xbf800000;
    }
    else if (*(int *)((int)this_ + 0xbc) == 2) {
      *(undefined4 *)((int)this_ + 0xb8) = 0x3f800000;
    }
  }
  if (param_1 == 0) {
    *(undefined4 *)((int)this_ + 0xb4) = *(undefined4 *)((int)this_ + 0xb8);
    return;
  }
  fVar2 = *(float *)((int)this_ + 0xb4) + 0.05f;
  if (fVar2 < *(float *)((int)this_ + 0xb8)) {
    *(float *)((int)this_ + 0xb4) = fVar2;
    return;
  }
  fVar2 = *(float *)((int)this_ + 0xb4) - 0.05f;
  if (*(float *)((int)this_ + 0xb8) < fVar2) {
    *(float *)((int)this_ + 0xb4) = fVar2;
    return;
  }
  *(undefined4 *)((int)this_ + 0xb4) = *(undefined4 *)((int)this_ + 0xb8);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048c3b0, ap_0048c3b0));
