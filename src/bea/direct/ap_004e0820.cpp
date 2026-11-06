// auto-ported from 004e0820_FUN_004e0820.c (FUN_004e0820, 111 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0083cfe8 GLOBAL_AT(int, 0x0083cfe8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef void * (BEA_THISCALL* FUN_004e0820_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e0820_t> FUN_004e0820 = {(FUN_004e0820_t)0x004e0820};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void * BEA_THISCALL ap_004e0820(void * this_, uint param_1)
{
  void *pvVar1;
  void *pvVar2;
  
  if (*(void **)((int)this_ + 0xd4) != (void *)0x0) {
    FUN_004e0820(bea_arg(*(void **)((int)this_ + 0xd4)), bea_arg(1));
    *(undefined4 *)((int)this_ + 0xd4) = 0;
  }
  pvVar1 = (void *)0x0;
  for (pvVar2 = DAT_0083cfe8; BEA_LOOP_GUARD((pvVar2 != (void *)0x0)); pvVar2 = *(void **)((int)pvVar2 + 0xd8)) {
    if (pvVar2 == this_) {
      if (pvVar1 == (void *)0x0) {
        DAT_0083cfe8 = *(void **)((int)this_ + 0xd8);
      }
      else {
        *(undefined4 *)((int)pvVar1 + 0xd8) = *(undefined4 *)((int)this_ + 0xd8);
      }
    }
    pvVar1 = pvVar2;
  }
  if ((param_1 & 1) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_));
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e0820, ap_004e0820));
