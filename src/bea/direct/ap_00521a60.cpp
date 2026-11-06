// auto-ported from 00521a60_vslot1.c (CFEPWingmen::vslot1, 128 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPWingmen;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_0044fdf0_t)(uint32_t);
static const bea_guard<FUN_0044fdf0_t> FUN_0044fdf0 = {(FUN_0044fdf0_t)0x0044fdf0};
typedef uint32_t (BEA_THISCALL* FUN_0046ba90_t)(uint32_t);
static const bea_guard<FUN_0046ba90_t> FUN_0046ba90 = {(FUN_0046ba90_t)0x0046ba90};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00521a60(CFEPWingmen * this_)
{
  void *pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = *(void **)(this_ + 8);
  if (pvVar1 != (void *)0x0) {
    FUN_0046ba90(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
  }
  pvVar1 = *(void **)(this_ + 0xc);
  if (pvVar1 != (void *)0x0) {
    FUN_0046ba90(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
  }
  pvVar1 = *(void **)(this_ + 0x10);
  if (pvVar1 != (void *)0x0) {
    FUN_0046ba90(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
  }
  while(BEA_LOOP_GUARD(( true ))) {
    puVar2 = *(undefined4 **)(this_ + 0x28);
    *(undefined4 **)(this_ + 0x30) = puVar2;
    if ((puVar2 == (undefined4 *)0x0) || (pvVar1 = (void *)*puVar2, pvVar1 == (void *)0x0)) break;
    FUN_004e5bd0(bea_arg(this_ + 0x28), bea_arg(pvVar1));
    FUN_0044fdf0(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00521a60, ap_00521a60));
