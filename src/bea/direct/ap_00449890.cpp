// auto-ported from 00449890_vslot0.c (CEngine::vslot0, 320 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CEngine;
#define DAT_009c74f8 GLOBAL_AT(int, 0x009c74f8)
#define DAT_009c7550 GLOBAL_AT(int, 0x009c7550)
#define DAT_009cc148 GLOBAL_AT(int, 0x009cc148)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00474260_t)(uint32_t);
static const bea_guard<FUN_00474260_t> FUN_00474260 = {(FUN_00474260_t)0x00474260};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_CDECL* FUN_005015c0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_005015c0_t> FUN_005015c0 = {(FUN_005015c0_t)0x005015c0};
typedef uint32_t (BEA_THISCALL* FUN_00544060_t)(uint32_t);
static const bea_guard<FUN_00544060_t> FUN_00544060 = {(FUN_00544060_t)0x00544060};
typedef uint32_t (BEA_THISCALL* FUN_00544f10_t)(uint32_t);
static const bea_guard<FUN_00544f10_t> FUN_00544f10 = {(FUN_00544f10_t)0x00544f10};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_THISCALL* FUN_00551d40_t)(uint32_t);
static const bea_guard<FUN_00551d40_t> FUN_00551d40 = {(FUN_00551d40_t)0x00551d40};
typedef uint32_t (BEA_THISCALL* FUN_00552060_t)(uint32_t);
static const bea_guard<FUN_00552060_t> FUN_00552060 = {(FUN_00552060_t)0x00552060};
typedef uint32_t (BEA_THISCALL* FUN_0055a400_t)(uint32_t);
static const bea_guard<FUN_0055a400_t> FUN_0055a400 = {(FUN_0055a400_t)0x0055a400};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};

static uint32_t BEA_THISCALL ap_00449890(CEngine * this_)
{
  void *pvVar1;
  int iVar2;
  CEngine *pCVar3;
  FUN_00551d40(bea_arg(&DAT_009c74f8));
  FUN_00552060(bea_arg(&DAT_009c7550));
  FUN_0055a400(bea_arg(&DAT_009cc148));
  pvVar1 = *(void **)(this_ + 0x470);
  if (pvVar1 != (void *)0x0) {
    FUN_00474260(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    *(undefined4 *)(this_ + 0x470) = 0;
  }
  FUN_00544f10(bea_arg(*(void **)(this_ + 0x10)));
  if (*(undefined4 **)(this_ + 0x10) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)(this_ + 0x10), 0x0, 1);
    *(undefined4 *)(this_ + 0x10) = 0;
  }
  iVar2 = 2;
  pCVar3 = this_;
  do {
    pCVar3 = pCVar3 + 4;
    if (*(int **)pCVar3 != (int *)0x0) {
      bea_vcall<uint32_t>(*(int **)pCVar3, 0x20, 1);
      *(int *)pCVar3 = 0;
    }
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  iVar2 = *(int *)(this_ + 0x18);
  if (iVar2 != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
    *(undefined4 *)(this_ + 0x18) = 0;
  }
  if (*(undefined4 **)(this_ + 0x14) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)(this_ + 0x14), 0x0, 1);
    *(undefined4 *)(this_ + 0x14) = 0;
  }
  iVar2 = *(int *)(this_ + 0x49c);
  if (iVar2 != 0) {
    FUN_0055db0a(bea_arg(iVar2), bea_arg(0x4c), bea_arg(*(undefined4 *)(iVar2 + -4)), bea_arg(((void*)0x00491180)));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2 + -4));
    *(undefined4 *)(this_ + 0x49c) = 0;
  }
  pvVar1 = *(void **)(this_ + 0x498);
  if (pvVar1 != (void *)0x0) {
    FUN_00544060(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    *(undefined4 *)(this_ + 0x498) = 0;
  }
  if (*(int *)(this_ + 0x4a0) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)(this_ + 0x4a0) + 8)));
    *(undefined4 *)(this_ + 0x4a0) = 0;
  }
  if (*(int *)(this_ + 0x20) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)(this_ + 0x20) + 8)));
    *(undefined4 *)(this_ + 0x20) = 0;
  }
  if (*(int *)(this_ + 0x24) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)(this_ + 0x24) + 8)));
    *(undefined4 *)(this_ + 0x24) = 0;
  }
  return FUN_005015c0(0,0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00449890, ap_00449890));
