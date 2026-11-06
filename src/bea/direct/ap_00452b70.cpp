// auto-ported from 00452b70_vslot5.c (CFEPCommon::vslot5, 362 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define DAT_0089d950 GLOBAL_AT(int, 0x0089d950)
#define DAT_0089d958 GLOBAL_AT(int, 0x0089d958)
#define DAT_0089d954 GLOBAL_AT(int, 0x0089d954)
typedef uint32_t (BEA_STDCALL* FUN_00466de0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466de0_t> FUN_00466de0 = {(FUN_00466de0_t)0x00466de0};
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};

static void BEA_STDCALL ap_00452b70(float param_1, undefined4 param_2)
{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_8;
  
  uVar3 = 0x3fffffff;
  if (DAT_0089d950 == 0xc) {
    return;
  }
  if (DAT_0089d950 == 10) {
    return;
  }
  if ((DAT_0089d958 == 10) || (DAT_0089d958 == 0x12)) {
    fVar1 = (param_1 - 1.0f) * -1.0f;
    if (0.0f <= fVar1) {
      if (1.0f < fVar1) {
        fVar1 = 1.0f;
      }
    }
    else {
      fVar1 = 0.0f;
    }
    local_8 = (int)(longlong)ROUND(fVar1 * 63.0f);
  }
  else {
    if ((DAT_0089d954 != 10) && (DAT_0089d954 != 0x12)) goto LAB_00452c5b;
    if (0.0f <= param_1) {
      if (1.0f < param_1) {
        param_1 = 1.0f;
      }
      local_8 = (int)(longlong)ROUND(param_1 * 63.0f);
    }
    else {
      local_8 = 0;
    }
  }
  uVar3 = local_8 << 0x18 | 0xffffff;
LAB_00452c5b:
  uVar7 = 0x3f800000;
  uVar6 = 0x3f733333;
  uVar5 = 0x3f800000;
  uVar4 = uVar3;
  iVar2 = FUN_00515b00();
  FUN_00466de0(bea_arg(0x42f60000), bea_arg(0), bea_arg(0x42f60000), bea_arg((float)iVar2), bea_arg(uVar4), bea_arg(uVar5), bea_arg(uVar6), bea_arg(uVar7));
  uVar8 = 0x3f800000;
  uVar7 = 0x3f733333;
  uVar6 = 0x3f800000;
  uVar5 = 0x43340000;
  iVar2 = FUN_00515940();
  FUN_00466de0(bea_arg(0), bea_arg(0x43340000), bea_arg((float)iVar2), bea_arg(uVar5), bea_arg(uVar3), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00452b70, ap_00452b70));
