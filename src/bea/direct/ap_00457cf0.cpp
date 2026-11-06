// auto-ported from 00457cf0_vslot6.c (CFEPDebriefing::vslot6, 214 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPDebriefing;
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00672e20 GLOBAL_AT(int, 0x00672e20)
#define DAT_00672e24 GLOBAL_AT(int, 0x00672e24)
#define _DAT_00672e28 GLOBAL_AT(float, 0x00672e28)
#define s__Debug_information__Score___d__T_006291cc ((char*)0x006291cc)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_THISCALL* FUN_0041c450_t)(uint32_t);
static const bea_guard<FUN_0041c450_t> FUN_0041c450 = {(FUN_0041c450_t)0x0041c450};
typedef undefined2 (BEA_STDCALL* FUN_00421470_t)(uint32_t);
static const bea_guard<FUN_00421470_t> FUN_00421470 = {(FUN_00421470_t)0x00421470};
typedef undefined4 (BEA_CDECL* FUN_00421550_t)(void);
static const bea_guard<FUN_00421550_t> FUN_00421550 = {(FUN_00421550_t)0x00421550};
typedef undefined4 (BEA_CDECL* FUN_00421560_t)(void);
static const bea_guard<FUN_00421560_t> FUN_00421560 = {(FUN_00421560_t)0x00421560};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_THISCALL ap_00457cf0(CFEPDebriefing * this_, undefined4 param_1)
{
  undefined2 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined1 local_100 [256];
  FUN_0041c450(bea_arg(&DAT_00660620));
  if (DAT_0083d448 == 0) {
    uVar2 = FUN_00421550();
    *(undefined4 *)(this_ + 0xc) = uVar2;
  }
  else {
    *(undefined4 *)(this_ + 0xc) = 0;
  }
  uVar2 = FUN_00421560();
  *(undefined4 *)(this_ + 0x14) = uVar2;
  if (99 < *(int *)(this_ + 0xc)) {
    *(undefined4 *)(this_ + 0xc) = 99;
  }
  if (*(int *)(this_ + 0xc) < 1) {
    *(undefined4 *)(this_ + 8) = 0x3a83126f;
  }
  else {
    *(undefined4 *)(this_ + 8) = 0;
  }
  fVar3 = bea_fcast<float10>(FUN_005159e0(bea_arg(&DAT_0088a0a8)));
  *(float *)(this_ + 4) = bea_fcast<float>((fVar3 + bea_fcast<float10>(0.2f)));
  uVar1 = FUN_00421470(bea_arg(DAT_00672e20));
  FUN_0055de9b(local_100,s__Debug_information__Score___d__T_006291cc,DAT_00672e24,
               bea_fcast<double>(_DAT_00672e28),bea_fcast<double>(DAT_00672e20),uVar1);
  return CRenderThing__vslot3(local_100);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00457cf0, ap_00457cf0));
