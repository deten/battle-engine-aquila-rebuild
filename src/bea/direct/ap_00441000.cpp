// auto-ported from 00441000_FUN_00441000.c (FUN_00441000, 132 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0062829c GLOBAL_AT(int, 0x0062829c)
#define s_C__dev_ONSLAUGHT2_damage_cpp_006282dc ((char*)0x006282dc)
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00441000(void * this_, void *param_1)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_damage_cpp_006282dc), bea_arg(0xc6));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  *(undefined4 **)this_ = puVar1;
  FUN_00423960(bea_arg(param_1), bea_arg(puVar1 + 1), bea_arg(4), bea_arg(1));
  uVar2 = *(undefined4 *)(((char *)&DAT_0062829c) + puVar1[1] * 4);
  puVar1[2] = uVar2;
  uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(uVar2), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_damage_cpp_006282dc), bea_arg(0x75));
  *puVar1 = uVar2;
  FUN_00423960(bea_arg(param_1), bea_arg(uVar2), bea_arg(puVar1[2]), bea_arg(1));
  *(undefined4 *)((int)this_ + 0x1588c) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00441000, ap_00441000));
