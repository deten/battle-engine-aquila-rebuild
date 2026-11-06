// auto-ported from 004568a0_vslot3.c (CFEPDebriefing::vslot3, 139 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit uVar2: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPDebriefing;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define _DAT_008a956c GLOBAL_AT(int, 0x008a956c)
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef float10 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static int BEA_THISCALL ap_004568a0(CFEPDebriefing * this_, int param_1, undefined4 param_2)
{
  float fVar1;
  undefined4 uVar2 = 0;
  uint uVar3;
  int iVar4;
  float10 extraout_ST0;
  
  if (param_1 != 0x2c) {
    if (param_1 == 0x2d) {
      extraout_ST0 = bea_fcast<float10>(FUN_005159e0(bea_arg(&DAT_0088a0a8)));
      *(float *)(this_ + 0x1c) = bea_fcast<float>((extraout_ST0 + bea_fcast<float10>(0.1f)));
      return uVar2;
    }
    if (param_1 + -0x2e != 0) {
      return param_1 + -0x2e;
    }
  }
  fVar1 = *(float *)(this_ + 8);
  uVar3 = bea_piece32((ushort)((ushort)(fVar1 < 0.5f) << 8 | (ushort)bea_isnan(fVar1) << 10 |
                        (ushort)(fVar1 == 0.5f) << 0xe));
  if (fVar1 >= 0.5f && (fVar1 == 0.5f) == 0) {
    if (DAT_0083d448 == 0) {
      FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(7), bea_arg(0x1e));
    }
    else {
      _DAT_008a956c = 0xffffffff;
    }
    FUN_00468770(1);
    iVar4 = 0;
    do {
      uVar3 = FUN_004cb0b0(bea_arg((void *)(iVar4 + *(int *)(this_ + 0x20))), bea_arg(0));
      iVar4 = iVar4 + 8;
    } while (BEA_LOOP_GUARD((iVar4 < 800)));
  }
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004568a0, ap_004568a0));
