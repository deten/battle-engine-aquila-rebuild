// auto-ported from 00542990_FUN_00542990.c (FUN_00542990, 159 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0067a678 GLOBAL_AT(int, 0x0067a678)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008aa8bc GLOBAL_AT(int, 0x008aa8bc)
#define DAT_008aa8cc GLOBAL_AT(int, 0x008aa8cc)
#define DAT_008aa8b4 GLOBAL_AT(int, 0x008aa8b4)
#define DAT_008aa8b8 GLOBAL_AT(int, 0x008aa8b8)
#define _DAT_008aa8c0 GLOBAL_AT(int, 0x008aa8c0)
#define _DAT_008aa8c4 GLOBAL_AT(int, 0x008aa8c4)
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_THISCALL* FUN_00501310_t)(uint32_t);
static const bea_guard<FUN_00501310_t> FUN_00501310 = {(FUN_00501310_t)0x00501310};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_CDECL ap_00542990(void)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_0067a678;
  while (BEA_LOOP_GUARD((puVar2 = puVar1, puVar2 != (undefined4 *)0x0))) {
    puVar1 = (undefined4 *)*puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[0xf] != 0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar2[0xf]));
        puVar2[0xf] = 0;
      }
      DAT_008aa8bc = DAT_008aa8bc + -1;
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar2));
    }
  }
  DAT_0067a678 = (undefined4 *)0x0;
  if (DAT_008aa8cc != (void *)0x0) {
    FUN_00501310(bea_arg(DAT_008aa8cc));
    DAT_008aa8cc = (void *)0x0;
  }
  if (DAT_008aa8b4 != (void *)0x0) {
    FUN_00501310(bea_arg(DAT_008aa8b4));
    DAT_008aa8b4 = (void *)0x0;
  }
  if (DAT_008aa8b8 != 0) {
    FUN_004f27e0(bea_arg((void *)(DAT_008aa8b8 + 8)));
    DAT_008aa8b8 = 0;
  }
  _DAT_008aa8c0 = 0;
  _DAT_008aa8c4 = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00542990, ap_00542990));
