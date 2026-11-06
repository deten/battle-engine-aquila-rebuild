// auto-ported from 00523190_FUN_00523190.c (FUN_00523190, 106 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_mixermap_cpp_00640030 ((char*)0x00640030)
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00523190(void * this_, void *param_1)
{
  undefined4 uVar1;
  
  FUN_00423910(bea_arg(param_1));
  FUN_00423910(bea_arg(param_1));
  FUN_00423960(bea_arg(param_1), bea_arg(this_), bea_arg(0x14), bea_arg(1));
  if (*(int *)((int)this_ + 4) != 0) {
    FUN_00423910(bea_arg(param_1));
    uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)this_ * 0x51), bea_arg(0x21), bea_arg(s_C__dev_ONSLAUGHT2_mixermap_cpp_00640030), bea_arg(0x86));
    *(undefined4 *)((int)this_ + 4) = uVar1;
    FUN_00423960(bea_arg(param_1), bea_arg(uVar1), bea_arg(1), bea_arg(*(int *)this_ * 0x51));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00523190, ap_00523190));
