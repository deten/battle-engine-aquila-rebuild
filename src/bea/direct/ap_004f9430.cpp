// auto-ported from 004f9430_FUN_004f9430.c (FUN_004f9430, 82 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef uint32_t (BEA_THISCALL* FUN_00444160_t)(uint32_t);
static const bea_guard<FUN_00444160_t> FUN_00444160 = {(FUN_00444160_t)0x00444160};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static undefined4 BEA_THISCALL ap_004f9430(void * this_)
{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(void **)((int)this_ + 0x178) != (void *)0x0) {
    uVar1 = FUN_00444160(bea_arg(*(void **)((int)this_ + 0x178)));
    return uVar1;
  }
  uVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar2 = uVar2 & 0x8000ffff;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xffff0000) + 1;
  }
  *(float *)((int)this_ + 0xf8) =
       *(float *)((int)this_ + 0xf8) / ((float)(int)uVar2 * 2.2888184e-05f + 1.5f);
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f9430, ap_004f9430));
