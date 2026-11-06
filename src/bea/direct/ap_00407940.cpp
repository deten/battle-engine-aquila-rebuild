// auto-ported from 00407940_FUN_00407940.c (FUN_00407940, 259 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef uint32_t (BEA_STDCALL* CFEPBEConfig__vslot7_t)(uint32_t);
static const bea_guard<CFEPBEConfig__vslot7_t> CFEPBEConfig__vslot7 = {(CFEPBEConfig__vslot7_t)0x00452b60};
typedef uint32_t (BEA_THISCALL* FUN_004247a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004247a0_t> FUN_004247a0 = {(FUN_004247a0_t)0x004247a0};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static void BEA_THISCALL ap_00407940(void * this_, float param_1)
{
  float fVar1;
  uint uVar2;
  
  if (0.001 <= param_1) {
    if (0.75f < param_1) {
      param_1 = 0.75f;
    }
    fVar1 = 16.0f / param_1;
    uVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar2 = uVar2 & 0x8000001f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
    }
    *(float *)((int)this_ + 0x4b8) = (float)(int)uVar2 / fVar1 - param_1;
    uVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar2 = uVar2 & 0x8000001f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
    }
    *(float *)((int)this_ + 0x4bc) = (float)(int)uVar2 / fVar1 - param_1;
    uVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar2 = uVar2 & 0x8000001f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
    }
    *(undefined4 *)((int)this_ + 0x4c4) = 0;
    *(float *)((int)this_ + 0x4c0) = (float)(int)uVar2 / fVar1 - param_1;
    if (*(void **)((int)this_ + 0x528) != (void *)0x0) {
      FUN_004247a0(bea_arg(*(void **)((int)this_ + 0x528)), bea_arg(param_1));
    }
    CFEPBEConfig__vslot7(bea_arg(*(int *)(*(int *)((int)this_ + 0x574) + 0x2c) + -1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00407940, ap_00407940));
