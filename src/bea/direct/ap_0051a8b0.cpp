// auto-ported from 0051a8b0_vslot5.c (CFEPCredits::vslot5, 178 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPCredits;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef uint32_t (BEA_STDCALL* FUN_00452df0_t)(uint32_t);
static const bea_guard<FUN_00452df0_t> FUN_00452df0 = {(FUN_00452df0_t)0x00452df0};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef undefined4 (BEA_STDCALL* FUN_0051a030_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0051a030_t> FUN_0051a030 = {(FUN_0051a030_t)0x0051a030};

static void BEA_THISCALL ap_0051a8b0(CFEPCredits * this_, float param_1, undefined4 param_2)
{
  float fVar1;
  int iVar2;
  float10 fVar3;
  int local_8;
  
  fVar1 = (param_1 - 0.75f) * 4.0f;
  if (0.0f <= fVar1) {
    if (1.0f < fVar1) {
      fVar1 = 1.0f;
    }
  }
  else {
    fVar1 = 0.0f;
  }
  local_8 = (int)(longlong)ROUND(fVar1 * 255.0f);
  if (local_8 < 0) {
    local_8 = 0;
  }
  else if (0xff < local_8) {
    local_8 = 0xff;
  }
  fVar3 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  iVar2 = FUN_0051a030(bea_arg((float)(fVar3 - (float10)*(float *)(this_ + 4))), bea_arg(local_8));
  if (iVar2 == 0) {
    *(undefined4 *)(this_ + 8) = 1;
  }
  if (param_1 == 1.0f) {
    FUN_00452df0(bea_arg(0x3f800000));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051a8b0, ap_0051a8b0));
