// auto-ported from 004247a0_FUN_004247a0.c (FUN_004247a0, 378 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static void BEA_THISCALL ap_004247a0(void * this_, float param_1)
{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  fVar1 = 128.0f / param_1;
  fVar2 = param_1 * 0.5f;
  uVar3 = _rand();
  uVar3 = uVar3 & 0x8000007f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffff80) + 1;
  }
  *(float *)((int)this_ + 0x90) = (float)(int)uVar3 / fVar1 - fVar2;
  uVar3 = _rand();
  uVar3 = uVar3 & 0x8000007f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffff80) + 1;
  }
  *(float *)((int)this_ + 0x94) = (float)(int)uVar3 / fVar1 - fVar2;
  uVar3 = _rand();
  uVar3 = uVar3 & 0x8000007f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffff80) + 1;
  }
  *(float *)((int)this_ + 0x98) = (float)(int)uVar3 / fVar1 - fVar2;
  uVar3 = _rand();
  uVar3 = uVar3 & 0x8000001f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
  }
  *(undefined4 *)((int)this_ + 0xa0) = 0;
  *(float *)((int)this_ + 0x9c) = (float)(int)uVar3 / fVar1 - fVar2;
  if (*(float *)((int)this_ + 0x90) <= 0.01f) {
    if (*(float *)((int)this_ + 0x90) < -0.01f) {
      *(undefined4 *)((int)this_ + 0x90) = 0xbc23d70a;
    }
  }
  else {
    *(undefined4 *)((int)this_ + 0x90) = 0x3c23d70a;
  }
  if (*(float *)((int)this_ + 0x94) <= 0.01f) {
    if (*(float *)((int)this_ + 0x94) < -0.01f) {
      *(undefined4 *)((int)this_ + 0x94) = 0xbc23d70a;
    }
  }
  else {
    *(undefined4 *)((int)this_ + 0x94) = 0x3c23d70a;
  }
  if (0.01f < *(float *)((int)this_ + 0x98)) {
    *(undefined4 *)((int)this_ + 0x98) = 0x3c23d70a;
    return;
  }
  if (*(float *)((int)this_ + 0x98) < -0.01f) {
    *(undefined4 *)((int)this_ + 0x98) = 0xbc23d70a;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004247a0, ap_004247a0));
