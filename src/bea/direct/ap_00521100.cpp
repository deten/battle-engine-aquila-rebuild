// auto-ported from 00521100_vslot5.c (CFEPVirtualKeyboard::vslot5, 343 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPVirtualKeyboard;
#define DAT_008a1f8c GLOBAL_AT(int, 0x008a1f8c)
#define DAT_0063fd30 GLOBAL_AT(int, 0x0063fd30)
#define DAT_008a9580 GLOBAL_AT(int, 0x008a9580)
typedef uint32_t (BEA_STDCALL* FUN_00452df0_t)(uint32_t);
static const bea_guard<FUN_00452df0_t> FUN_00452df0 = {(FUN_00452df0_t)0x00452df0};
typedef uint32_t (BEA_STDCALL* FUN_00453140_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00453140_t> FUN_00453140 = {(FUN_00453140_t)0x00453140};
typedef uint32_t (BEA_STDCALL* FUN_00467bd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467bd0_t> FUN_00467bd0 = {(FUN_00467bd0_t)0x00467bd0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef int (BEA_THISCALL* FUN_0051ae70_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0051ae70_t> FUN_0051ae70 = {(FUN_0051ae70_t)0x0051ae70};
typedef uint32_t (BEA_THISCALL* FUN_00521260_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00521260_t> FUN_00521260 = {(FUN_00521260_t)0x00521260};
typedef int (BEA_CDECL* FUN_0055e607_t)(uint32_t);
static const bea_guard<FUN_0055e607_t> FUN_0055e607 = {(FUN_0055e607_t)0x0055e607};
typedef short * (BEA_CDECL* FUN_0055eb00_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055eb00_t> FUN_0055eb00 = {(FUN_0055eb00_t)0x0055eb00};

static uint32_t BEA_THISCALL ap_00521100(CFEPVirtualKeyboard * this_, float param_1, int param_2)
{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  int local_8;
  fVar3 = (param_1 - 0.5f) + (param_1 - 0.5f);
  if (0.0f <= fVar3) {
    if (1.0f < fVar3) {
      fVar3 = 1.0f;
    }
  }
  else {
    fVar3 = 0.0f;
  }
  local_8 = (int)(longlong)ROUND(fVar3 * 255.0f);
  if (local_8 < 0) {
    local_8 = 0;
  }
  else if (0xff < local_8) {
    local_8 = 0xff;
  }
  iVar1 = 0xe;
  if (param_2 != 0xd) {
    iVar1 = param_2;
  }
  iVar1 = FUN_0051ae70(bea_arg(&DAT_008a1f8c), bea_arg(param_1), bea_arg(iVar1));
  if (iVar1 != 0) {
    FUN_0055eb00(bea_arg(this_ + 4), bea_arg(iVar1), bea_arg(0x1f));
    uVar2 = FUN_0055e607(bea_arg(this_ + 4));
    *(undefined4 *)(this_ + 0x44) = uVar2;
    this_[0x48] = (CFEPVirtualKeyboard)0x1;
    FUN_00468770(1);
  }
  FUN_00453140(bea_arg(5), bea_arg(param_1));
  FUN_00521260(bea_arg(this_), bea_arg(DAT_0063fd30), bea_arg(param_1), bea_arg(local_8));
  fVar3 = param_1;
  uVar2 = FUN_0046a2a0((-(uint)(DAT_008a9580 != 0) & 0xffffffe8) + 0x28,0);
  FUN_00467bd0(bea_arg(uVar2), bea_arg(fVar3), bea_arg(param_2));
  fVar3 = (param_1 - 0.75f) * 4.0f;
  if (fVar3 < 0.0f) {
    return FUN_00452df0(bea_arg(0));
  }
  if (1.0f < fVar3) {
    fVar3 = 1.0f;
  }
  return FUN_00452df0(bea_arg(fVar3));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00521100, ap_00521100));
