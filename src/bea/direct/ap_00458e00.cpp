// auto-ported from 00458e00_vslot2.c (CFEPDevSelect::vslot2, 218 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPDevSelect;
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_0067762c GLOBAL_AT(int, 0x0067762c)
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_00677624 GLOBAL_AT(int, 0x00677624)
#define DAT_0089d950 GLOBAL_AT(int, 0x0089d950)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_008a968c GLOBAL_AT(int, 0x008a968c)
#define DAT_008a9690 GLOBAL_AT(int, 0x008a9690)
#define DAT_008a9584 GLOBAL_AT(int, 0x008a9584)
#define DAT_00662aa8 GLOBAL_AT(int, 0x00662aa8)
typedef uint32_t (BEA_THISCALL* FUN_00458ce0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00458ce0_t> FUN_00458ce0 = {(FUN_00458ce0_t)0x00458ce0};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};

static void BEA_THISCALL ap_00458e00(CFEPDevSelect * this_, int param_1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_0083d448 != 0) {
    return;
  }
  if (param_1 == 3) {
    return;
  }
  FUN_00458ce0(bea_arg(this_), bea_arg(0));
  iVar1 = DAT_0067762c;
  if (DAT_00677614 != 0) {
    if (DAT_00677624 == 4) {
      DAT_0067762c = -1;
      if (iVar1 == 0) {
        if (DAT_0089d950 == 0) goto LAB_00458ec3;
        uVar3 = 0x32;
        uVar2 = 0;
      }
      else {
        if (iVar1 != 1) goto LAB_00458ec3;
        uVar3 = 0;
        uVar2 = 0xe;
      }
      FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(uVar2), bea_arg(uVar3));
    }
    else if (DAT_00677624 == 5) {
      DAT_0067762c = -1;
    }
    else if ((DAT_00677624 == 7) && (DAT_0067762c = -1, iVar1 == 1)) {
      FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(DAT_008a968c), bea_arg(DAT_008a9690));
      DAT_008a9584 = 2;
      DAT_00662aa8 = 1;
    }
  }
LAB_00458ec3:
  if (param_1 == 0) {
    bea_vcall<uint32_t>(this_, 0xc, 0x2c,0x3f800000);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00458e00, ap_00458e00));
